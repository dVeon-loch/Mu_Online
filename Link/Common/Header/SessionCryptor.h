#ifndef _CRYPTO_SESSION_CRYPTOR_H_
#define _CRYPTO_SESSION_CRYPTOR_H_

#include "CryptoModulus.h"

#include <map>
#include <string>

/**
 * @class CSessionCryptor
 *
 * ���Ǻ��� ��ȣȭ�� ó���ϸ� ���������� �˰����� �ٲ㳪����. 
 * 
 * CSessionCryptor�� Ŭ���̾�Ʈ���� Ư�� Heap���� �Ҵ��ؾ� �Ѵ�.
 *
 * ����: 
 *
 *  CSessionCryptor gCryptorCS
 *  CSessionCryptor gCryptorSC
 *
 *  gCryptorCS.Open( index ); // ���� �����Ǹ� ȣ��. ��� ���� �ҷ��� ��
 *  gCryptorCS.Encrypt( index, ... ); // ��ȣȭ �� �� ȣ�� 
 *  gCryptorCS.Decrypt( index, ... ); // ��ȣȭ Ǯ �� ȣ��
 *
 *  SC�� ���� �������� ó��
 *
 *  Ŭ���̾�Ʈ�� �߰� ��ũ�� �������̽��� ���� 
 *  - ������ CSessionCryptor�� �Ҵ��ϱ� ���� �ʿ�
 *
 *  ����: 
 *    - �����忡 ���� ����� �ϴ� ���� �ʴ´�. 
 *    - ���� �ܿ� �����ؼ� �����ؾ� �Ѵ�. 
 *    - ���� ������� �ʵ��� ����!!!
 */
class CSessionCryptor
{
public:
	CSessionCryptor();
	~CSessionCryptor();

	/**
	 * ���� �ε����� ���� �ʱ�ȭ�� ����. 
	 *
	 * �����ϴ� ������ �ѹ� ȣ���Ѵ�.
	 *
	 * ���� Enc, Dec ���Ͽ��� �о ó���Ѵ�. 
	 */
	bool Open( int index );

	/**
	 * ��ȣȭ �˰����� ������ �����ϰ� �Ѵ�. 
	 *
	 * Ŭ���̾�Ʈ������ Ư�� ��Ŷ�� ������ ���� �����ϰ� 
	 * ���������� Ư�� ��Ŷ�� ������ ó���Ѵ�. 
	 * �ش� ��Ŷ�� �⺻ ��ȣȭ�� ���� ���۵ȴ�. 
	 *
	 * �� ����� SEND_�� ���ǵ� ���� �Լ��鿡 �����ϰ� �����Ѵ�. 
	 * ��Ŷ Ÿ�ٸ� �ٸ��� �ؼ� ���� ��ũ�ο� �л��ؼ� ��ġ�Ѵ�.
	 *
	 * ������ �ش� ��Ŷ�� ������ �� �Լ��� ȣ���Ѵ�.
	 */
	void ForceChange( int index, void* data, int iSize );

	/**
	 * CCryptoModulus::Encrypt�� ����
	 *
	 * @param index - ���� ���̵�
	 */
	int Encrypt( int index, void *lpTarget, void *lpSource, int iSize);	

	/**
	 * CCryptoModulus::Decrypt�� ����
	 * 
	 * ���� !!!! Decrypt�� �ѹ��� �ҷ��� �Ѵ�. NULL �����ͷ� ���̸� �˾ƺ��� �� ���� ����
	 *
	 * @param index - ���� ���̵� 
	 */
	int Decrypt( int index, void *lpTarget, void *lpSource, int iSize);		

	/**
	 * ������ �����Ѵ�. 
	 */
	void Close( int index );

private:
	struct Cryptor 
	{
		int 			index; 			// ���� �ε���
		int 			encCount; 		// ��ȣȭ ȣ�� Ƚ��
		int 			decCount; 		// ��ȣȭ Ǯ�� Ƚ��
		char 			data[128]; 		// ��ȣȭ ������
		int				callCount;		// �˰��� ���� Ȯ�� �� 
		
		CCryptoModulus	crypto; 		// ��ȣȭ ó���� 

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
