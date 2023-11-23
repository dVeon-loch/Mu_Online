
#pragma once

#include "include.h"
#include <map>

class CBannerInfo
{
public:
	CBannerInfo();
	virtual ~CBannerInfo();

	bool	SetBanner(tstring strdata, tstring strDirPath, bool bDonwLoad);

public:	
	int		BannerSeq;									//  1. ��� �׷� ����
	TCHAR	BannerName[BANNER_LENGTH_NAME];				//  2. ��� �׷� ��
	TCHAR	BannerImageURL[INTERNET_MAX_URL_LENGTH];	//  3. ��� �̹��� URL
	int		BannerOrder;								//  4. ��� ���� ����
	int		BannerDirection;							//  5. ��� ���� ���� * ���� �ڵ� ���� ����
	tm 		BannerStartDate;							//  6. ��� ���� ������
	tm 		BannerEndDate;								//  7. ��� ���� ������
	TCHAR	BannerLinkURL[INTERNET_MAX_URL_LENGTH];		//  8. ��� ��ũ URL

	TCHAR	BannerImagePath[MAX_PATH];					// ��� �̹��� ���� ���� ���
};
