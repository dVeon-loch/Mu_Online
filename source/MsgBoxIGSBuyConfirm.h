// MsgBoxIGSBuyConfirm.h: interface for the CMsgBoxIGSBuyConfirm class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_MSGBOXIGSBUYCONFIRM_H__7C4F8295_EA55_4F9C_A7C3_B514C11BE83C__INCLUDED_)
#define AFX_MSGBOXIGSBUYCONFIRM_H__7C4F8295_EA55_4F9C_A7C3_B514C11BE83C__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifdef KJH_ADD_INGAMESHOP_UI_SYSTEM

#include "UIControls.h"
#include "NewUIOptionWindow.h"
#include "NewUIMessageBox.h"
#include "NewUICommonMessageBox.h"

using namespace SEASON3B;

class CMsgBoxIGSBuyConfirm : public CNewUIMessageBoxBase
{
public:
	enum IMAGE_IGS_BUY_CONFIRM
	{
		IMAGE_IGS_BUTTON	= BITMAP_IGS_MSGBOX_BUTTON,				// 인게임샵 버튼
		IMAGE_IGS_BACK		= CNewUIOptionWindow::IMAGE_OPTION_FRAME_BACK,
		IMAGE_IGS_UP		= CNewUIOptionWindow::IMAGE_OPTION_FRAME_UP,
		IMAGE_IGS_DOWN		= CNewUIOptionWindow::IMAGE_OPTION_FRAME_DOWN,
		IMAGE_IGS_LEFTLINE	= CNewUIOptionWindow::IMAGE_OPTION_FRAME_LEFT,
		IMAGE_IGS_RIGHTLINE = CNewUIOptionWindow::IMAGE_OPTION_FRAME_RIGHT,
		IMAGE_IGS_TEXTBOX	= BITMAP_IGS_MGSBOX_BUY_CONFIRM_TEXT_BOX,		// 아이템정보 텍스트 박스
	};

	enum IMAGESIZE_IGS_BUY_CONFIRM
	{
		IMAGE_IGS_WINDOW_WIDTH	= 640,	// 인게임샵 배경 사이즈
		IMAGE_IGS_WINDOW_HEIGHT = 429,
		IMAGE_IGS_FRAME_WIDTH	= 190,	// 메세지박스 Size
		IMAGE_IGS_FRAME_HEIGHT	= 179,
		IMAGE_IGS_TEXTBOX_WIDTH = 160,	// 아이템 정보 Textbox
		IMAGE_IGS_TEXTBOX_HEIGHT = 41,
		IMAGE_IGS_UP_HEIGHT		= 64,
		IMAGE_IGS_DOWN_HEIGHT	= 45,
		IMAGE_IGS_LINE_WIDTH	= 21,
		IMAGE_IGS_LINE_HEIGHT	= 10,
		IMAGE_IGS_BTN_WIDTH		= 52,	// 버튼 Size
		IMAGE_IGS_BTN_HEIGHT	= 26,
	};

	// 메세지박스상의 상대좌표
	enum IGS_BUY_CONFIRM_POS
	{
		IGS_BTN_OK_POS_X		= 35,
		IGS_BTN_CANCEL_POS_X	= 105,
		IGS_BTN_POS_Y			= 140,
		IGS_TEXTBOX_POS_X		= 15,			// 아이템정보 Textbox
		IGS_TEXTBOX_POS_Y		= 58,
		IGS_TEXT_TITLE_POS_Y	= 10,			// Title
		IGS_TEXT_QUESTION_POS_Y	= 42,			// 질문
		IGS_TEXT_NOTICE_POS_Y	= 105,			// 주의사항
		IGS_TEXT_NOTICE_WIDTH	= 150,
		IGS_TEXT_ITEM_INFO_POS_X		= 25,	// 아이템정보
		IGS_TEXT_ITEM_INFO_NAME_POS_Y	= 64,
		IGS_TEXT_ITEM_INFO_PRICE_POS_Y	= 75,
		IGS_TEXT_ITEM_INFO_PERIOD_POS_Y = 86,
		IGS_TEXT_ITEM_INFO_WIDTH		= 143,	// 아이템정보 Text Size
	};

public:
	CMsgBoxIGSBuyConfirm();
	~CMsgBoxIGSBuyConfirm();
	
	bool Create(float fPriority = 3.f);
	void Release();
	
	bool Update();
	bool Render();

#ifdef KJH_MOD_INGAMESHOP_GLOBAL_CASHPOINT_ONLY_GLOBAL
void CMsgBoxIGSBuyConfirm::Initialize(WORD wItemCode, int iPackageSeq, int iDisplaySeq, int iPriceSeq, int iCashType,
								   unicode::t_char* pszName, unicode::t_char* pszPrice, unicode::t_char* pszPeriod);
#else // KJH_MOD_INGAMESHOP_GLOBAL_CASHPOINT_ONLY_GLOBAL
		void CMsgBoxIGSBuyConfirm::Initialize(WORD wItemCode, int iPackageSeq, int iDisplaySeq, int iPriceSeq, 
		unicode::t_char* pszName, unicode::t_char* pszPrice, unicode::t_char* pszPeriod);
#endif // KJH_MOD_INGAMESHOP_GLOBAL_CASHPOINT_ONLY_GLOBAL
	
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

	// Item정보
	WORD	m_wItemCode;		// 아이템 코드
	int		m_iPackageSeq;
	int		m_iDisplaySeq;
	int		m_iPriceSeq;
#ifdef KJH_MOD_INGAMESHOP_GLOBAL_CASHPOINT_ONLY_GLOBAL
	int		m_iCashType;		// 캐시타입 (C/P) - 글로벌 전용
#endif // KJH_MOD_INGAMESHOP_GLOBAL_CASHPOINT_ONLY_GLOBAL
	
	// Item정보 Text
	unicode::t_char		m_szItemName[MAX_TEXT_LENGTH];
	unicode::t_char		m_szItemPrice[MAX_TEXT_LENGTH];
	unicode::t_char		m_szItemPeriod[MAX_TEXT_LENGTH];

	unicode::t_char		m_szNotice[NUM_LINE_CMB][MAX_TEXT_LENGTH];
	
	int		m_iNumNoticeLine;
};

////////////////////////////////////////////////////////////////////
// LayOut
////////////////////////////////////////////////////////////////////
class CMsgBoxIGSBuyConfirmLayout : public TMsgBoxLayout<CMsgBoxIGSBuyConfirm>
{
public:
	bool SetLayout();
};


#endif // KJH_ADD_INGAMESHOP_UI_SYSTEM

#endif // !defined(AFX_MSGBOXIGSBUYCONFIRM_H__7C4F8295_EA55_4F9C_A7C3_B514C11BE83C__INCLUDED_)
