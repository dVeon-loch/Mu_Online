#ifndef _CRYPTO_SESSION_CRYPTOR_H_
#define _CRYPTO_SESSION_CRYPTOR_H_

#include "CryptoModulus.h"

#include <map>
#include <string>

/**
 * @class CSessionCryptor
 *
 * 세션별로 암호화를 처리하며 내부적으로 알고리즘을 바꿔나간다. 
 * 
 * CSessionCryptor는 클라이언트에서 특히 Heap에서 할당해야 한다.
 *
 * 사용법: 
 *
 *  CSessionCryptor gCryptorCS
 *  CSessionCryptor gCryptorSC
 *
 *  gCryptorCS.Open( index ); // 연결 설정되면 호출. 통신 전에 불러야 함
 *  gCryptorCS.Encrypt( index, ... ); // 암호화 할 때 호출 
 *  gCryptorCS.Decrypt( index, ... ); // 암호화 풀 때 호출
 *
 *  SC도 같은 형식으로 처리
 *
 *  클라이언트는 추가 매크로 인터페이스가 있음 
 *  - 힙에서 CSessionCryptor를 할당하기 위해 필요
 *
 *  주의: 
 *    - 쓰레드에 대한 고려는 일단 하지 않는다. 
 *    - 서버 단에 문의해서 정리해야 한다. 
 *    - 락을 사용하지 않도록 하자!!!
 */
class CSessionCryptor
{
public:
	CSessionCryptor();
	~CSessionCryptor();

	/**
	 * 연결 인덱스에 대해 초기화를 수행. 
	 *
	 * 연결하는 곳에서 한번 호출한다.
	 *
	 * 기존 Enc, Dec 파일에서 읽어서 처리한다. 
	 */
	bool Open( int index );

	/**
	 * 암호화 알고리즘을 강제로 변경하게 한다. 
	 *
	 * 클라이언트에서는 특정 패킷을 보내고 나서 적용하고 
	 * 서버에서는 특정 패킷을 받으면 처리한다. 
	 * 해당 패킷은 기본 암호화를 통해 전송된다. 
	 *
	 * 이 기능을 SEND_로 정의된 전송 함수들에 포함하고 변경한다. 
	 * 패킷 타잎만 다르게 해서 여러 매크로에 분산해서 배치한다.
	 *
	 * 서버는 해당 패킷을 받으면 이 함수를 호출한다.
	 */
	void ForceChange( int index, void* data, int iSize );

	/**
	 * CCryptoModulus::Encrypt와 동일
	 *
	 * @param index - 연결 아이디
	 */
	int Encrypt( int index, void *lpTarget, void *lpSource, int iSize);	

	/**
	 * CCryptoModulus::Decrypt와 동일
	 * 
	 * 주의 !!!! Decrypt는 한번만 불려야 한다. NULL 포인터로 길이만 알아보는 것 지원 안함
	 *
	 * @param index - 연결 아이디 
	 */
	int Decrypt( int index, void *lpTarget, void *lpSource, int iSize);		

	/**
	 * 연결을 종료한다. 
	 */
	void Close( int index );

private:
	struct Cryptor 
	{
		int 			index; 			// 연결 인덱스
		int 			encCount; 		// 암호화 호출 횟수
		int 			decCount; 		// 암호화 풀기 횟수
		char 			data[128]; 		// 암호화 데이터
		int				callCount;		// 알고리즘 변경 확인 함 
		
		CCryptoModulus	crypto; 		// 암호화 처리기 

		Cryptor()
			: index( 0 )
			, encCount( 0 )
			, decCount( 0 )
			, callCount( 0 )
		{
			::memset( data, 'c', 128 );
		}
	};

	typedef std::map<int, Cryptor*> CryptorMap;

	void updateKeyData( Cryptor* cryptor, void* buf, int size );
	void checkAndChangeAlgorithm( Cryptor* cryptor );
	void cleanup();

private:
	CryptorMap 	m_cryptors;
	std::string m_defaultData;
};

#endif // _CRYPTO_SESSION_CRYPTOR_H_
