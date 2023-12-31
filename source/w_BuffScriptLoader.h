// BuffScriptLoader.h: interface for the CBuffScriptLoader class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_BUFFSCRIPTLOADER_H__AD3819A4_1C9A_4886_AB83_DA77FAAD7433__INCLUDED_)
#define AFX_BUFFSCRIPTLOADER_H__AD3819A4_1C9A_4886_AB83_DA77FAAD7433__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#define MAX_BUFF_NAME_LENGTH	50

#define MAX_DESCRIPT_LENGTH		100

struct _BUFFINFO
{
	short	s_BuffIndex;
	BYTE	s_BuffEffectType;
	BYTE	s_ItemType;
	BYTE	s_ItemIndex;
	char	s_BuffName[MAX_BUFF_NAME_LENGTH];
	BYTE	s_BuffClassType;
	BYTE	s_NoticeType;
	BYTE	s_ClearType;
	char	s_BuffDescript[MAX_DESCRIPT_LENGTH];
};

class BuffInfo
{
public:
	BuffInfo();
	virtual ~BuffInfo();
	
public:
	short	s_BuffIndex;
	BYTE	s_BuffEffectType;
	BYTE	s_ItemType;
	BYTE	s_ItemIndex;
	char	s_BuffName[MAX_BUFF_NAME_LENGTH];
	BYTE	s_BuffClassType;
	BYTE	s_NoticeType;
	BYTE	s_ClearType;
	char	s_BuffDescript[MAX_DESCRIPT_LENGTH];
	list<string> s_BuffDescriptlist;
};

BoostSmartPointer( BuffScriptLoader );
class BuffScriptLoader
{
public:
	static BuffScriptLoaderPtr Make();
	virtual ~BuffScriptLoader();

private:
	bool Load(const string& pchFileName);

public:
	const BuffInfo GetBuffinfo( eBuffState type ) const;
	eBuffClass IsBuffClass( eBuffState type ) const;

#ifdef KJH_PBG_ADD_INGAMESHOP_SYSTEM
	int GetBuffIndex(int iItemCode);
	int GetBuffType(int iItemCode);
#endif // KJH_PBG_ADD_INGAMESHOP_SYSTEM

private:
	BuffScriptLoader();

private:
	typedef map<eBuffState, BuffInfo> BuffInfoMap;

private:
	BuffInfoMap			m_Info;
};

#ifdef LJH_ADD_SUPPORTING_MULTI_LANGUAGE
#endif //LJH_ADD_SUPPORTING_MULTI_LANGUAGE
#endif // !defined(AFX_BUFFSCRIPTLOADER_H__AD3819A4_1C9A_4886_AB83_DA77FAAD7433__INCLUDED_)
