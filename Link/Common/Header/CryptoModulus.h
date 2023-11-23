#ifndef _CRYPTO_MODULUS_H_
#define _CRYPTO_MODULUS_H_
 
class AbstractCipher;

/**
 * @class CCryptoModulus
 *
 * ���� CSimpleModulus�� Crypto++ ������� �����Ѵ�. 
 */
class CCryptoModulus
{
public:

	CCryptoModulus();
	~CCryptoModulus();

	/**
	 * ������ ����Ʈ �迭�� �˰��� ����
	 *
	 * @param temp 		������ Ŭ���̾�Ʈ���� ���� �����͸� ��� 
	 *               	�߰��� Ű�� �˰����� ������ ��쿡�� ��� 
	 * @return true  	�����ϸ�. �����ϸ� false. 
	 *
	 * TODO: xorblock�� ���� ���ǰ� �ľǵǸ� ���� 
	 */
	bool InitCrypto( unsigned char* temp, unsigned int length );

	/**
	 * ���� �׽�Ʈ�� �������̽�. �˰���� Ű�� �����Ͽ� �ʱ�ȭ ����
	 * 
	 * @param algorithm - �˰��� �ε��� 
	 * @param key - ��ȣȭ Ű. 32 ����Ʈ �̻��� �����Ѵ�. �˰��򿡼� ���̸� ����
	 *              2010/05/04 crypto++������ 256 ��Ʈ�� �ִ� Ű �����̴�.
	 * @return true - �����ϸ� 
	 */
	bool InitCrypto( unsigned int algorithm, unsigned char* key, unsigned int keyLength );

	/**
	 * ���������� Crypto++�� ����Ͽ� ��ȣȭ �Ѵ�
	 *
	 * NOTE: ��ȣȭ �� �� �е��� �� �� �ִ�. ����, ��Ŷ ��ü�� ���� ��ȣȭ�� �ؾ� �Ѵ�.
	 * NOTE: lpSource�� �Ϲ� ��Ŷ struct�̹Ƿ� ���۷� ����� �� ����. ����, ���ο��� ���� ������ �ʿ�
	 *
	 * @param lpTarget ��ȣȭ�� ������ �� ����. ����� ũ�Ⱑ Ȯ���Ǿ�� �Ѵ�.
	 * @param lpSource ��ȣȭ�� ������ 
	 * @return lpTarget�� NULL�̸� �ʿ��� ���� ũ�⸦ ����
	 *         NULL�� �ƴϸ� ���� ũ�⸦ ���� (���� ũ��)
	 */
	int Encrypt( void *lpTarget, void *lpSource, int iSize);	

	/**
	 * ���������� Crypto++�� ����Ͽ� ��ȣȭ �Ѵ�
	 *
	 * @param lpTarget ��ȣȭ�� ������ �� ����. ����� ũ�Ⱑ Ȯ���Ǿ�� �Ѵ�. 
	 * @param lpSource ��ȣȭ�� ������ 
	 * @return ���� ��Ȯ�� ��Ŷ ũ�Ⱑ ���� �Ǿ�� �Ѵ�... �� ��ȣȭ�� �ƴϾ��� �� �ϴ�. 
	 */
	int Decrypt( void *lpTarget, void *lpSource, int iSize);	

	/**
	 * ���� ������ �Լ� �����ϱ� ���� ��� 
	 *
	 * ó�� ������ Ű�� �ε��ؼ� ó���Ѵ�. ���� ������ �ٸ�
	 */
	bool LoadEncryptionKey( char *lpszFileName);
	bool LoadDecryptionKey( char *lpszFileName);

	/// ȣȯ���� ���� ����. �׻� FALSE ���� {
	bool SaveAllKey( char *lpszFileName);
	bool LoadAllKey( char *lpszFileName);
	bool SaveEncryptionKey( char *lpszFileName);
	bool SaveDecryptionKey( char *lpszFileName);
	/// }
	
private:
	AbstractCipher* 	m_cipher; 	// ��ȣȭ/��ȣȭ ���� Ŭ����. BlockCipher ��� 
};

enum CryptoAlgorithm
{
  	  ALG_TEA  				// �⺻ �˰���
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
	  HASH_SHA1  			// �⺻ �ؽ� 
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
