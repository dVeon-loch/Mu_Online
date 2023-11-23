// HashTable.h: interface for the CHashTable class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_HASHTABLE_H__BDC457BB_BA46_47A2_83DC_0617C57FF876__INCLUDED_)
#define AFX_HASHTABLE_H__BDC457BB_BA46_47A2_83DC_0617C57FF876__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


#include "./Utilities/Log/ErrorReport.h"


#define HASH_ERROR		( ( DWORD)-1)


template <class T, class S>	// T 는 저장할 데이터의 형태, S 는 Hash 함수에 집어넣을 키(0은 없어야 한다.)
class CHashTable  
{
public:
	CHashTable();
	virtual ~CHashTable();
	void Clear( void);

protected:
	T *m_pDataTable;
	S *m_pKeyTable;
	DWORD m_dwTableSize;	// 테이블의 최대값

public:
	virtual void Create( DWORD dwTableSize);
	virtual void Destroy( void);
	virtual DWORD Hash( S Key);
	BOOL Insert( T Data, S Key);
protected:
	DWORD GetIndex( S Key);
public:
	T Get( S Key);
	T Delete( S Key);
};


template <class T, class S>
CHashTable<T,S>::~CHashTable()
{
	Clear();
}

template <class T, class S>
CHashTable<T,S>::CHashTable()
{
}

template <class T, class S>
void CHashTable<T,S>::Clear( void)
{
	m_dwTableSize = 0;
	m_pDataTable = NULL;
	m_pKeyTable = NULL;
}

template <class T, class S>
void CHashTable<T,S>::Create( DWORD dwTableSize)
{
	m_dwTableSize = dwTableSize;
	m_pDataTable = new T [m_dwTableSize];
	m_pKeyTable = new S [m_dwTableSize];
	ZeroMemory( m_pDataTable, m_dwTableSize * sizeof ( T));
	ZeroMemory( m_pKeyTable, m_dwTableSize * sizeof ( S));
}

template <class T, class S>
void CHashTable<T,S>::Destroy( void)
{
	delete [] m_pKeyTable;
	delete [] m_pDataTable;
	m_dwTableSize = 0;
}

template <class T, class S>
DWORD CHashTable<T,S>::Hash( S Key)
{
	DWORD dwCalc = 0;
	BYTE *pbyCheck = ( BYTE*)&Key;
	for ( int i = 0; i < sizeof ( S); ++i, ++pbyCheck)
	{
		dwCalc = (dwCalc * 131) + *pbyCheck;
	}
	return ( dwCalc % m_dwTableSize);
}

template <class T, class S>
BOOL CHashTable<T,S>::Insert( T Data, S Key)
{
	DWORD dwIndex = Hash( Key);
	S NullKey;
	ZeroMemory( &NullKey, sizeof ( S));
	for ( DWORD i = 0; i < m_dwTableSize; ++i)
	{
		if ( 0 == memcmp( &Key, &m_pKeyTable[dwIndex], sizeof ( S))
			|| 0 == memcmp( &NullKey, &m_pKeyTable[dwIndex], sizeof ( S)))
		{	// 같은 것을 넣는 경우거나 빈곳인 경우
			m_pDataTable[dwIndex] = Data;
			m_pKeyTable[dwIndex] = Key;
			return ( TRUE);
		}

		// 이미 차지한 경우 다음 것으로 이동
		dwIndex = ( dwIndex + 1) % m_dwTableSize;
	}

	// 꽉찼다.
	g_ErrorReport.Write( "Hash table full!!! - Insert\r\n");
	assert( !"해쉬 테이블이 꽉 찼습니다.");
	return ( FALSE);
}

template <class T, class S>
DWORD CHashTable<T,S>::GetIndex( S Key)
{
	DWORD dwIndex = Hash( Key);
	S NullKey;
	ZeroMemory( &NullKey, sizeof ( S));
	for ( DWORD i = 0; i < m_dwTableSize; ++i)
	{
		if ( 0 == memcmp( &NullKey, &m_pKeyTable[dwIndex], sizeof ( S)))
		{	// 빈곳인 경우
			return ( HASH_ERROR);
		}
		if ( 0 == memcmp( &Key, &m_pKeyTable[dwIndex], sizeof ( S)))
		{	// 찾은 경우
			return ( dwIndex);
		}

		// 다른 것이 차지한 경우 다음 것으로 이동
		dwIndex = ( dwIndex + 1) % m_dwTableSize;
	}

	// 찾을 수 없다.
	g_ErrorReport.Write( "Hash table full!!! - GetIndex\r\n");
	assert( !"해쉬 테이블이 꽉 차서 찾을 수 없는 상태입니다..");
	return ( HASH_ERROR);
}

template <class T, class S>
T CHashTable<T,S>::Get( S Key)
{
	DWORD dwIndex = GetIndex( Key);
	if ( dwIndex != HASH_ERROR)
	{
		return ( m_pDataTable[dwIndex]);
	}

	GO_DEBUG;
	T NullData;
	ZeroMemory( &NullData, sizeof ( T));
	return ( NullData);
}

template <class T, class S>
T CHashTable<T,S>::Delete( S Key)
{
	DWORD dwIndex = GetIndex( Key);
	if ( dwIndex != HASH_ERROR)
	{
		ZeroMemory( &( m_pKeyTable[dwIndex]), sizeof ( S));
		return ( m_pDataTable[dwIndex]);
	}

	T NullData;
	ZeroMemory( &NullData, sizeof ( T));
	return ( NullData);
}


#endif // !defined(AFX_HASHTABLE_H__BDC457BB_BA46_47A2_83DC_0617C57FF876__INCLUDED_)
