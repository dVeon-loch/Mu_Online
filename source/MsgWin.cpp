//*****************************************************************************
// File: MsgWin.cpp
//
// Desc: implementation of the CMsgWin class.
//
// producer: Ahn Sang-Kyu
//*****************************************************************************

#include "stdafx.h"
#include "MsgWin.h"

#include "Input.h"
#include "UIMng.h"
#include <crtdbg.h>		// _ASSERT() »ç¿ë.

// ÅØ½ºÆ® ·£´õ¸¦ À§ÇÑ #include. ¤Ì¤Ì
#include "ZzzBMD.h"
#include "ZzzInfomation.h"
#include "ZzzObject.h"
#include "ZzzCharacter.h"
#include "ZzzInterface.h"

#include "GOBoid.h"
#include "ZzzScene.h"
#include "DSPlaySound.h"
#include "wsclientinline.h"
#include "UIControls.h"
#include "ZzzOpenglUtil.h"
#ifdef LJH_ADD_ONETIME_PASSWORD
// web browser¸¦ ÄÑ±â À§ÇØ include
	#include "iexplorer.h"
#endif //LJH_ADD_ONETIME_PASSWORD

#define	MW_OK		0	// OK ¹öÆ°, (Localized)¿¹,È®ÀÎ ¹öÆ°
#define	MW_CANCEL	1	// Cancel ¹öÆ°, (Localized)¾Æ´Ï¿À,Ãë¼Ò ¹öÆ°

extern float g_fScreenRate_x;
extern float g_fScreenRate_y;
extern int g_iChatInputType;
extern CUITextInputBox* g_pSinglePasswdInputBox;

//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////

CMsgWin::CMsgWin()
{

}

CMsgWin::~CMsgWin()
{

}

//*****************************************************************************
// ÇÔ¼ö ÀÌ¸§ : Create()
// ÇÔ¼ö ¼³¸í : ¸Þ½ÃÁö Ã¢ »ý¼º.
//			   (¸Þ½ÃÁö°¡ ¿©·¯°³¶óµµ ´Ü ÇÏ³ª¸¸ »ý¼º) 
// º¯°æ µÈ ³»¿ë: YES/NO ¼±ÅÃ °¡´ÉÇÑ ±â´É Ãß°¡
//				  -> p_iBtnType °ªÀÌ ¾ø°Å³ª 0(default):					OK/CANCEL ¹öÆ°À» Æ÷ÇÔ ±âº» ¹öÆ°
//				  -> p_iBtnType °ªÀÌ MWT_BTN_LOCALIZED_YESNO:			(localized)¿¹/¾Æ´Ï¿À¹öÆ° (10.01.22)
//				  -> p_iBtnType °ªÀÌ MWT_BTN_LOCALIZED_CONFIRM_CANCEL:	(localized)È®ÀÎ/Ãë¼Ò ¹öÆ° (10.01.27)
//*****************************************************************************
#ifdef LJH_ADD_LOCALIZED_BTNS
void CMsgWin::Create(int p_iBtnType)
#else  //LJH_ADD_LOCALIZED_BTNS
void CMsgWin::Create()
#endif //LJH_ADD_LOCALIZED_BTNS
{
#ifdef LJH_ADD_LOCALIZED_BTNS
	// YES/NO ¹öÆ° ±ÛÀÚ »ö
	DWORD adwBtnColor[3] = { CLRDW_BR_GRAY, CLRDW_BR_GRAY, CLRDW_WHITE};
#endif //LJH_ADD_LOCALIZED_BTNS

	CInput rInput = CInput::Instance();
	// ±âº» Ã¢ »ý¼º.(È­¸é ÀüÃ¼ Å©±â. °ËÀº»ö ¹ÝÅõ¸íÀÓ.)
	CWin::Create(rInput.GetScreenWidth(), rInput.GetScreenHeight());

	// Ã¢ ¸ð¾çÀÇ ½ºÇÁ¶óÀÌÆ®.
	m_sprBack.Create(352, 113, BITMAP_MESSAGE_WIN);
	// ÅØ½ºÆ® ÀÔ·Â ¹Ú½º ½ºÇÁ¶óÀÌÆ®.
	m_sprInput.Create(171, 23, BITMAP_MSG_WIN_INPUT);

	// È®ÀÎ, Ãë¼Ò ¹öÆ°.
	// ¶Ç´Â ¿¹, ¾Æ´Ï¿À ¹öÆ°.
	for (int i = 0; i < 2; ++i)
	{
#ifdef LJH_ADD_LOCALIZED_BTNS
		if (p_iBtnType == 0)
			m_aBtn[i].Create(54, 30, BITMAP_BUTTON + i, 3, 2, 1);
		else if (p_iBtnType == MWT_BTN_LOCALIZED_YESNO)
		{
			m_aBtn[i].Create(64, 29, SEASON3B::CNewUIMessageBoxMng::IMAGE_MSGBOX_BTN_EMPTY_SMALL, 3, 2, 1);
			m_aBtn[i].SetText(GlobalText[1037+i], adwBtnColor);
		}
		else if (p_iBtnType == MWT_BTN_LOCALIZED_CONFIRM_CANCEL || p_iBtnType == MWT_BTN_LOCALIZED_CONFIRM_ONLY)
		{
			m_aBtn[i].Create(64, 29, SEASON3B::CNewUIMessageBoxMng::IMAGE_MSGBOX_BTN_EMPTY_SMALL, 3, 2, 1);
			m_aBtn[i].SetText(GlobalText[228+i*2886], adwBtnColor);
		}
#else  //LJH_ADD_LOCALIZED_BTNS
		m_aBtn[i].Create(54, 30, BITMAP_BUTTON + i, 3, 2, 1);
#endif //LJH_ADD_LOCALIZED_BTNS
		CWin::RegisterButton(&m_aBtn[i]);
	}

	::memset(m_aszMsg[0], 0 ,sizeof(char) * MW_MSG_LINE_MAX * MW_MSG_ROW_MAX);

	m_eType = MWT_NON;
	m_nMsgLine = 0;
	m_nMsgCode = -1;
	m_nGameExit = -1;
	m_dDeltaTickSum = 0.0;
}

//*****************************************************************************
// ÇÔ¼ö ÀÌ¸§ : PreRelease()
// ÇÔ¼ö ¼³¸í : ¸ðµç ÄÁÆ®·Ñ ¸±¸®Áî.(¹öÆ°Àº ÀÚµ¿ »èÁ¦)
//*****************************************************************************
void CMsgWin::PreRelease()
{
	m_sprInput.Release();
	m_sprBack.Release();
}

//*****************************************************************************
// ÇÔ¼ö ÀÌ¸§ : SetPosition()
// ÇÔ¼ö ¼³¸í : Ã¢ À§Ä¡ ÁöÁ¤.
//			   (È­¸é »ó¿¡´Â Ã¢ÀÌ ÀÌµ¿ÇÏ´Â°ÍÃ³·³ º¸ÀÌÁö¸¸ ±âº» Ã¢Àº ÀÌµ¿ÀÌ ¾øÀ½)
// ¸Å°³ º¯¼ö : nXCoord	: ½ºÅ©¸° XÁÂÇ¥.
//			   nYCoord	: ½ºÅ©¸° YÁÂÇ¥.
//*****************************************************************************
void CMsgWin::SetPosition(int nXCoord, int nYCoord)
{
	m_sprBack.SetPosition(nXCoord, nYCoord);
	SetCtrlPosition();
}

//*****************************************************************************
// ÇÔ¼ö ÀÌ¸§ : SetCtrlPosition()
// ÇÔ¼ö ¼³¸í : ÄÁÆ®·Ñ À§Ä¡ ÁöÁ¤.
//*****************************************************************************
void CMsgWin::SetCtrlPosition()
{
	int nBaseXPos = m_sprBack.GetXPos();
	int nBtnYPos = m_sprBack.GetYPos() + 72;
// ¸Þ½ÃÁö ¹Ú½º Å¸ÀÙ¿¡ µû¶ó ÄÁÆ®·Ñ À§Ä¡°¡ º¯ÇÔ.
	switch (m_eType)
	{
	case MWT_BTN_CANCEL:
		m_aBtn[MW_CANCEL].SetPosition(nBaseXPos + 149, nBtnYPos);
		break;
	case MWT_BTN_OK:
#ifdef LJH_ADD_LOCALIZED_BTNS
	case MWT_BTN_LOCALIZED_CONFIRM_ONLY:
#endif //LJH_ADD_LOCALIZED_BTNS
		m_aBtn[MW_OK].SetPosition(nBaseXPos + 149, nBtnYPos);
		break;
	case MWT_BTN_BOTH:
#ifdef LJH_ADD_LOCALIZED_BTNS
	case MWT_BTN_LOCALIZED_YESNO:
	case MWT_BTN_LOCALIZED_CONFIRM_CANCEL:
#endif //LJH_ADD_LOCALIZED_BTNS
		m_aBtn[MW_OK].SetPosition(nBaseXPos + 98, nBtnYPos);
		m_aBtn[MW_CANCEL].SetPosition(nBaseXPos + 200, nBtnYPos);
		break;
	case MWT_STR_INPUT:
		m_sprInput.SetPosition(nBaseXPos + 32, nBtnYPos + 4);
		m_aBtn[MW_OK].SetPosition(nBaseXPos + 209, nBtnYPos);
		m_aBtn[MW_CANCEL].SetPosition(nBaseXPos + 264, nBtnYPos);
		// ÀÔ·Â ÅØ½ºÆ® À§Ä¡ ÁöÁ¤.
		if (m_nMsgCode == MESSAGE_DELETE_CHARACTER_RESIDENT)
			if (g_iChatInputType == 1)
				g_pSinglePasswdInputBox->SetPosition(
					int((m_sprInput.GetXPos() + 10) / g_fScreenRate_x),
					int((m_sprInput.GetYPos() + 8) / g_fScreenRate_y));
		break;
	}
}

//*****************************************************************************
// ÇÔ¼ö ÀÌ¸§ : Show()
// ÇÔ¼ö ¼³¸í : Ã¢À» º¸¿© ÁÖ°Å³ª ¾Èº¸ÀÌ°ÔÇÔ.
// ¸Å°³ º¯¼ö : bShow	: trueÀÌ¸é º¸¿©ÁÜ.
//*****************************************************************************
void CMsgWin::Show(bool bShow)
{
	CWin::Show(bShow);

	m_sprBack.Show(bShow);

	switch (m_eType)
	{
	case MWT_BTN_CANCEL:
		m_aBtn[MW_OK].Show(false);
		m_aBtn[MW_CANCEL].Show(bShow);
		m_sprInput.Show(false);
		break;
	case MWT_BTN_OK:
#ifdef LJH_ADD_LOCALIZED_BTNS
	case MWT_BTN_LOCALIZED_CONFIRM_ONLY:
#endif //LJH_ADD_LOCALIZED_BTNS
		m_aBtn[MW_OK].Show(bShow);
		m_aBtn[MW_CANCEL].Show(false);
		m_sprInput.Show(false);
		break;
	case MWT_BTN_BOTH:
#ifdef LJH_ADD_LOCALIZED_BTNS
	case MWT_BTN_LOCALIZED_YESNO:
	case MWT_BTN_LOCALIZED_CONFIRM_CANCEL:
#endif //LJH_ADD_LOCALIZED_BTNS
		m_aBtn[MW_OK].Show(bShow);
		m_aBtn[MW_CANCEL].Show(bShow);
		m_sprInput.Show(false);
		break;
	case MWT_STR_INPUT:
		m_aBtn[MW_OK].Show(bShow);
		m_aBtn[MW_CANCEL].Show(bShow);
		m_sprInput.Show(bShow);
		break;
	default:
		m_aBtn[MW_OK].Show(false);
		m_aBtn[MW_CANCEL].Show(false);
		m_sprInput.Show(false);
	}
		
}

//*****************************************************************************
// ÇÔ¼ö ÀÌ¸§ : CursorInWin()
// ÇÔ¼ö ¼³¸í : À©µµ¿ì ¿µ¿ª ¾È¿¡ ¸¶¿ì½º Ä¿¼­°¡ À§Ä¡ÇÏ´Â°¡?
// ¸Å°³ º¯¼ö : eArea	: °Ë»çÇÒ ¿µ¿ª.(win.hÀÇ #define ÂüÁ¶)
//*****************************************************************************
bool CMsgWin::CursorInWin(int nArea)
{
	if (!CWin::m_bShow)		// º¸ÀÌÁö ¾Ê´Â´Ù¸é Ã³¸®ÇÏÁö ¾ÊÀ½.
		return false;

	switch (nArea)
	{
	case WA_MOVE:
		return false;	// ÀÌµ¿ ¿µ¿ªÀº ¾øÀ½.(ÀÌµ¿À» ¸·À½)
	}

	return CWin::CursorInWin(nArea);
}

//*****************************************************************************
// ÇÔ¼ö ÀÌ¸§ : UpdateWhileActive()
// ÇÔ¼ö ¼³¸í : ¾×Æ¼ºêÀÏ ¶§ÀÇ ¾÷µ¥ÀÌÆ®.
// ¸Å°³ º¯¼ö : dDeltaTick	: ÀÌÀü Update()È£Ãâ ÈÄºÎÅÍ Áö±Ý Update()±îÁö ½Ã°£.
//*****************************************************************************
void CMsgWin::UpdateWhileActive(double dDeltaTick)
{
	CInput& rInput = CInput::Instance();

	if (rInput.IsKeyDown(VK_RETURN))	// ¿£ÅÍÅ°¸¦ ´­·¶´Â°¡?
	{
		if (m_eType > MWT_BTN_CANCEL)	// OK ¹öÆ°À» »ç¿ëÇÏ°í ÀÖ´Ù¸é.
		{
			::PlayBuffer(SOUND_CLICK01);// Å¬¸¯ »ç¿îµå.
			ManageOKClick();
		}
		else if (m_eType == MWT_BTN_CANCEL)	// Cancel ¹öÆ°¸¸ ÀÖ´Ù¸é.
		{
			::PlayBuffer(SOUND_CLICK01);// Å¬¸¯ »ç¿îµå.
			ManageCancelClick();
		}
	}
	else if (rInput.IsKeyDown(VK_ESCAPE))// escÅ°¸¦ ´­·¶´Â°¡?
	{
#ifdef LJH_ADD_LOCALIZED_BTNS
		if (m_eType == MWT_BTN_OK  || m_eType == MWT_BTN_LOCALIZED_CONFIRM_ONLY) // OK ¹öÆ°, È¤Àº È®ÀÎ¹öÆ°¸¸ ÀÖ´Ù¸é.
#else  //LJH_ADD_LOCALIZED_BTNS
		if (m_eType == MWT_BTN_OK)		// OK ¹öÆ°¸¸ ÀÖ´Ù¸é.
#endif //LJH_ADD_LOCALIZED_BTNS
		{
			::PlayBuffer(SOUND_CLICK01);// Å¬¸¯ »ç¿îµå.
			ManageOKClick();
		}
		else if (m_eType > MWT_NON)		// Cancel¹öÆ°À» »ç¿ëÇÏ°í ÀÖ´Ù¸é.
		{
			::PlayBuffer(SOUND_CLICK01);// Å¬¸¯ »ç¿îµå.
			ManageCancelClick();
		}
		CUIMng::Instance().SetSysMenuWinShow(false);
	}
	else if (m_aBtn[MW_OK].IsClick())		// OK ¹öÆ°À» Å¬¸¯Çß´Â°¡?
		ManageOKClick();
	else if (m_aBtn[MW_CANCEL].IsClick())	// Cancel ¹öÆ°À» Å¬¸¯Çß´Â°¡?
		ManageCancelClick();
	else if (m_nMsgCode == MESSAGE_GAME_END_COUNTDOWN)	// °ÔÀÓÁ¾·á Ä«¿îÆ®.
	{
		if (m_nGameExit != -1) 
		{
			m_dDeltaTickSum += dDeltaTick;
			if (m_dDeltaTickSum > 1000.0)
			{
				m_dDeltaTickSum = 0.0;
				if (--m_nGameExit == 0)
				{
					g_ErrorReport.Write("> Menu - Exit game.");
					g_ErrorReport.WriteCurrentTime();
	//				SocketClient.Close();	// ¾îÂ÷ÇÇ WM_DESTROY¿¡¼­ È£Ãâ µÊ.
					::PostMessage(g_hWnd, WM_CLOSE, 0, 0);
				}
				else
				{
					char szMsg[64];
					::sprintf(szMsg, GlobalText[380], m_nGameExit);
					SetMsg(m_eType, szMsg);
				}
			}
		}
	}
}

//*****************************************************************************
// ÇÔ¼ö ÀÌ¸§ : RenderControls()
// ÇÔ¼ö ¼³¸í : °¢Á¾ ÄÁÆ®·Ñ ·»´õ.
//*****************************************************************************
void CMsgWin::RenderControls()
{
	m_sprBack.Render();			// Ã¢ ¸ð¾çÀÇ ½ºÇÁ¶óÀÌÆ®.

	int nTextPosX, nTextPosY;

	// ÅØ½ºÆ® »ö»ó ÁöÁ¤.
	g_pRenderText->SetFont(g_hFixFont);
	g_pRenderText->SetTextColor(CLRDW_WHITE);
	g_pRenderText->SetBgColor(0);

	if (1 == m_nMsgLine)		// ¸Þ½ÃÁö°¡ 1ÁÙÀÏ¶§.
	{
		nTextPosX = int(m_sprBack.GetXPos() / g_fScreenRate_x);
		if (MWT_NON != m_eType)	// ¹öÆ°ÀÌ ÀÖ´Ù¸é.
			nTextPosY = int((m_sprBack.GetYPos() + 38) / g_fScreenRate_y);
		else
			nTextPosY = int((m_sprBack.GetYPos() + 54) / g_fScreenRate_y);
		g_pRenderText->RenderText(nTextPosX, nTextPosY, m_aszMsg[0],
			m_sprBack.GetWidth() / g_fScreenRate_x, 0, RT3_SORT_CENTER);
	}
	else if (2 == m_nMsgLine)	// ¸Þ½ÃÁö°¡ 2ÁÙÀÏ¶§.
	{
		nTextPosX = int((m_sprBack.GetXPos() + 25) / g_fScreenRate_x);
		if (MWT_NON != m_eType)	// ¹öÆ°ÀÌ ÀÖ´Ù¸é.
			nTextPosY = int((m_sprBack.GetYPos() + 32) / g_fScreenRate_y);
		else
			nTextPosY = int((m_sprBack.GetYPos() + 44) / g_fScreenRate_y);
		g_pRenderText->RenderText(nTextPosX, nTextPosY, m_aszMsg[0]);

		if (MWT_NON != m_eType)	// ¹öÆ°ÀÌ ÀÖ´Ù¸é.
			nTextPosY = int((m_sprBack.GetYPos() + 51) / g_fScreenRate_y);
		else
			nTextPosY = int((m_sprBack.GetYPos() + 66) / g_fScreenRate_y);
		g_pRenderText->RenderText(nTextPosX, nTextPosY, m_aszMsg[1]);
	}

	m_sprInput.Render();		// ÅØ½ºÆ® ÀÔ·Â ¹Ú½º ½ºÇÁ¶óÀÌÆ®.
	// ÅØ½ºÆ® ÀÔ·Â Ã³¸®.
	if (m_nMsgCode == MESSAGE_DELETE_CHARACTER_RESIDENT)
	{
		if (g_iChatInputType == 1)
			g_pSinglePasswdInputBox->Render();
		else if (g_iChatInputType == 0)
		{
			InputTextWidth = 100;
			::RenderInputText(
				int((m_sprInput.GetXPos() + 10) / g_fScreenRate_x),
				int((m_sprInput.GetYPos() + 8) / g_fScreenRate_y), 0, 0);
			InputTextWidth = 256;
		}
	}

	CWin::RenderButtons();
}

//*****************************************************************************
// ÇÔ¼ö ÀÌ¸§ : SetMsg()
// ÇÔ¼ö ¼³¸í : ¸Þ½ÃÁö¿Í ¹öÆ° ¼ÂÆÃ.
// ¸Å°³ º¯¼ö : eType	: ¸Þ½ÃÁö À©µµ¿ì Å¸ÀÙ.
//			   lpszMsg	: ¸Þ½ÃÁö ¹®ÀÚ¿­.
//			   lpszMsg2	: ¸Þ½ÃÁö ¹®ÀÚ¿­ 2¹øÂ° ¶óÀÎ.(±âº»°ª NULL)
// lpszMsg¸¸ ÀÖ´Â °æ¿ì ÀÚµ¿À¸·Î ÁÙÀ» ³ª´©¾î ÀÔ·Â µÇ°í, lpszMsg2µµ ÀÖÀ¸¸é Ã¹Â°
//ÁÙ¿¡ lpszMsg°¡ µÑÂ° ÁÙ¿¡´Â lpszMsg2°¡ ÀÔ·Â µÈ´Ù.
//*****************************************************************************
void CMsgWin::SetMsg(MSG_WIN_TYPE eType, LPCTSTR lpszMsg, LPCTSTR lpszMsg2)
{
	_ASSERT(lpszMsg);

	m_eType = eType;

	SetCtrlPosition();	// m_eType¿¡ µû¶ó ÄÁÆ®·Ñ À§Ä¡°¡ º¯ÇÏ¹Ç·Î.

	if (NULL == lpszMsg2)
	{
		// ÀÚµ¿À¸·Î ÁÙÀ» ³ª´®.
		m_nMsgLine = ::SeparateTextIntoLines(
			(char*)lpszMsg, m_aszMsg[0], MW_MSG_LINE_MAX, MW_MSG_ROW_MAX);
	}
	else
	{
		::strcpy(m_aszMsg[0], lpszMsg);
		::strcpy(m_aszMsg[1], lpszMsg2);

		m_nMsgLine = 2;
	}
}

//*****************************************************************************
// ÇÔ¼ö ÀÌ¸§ : PopUp()
// ÇÔ¼ö ¼³¸í : ¸Þ½ÃÁö ÄÚµå¿¡ ¸Â°Ô Ã¢À» ¶ç¿ò.
// ¸Å°³ º¯¼ö : nMsgCode	: ¸Þ½ÃÁö ÄÚµå.
//*****************************************************************************
void CMsgWin::PopUp(int nMsgCode, char* pszMsg)
{
	CUIMng& rUIMng = CUIMng::Instance();
	LPCTSTR lpszMsg = NULL, lpszMsg2 = NULL;
	MSG_WIN_TYPE eType = MWT_BTN_OK;
	m_nMsgCode = nMsgCode;
	char szTempMsg[128];

	switch (m_nMsgCode)
	{
	case MESSAGE_FREE_MSG_NOT_BTN:			// ÀÚÀ¯·Î¿î ¸Þ½ÃÁö, ¹öÆ° ¾øÀ½.(ÇöÀç, Ä³¸¯ÅÍ ¾À¿¡¼­ ¼­¹ö ¾ÀÀ¸·Î Ä«¿îÆ®´Ù¿î ½Ã »ç¿ë)
		lpszMsg = pszMsg;
		eType = MWT_NON;
		break;
	case MESSAGE_GAME_END_COUNTDOWN:		// °ÔÀÓ Á¾·á Ä«¿îÆ® ´Ù¿î.
		m_nGameExit = 5;
		::sprintf(szTempMsg, GlobalText[380], m_nGameExit);
		lpszMsg = szTempMsg;
		eType = MWT_NON;
		break;
	case MESSAGE_WAIT:						// Àá½Ã¸¸ ±â´Ù·Á ÁÖ¼¼¿ä.
		lpszMsg = GlobalText[471];
		eType = MWT_NON;
		break;
	case MESSAGE_SERVER_BUSY:				// °ÔÀÓ ¼­¹ö°¡ Æ÷È­ »óÅÂ.
	case RECEIVE_LOG_IN_FAIL_SERVER_BUSY:	// °ÔÀÓ ¼­¹ö°¡ Æ÷È­ »óÅÂ.
		lpszMsg = GlobalText[416];
		break;
	case RECEIVE_JOIN_SERVER_WAITING:		// ÀÎÁõ¼­¹ö°¡ ¹Ù»Ý.(ÇöÀç »ç¿ë ¾ÈÇÔ.)
		rUIMng.ShowWin(&rUIMng.m_ServerSelWin);
		lpszMsg = GlobalText[416];
		break;
	case MESSAGE_SERVER_LOST:				// ¼­¹ö Á¢¼Ó ½ÇÆÐ.
		lpszMsg = GlobalText[402];
		break;
	case MESSAGE_VERSION:					// ¹öÀüÀÌ Æ²¸².
	case RECEIVE_LOG_IN_FAIL_VERSION:		// ¹öÀüÀÌ Æ²¸².
		lpszMsg = GlobalText[405];
		lpszMsg2 = GlobalText[406];
		break;
	case MESSAGE_INPUT_ID:					// °èÁ¤ ÀÔ·Â ¾ÈÇÔ.
		lpszMsg = GlobalText[403];
		break;
	case MESSAGE_INPUT_PASSWORD:			// ¾ÏÈ£ ÀÔ·Â ¾ÈÇÔ.
		lpszMsg = GlobalText[404];
		break;
	case RECEIVE_LOG_IN_FAIL_ID:			// °èÁ¤ Æ²¸².
		lpszMsg = GlobalText[414];
		break;
	case RECEIVE_LOG_IN_FAIL_PASSWORD:		// ¾ÏÈ£ Æ²¸².
		lpszMsg = GlobalText[407];
		break;
	case RECEIVE_LOG_IN_FAIL_ID_CONNECTED:	// Á¢¼ÓÁßÀÎ °èÁ¤ÀÓ.
		lpszMsg = GlobalText[415];
		break;
	case RECEIVE_LOG_IN_FAIL_ID_BLOCK:		// ºí·°µÈ °èÁ¤ÀÓ.
	case MESSAGE_DELETE_CHARACTER_ID_BLOCK:	// ºí·°µÈ °èÁ¤ÀÓ.
		lpszMsg = GlobalText[417];
		break;
	case RECEIVE_LOG_IN_FAIL_CONNECT:		// Á¢¼Ó ¿À·ù.
		lpszMsg = GlobalText[408];
		break;
	case RECEIVE_LOG_IN_FAIL_ERROR:			// ·Î±×ÀÎ ÀÔ·Â 3¹ø Æ²¸².
		lpszMsg = GlobalText[409];
		break;
	case RECEIVE_LOG_IN_FAIL_NO_PAYMENT_INFO:// °ú±ÝÁ¤º¸ ¾øÀ½.
		lpszMsg = GlobalText[433];
		break;
	case RECEIVE_LOG_IN_FAIL_USER_TIME1:	// °³ÀÎ Á¤¾× ½Ã°£ ¸¸·á.
		lpszMsg = GlobalText[410];
		break;
	case RECEIVE_LOG_IN_FAIL_USER_TIME2:	// °³ÀÎ Á¤·® ½Ã°£ ¸¸·á.
		lpszMsg = GlobalText[411];
		break;
	case RECEIVE_LOG_IN_FAIL_PC_TIME1:		// IP Á¤¾× ½Ã°£ ¸¸·á.
		lpszMsg = GlobalText[412];
		break;
	case RECEIVE_LOG_IN_FAIL_PC_TIME2:		// IP Á¤·® ½Ã°£ ¸¸·á.
		lpszMsg = GlobalText[413];
		break;
	case RECEIVE_LOG_IN_FAIL_ONLY_OVER_15:	// 15¼¼ ÀÌ»ó ÀÌ¿ë°¡ ¼­¹ö.
		lpszMsg = GlobalText[435];
		break;
#ifdef ASG_ADD_CHARGED_CHANNEL_TICKET
	case RECEIVE_LOG_IN_FAIL_CHARGED_CHANNEL:// À¯·áÃ¤³Î ÀÔÀå ºÒ°¡. (±Û·Î¹ú Àü¿ë)
		lpszMsg = GlobalText[3118];
		break;
#endif	// ASG_ADD_CHARGED_CHANNEL_TICKET
	case RECEIVE_LOG_IN_FAIL_POINT_DATE:	// Æ÷ÀÎÆ® ³¯Â¥Á¦ »ç¿ë±â°£ ¸¸·á. (´ë¸¸ Àü¿ë)
		lpszMsg = GlobalText[597];
		break;
	case RECEIVE_LOG_IN_FAIL_POINT_HOUR:	// Æ÷ÀÎÆ® ½Ã°£Á¦ »ç¿ë±â°£ ¸¸·á. (´ë¸¸ Àü¿ë)
		lpszMsg = GlobalText[598];
		break;
	case RECEIVE_LOG_IN_FAIL_INVALID_IP:	// Á¢¼Ó Çã°¡µÇÁö ¾ÊÀº IP. (´ë¸¸ Àü¿ë)
		lpszMsg = GlobalText[599];
		break;
	case MESSAGE_DELETE_CHARACTER_GUILDWARNING:// ±æµå¿¡ °¡ÀÔµÈ Ä³¸¯ÅÍ »èÁ¦ ºÒ°¡.
		lpszMsg = GlobalText[1654];
		break;
	case MESSAGE_DELETE_CHARACTER_WARNING:	// Á¦ÇÑ ·¹º§ ÀÌ»ó »èÁ¦ ºÒ°¡.
//		lpszMsg = GlobalText[1711];
		::sprintf(szTempMsg, GlobalText[1711], CHAR_DEL_LIMIT_LV);
		lpszMsg = szTempMsg;
		break;
	case MESSAGE_DELETE_CHARACTER_CONFIRM:	// Ä³¸¯ÅÍ¸¦ »èÁ¦ÇÏ½Ã°Ú½À´Ï±î?
		::sprintf(szTempMsg, GlobalText[1712], CharactersClient[SelectedHero].ID);
		lpszMsg = szTempMsg;
		eType = MWT_BTN_BOTH;
		break;
	case MESSAGE_DELETE_CHARACTER_RESIDENT:	// ÁÖ¹Îµî·Ï ¹øÈ£ µÞÀÚ¸® ÀÔ·Â.
		lpszMsg = GlobalText[1713];
		eType = MWT_STR_INPUT;
		InitResidentNumInput();	// ÀÔ·Â ºÎºÐ ÃÊ±âÈ­.		
		break;
	case MESSAGE_DELETE_CHARACTER_ITEM_BLOCK:// ¾ÆÀÌÅÛ ºí·°µÈ Ä³¸¯ÅÍ.
		lpszMsg = GlobalText[439];
		break;
	case MESSAGE_STORAGE_RESIDENTWRONG:		// ÁÖ¹Îµî·Ï¹øÈ£ ºÒÀÏÄ¡.
		lpszMsg = GlobalText[401];
		break;
	case MESSAGE_DELETE_CHARACTER_SUCCESS:	// Ä³¸¯ÅÍ »èÁ¦ ¼º°ø.
		CharactersClient[SelectedHero].Object.Live = false;	// Ä³¸¯ÅÍ »èÁ¦.
		DeleteBug(&CharactersClient[SelectedHero].Object);	// À¯´Ï¸®¾Æ, µð³ë¶õÆ®, Ææ¸±µî »èÁ¦
		SelectedHero = -1;
		rUIMng.m_CharSelMainWin.UpdateDisplay();
		rUIMng.m_CharInfoBalloonMng.UpdateDisplay();
		lpszMsg = GlobalText[1714];
		break;
	case MESSAGE_BLOCKED_CHARACTER:			// ºí·°µÈ Ä³¸¯ÅÍ.
		lpszMsg = GlobalText[434];
		break;
	case MESSAGE_MIN_LENGTH:				// ÀÔ·ÂµÈ ±ÛÀÚ¼ö°¡ ÀûÀ½.
		lpszMsg = GlobalText[390];
		break;
	case MESSAGE_ID_SPACE_ERROR:			// »ç¿ëÇÒ ¼ö ¾ø´Â ´Ü¾î°¡ Æ÷ÇÔ.
		lpszMsg = GlobalText[1715];
		break;
	case MESSAGE_SPECIAL_NAME:				// Æ¯¼ö¹®ÀÚ »ç¿ë ºÒ°¡.
		lpszMsg = GlobalText[391];
		break;
	case RECEIVE_CREATE_CHARACTER_FAIL:		// µ¿ÀÏÇÑ ÀÌ¸§ Á¸Àç.
		rUIMng.ShowWin(&rUIMng.m_CharMakeWin);
#ifdef PJH_CHARACTER_RENAME
		rUIMng.m_CharMakeWin.Set_State(rUIMng.m_CharMakeWin.ReName_Inter);
#endif //PJH_CHARACTER_RENAME

		lpszMsg = GlobalText[1716];
		break;
	case RECEIVE_CREATE_CHARACTER_FAIL2:	// Ä³¸¯ÅÍ¸¦ ´õ ¸¸µé ¼ö ¾øÀ½.
		rUIMng.ShowWin(&rUIMng.m_CharMakeWin);
#ifdef PJH_CHARACTER_RENAME
		rUIMng.m_CharMakeWin.Set_State();
#endif //PJH_CHARACTER_RENAME

		lpszMsg = GlobalText[396];
		break;
#ifdef ADD_EXPERIENCE_SERVER
	case MESSAGE_PCROOM_POSSIBLE:			// PC¹æ¿¡¼­¸¸ Á¢¼Ó °¡´É.
		lpszMsg = GlobalText[1698];
		break;
#endif	// ADD_EXPERIENCE_SERVER
		
#ifdef LDK_ADD_GLOBAL_PORTAL_SYSTEM
	case MESSAGE_NOT_EXECUTION_WEBSTARTER:	// À¥¿¡¼­ ·Î±×ÀÎÇØÁÖ¼¼¿ä. (À¥½ºÅ¸ÅÍ ¹Ì½ÇÇà)
#ifdef ASG_FIX_NOT_EXECUTION_WEBSTARTER_MSG
		lpszMsg = GlobalText[3117];
#else	// ASG_FIX_NOT_EXECUTION_WEBSTARTER_MSG
		lpszMsg = GlobalText[2743];
#endif	// ASG_FIX_NOT_EXECUTION_WEBSTARTER_MSG
		break;
#endif //LDK_ADD_GLOBAL_PORTAL_SYSTEM
#ifdef LJH_ADD_ONETIME_PASSWORD
	case MESSAGE_OTP_NOT_REGISTERED:		// OneTime Password ¹Ìµî·Ï
		lpszMsg = GlobalText[3108];			// "º¸´Ù ¾ÈÀüÇÑ ¿øÅ¸ÀÓ ÆÐ½º¿öµåÀÇ ÀÌ¿ëÀ» ÃßÃµÇÕ´Ï´Ù."
		lpszMsg2 = GlobalText[3109];		// "Áö±Ý ¹Ù·Î ¿øÅ¸ÀÓ ÆÐ½º¿öµå¸¦ µî·ÏÇÏ½Ã°Ú½À´Ï±î?"
		eType = MWT_BTN_LOCALIZED_YESNO;
		break;
	case MESSAGE_OTP_INCORRECT:				// OneTime Password ºÒÀÏÄ¡ 
		lpszMsg = GlobalText[3111];			// "¿øÅ¸ÀÓ ÆÐ½º¿öµå°¡ ÀÏÄ¡ÇÏÁö ¾Ê½À´Ï´Ù."
		lpszMsg2 = GlobalText[3112];		// "´Ù½Ã ÇÑ¹ø È®ÀÎ¹Ù¶ø´Ï´Ù."
		break;
	case MESSAGE_OTP_NOT_WRITTEN:			// OneTime Password¸¦ ÀÔ·ÂÇÏÁö ¾Ê°í ok Å¬¸¯
		lpszMsg = GlobalText[3111];			// "¿øÅ¸ÀÓ ÆÐ½º¿öµå°¡ ÀÏÄ¡ÇÏÁö ¾Ê½À´Ï´Ù."
		lpszMsg2 = GlobalText[3112];		// "´Ù½Ã ÇÑ¹ø È®ÀÎ¹Ù¶ø´Ï´Ù."
		break;
	case MESSAGE_OTP_INVALID_INFO:
		lpszMsg = GlobalText[3113];			// "ÀÔ·Â Á¤º¸°¡ Á¤»óÀûÀÌÁö ¾Ê½À´Ï´Ù."
		lpszMsg2 = GlobalText[3112];		// "´Ù½Ã ÇÑ¹ø È®ÀÎ¹Ù¶ø´Ï´Ù."
		eType = MWT_BTN_LOCALIZED_CONFIRM_ONLY;
		break;
#endif //LJH_ADD_ONETIME_PASSWORD

	default:
		m_nMsgCode = -1;
		return;
	}

	SetMsg(eType, lpszMsg, lpszMsg2);		// ¸Þ½ÃÁö¿Í ¹öÆ° ¼ÂÆÃ.
	rUIMng.ShowWin(this);
}

//*****************************************************************************
// ÇÔ¼ö ÀÌ¸§ : ManageOKClick()
// ÇÔ¼ö ¼³¸í : È®ÀÎ ¹öÆ°À» Å¬¸¯ÇßÀ» ¶§ÀÇ Ã³¸®.
//*****************************************************************************
void CMsgWin::ManageOKClick()
{
	CUIMng& rUIMng = CUIMng::Instance();
	rUIMng.HideWin(this);

	switch (m_nMsgCode)
	{
	case MESSAGE_SERVER_LOST:				// ¼­¹ö Á¢¼Ó ½ÇÆÐ.
	case MESSAGE_VERSION:					// ¹öÀüÀÌ Æ²¸².
	case RECEIVE_LOG_IN_FAIL_ERROR:			// °èÁ¤ 3¹ø Æ²¸².
	case RECEIVE_LOG_IN_FAIL_VERSION:		// ¹öÀüÀÌ Æ²¸².
#ifdef LDK_ADD_GLOBAL_PORTAL_SYSTEM
	case MESSAGE_NOT_EXECUTION_WEBSTARTER:	// À¥¿¡¼­ ·Î±×ÀÎÇØÁÖ¼¼¿ä. (À¥½ºÅ¸ÅÍ ¹Ì½ÇÇà)
#endif //LDK_ADD_GLOBAL_PORTAL_SYSTEM
		::PostMessage(g_hWnd, WM_CLOSE, 0, 0);
		break;
	case MESSAGE_INPUT_ID:					// °èÁ¤ ÀÔ·Â ¾ÈÇÔ.
	case RECEIVE_LOG_IN_FAIL_ID:			// °èÁ¤ Æ²¸².
	case RECEIVE_LOG_IN_FAIL_ID_CONNECTED:	// Á¢¼Ó ÁßÀÎ °èÁ¤ÀÓ.
	case RECEIVE_LOG_IN_FAIL_SERVER_BUSY:	// °ÔÀÓ ¼­¹ö°¡ Æ÷È­ »óÅÂ.
	case RECEIVE_LOG_IN_FAIL_ID_BLOCK:		// ºí·°µÈ °èÁ¤ÀÓ.
	case RECEIVE_LOG_IN_FAIL_CONNECT:		// Á¢¼Ó ¿À·ù.
	case RECEIVE_LOG_IN_FAIL_NO_PAYMENT_INFO:// °ú±ÝÁ¤º¸ ¾øÀ½.
	case RECEIVE_LOG_IN_FAIL_USER_TIME1:	// °³ÀÎ Á¤¾× ½Ã°£ ¸¸·á.
	case RECEIVE_LOG_IN_FAIL_USER_TIME2:	// °³ÀÎ Á¤·® ½Ã°£ ¸¸·á.
	case RECEIVE_LOG_IN_FAIL_PC_TIME1:		// IP Á¤¾× ½Ã°£ ¸¸·á.
	case RECEIVE_LOG_IN_FAIL_PC_TIME2:		// IP Á¤·® ½Ã°£ ¸¸·á.
	case RECEIVE_LOG_IN_FAIL_ONLY_OVER_15:	// 15¼¼ ÀÌ»ó ÀÌ¿ë°¡ ¼­¹ö.
	case RECEIVE_LOG_IN_FAIL_POINT_DATE:	// Æ÷ÀÎÆ® ³¯Â¥Á¦ »ç¿ë±â°£ ¸¸·á.
	case RECEIVE_LOG_IN_FAIL_POINT_HOUR:	// Æ÷ÀÎÆ® ½Ã°£Á¦ »ç¿ë±â°£ ¸¸·á.
	case RECEIVE_LOG_IN_FAIL_INVALID_IP:	// Á¢¼Ó Çã°¡µÇÁö ¾ÊÀº IP.
#ifdef ASG_ADD_CHARGED_CHANNEL_TICKET
	case RECEIVE_LOG_IN_FAIL_CHARGED_CHANNEL:// À¯·áÃ¤³Î ÀÔÀå ºÒ°¡. (±Û·Î¹ú Àü¿ë)
#endif	// ASG_ADD_CHARGED_CHANNEL_TICKET
		rUIMng.ShowWin(&rUIMng.m_LoginWin);
		CUIMng::Instance().m_LoginWin.GetIDInputBox()->GiveFocus(TRUE);
		CurrentProtocolState = RECEIVE_JOIN_SERVER_SUCCESS;
		break;
	case MESSAGE_INPUT_PASSWORD:			// ¾ÏÈ£ ÀÔ·Â ¾ÈÇÔ.
	case RECEIVE_LOG_IN_FAIL_PASSWORD:		// ¾ÏÈ£ Æ²¸².
		rUIMng.ShowWin(&rUIMng.m_LoginWin);
		CUIMng::Instance().m_LoginWin.GetPassInputBox()->GiveFocus(TRUE);
		CurrentProtocolState = RECEIVE_JOIN_SERVER_SUCCESS;
		break;
#ifdef ADD_EXPERIENCE_SERVER
	case MESSAGE_PCROOM_POSSIBLE:			// PC¹æ¿¡¼­¸¸ Á¢¼Ó °¡´É.
		CUIMng::Instance().m_LoginWin.ConnectConnectionServer();
		break;
#endif	// ADD_EXPERIENCE_SERVER
	case MESSAGE_DELETE_CHARACTER_CONFIRM:	// Ä³¸¯ÅÍ¸¦ »èÁ¦ÇÏ½Ã°Ú½À´Ï±î?
		PopUp(MESSAGE_DELETE_CHARACTER_RESIDENT);
		break;
	case MESSAGE_DELETE_CHARACTER_RESIDENT:	// ÁÖ¹Îµî·Ï ¹øÈ£ µÞÀÚ¸® ÀÔ·Â.
		RequestDeleteCharacter();
		PopUp(MESSAGE_WAIT);
		break;
#ifdef LJH_ADD_ONETIME_PASSWORD
	case MESSAGE_OTP_NOT_REGISTERED:
		// OneTime Password¸¦ µî·Ï ÇÒ ¼ö ÀÖ°Ô 
		// ±âº»À¸·Î ¼³Á¤µÇ¾î ÀÖ´Â web browser¸¦ ÄÑ°í 
		//Ã¤³Î ¼±ÅÃÃ¢À¸·Î µ¹¾Æ°£´Ù.
		leaf::OpenExplorer("https://secure.muonline.jp/member/otk/index.asp");
		ReturnToConnServerWin();
		break;
	case MESSAGE_OTP_INCORRECT:				// OneTime Password°¡ Æ²¸².
	case MESSAGE_OTP_NOT_WRITTEN:			// OneTime Password¸¦ ÀÔ·ÂÇÏÁö ¾ÊÀ½.
		rUIMng.ShowWin(&rUIMng.m_OneTimePasswordWin);
		CUIMng::Instance().m_OneTimePasswordWin.GetOTPInputBox()->SetText(NULL);
		CUIMng::Instance().m_OneTimePasswordWin.GetOTPInputBox()->GiveFocus(TRUE);
		break;
	case MESSAGE_OTP_INVALID_INFO:
		ReturnToConnServerWin();
		break;
#endif //LJH_ADD_ONETIME_PASSWORD
	}
}

//*****************************************************************************
// ÇÔ¼ö ÀÌ¸§ : ManageCancelClick()
// ÇÔ¼ö ¼³¸í : Ãë¼Ò ¹öÆ°À» Å¬¸¯ÇßÀ» ¶§ÀÇ Ã³¸®.
//*****************************************************************************
void CMsgWin::ManageCancelClick()
{
	CUIMng& rUIMng = CUIMng::Instance();

#ifdef LJH_ADD_ONETIME_PASSWORD
	switch (m_nMsgCode)
	{
		// À¯Àú°¡ OneTime Passwordµî·ÏÀ» °ÅÀýÇÏ¿´±â ¶§¹®¿¡ ±×³É ·Î±×ÀÎ 
		case MESSAGE_OTP_NOT_REGISTERED:
			SendingLoginInfoWOOPT();
			break;
	}
#endif //LJH_ADD_ONETIME_PASSWORD

	m_nMsgCode = -1;
	rUIMng.HideWin(this);
}

//*****************************************************************************
// ÇÔ¼ö ÀÌ¸§ : InitResidentNumInput()
// ÇÔ¼ö ¼³¸í : ÁÖ¹Îµî·Ï¹øÈ£ ÀÔ·Â ÃÊ±âÈ­.
//*****************************************************************************
void CMsgWin::InitResidentNumInput()
{
	::ClearInput();
	InputEnable = true;
	InputNumber = 1;
	InputTextMax[0] = g_iLengthAuthorityCode;
	InputTextHide[0] = 1;

	if (g_iChatInputType == 1)
	{
		g_pSinglePasswdInputBox->SetState(UISTATE_NORMAL);

#ifdef KJH_MOD_NATION_LANGUAGE_REDEFINE
	g_pSinglePasswdInputBox->SetBackColor(0, 0, 0, 0);
	
//----------------------------------------------------------------------------- Kor
// Kor
#ifdef _LANGUAGE_KOR
	g_pSinglePasswdInputBox->SetOption(UIOPTION_NUMBERONLY);
	g_pSinglePasswdInputBox->SetTextLimit(7);

//----------------------------------------------------------------------------- Eng
// Eng
#elif _LANGUAGE_ENG
	g_pSinglePasswdInputBox->SetOption(UIOPTION_NULL);
#ifdef LDK_MOD_PASSWORD_LENGTH_20
	g_pSinglePasswdInputBox->SetTextLimit(10);
#else // LDK_MOD_PASSWORD_LENGTH_20
	g_pSinglePasswdInputBox->SetTextLimit(7);
#endif // LDK_MOD_PASSWORD_LENGTH_20

//----------------------------------------------------------------------------- Tai
// Tai
#elif _LANGUAGE_TAI
	g_pSinglePasswdInputBox->SetOption(UIOPTION_SERIALNUMBER);
	g_pSinglePasswdInputBox->SetTextLimit(10);

//----------------------------------------------------------------------------- Chs
// Chs
#elif _LANGUAGE_CHS
	g_pSinglePasswdInputBox->SetOption(UIOPTION_SERIALNUMBER);
	g_pSinglePasswdInputBox->SetTextLimit(7);

//----------------------------------------------------------------------------- Jpn
// Jpn
#elif _LANGUAGE_JPN
	g_pSinglePasswdInputBox->SetOption(UIOPTION_NUMBERONLY);
	g_pSinglePasswdInputBox->SetTextLimit(8);

//----------------------------------------------------------------------------- Tha
// Tha
#elif _LANGUAGE_THA
	g_pSinglePasswdInputBox->SetOption(UIOPTION_NUMBERONLY);
	g_pSinglePasswdInputBox->SetTextLimit(7);

//----------------------------------------------------------------------------- Phi
// Phi
#elif _LANGUAGE_PHI
	g_pSinglePasswdInputBox->SetOption(UIOPTION_NUMBERONLY);
	g_pSinglePasswdInputBox->SetTextLimit(7);

//----------------------------------------------------------------------------- Vie
// Vie
#elif _LANGUAGE_VIE
	g_pSinglePasswdInputBox->SetOption(UIOPTION_NUMBERONLY);
	g_pSinglePasswdInputBox->SetTextLimit(7);

#endif
//-----------------------------------------------------------------------------

#else // KJH_MOD_NATION_LANGUAGE_REDEFINE
#if (SELECTED_LANGUAGE == LANGUAGE_TAIWANESE) || ( SELECTED_LANGUAGE==LANGUAGE_CHINESE )
		// ´ë¸¸, Áß±¹
		g_pSinglePasswdInputBox->SetOption(UIOPTION_SERIALNUMBER);
#elif ( SELECTED_LANGUAGE == LANGUAGE_ENGLISH )
		// ¹Ì±¹
		g_pSinglePasswdInputBox->SetOption(UIOPTION_NULL);
#else // (SELECTED_LANGUAGE == LANGUAGE_TAIWANESE) || ( SELECTED_LANGUAGE==LANGUAGE_CHINESE )
		// ÇÑ±¹
		g_pSinglePasswdInputBox->SetOption(UIOPTION_NUMBERONLY);
#endif // (SELECTED_LANGUAGE == LANGUAGE_TAIWANESE) || ( SELECTED_LANGUAGE==LANGUAGE_CHINESE )

		g_pSinglePasswdInputBox->SetBackColor(0, 0, 0, 0);

#if (SELECTED_LANGUAGE == LANGUAGE_JAPANESE)
		// ßïîíèÿ
		g_pSinglePasswdInputBox->SetTextLimit(8);
#elif (SELECTED_LANGUAGE == LANGUAGE_TAIWANESE)
		// ´ë¸¸
		g_pSinglePasswdInputBox->SetTextLimit(10);

#elif defined( LDK_MOD_PASSWORD_LENGTH_20 ) && ( SELECTED_LANGUAGE == LANGUAGE_ENGLISH )
		// ¹Ì±¹
		g_pSinglePasswdInputBox->SetTextLimit(20);
#else // (SELECTED_LANGUAGE == LANGUAGE_JAPANESE)
		// ÇÑ±¹
		g_pSinglePasswdInputBox->SetTextLimit(7);
#endif	// (SELECTED_LANGUAGE == LANGUAGE_JAPANESE)
#endif // KJH_MOD_NATION_LANGUAGE_REDEFINE

		g_pSinglePasswdInputBox->GiveFocus();
	}
}

//*****************************************************************************
// ÇÔ¼ö ÀÌ¸§ : RequestDeleteCharacter()
// ÇÔ¼ö ¼³¸í : Ä³¸¯ÅÍ »èÁ¦ ¿äÃ».
//*****************************************************************************
void CMsgWin::RequestDeleteCharacter()
{
	if (g_iChatInputType == 1)
	{
		g_pSinglePasswdInputBox->GetText(InputText[0]);
		g_pSinglePasswdInputBox->SetText(NULL);
		g_pSinglePasswdInputBox->SetState(UISTATE_HIDE);
	}
	InputEnable = false;
	SendRequestDeleteCharacter(CharactersClient[SelectedHero].ID, InputText[0]);
}

#ifdef LJH_ADD_ONETIME_PASSWORD
//*****************************************************************************
// ÇÔ¼ö ÀÌ¸§ :	ReturnToConnServerWin()
// ÇÔ¼ö ¼³¸í :	OPT ¹Ìµî·Ï À¯Àú°¡ µî·Ï(YES)¹öÆ°À» Å¬¸¯.
//				°ÔÀÓ ¼­¹ö Á¢¼ÓÀ» ²÷°í Á¢¼Ó ¼­¹ö¿¡ ´Ù½Ã ¿¬°á.
//*****************************************************************************
void CMsgWin::ReturnToConnServerWin()
{
	SocketClient.Close();		// °ÔÀÓ ¼­¹ö Á¢¼ÓÀ» ²÷À½.
	LogIn = 0;
	CurrentProtocolState = REQUEST_JOIN_SERVER;

	// Á¢¼Ó ¼­¹ö¿¡ ´Ù½Ã ¿¬°á.
    ::CreateSocket(szServerIpAddress, g_ServerPort);

	ClearLoginInfoFromInputBox();
}

//*****************************************************************************
// ÇÔ¼ö ÀÌ¸§ : SendingLoginInfoWOOPT()
// ÇÔ¼ö ¼³¸í : ¼­¹ö¿¡ ·Î±×ÀÎ¿¡ ÇÊ¿äÇÑ Á¤º¸µé Àü¼Û W/O OneTime Password.
//*****************************************************************************
void CMsgWin::SendingLoginInfoWOOPT()
{
	if (CurrentProtocolState == REQUEST_JOIN_SERVER)
		return;

	CUIMng::Instance().HideWin(this);	// ·Î±×ÀÎ Ã¢À» ´ÝÀ½.

	char	szID[MAX_ID_SIZE+1];
	char	szPW[MAX_ID_SIZE+1];
	char	szOTP[MAX_ONETIME_PASSWORD_SIZE+1];
	memset( szID, 0, sizeof(char) * MAX_ID_SIZE+1 );
	memset( szPW, 0, sizeof(char) * MAX_ID_SIZE+1 );
	memset( szOTP, 0, sizeof(char) * MAX_ONETIME_PASSWORD_SIZE+1 );
	
	if (CurrentProtocolState == REQUEST_LOG_IN)
	{
#ifdef CONSOLE_DEBUG
		g_ConsoleDebug->Write( MCD_NORMAL, "Sending OTP to Server: (ID)%s", szID);
#endif //CONSOLE_DEBUG
		// ¼­¹ö¿¡ OneTime Password Àü¼Û.
		g_ErrorReport.Write("> Sending OTP \"%s\"\r\n", szID);
		// SendRequestOTP() ¾È¿¡¼­ LogIn = 1À» ÇØÁÜ.
		CUIMng::Instance().m_LoginWin.GetIDInputBox()->GetText(szID, MAX_ID_SIZE+1);
		CUIMng::Instance().m_LoginWin.GetPassInputBox()->GetText(szPW, MAX_ID_SIZE+1);
	
		SendRequestOTP(szID, szPW, szOTP, 0x02);
	}
}

//*****************************************************************************
// ÇÔ¼ö ÀÌ¸§ : ClearLoginInfoFromInputBox()
// ÇÔ¼ö ¼³¸í : for better security, remove the password and OneTime Password from the inputbox.
//*****************************************************************************
void CMsgWin::ClearLoginInfoFromInputBox()
{
		CUIMng::Instance().m_LoginWin.GetPassInputBox()->SetText(NULL);
		CUIMng::Instance().m_OneTimePasswordWin.GetOTPInputBox()->SetText(NULL);
}
#endif //LJH_ADD_ONETIME_PASSWORD