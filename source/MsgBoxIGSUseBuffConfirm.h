// MsgBoxIGSUseBuffConfirm.h: interface for the CMsgBoxIGSUseBuffConfirm class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_MSGBOXIGSUSEBUFFCONFIRM_H__9EE91B18_4173_472C_A150_A1CDD66ED2FA__INCLUDED_)
#define AFX_MSGBOXIGSUSEBUFFCONFIRM_H__9EE91B18_4173_472C_A150_A1CDD66ED2FA__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifdef KJH_ADD_INGAMESHOP_UI_SYSTEM

#include "NewUIMessageBox.h"
#include "NewUICommonMessageBox.h"
#include "UIControls.h"
#include "NewUIOptionWindow.h"

using namespace SEASON3B;

class CMsgBoxIGSUseBuffConfirm : public CNewUIMessageBoxBase
{
public:
	enum IMAGE_IGS_USEBUFF_CONFIRM
	{
		IMAGE_IGS_BUTTON	= BITMAP_IGS_MSGBOX_BUTTON,				// 인게임샵 버튼
		IMAGE_IGS_BACK		= CNewUIOptionWindow::IMAGE_OPTION_FRAME_BACK,
		IMAGE_IGS_UP		= CNewUIOptionWindow::IMAGE_OPTION_FRAME_UP,
		IMAGE_IGS_DOWN		= CNewUIOptionWindow::IMAGE_OPTION_FRAME_DOWN,
		IMAGE_IGS_LEFTLINE	= CNewUIOptionWindow::IMAGE_OPTION_FRAME_LEFT,
		IMAGE_IGS_RIGHTLINE = CNewUIOptionWindow::IMAGE_OPTION_FRAME_RIGHT,
	};
	
	enum IMAGE_IGS_USEBUFF_CONFIRM_SIZE
	{
		IMAGE_IGS_WINDOW_WIDTH	= 640,	// 인게임샵 배경 사이즈
		IMAGE_IGS_WINDOW_HEIGHT = 429,
		IMAGE_IGS_FRAME_WIDTH	= 190,	// 메세지박스 Size
#ifdef KJH_MOD_INGAMESHOP_PATCH_091028
		IMAGE_IGS_FRAME_HEIGHT	= 159,
#else //  KJH_MOD_INGAMESHOP_PATCH_091028
		IMAGE_IGS_FRAME_HEIGHT	= 179,
#endif // KJH_MOD_INGAMESHOP_PATCH_091028
		IMAGE_IGS_UP_HEIGHT		= 64,
		IMAGE_IGS_DOWN_HEIGHT	= 45,
		IMAGE_IGS_LINE_WIDTH	= 21,
		IMAGE_IGS_LINE_HEIGHT	= 10,
		IMAGE_IGS_BTN_WIDTH		= 52,		// 버튼 Size
		IMAGE_IGS_BTN_HEIGHT	= 26,	
	};
	
	// 메세지박스상의 상대좌표
	enum IGS_USEBUFF_CONFIRM_POS
	{
		IGS_BTN_OK_POS_X		= 33,	// 버튼 Pos
		IGS_BTN_CANCEL_POS_X	= 105,
#ifdef KJH_MOD_INGAMESHOP_PATCH_091028
		IGS_BTN_POS_Y			= 120,
#else // KJH_MOD_INGAMESHOP_PATCH_091028
		IGS_BTN_POS_Y			= 140,
#endif // KJH_MOD_INGAMESHOP_PATCH_091028
		IGS_TEXT_TITLE_Y		= 10,	// Title
		IGS_TEXT_DIVIDE_WIDTH	= 150,
		IGS_TEXT_DESCRIPTION_POS_X	= 20,
		IGS_TEXT_DESCRIPTION_POS_Y	= 50,
		IGS_TEXT_DESCRIPTION_INTERVAL = 12,
		IGS_TEXT_DESCRIPTION_WIDTH	= 170,
	};
	
public:
	CMsgBoxIGSUseBuffConfirm();
	~CMsgBoxIGSUseBuffConfirm();
	
	bool Create(float fPriority = 3.f);
	void Release();
	
	bool Update();
	bool Render();
	
	void Initialize(int iStorageSeq, int iStorageItemSeq, WORD wItemCode, unicode::t_char szItemType, 
					unicode::t_char* pszItemName, unicode::t_char* pszBuffName);
	
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
	CNewUIMessageBoxButton m_BtnOk;
	CNewUIMessageBoxButton m_BtnCancel;
	
	int m_iMiddleCount;
	
	unicode::t_char m_szDescription[UIMAX_TEXT_LINE][MAX_TEXT_LENGTH];
	
	int			m_iDesciptionLine;

	int			m_iStorageSeq;			// 보관함 순번
	int			m_iStorageItemSeq;		// 보관함 상품 순번
	WORD		m_wItemCode;			// 아이템 코드
	unicode::t_char m_szItemType;		// 상품구분 (C : 캐시, P : 상품)
	unicode::t_char m_szCurrentBuffName[MAX_TEXT_LENGTH];	// 현재 BuffType이 같은 버프 이름
};

////////////////////////////////////////////////////////////////////
// LayOut
////////////////////////////////////////////////////////////////////
class CMsgBoxIGSUseBuffConfirmLayout : public TMsgBoxLayout<CMsgBoxIGSUseBuffConfirm>
{
public:
	bool SetLayout();
};


#endif // KJH_ADD_INGAMESHOP_UI_SYSTEM


#endif // !defined(AFX_MSGBOXIGSUSEBUFFCONFIRM_H__9EE91B18_4173_472C_A150_A1CDD66ED2FA__INCLUDED_)
