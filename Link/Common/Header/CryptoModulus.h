#ifndef _CRYPTO_MODULUS_H_
#define _CRYPTO_MODULUS_H_
 
class AbstractCipher;

/**
 * @class CCryptoModulus
 *
 * 현재 CSimpleModulus를 Crypto++ 기반으로 변경한다. 
 */
class CCryptoModulus
{
public:

	CCryptoModulus();
	~CCryptoModulus();

	/**
	 * 임의의 바이트 배열로 알고리즘 선택
	 *
	 * @param temp 		서버와 클라이언트에서 같은 데이터를 사용 
	 *               	중간에 키와 알고리즘을 변경할 경우에도 사용 
	 * @return true  	성공하면. 실패하면 false. 
	 *
	 * TODO: xorblock에 대한 정의가 파악되면 구현 
	 */
	bool InitCrypto( unsigned char* temp, unsigned int length );

	/**
	 * 내부 테스트용 인터페이스. 알고리즘과 키를 지정하여 초기화 가능
	 * 
	 * @param algorithm - 알고리즘 인덱스 
	 * @param key - 암호화 키. 32 바이트 이상을 제공한다. 알고리즘에서 길이를 선택
	 *              2010/05/04 crypto++에서는 256 비트가 최대 키 길이이다.
	 * @return true - 성공하면 
	 */
	bool InitCrypto( unsigned int algorithm, unsigned char* key, unsigned int keyLength );

	/**
	 * 내부적으로 Crypto++을 사용하여 암호화 한다
	 *
	 * NOTE: 암호화 할 때 패딩이 들어갈 수 있다. 따라서, 패킷 전체를 갖고 암호화를 해야 한다.
	 * NOTE: lpSource가 일반 패킷 struct이므로 버퍼로 사용할 수 없다. 따라서, 내부에서 버퍼 생성이 필요
	 *
	 * @param lpTarget 암호화된 데이터 들어갈 버퍼. 충분한 크기가 확보되어야 한다.
	 * @param lpSource 암호화할 데이터 
	 * @return lpTarget이 NULL이면 필요한 버퍼 크기를 리턴
	 *         NULL이 아니면 최종 크기를 리턴 (같은 크기)
	 */
	int Encrypt( void *lpTarget, void *lpSource, int iSize);	

	/**
	 * 내부적으로 Crypto++을 사용하여 암호화 한다
	 *
	 * @param lpTarget 복호화된 데이터 들어갈 버퍼. 충분한 크기가 확보되어야 한다. 
	 * @param lpSource 복호화할 데이터 
	 * @return 원래 정확한 패킷 크기가 리턴 되어야 한다... 블럭 암호화가 아니었던 듯 하다. 
	 */
	int Decrypt( void *lpTarget, void *lpSource, int iSize);	

	/**
	 * 현재 구현된 함수 지원하기 위해 사용 
	 *
	 * 처음 시작은 키를 로딩해서 처리한다. 내부 구현은 다름
	 */
	bool LoadEncryptionKey( char *lpszFileName);
	bool LoadDecryptionKey( char *lpszFileName);

	/// 호환성을 위해 유지. 항상 FALSE 리턴 {
	bool SaveAllKey( char *lpszFileName);
	bool LoadAllKey( char *lpszFileName);
	bool SaveEncryptionKey( char *lpszFileName);
	bool SaveDecryptionKey( char *lpszFileName);
	/// }
	
private:
	AbstractCipher* 	m_cipher; 	// 암호화/복호화 구현 클래스. BlockCipher 기반 
};

enum CryptoAlgorithm
{
  	  ALG_TEA  				// 기본 알고리즘
	, ALG_THREE_WAY 
	//, ALG_TWOFISH
	//, ALG_DES
	//, ALG_EDE2
	//, ALG_DES_EDE3
	//, ALG_DES_XEX3
	//, ALG_SKIPJACK
	//, ALG_BLOWFISH
	, ALG_CAST
	//, ALG_RC2
	, ALG_RC5
	, ALG_RC6
	//, ALG_SAFER_K
	//, ALG_SAFER_SK
	//, ALG_SHARK
	//, ALG_SQUARE
	, ALG_MARS
	, ALG_IDEA
	, ALG_GOST
	, ALG_MAX
};

enum CryptoHashAlgorithm
{
	  HASH_SHA1  			// 기본 해시 
	, HASH_SHA256
	, HASH_SHA224
	, HASH_SHA512
	, HASH_SHA384
	, HASH_MD4
	, HASH_MD5
	, HASH_TIGHER
	, HASH_RIPEMD160
	, HASH_RIPEMD320
	, HASH_RIPEMD128
	, HASH_RIPEMD256
	, HASH_WHIRLPOOL
	, HASH_MAX
};

#endif // _CRYPTO_MODULUS_H_
