
/**************************************************************************************************

��ü ��ǰ(�Ӽ�) ��� ��ü

iterator�� �̿��Ͽ� ���������� ��ǰ(�Ӽ�) ��ü�� ������ �� �ִ�.
��ǰ ��ȣ�� �̿��Ͽ� ��ǰ(�Ӽ�) ��ü�� ������ �� �ִ�.
��ǰ ��ȣ�� ���� ��ȣ�� �̿��Ͽ� ��ǰ(�Ӽ�) ��ü�� ������ �� �ִ�.

**************************************************************************************************/

#pragma once

#include "ShopProduct.h"

class CShopProductList
{
public:
	CShopProductList(void);
	~CShopProductList(void);

	void Clear();	
	int GetSize();	

	virtual void Append(CShopProduct product);

	void SetFirst();
	bool GetNext(CShopProduct& product);

	void SetProductSeqFirst(int ProductSeq);				// �ش� ��ǰ ��ȣ�� ��ǰ(�Ӽ�) ��� ù ��° ��ġ
	bool GetProductSeqNext(CShopProduct& product);			// ��ǰ(�Ӽ�) ��ü�� �������� ���� ��ǰ(�Ӽ�)�� ��ġ

	void SetPriceSeqFirst(int ProductSeq, int PriceSeq);	// �ش� ��ǰ ��ȣ�� ���� ��ȣ�� �������� ��ǰ(�Ӽ�) ��� ù ��° ��ġ
	bool GetPriceSeqNext(CShopProduct& product);			// ��ǰ(�Ӽ�) ��ü�� �������� ���� ��ǰ(�Ӽ�)�� ��ġ

protected:	
	int	PriceSeqKey;
	std::multimap<int, CShopProduct> m_Products;	
	std::multimap<int, CShopProduct>::iterator m_ProductIter;
	std::multimap<int, CShopProduct>::iterator m_ProductSeqIter;
	std::multimap<int, CShopProduct>::iterator m_PriceSeqIter;	
	std::pair<std::multimap<int, CShopProduct>::iterator, std::multimap<int, CShopProduct>::iterator> m_ProductRange;
	std::pair<std::multimap<int, CShopProduct>::iterator, std::multimap<int, CShopProduct>::iterator> m_PriceRange;
};
