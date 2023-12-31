// MsgBoxIGSUseBuffConfirm.cpp: implementation of the CMsgBoxIGSUseBuffConfirm class.
//
//////////////////////////////////////////////////////////////////////


#include "stdafx.h"

#ifdef KJH_ADD_INGAMESHOP_UI_SYSTEM

#include "MsgBoxIGSUseBuffConfirm.h"

#include "wsclientinline.h"
#include "DSPlaySound.h"


//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////
CMsgBoxIGSUseBuffConfirm::CMsgBoxIGSUseBuffConfirm()
{
#ifdef KJH_MOD_INGAMESHOP_PATCH_091028
	m_iMiddleCount = 5;
#else // KJH_MOD_INGAMESHOP_PATCH_091028
	m_iMiddleCount = 4;
#endif // KJH_MOD_INGAMESHOP_PATCH_091028

	for(int i=0 ; i<UIMAX_TEXT_LINE ; i++ )
	{
		m_szDescription[i][0] = '\0';	
	}
	
	m_iStorageSeq		= 0;		// 보관함 순번
	m_iStorageItemSeq	= 0;		// 보관함 상품 순번
	m_wItemCode			= -1;		// 아이템 코드
	m_szItemType		= '\0';		// 상품구분 (C : 캐시, P : 상품)
}

CMsgBoxIGSUseBuffConfirm::~CMsgBoxIGSUseBuffConfirm()
{
	Release();
}

//--------------------------------------------
// Create
bool CMsgBoxIGSUseBuffConfirm::Create(float fPriority)
{
	LoadImages();

	SetAddCallbackFunc();
	
	CNewUIMessageBoxBase::Create((IMAGE_IGS_WINDOW_WIDTH/2)-(IMAGE_IGS_FRAME_WIDTH/2), 
		(IMAGE_IGS_WINDOW_HEIGHT/2)-(IMAGE_IGS_FRAME_HEIGHT/2), 
		IMAGE_IGS_FRAME_WIDTH, IMAGE_IGS_FRAME_HEIGHT, fPriority);
	
	SetButtonInfo();

	SetMsgBackOpacity();
	
	return true;
}

//--------------------------------------------
// Initialize
void CMsgBoxIGSUseBuffConfirm::Initialize(int iStorageSeq, int iStorageItemSeq, WORD wItemCode, 
										  unicode::t_char szItemType, unicode::t_char* pszItemName, unicode::t_char* pszBuffName)
{
	unicode::t_char szText[256] = { 0, };

	m_iStorageSeq		= iStorageSeq;
	m_iStorageItemSeq	= iStorageItemSeq;
	m_wItemCode			= wItemCode;
	m_szItemType		= szItemType;
	strcpy(m_szCurrentBuffName, pszBuffName);

	// Description
	// "\'%s\' 아이템을 사용하면,#현재 적용중인 \'%s\'버프가 사라집니다.##\'%s\' 아이템을 사용하시겠습니까?"
	sprintf(szText, GlobalText[3047], 
				pszItemName, pszBuffName, pszItemName);
 	m_iDesciptionLine = ::DivideStringByPixel(&m_szDescription[0][0], UIMAX_TEXT_LINE, MAX_TEXT_LENGTH, szText, IGS_TEXT_DIVIDE_WIDTH, false, '#');
}

//--------------------------------------------
// Release
void CMsgBoxIGSUseBuffConfirm::Release()
{
	CNewUIMessageBoxBase::Release();

	UnloadImages();
}

//--------------------------------------------
// Update
bool CMsgBoxIGSUseBuffConfirm::Update()
{
	m_BtnOk.Update();
	m_BtnCancel.Update();

	return true;
}

//--------------------------------------------
// Render
bool CMsgBoxIGSUseBuffConfirm::Render()
{
	EnableAlphaTest();
	glColor4f(1.0f, 1.0f, 1.0f, 1.0f);

	RenderMsgBackColor(true);

	RenderFrame();
	RenderTexts();
	RenderButtons();
	DisableAlphaBlend();
	return true;
}

//--------------------------------------------
// LButtonUp
CALLBACK_RESULT CMsgBoxIGSUseBuffConfirm::LButtonUp(class CNewUIMessageBoxBase* pOwner, const leaf::xstreambuf& xParam)
{
	CMsgBoxIGSUseBuffConfirm* pOwnMsgBox = dynamic_cast<CMsgBoxIGSUseBuffConfirm*>(pOwner);

	if(pOwnMsgBox)
	{
		if(pOwnMsgBox->m_BtnOk.IsMouseIn() == true)
		{
			g_MessageBox->SendEvent(pOwner, MSGBOX_EVENT_USER_COMMON_OK);
			return CALLBACK_BREAK;
		}

		if(pOwnMsgBox->m_BtnCancel.IsMouseIn() == true)
		{
			g_MessageBox->SendEvent(pOwner, MSGBOX_EVENT_USER_COMMON_CANCEL);
			return CALLBACK_BREAK;
		}
	}

	return CALLBACK_CONTINUE;
}

//--------------------------------------------
// OKButtonDown
CALLBACK_RESULT CMsgBoxIGSUseBuffConfirm::OKButtonDown(class CNewUIMessageBoxBase* pOwner, const leaf::xstreambuf& xParam)
{
	CMsgBoxIGSUseBuffConfirm* pOwnMsgBox = dynamic_cast<CMsgBoxIGSUseBuffConfirm*>(pOwner);
	
	SendRequestIGS_UseStorageItem(pOwnMsgBox->m_iStorageSeq, pOwnMsgBox->m_iStorageItemSeq, pOwnMsgBox->m_wItemCode, &(pOwnMsgBox->m_szItemType));
	SendRequestIGS_CashPointInfo();			// 사용자의 캐시 포인트 정보 요청
	
	PlayBuffer(SOUND_CLICK01);
	g_MessageBox->SendEvent(pOwner, MSGBOX_EVENT_DESTROY);

	return CALLBACK_BREAK;
}

//--------------------------------------------
// CancelButtonDown
CALLBACK_RESULT CMsgBoxIGSUseBuffConfirm::CancelButtonDown(class CNewUIMessageBoxBase* pOwner, const leaf::xstreambuf& xParam)
{
	PlayBuffer(SOUND_CLICK01);
	g_MessageBox->SendEvent(pOwner, MSGBOX_EVENT_DESTROY);

	return CALLBACK_BREAK;
}

//--------------------------------------------
// SetAddCallbackFunc
void CMsgBoxIGSUseBuffConfirm::SetAddCallbackFunc()
{
	AddCallbackFunc(CMsgBoxIGSUseBuffConfirm::LButtonUp, MSGBOX_EVENT_MOUSE_LBUTTON_UP);
	AddCallbackFunc(CMsgBoxIGSUseBuffConfirm::OKButtonDown, MSGBOX_EVENT_USER_COMMON_OK);
	AddCallbackFunc(CMsgBoxIGSUseBuffConfirm::CancelButtonDown, MSGBOX_EVENT_USER_COMMON_CANCEL);
}

//--------------------------------------------
// SetButtonInfo
void CMsgBoxIGSUseBuffConfirm::SetButtonInfo()
{
	// 확인 버튼
	m_BtnOk.SetInfo(IMAGE_IGS_BUTTON, GetPos().x+IGS_BTN_OK_POS_X, GetPos().y+IGS_BTN_POS_Y, 
						IMAGE_IGS_BTN_WIDTH, IMAGE_IGS_BTN_HEIGHT, CNewUIMessageBoxButton::MSGBOX_BTN_CUSTOM, true);
	m_BtnOk.MoveTextPos(0, -1);
	m_BtnOk.SetText(GlobalText[228]);	
	
	// 취소 버튼
	m_BtnCancel.SetInfo(IMAGE_IGS_BUTTON, GetPos().x+IGS_BTN_CANCEL_POS_X, GetPos().y+IGS_BTN_POS_Y, 
						IMAGE_IGS_BTN_WIDTH, IMAGE_IGS_BTN_HEIGHT, CNewUIMessageBoxButton::MSGBOX_BTN_CUSTOM, true);
	m_BtnCancel.MoveTextPos(0, -1);
	m_BtnCancel.SetText(GlobalText[229]);	
}

//--------------------------------------------
// RenderFrame
void CMsgBoxIGSUseBuffConfirm::RenderFrame()
{
	int iY;
	
	RenderImage(IMAGE_IGS_BACK, GetPos().x, GetPos().y, IMAGE_IGS_FRAME_WIDTH, IMAGE_IGS_FRAME_HEIGHT);
	RenderImage(IMAGE_IGS_UP, GetPos().x, GetPos().y, IMAGE_IGS_FRAME_WIDTH, IMAGE_IGS_UP_HEIGHT);

	iY = GetPos().y + IMAGE_IGS_UP_HEIGHT;

	for(int i=0; i<m_iMiddleCount; ++i)
	{
		RenderImage(IMAGE_IGS_LEFTLINE, GetPos().x, iY, IMAGE_IGS_LINE_WIDTH, IMAGE_IGS_LINE_HEIGHT);
		RenderImage(IMAGE_IGS_RIGHTLINE, GetPos().x+IMAGE_IGS_FRAME_WIDTH-IMAGE_IGS_LINE_WIDTH, iY, 
						IMAGE_IGS_LINE_WIDTH, IMAGE_IGS_LINE_HEIGHT);
		iY += IMAGE_IGS_LINE_HEIGHT;
	}

	RenderImage(IMAGE_IGS_DOWN, GetPos().x, iY, IMAGE_IGS_FRAME_WIDTH, IMAGE_IGS_DOWN_HEIGHT);
}

//--------------------------------------------
// RenderTexts
void CMsgBoxIGSUseBuffConfirm::RenderTexts()
{
	g_pRenderText->SetBgColor(0, 0, 0, 0);
	g_pRenderText->SetTextColor(255, 255, 255, 255);
	g_pRenderText->SetFont(g_hFontBold);

	// Title - "사용 확인"
	g_pRenderText->RenderText(GetPos().x, GetPos().y+IGS_TEXT_TITLE_Y, GlobalText[3046], IMAGE_IGS_FRAME_WIDTH, 0, RT3_SORT_CENTER);

	g_pRenderText->SetFont(g_hFont);

	// Decription
 	for ( int i = 0; i < m_iDesciptionLine; ++i)
 	{
 		g_pRenderText->RenderText(GetPos().x+IGS_TEXT_DESCRIPTION_POS_X, GetPos().y+IGS_TEXT_DESCRIPTION_POS_Y+(i*IGS_TEXT_DESCRIPTION_INTERVAL), 
									m_szDescription[i], IGS_TEXT_DESCRIPTION_WIDTH, 0, RT3_SORT_LEFT);
 	}
	
#ifdef FOR_WORK
	unicode::t_char szText[256] = { 0, };
	g_pRenderText->SetTextColor(255, 0, 0, 255);
	sprintf(szText, "m_iStorageSeq : %d", m_iStorageSeq);
	g_pRenderText->RenderText(GetPos().x+IMAGE_IGS_FRAME_WIDTH, GetPos().y+10, szText, 150, 0, RT3_SORT_LEFT);
	sprintf(szText, "m_iStorageItemSeq : %d", m_iStorageItemSeq);
	g_pRenderText->RenderText(GetPos().x+IMAGE_IGS_FRAME_WIDTH, GetPos().y+20, szText, 150, 0, RT3_SORT_LEFT);
	sprintf(szText, "m_wItemCode : %d", m_wItemCode);
	g_pRenderText->RenderText(GetPos().x+IMAGE_IGS_FRAME_WIDTH, GetPos().y+30, szText, 150, 0, RT3_SORT_LEFT);
	sprintf(szText, "m_szItemType : %c", m_szItemType);
	g_pRenderText->RenderText(GetPos().x+IMAGE_IGS_FRAME_WIDTH, GetPos().y+40, szText, 150, 0, RT3_SORT_LEFT);
#endif // FOR_WORK
}

//--------------------------------------------
// RenderButtons
void CMsgBoxIGSUseBuffConfirm::RenderButtons()
{
	m_BtnOk.Render();
	m_BtnCancel.Render();
}

//--------------------------------------------
// LoadImages
void CMsgBoxIGSUseBuffConfirm::LoadImages()
{
	LoadBitmap("Interface\\InGameShop\\Ingame_Bt03.tga",	IMAGE_IGS_BUTTON, GL_LINEAR);
	LoadBitmap("Interface\\newui_msgbox_back.jpg", IMAGE_IGS_BACK, GL_LINEAR);
	LoadBitmap("Interface\\newui_item_back03.tga", IMAGE_IGS_DOWN, GL_LINEAR);	
	LoadBitmap("Interface\\newui_option_top.tga", IMAGE_IGS_UP, GL_LINEAR);	
	LoadBitmap("Interface\\newui_option_back06(L).tga", IMAGE_IGS_LEFTLINE, GL_LINEAR);	
	LoadBitmap("Interface\\newui_option_back06(R).tga", IMAGE_IGS_RIGHTLINE, GL_LINEAR);
}

//--------------------------------------------
// UnloadImages
void CMsgBoxIGSUseBuffConfirm::UnloadImages()
{
	DeleteBitmap(IMAGE_IGS_BUTTON);
	DeleteBitmap(IMAGE_IGS_BACK);
	DeleteBitmap(IMAGE_IGS_DOWN);	
	DeleteBitmap(IMAGE_IGS_UP);	
	DeleteBitmap(IMAGE_IGS_LEFTLINE);	
	DeleteBitmap(IMAGE_IGS_RIGHTLINE);
}

////////////////////////////////////////////////////////////////////
// LayOut
////////////////////////////////////////////////////////////////////
bool CMsgBoxIGSUseBuffConfirmLayout::SetLayout()
{
	CMsgBoxIGSUseBuffConfirm* pMsgBox = GetMsgBox();
	if(false == pMsgBox)
		return false;
	
	if(false == pMsgBox->Create())
		return false;
	
	return true;
}

#endif KJH_ADD_INGAMESHOP_UI_SYSTEM