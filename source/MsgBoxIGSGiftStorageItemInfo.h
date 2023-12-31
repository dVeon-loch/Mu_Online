// MsgBoxIGSGiftStorageItemInfo.h: interface for the CMsgBoxIGSGiftStorageItemInfo class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_MSGBOXIGSGIFTSTORAGEITEMINFO_H__C2B5CD4A_A0D5_4F4D_854B_C9119EE0EED6__INCLUDED_)
#define AFX_MSGBOXIGSGIFTSTORAGEITEMINFO_H__C2B5CD4A_A0D5_4F4D_854B_C9119EE0EED6__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifdef KJH_ADD_INGAMESHOP_UI_SYSTEM

#include "UIControls.h"
#include "NewUIMessageBox.h"
#include "NewUICommonMessageBox.h"

using namespace SEASON3B;

class CMsgBoxIGSGiftStorageItemInfo : public CNewUIMessageBoxBase, public INewUI3DRenderObj
{
public:
	enum IMAGE_IGS_GIFT_STORAGE_ITEM_INFO
	{
		IMAGE_IGS_BUTTON	= BITMAP_IGS_MSGBOX_BUTTON,				// 인게임샵 버튼
		IMAGE_IGS_FRAME		= BITMAP_IGS_MSGBOX_GIFT_STORAGE_ITEM,	// Main Frame
	};
	
	enum IMAGESIZE_IGS_GIFT_STORAGE_ITEM_INFO
	{
		IMAGE_IGS_WINDOW_WIDTH	= 640,	// 인게임샵 배경 사이즈
		IMAGE_IGS_WINDOW_HEIGHT = 429,
		IMAGE_IGS_FRAME_WIDTH	= 210,	// 메세지박스 Size
		IMAGE_IGS_FRAME_HEIGHT	= 306,
		IMAGE_IGS_BTN_WIDTH		= 52,	// 버튼 Size
		IMAGE_IGS_BTN_HEIGHT	= 26,	
	};
	
	// 메세지박스상의 상대좌표
	enum IGS_GIFT_STORAGE_ITEM_INFO_POS
	{
		IGS_BTN_OK_POS_X				= 43,	// 버튼
		IGS_BTN_CANCEL_POS_X			= 115,
		IGS_BTN_POS_Y					= 168,
		IGS_TEXT_TITLE_POS_Y			= 10,	// Title
		IGS_TEXT_ITEM_NAME_POS_Y		= 100,	// ItemName
		IGS_TEXT_ITEM_INFO_POS_X		= 30,	// ItemInfo
		IGS_TEXT_ITEM_INFO_NUM_POS_Y	= 124,
		IGS_TEXT_ITEM_INFO_PERIOD_POS_Y	= 140,
		IGS_TEXT_ITEM_INFO_WIDTH		= 150,
		IGS_TEXT_ID_INFO_POS_X			= 30,
		IGS_TEXT_ID_INFO_POS_Y			= 177,
		IGS_TEXT_ID_INFO_WIDTH			= 150,
		IGS_MESSAGE_INPUT_TEXT_POS_X	= 126,	// Input TextBox
		IGS_MESSAGE_INPUT_TEXT_POS_Y	= 96,
		IGS_3DITEM_POS_X				= 56,	// 3D 아이템 랜더 시작 위치(BOX 기준)
		IGS_3DITEM_POS_Y				= 34,
		IGS_3DITEM_WIDTH				= 97,	// 3D 아이템 랜더 공간설정
		IGS_3DITEM_HEIGHT				= 60,
	};
	
public:
	CMsgBoxIGSGiftStorageItemInfo();
	~CMsgBoxIGSGiftStorageItemInfo();
	
	bool Create(float fPriority = 3.f);
	void Release();
	
	bool Update();
	bool Render();

	bool IsVisible() const;
	
	void Render3D();
	
	void Initialize(int iStorageSeq, int iStorageItemSeq, WORD wItemCode, unicode::t_char szItemType, 
						unicode::t_char* pszID, unicode::t_char* pszMessage, unicode::t_char* pszName, 
						unicode::t_char* pszNum, unicode::t_char* pszPeriod);
	
	static CALLBACK_RESULT LButtonUp(class CNewUIMessageBoxBase* pOwner, const leaf::xstreambuf& xParam);
	static CALLBACK_RESULT OKButtonDown(class CNewUIMessageBoxBase* pOwner, const leaf::xstreambuf& xParam);
	static CALLBACK_RESULT CancelButtonDown(class CNewUIMessageBoxBase* pOwner, const leaf::xstreambuf& xParam);
	
private:
	void SetAddCallbackFunc();
	void SetButtonInfo();
	
	void RenderFrame();
	void RenderTexts();
	void RenderButtons();
	
	void LoadImages();
	void UnloadImages();
	
private:
	// buttons
	CNewUIMessageBoxButton m_BtnUse;
	CNewUIMessageBoxButton m_BtnCancel;

	CUITextInputBox		m_MessageInputBox;

	int		m_iStorageSeq;			// 보관함 순번
	int		m_iStorageItemSeq;		// 보관함 상품 순번
	WORD	m_wItemCode;			// 아이템 코드
	
	unicode::t_char	m_szName[MAX_TEXT_LENGTH];		// 아이템 이름
	unicode::t_char	m_szNum[MAX_TEXT_LENGTH];
	unicode::t_char	m_szPeriod[MAX_TEXT_LENGTH];
	unicode::t_char m_szItemType;	// 상품구분 (C : 캐시, P : 상품)

	unicode::t_char	m_szIDInfo[MAX_TEXT_LENGTH];			// 선물보낸 캐릭터ID + Text
	unicode::t_char	m_szMessage[MAX_GIFT_MESSAGE_SIZE];		// 선물보낸 메세지
};

////////////////////////////////////////////////////////////////////
// LayOut
////////////////////////////////////////////////////////////////////
class CMsgBoxIGSGiftStorageItemInfoLayout : public TMsgBoxLayout<CMsgBoxIGSGiftStorageItemInfo>
{
public:
	bool SetLayout();
};


#endif // KJH_ADD_INGAMESHOP_UI_SYSTEM

#endif // !defined(AFX_MSGBOXIGSGIFTSTORAGEITEMINFO_H__C2B5CD4A_A0D5_4F4D_854B_C9119EE0EED6__INCLUDED_)
