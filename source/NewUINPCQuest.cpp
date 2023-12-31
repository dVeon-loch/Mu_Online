//*****************************************************************************
// File: NewUINPCQuest.cpp
//
// Desc: implementation of the NewUINPCQuest class.
//
// producer: Ahn Sang-Kyu
//*****************************************************************************

#include "stdafx.h"
#include "NewUINPCQuest.h"
#include "NewUISystem.h"
#include "CSQuest.h"
#include "wsclientinline.h"

extern bool bCheckNPC;
extern int g_iNumLineMessageBoxCustom;
extern int g_iNumAnswer;
extern char g_lpszMessageBoxCustom[NUM_LINE_CMB][MAX_LENGTH_CMB];
extern char g_lpszDialogAnswer[MAX_ANSWER_FOR_DIALOG][NUM_LINE_DA][MAX_LENGTH_CMB];
extern int g_iCurrentDialogScript;

using namespace SEASON3B;

//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////

CNewUINPCQuest::CNewUINPCQuest()
{
	m_pNewUIMng = NULL;
	m_pNewUI3DRenderMng = NULL;
	m_Pos.x = m_Pos.y = 0;
}

CNewUINPCQuest::~CNewUINPCQuest()
{
	Release();
}

//*****************************************************************************
// 함수 이름 : Create()
// 함수 설명 : NPC 퀘스트 창 생성.
// 매개 변수 : pNewUIMng	: CNewUIManager 오브젝트 주소.
//			   x			: x 좌표.
//			   y			: y 좌표.
//*****************************************************************************
bool CNewUINPCQuest::Create(CNewUIManager* pNewUIMng,
							CNewUI3DRenderMng* pNewUI3DRenderMng, int x, int y)
{
	if (NULL == pNewUIMng || NULL == pNewUI3DRenderMng
		|| NULL == g_pNewItemMng)
		return false;

	m_pNewUIMng = pNewUIMng;
	m_pNewUIMng->AddUIObj(SEASON3B::INTERFACE_NPCQUEST, this);

	m_pNewUI3DRenderMng = pNewUI3DRenderMng;
	m_pNewUI3DRenderMng->Add3DRenderObj(this, INVENTORY_CAMERA_Z_ORDER);

	SetPos(x, y);

	LoadImages();

	// 퀘스트 처리 버튼.
	m_btnComplete.ChangeText(GlobalText[699]);
	m_btnComplete.ChangeButtonImgState(true, IMAGE_NPCQUEST_BTN_COMPLETE, true);
	m_btnComplete.ChangeButtonInfo(x + 41, y + 355, 108, 29);

	// 닫기 버튼.
	m_btnClose.ChangeButtonImgState(true, IMAGE_NPCQUEST_BTN_CLOSE);
	m_btnClose.ChangeButtonInfo(x + 13, y + 392, 36, 29);
	m_btnClose.ChangeToolTipText(GlobalText[1002], true);

	Show(false);	

	return true;
}

//*****************************************************************************
// 함수 이름 : Release()
// 함수 설명 : 창 Release.
//*****************************************************************************
void CNewUINPCQuest::Release()
{
	UnloadImages();

	if (m_pNewUI3DRenderMng)
	{
		m_pNewUI3DRenderMng->Remove3DRenderObj(this);
		m_pNewUI3DRenderMng = NULL;
	}
	
	if (m_pNewUIMng)
	{
		m_pNewUIMng->RemoveUIObj(this);
		m_pNewUIMng = NULL;
	}
}

//*****************************************************************************
// 함수 이름 : SetPos()
// 함수 설명 : 창 위치 지정.
//*****************************************************************************
void CNewUINPCQuest::SetPos(int x, int y)
{
	m_Pos.x = x;
	m_Pos.y = y;
}

//*****************************************************************************
// 함수 이름 : UpdateMouseEvent()
// 함수 설명 : 마우스 이벤트 처리.
// 반환 값	 : true면 창 뒤로도 이벤트를 처리.
//*****************************************************************************
bool CNewUINPCQuest::UpdateMouseEvent()
{
	if (ProcessBtns())
		return false;

	if (UpdateSelTextMouseEvent())
		return false;

	// 창 영역 클릭시 하위 UI처리 및 이동 불가
	if(CheckMouseIn(m_Pos.x, m_Pos.y, NPCQUEST_WIDTH, NPCQUEST_HEIGHT))
		return false;

	return true;
}

//*****************************************************************************
// 함수 이름 : UpdateSelTextMouseEvent()
// 함수 설명 : 선택문 마우스 이벤트 처리.
// 반환 값	 : 처리 했으면 true.
//*****************************************************************************
bool CNewUINPCQuest::UpdateSelTextMouseEvent()
{
	BYTE byCurQuestIndex = g_csQuest.GetCurrQuestIndex();
	BYTE byCurQuestState = g_csQuest.getQuestState2(int(byCurQuestIndex));

	bool bErrorMessage = false;
	int iButtonPush = -1;
	int iTotalLine = g_iNumLineMessageBoxCustom + g_iNumAnswer;
	int yPos = m_Pos.y+66 + (NUM_LINE_CMB - iTotalLine)*18/2;
	
    yPos += 18 * g_iNumLineMessageBoxCustom;

    if (byCurQuestState != QUEST_ING)
    {
        yPos = m_Pos.y+250;
    }

	if (SEASON3B::IsRelease(VK_LBUTTON))
	{
		if (MouseY>=0 && (MouseY-yPos)<(18*g_iNumAnswer)
			&& abs(m_Pos.x+NPCQUEST_WIDTH/2-MouseX)<=(NPCQUEST_WIDTH/2))
		{
			iButtonPush = (MouseY - yPos) / 18;

            if (iButtonPush>=0)
            {
				int nAnswer
					= g_DialogScript[g_iCurrentDialogScript].m_iReturnForAnswer[iButtonPush];
			    // 서버에 보내기
			    if (1 == nAnswer)        //  다음 진행.
					bErrorMessage = g_csQuest.ProcessNextProgress();
                else if (2 == nAnswer)   //  창을 닫는다.
					g_pNewUISystem->Hide(SEASON3B::INTERFACE_NPCQUEST);
                else if (3 == nAnswer)   //  퀘스트 완료 신청.
                    SendRequestQuestState(byCurQuestIndex, 1);

                ::PlayBuffer(SOUND_INTERFACE01);

                // 다음 연결
				int nNextDialogIndex
					= g_DialogScript[g_iCurrentDialogScript].m_iLinkForAnswer[iButtonPush];
			    if (0 < nNextDialogIndex && !bErrorMessage)
                    g_csQuest.ShowDialogText(nNextDialogIndex);

				return false;
            }
        }
	}

	return false;
}

//*****************************************************************************
// 함수 이름 : UpdateKeyEvent()
// 함수 설명 : 키보드 입력 처리.
// 반환 값	 : true면 창 뒤로도 이벤트를 처리.
//*****************************************************************************
bool CNewUINPCQuest::UpdateKeyEvent()
{
	if(g_pNewUISystem->IsVisible(SEASON3B::INTERFACE_NPCQUEST) == true)
	{
		if(SEASON3B::IsPress(VK_ESCAPE) == true)
		{
			g_pNewUISystem->Hide(SEASON3B::INTERFACE_NPCQUEST);
			PlayBuffer(SOUND_CLICK01);

			return false;
		}
	}

	return true;
}

//*****************************************************************************
// 함수 이름 : Update()
// 함수 설명 : 기타 매 프레임 일어나는 이벤트 처리.
// 반환 값	 : true면 창 뒤로도 이벤트를 처리.
//*****************************************************************************
bool CNewUINPCQuest::Update()
{
	return true;
}

//*****************************************************************************
// 함수 이름 : Render()
// 함수 설명 : 창 렌더.
// 반환 값	 : true면 성공.
//*****************************************************************************
bool CNewUINPCQuest::Render()
{
	::EnableAlphaTest();

	::glColor4f(1.0f, 1.0f, 1.0f, 1.0f);

	RenderBackImage();

	BYTE byCurQuestIndex = g_csQuest.GetCurrQuestIndex();
	BYTE byCurQuestState = g_csQuest.getQuestState2(int(byCurQuestIndex));

	if (QUEST_ING == byCurQuestState)
	{
	// 구분 선.
		RenderImage(IMAGE_NPCQUEST_LINE, m_Pos.x+1, m_Pos.y+325, 188.f, 21.f);

		// 아이템 및 몬스터 이름 개수 텍스트 렌더.
		if (RenderItemMobText())	// 퀘스트 수행 조건을 만족 하는가?
		{
			m_btnComplete.UnLock();
			m_btnComplete.ChangeImgColor(BUTTON_STATE_UP, RGBA(255, 255, 255, 255));
			m_btnComplete.ChangeTextColor(RGBA(255, 230, 210, 255));
		}
		else
		{
			m_btnComplete.Lock();
			m_btnComplete.ChangeImgColor(BUTTON_STATE_UP, RGBA(100, 100, 100, 255));
			m_btnComplete.ChangeTextColor(RGBA(170, 170, 170, 255));
		}

		m_btnComplete.Render();
	}
	else if (QUEST_NO == byCurQuestState)
	{
	// 필요 젠.
		RenderImage(IMAGE_NPCQUEST_ZEN, m_Pos.x+11, m_Pos.y+361, 170.f, 24.f);

		g_pRenderText->SetFont(g_hFontBold);
		g_pRenderText->SetBgColor(0);

		g_pRenderText->SetTextColor(255, 220, 150, 255);
		g_pRenderText->RenderText(m_Pos.x+20, m_Pos.y+368, GlobalText[198]);

		unicode::t_char szTemp[128];
		g_pRenderText->SetTextColor(::getGoldColor(g_csQuest.GetNeedZen()));
		::ConvertGold(g_csQuest.GetNeedZen(), szTemp);
		g_pRenderText->RenderText(m_Pos.x+170, m_Pos.y+368, szTemp, 0, 0, RT3_WRITE_RIGHT_TO_LEFT);
	}

	RenderText();

	m_btnClose.Render();

	::DisableAlphaBlend();
	
	return true;
}

//*****************************************************************************
// 함수 이름 : RenderBackImage()
// 함수 설명 : 창 바탕 이미지 렌더.
//*****************************************************************************
void CNewUINPCQuest::RenderBackImage()
{
	RenderImage(IMAGE_NPCQUEST_BACK,
		m_Pos.x, m_Pos.y, float(NPCQUEST_WIDTH), float(NPCQUEST_HEIGHT));
	RenderImage(IMAGE_NPCQUEST_TOP,
		m_Pos.x, m_Pos.y, float(NPCQUEST_WIDTH), 64.f);
	RenderImage(IMAGE_NPCQUEST_LEFT,
		m_Pos.x, m_Pos.y+64, 21.f, 320.f);
	RenderImage(IMAGE_NPCQUEST_RIGHT,
		m_Pos.x+NPCQUEST_WIDTH-21, m_Pos.y+64, 21.f, 320.f);
	RenderImage(IMAGE_NPCQUEST_BOTTOM,
		m_Pos.x, m_Pos.y+NPCQUEST_HEIGHT-45, float(NPCQUEST_WIDTH), 45.f);

	RenderImage(IMAGE_NPCQUEST_LINE, m_Pos.x+1, m_Pos.y+220, 188.f, 21.f);
}

//*****************************************************************************
// 함수 이름 : RenderText()
// 함수 설명 : 텍스트 렌더.
//*****************************************************************************
void CNewUINPCQuest::RenderText()
{
	BYTE byCurQuestIndex = g_csQuest.GetCurrQuestIndex();
	BYTE byCurQuestState = g_csQuest.getQuestState2(int(byCurQuestIndex));

	g_pRenderText->SetFont(g_hFont);
	g_pRenderText->SetBgColor(0);

// NPC 이름.
	g_pRenderText->SetTextColor(150, 255, 240, 255);
	if ((Hero->Class == CLASS_DARK_LORD || Hero->Class == CLASS_DARK
#ifdef PBG_ADD_NEWCHAR_MONK
		|| Hero->Class == CLASS_RAGEFIGHTER
#endif //PBG_ADD_NEWCHAR_MONK
		)
		&& bCheckNPC)
		g_pRenderText->RenderText(m_Pos.x, m_Pos.y+16,
			g_csQuest.GetNPCName(2), NPCQUEST_WIDTH, 0, RT3_SORT_CENTER);
	else
		g_pRenderText->RenderText(m_Pos.x, m_Pos.y+16,
			g_csQuest.GetNPCName(byCurQuestIndex), NPCQUEST_WIDTH, 0,
			RT3_SORT_CENTER);

// 퀘스트 이름.
	g_pRenderText->SetTextColor(200, 220, 255, 255);
	if ((Hero->Class != CLASS_DARK_LORD && Hero->Class != CLASS_DARK
#ifdef PBG_ADD_NEWCHAR_MONK
		&& Hero->Class != CLASS_RAGEFIGHTER
#endif //PBG_ADD_NEWCHAR_MONK
		)
		|| !bCheckNPC)
		g_pRenderText->RenderText(m_Pos.x, m_Pos.y+29,
			g_csQuest.getQuestTitle(), NPCQUEST_WIDTH, 0, RT3_SORT_CENTER);

// 퀘스트 내용.
	g_pRenderText->SetTextColor(255, 230, 210, 255);
	int iTotalLine = g_iNumLineMessageBoxCustom + g_iNumAnswer;
    int xPos = m_Pos.x+NPCQUEST_WIDTH/2;
    int yPos = m_Pos.y+66 + (NUM_LINE_CMB - iTotalLine)*18/2;
    for (int j = 0; j < g_iNumLineMessageBoxCustom; ++j)
	{
		g_pRenderText->RenderText(xPos, yPos, g_lpszMessageBoxCustom[j], 0, 0,
			RT3_WRITE_CENTER);
		yPos += 18;
	}

// 선택문.
    if (byCurQuestState != QUEST_ING)
        yPos = m_Pos.y+250;

	int iButtonOn = (MouseY - yPos) / 18;

	g_pRenderText->SetFont(g_hFontBold);

#ifdef _VS2008PORTING
	for (int j = 0; j < g_iNumAnswer; ++j)
#else // _VS2008PORTING
	for (j = 0; j < g_iNumAnswer; ++j)
#endif // _VS2008PORTING
	{
		if (iButtonOn == j && abs(m_Pos.x + NPCQUEST_WIDTH/2 - MouseX) <= NPCQUEST_WIDTH/2)
			g_pRenderText->SetTextColor(255, 0, 0, 255);
		else
			g_pRenderText->SetTextColor(223, 191, 103, 255);

		for (int k = 0; k < NUM_LINE_DA && g_lpszDialogAnswer[j][k][0]; ++k)
		{
			g_pRenderText->RenderText(xPos, yPos, g_lpszDialogAnswer[j][k],
				0, 0, RT3_WRITE_CENTER);
			yPos += 18;
		}
	}
}

//*****************************************************************************
// 함수 이름 : GetKillMobCount()
// 함수 설명 : 진행 중인 아이템 또는 몬스터 이름과 개수 텍스트 렌더.
// 반환 값	 : 퀘스트 요구 만족시 true. 
//*****************************************************************************
bool CNewUINPCQuest::RenderItemMobText()
{
	// 퀘스트가 요구하는 아이템 수 또는 몬스터 kill수가 만족하는지 여부.
	bool bCompletion = true;

	unicode::t_char szTemp[128];
	int nPosY = m_Pos.y+244;

	g_pRenderText->SetFont(g_hFontBold);
	g_pRenderText->SetBgColor(0);

    QUEST_ATTRIBUTE* pQuest = g_csQuest.GetCurQuestAttribute();
	int nClass = ::GetBaseClass(Hero->Class);

    for (int i = 0; i < pQuest->shQuestConditionNum; ++i)
    {
        if (!pQuest->QuestAct[i].byRequestClass[nClass])
			continue;

        switch (pQuest->QuestAct[i].byQuestType)
        {
        case QUEST_ITEM:
            {
				int nItemType = (pQuest->QuestAct[i].wItemType*MAX_ITEM_INDEX)
						+ pQuest->QuestAct[i].byItemSubType;
                int nItemNum = pQuest->QuestAct[i].byItemNum;
                int nItemLevel = pQuest->QuestAct[i].byItemLevel;

                if (!g_csQuest.FindQuestItemsInInven(nItemType, nItemNum, nItemLevel))
					g_pRenderText->SetTextColor(223, 191, 103, 255);
                else
				{
					g_pRenderText->SetTextColor(255, 30, 30, 255);
					bCompletion = false;
				}

				unicode::t_char szItemName[128];
				GetItemName(nItemType, nItemLevel, szItemName);
                unicode::_sprintf(szTemp, "%s x %d", szItemName, nItemNum);
				g_pRenderText->RenderText(m_Pos.x+60, nPosY, szTemp);
            }
            break;

        case QUEST_MONSTER:
            {
				int nKillMobCount
					= g_csQuest.GetKillMobCount(int(pQuest->QuestAct[i].wItemType));

				if (int(pQuest->QuestAct[i].byItemNum) <= nKillMobCount)
				{
					g_pRenderText->SetTextColor(223, 191, 103, 255);
					// UI에선 퀘스트 요구 몬스터 개수를 넘지 말아야 함.
					nKillMobCount = int(pQuest->QuestAct[i].byItemNum);
				}
				else
				{
					g_pRenderText->SetTextColor(255, 30, 30, 255);
					bCompletion = false;
				}

				unicode::_sprintf(szTemp, "%s x %d/%d",
					::getMonsterName(int(pQuest->QuestAct[i].wItemType)),
					nKillMobCount, int(pQuest->QuestAct[i].byItemNum));

				g_pRenderText->RenderText(m_Pos.x+50, nPosY, szTemp);
            }
            break;
        }

		nPosY += 32;
    }

	return bCompletion;
}

//*****************************************************************************
// 함수 이름 : RenderItem3D()
// 함수 설명 : 퀘스트 완료에 필요한 아이템 렌더.
//*****************************************************************************
void CNewUINPCQuest::RenderItem3D()
{
	BYTE byCurQuestIndex = g_csQuest.GetCurrQuestIndex();
	BYTE byCurQuestState = g_csQuest.getQuestState2(int(byCurQuestIndex));

	if (QUEST_ING != byCurQuestState)
		return;
	
    float x = float(m_Pos.x+30);
    float y = float(m_Pos.y+235);
	const float Height = 27.f;

    QUEST_ATTRIBUTE* pQuest = g_csQuest.GetCurQuestAttribute();
	int nClass = ::GetBaseClass(Hero->Class);

    for (int i = 0; i < pQuest->shQuestConditionNum; ++i)
    {
        if (!pQuest->QuestAct[i].byRequestClass[nClass])
			continue;

        if (QUEST_ITEM == pQuest->QuestAct[i].byQuestType)
        {
			int nItemType = (pQuest->QuestAct[i].wItemType*MAX_ITEM_INDEX)
					+ pQuest->QuestAct[i].byItemSubType;
#ifndef KWAK_FIX_COMPILE_LEVEL4_WARNING_EX
            int nItemNum = pQuest->QuestAct[i].byItemNum;
#endif // KWAK_FIX_COMPILE_LEVEL4_WARNING_EX
            int nItemLevel = pQuest->QuestAct[i].byItemLevel;

            ::RenderItem3D(x, y, 20.f, Height, nItemType, nItemLevel<<3, 0, 0, false);

            y += Height+5.f;
        }
    }
}

void CNewUINPCQuest::Render3D()
{
	RenderItem3D();
}

bool CNewUINPCQuest::IsVisible() const
{ return CNewUIObj::IsVisible(); }

//*****************************************************************************
// 함수 이름 : GetLayerDepth()
// 함수 설명 : 창의 레이어값을 얻음.
//*****************************************************************************
float CNewUINPCQuest::GetLayerDepth()
{
	return 3.1f;
}

//*****************************************************************************
// 함수 이름 : LoadImages()
// 함수 설명 : 이미지 리소스 로드.
//*****************************************************************************
void CNewUINPCQuest::LoadImages()
{
	LoadBitmap("Interface\\newui_msgbox_back.jpg", IMAGE_NPCQUEST_BACK, GL_LINEAR);
	LoadBitmap("Interface\\newui_item_back04.tga", IMAGE_NPCQUEST_TOP, GL_LINEAR);
	LoadBitmap("Interface\\newui_item_back02-L.tga", IMAGE_NPCQUEST_LEFT, GL_LINEAR);
	LoadBitmap("Interface\\newui_item_back02-R.tga", IMAGE_NPCQUEST_RIGHT, GL_LINEAR);
	LoadBitmap("Interface\\newui_item_back03.tga", IMAGE_NPCQUEST_BOTTOM, GL_LINEAR);

	LoadBitmap("Interface\\newui_myquest_Line.tga", IMAGE_NPCQUEST_LINE, GL_LINEAR);
	LoadBitmap("Interface\\newui_item_money2.tga", IMAGE_NPCQUEST_ZEN, GL_LINEAR);
	LoadBitmap("Interface\\newui_btn_empty.tga", IMAGE_NPCQUEST_BTN_COMPLETE, GL_LINEAR);
	LoadBitmap("Interface\\newui_exit_00.tga", IMAGE_NPCQUEST_BTN_CLOSE, GL_LINEAR);
}

//*****************************************************************************
// 함수 이름 : LoadImages()
// 함수 설명 : 이미지 리소스 삭제.
//*****************************************************************************
void CNewUINPCQuest::UnloadImages()
{
	DeleteBitmap(IMAGE_NPCQUEST_BTN_CLOSE);
	DeleteBitmap(IMAGE_NPCQUEST_BTN_COMPLETE);
	DeleteBitmap(IMAGE_NPCQUEST_ZEN);
	DeleteBitmap(IMAGE_NPCQUEST_LINE);

	DeleteBitmap(IMAGE_NPCQUEST_BOTTOM);
	DeleteBitmap(IMAGE_NPCQUEST_RIGHT);
	DeleteBitmap(IMAGE_NPCQUEST_LEFT);
	DeleteBitmap(IMAGE_NPCQUEST_TOP);
	DeleteBitmap(IMAGE_NPCQUEST_BACK);
}

//*****************************************************************************
// 함수 이름 : ProcessOpening()
// 함수 설명 : 창을 열 때 처리.
//*****************************************************************************
void CNewUINPCQuest::ProcessOpening()
{
	g_csQuest.ShowQuestNpcWindow();
}

//*****************************************************************************
// 함수 이름 : ProcessClosing()
// 함수 설명 : 창을 닫을 때 처리.
// 반환 값	 : true 면 닫기 성공.
//*****************************************************************************
bool CNewUINPCQuest::ProcessClosing()
{
	SendExitInventory();
	return true;
}

//*****************************************************************************
// 함수 이름 : ProcessBtns()
// 함수 설명 : 버튼 아이템 이벤트 처리.
// 반환 값	 : 처리 했으면 true.
//*****************************************************************************
bool CNewUINPCQuest::ProcessBtns()
{
	if (m_btnClose.UpdateMouseEvent())
	{
		g_pNewUISystem->Hide(SEASON3B::INTERFACE_NPCQUEST);
		return true;
	}
	else if (SEASON3B::IsPress(VK_LBUTTON) && CheckMouseIn(m_Pos.x+169, m_Pos.y+7, 13, 12))
	{
		g_pNewUISystem->Hide(SEASON3B::INTERFACE_NPCQUEST);
		return true;
	}
	else if (g_csQuest.BeQuestItem())	// 퀘스트 완료 조건을 갖었는가?
	{
		if (m_btnComplete.UpdateMouseEvent())
		{
			SendRequestQuestState(g_csQuest.GetCurrQuestIndex(), 1);
			::PlayBuffer(SOUND_INTERFACE01);
			return true;
		}
	}

	return false;
}
