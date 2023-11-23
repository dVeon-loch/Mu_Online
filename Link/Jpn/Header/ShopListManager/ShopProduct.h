
/**************************************************************************************************

��ǰ(�Ӽ�) ��ü

���� ��ǰ�� �⺻ ������ �� ���� �Ӽ� ������ ������ �ִ�.
��ǰ ��ȣ�� ������ ���� �Ӽ��� �����Ͽ� �� ���� ��ǰ�� ǥ���ؾ� �Ѵ�.

**************************************************************************************************/

#pragma once

#include "include.h"
#include <map>

class CShopProduct
{
public:
	CShopProduct();
	virtual ~CShopProduct();

	bool SetProduct(tstring strdata);

public:	
	int		ProductSeq;											//  1. ��ǰ ��ȣ
	TCHAR	ProductName[SHOPLIST_LENGTH_PRODUCTNAME];			//  2. ��ǰ ��
	TCHAR	PropertyName[SHOPLIST_LENGTH_PRODUCTPROPERTYNAME];	//  3. �Ӽ� ��
	TCHAR	Value[SHOPLIST_LENGTH_PRODUCTVALUE];				//  4. �Ӽ� ��
	TCHAR	UnitName[SHOPLIST_LENGTH_PRODUCTUNITNAME];			//  5. �Ӽ� ���� ��
	int		Price;												//  6. ��ǰ ����
	int		PriceSeq;											//  7. ��ǰ ���� ��ȣ
	int		PropertyType;										//  8. �Ӽ� ���� (141:������ �Ӽ�, 142:���� �Ӽ�)
	int		MustFlag;											//  9. �ʼ� ���� (145:�ʼ�, 146:����)
	int		vOrder;												// 10. ���� �Ӽ� ���� (1:���� �Ӽ�, 9:���� �Ӽ�)
	int		DeleteFlag;											// 11. ���� ���� (143: ����, 144: Ȱ��)
	int		StorageGroup;										// 12. ������ �׷� ����
	int		ShareFlag;											// 13. ServerType(���� ����) �� ������ ���� ���� �׸� ����
	TCHAR	InGamePackageID[SHOPLIST_LENGTH_INGAMEPACKAGEID];	// 14. ������ �ڵ�
	int		PropertySeq;										// 15. �Ӽ� �ڵ�
	int		ProductType;										// 16. ��ǰ ���� �ڵ�
	int		UnitType;											// 17. ���� �ڵ�
};