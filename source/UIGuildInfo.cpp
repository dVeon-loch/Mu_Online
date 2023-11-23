//////////////////////////////////////////////////////////////////////////
//  
//  UIGuildInfo.cpp
//  
//  내  용 : 길드정보 인터페이스 ( G 키 입력시 )
//  
//  날  짜 : 2004년 11월 09일
//  
//  작성자 : 강 병 국
//  
//////////////////////////////////////////////////////////////////////////

#include "stdafx.h"
#include "ZzzOpenglUtil.h"
#include "ZzzInterface.h"
#include "ZzzTexture.h"
#include "UIManager.h"
#include "UIGuildInfo.h"
#include "zzzLodTerrain.h"
#include "GMBattleCastle.h"
#include "CSParts.h"
#include "wsclientinline.h"
#include "NewUICommonMessageBox.h"

extern float		g_fScreenRate_x;
extern float		g_fScreenRate_y;
extern int			DeleteGuildIndex;
extern DWORD		g_dwActiveUIID;

char	s_szTargetID[MAX_ID_SIZE+1];
extern int s_nTargetFireMemberIndex = 0;


char Guild_Skill_Button = 0; //0 = 버튼이 아무것도 안눌렸다, 1 = up버튼이 눌렸다, 2 = down버튼이 눌렸다.


void RenderGoldRect( float fPos_x, float fPos_y, float fWidth, float fHeight, int iFillType = 0 );

int DoBreakUpGuildAction( POPUP_RESULT Result )
{
	// 길드 해체 OK
	if( Result == POPUP_RESULT_YES )
	{
		DeleteGuildIndex = 0;
		ErrorMessage = MESSAGE_DELETE_GUILD;
		ClearInput( FALSE );
		InputEnable = FALSE;
		InputNumber = 1;
		InputTextMax[0] = g_iLengthAuthorityCode;
		InputTextHide[0] = 1;
	}

	return 1;
}

int DoDisbandAction( POPUP_RESULT Result )
{
	if( Result == POPUP_RESULT_YES )
	{
		// 직책해제요청
		SendRequestGuildAssign( 0x03, G_PERSON, s_szTargetID );

		// 바뀐 길드리스트 요청
		SendRequestGuildList();
	}
	return 1;
}


int DoFireAction( POPUP_RESULT Result )
{
	if( Result == POPUP_RESULT_YES )
	{
		DeleteGuildIndex = s_nTargetFireMemberIndex;
		ErrorMessage = MESSAGE_DELETE_GUILD;
	}
	return 1;
}

POINT			s_ptAppointWindow;
enum eAppointType	{ APPOINT_SUBGUILDMASTER=64, APPOINT_BATTLEMASTSER=32 };
eAppointType	s_eAppointType;
CUIButton		s_PopupAppointOkButton;
CUIButton		s_PopupAppointCancelButton;
GUILD_STATUS	s_eAppointStatus;

void DoAppointAction()
{
	if( CheckMouseIn( s_ptAppointWindow.x, s_ptAppointWindow.y, 213, 2*5+6*40 ) )
		MouseOnWindow = TRUE;

	if( MouseLButtonPush )
	{
		// 부길드마스터
		if( CheckMouseIn( s_ptAppointWindow.x+20, s_ptAppointWindow.y+19, 170, 20.f ) )
			s_eAppointType = APPOINT_SUBGUILDMASTER;
		// 배틀마스터
		if( CheckMouseIn( s_ptAppointWindow.x+20, s_ptAppointWindow.y+19+25-3, 170, 20.f ) )
			s_eAppointType = APPOINT_BATTLEMASTSER;
	}

	if( s_PopupAppointOkButton.DoMouseAction() )
	{
		// 직책임명요청
		if( s_eAppointStatus == G_PERSON )	// 직위 임명
		{
			SendRequestGuildAssign( 0x01, s_eAppointType, s_szTargetID );
		}
		else									// 직위 변경
		{
			SendRequestGuildAssign( 0x02, s_eAppointType, s_szTargetID );
		}
		// 바뀐 길드리스트 요청
		SendRequestGuildList();

		g_pUIPopup->CancelPopup();
	}
	if( s_PopupAppointCancelButton.DoMouseAction() )
		g_pUIPopup->CancelPopup();
}

void RenderAppoint()
{
	s_ptAppointWindow = g_pUIManager->RenderWindowBase( 150 );

	EnableAlphaTest();

	// 부길마로임명
	RenderGoldRect( s_ptAppointWindow.x+20, s_ptAppointWindow.y+19, 170, 20.f, ( s_eAppointType == APPOINT_SUBGUILDMASTER ? 1 : 0 ) );
	g_pRenderText->SetBgColor(0);
	g_pRenderText->RenderText(s_ptAppointWindow.x+20, s_ptAppointWindow.y+24, GlobalText[1311], 170, 0, RT3_SORT_CENTER);
	
	// 배마로임병
	RenderGoldRect( s_ptAppointWindow.x+20, s_ptAppointWindow.y+19+25-5, 170, 20.f, ( s_eAppointType == APPOINT_BATTLEMASTSER ? 1 : 0 ) );
	g_pRenderText->RenderText(s_ptAppointWindow.x+20, s_ptAppointWindow.y+24+25-3, GlobalText[1312], 170, 0, RT3_SORT_CENTER);

	// 임명하시겠습니까?
	char Text[64];
	sprintf( Text, GlobalText[1314], s_szTargetID, ( s_eAppointType == APPOINT_SUBGUILDMASTER ? GlobalText[1301] : GlobalText[1302] ) );

	g_pRenderText->RenderText(s_ptAppointWindow.x+20, s_ptAppointWindow.y+24+25*2+1, Text, 170, 0, RT3_SORT_CENTER);
	g_pRenderText->RenderText(s_ptAppointWindow.x+20, s_ptAppointWindow.y+24+25*2+1+18, GlobalText[1315], 170, 0, RT3_SORT_CENTER);

	s_PopupAppointOkButton.SetPosition( s_ptAppointWindow.x+15+40, s_ptAppointWindow.y+117 );
	s_PopupAppointOkButton.Render();
	s_PopupAppointCancelButton.SetPosition( s_ptAppointWindow.x+15+95, s_ptAppointWindow.y+117 );
	s_PopupAppointCancelButton.Render();
}

CUIGuildInfo::CUIGuildInfo()
{
	m_bOpened = false;
	m_bRequestUnionList = FALSE;
	m_nCurrentTab = 1;
	SetPosition( 640-190, 0 );
	SetSize( 190, 380 );

	ZeroMemory( m_szRivalGuildName, sizeof(char)*(MAX_GUILDNAME+1) );

	m_dwPopupID	= 0;

	int nButtonID = 1;

	m_BreakUpGuildButton.Init( nButtonID++, "" );
	m_BreakUpGuildButton.SetParentUIID( GetUIID() );
	m_BreakUpGuildButton.SetSize( 50, 18 );
	m_BreakUpGuildButton.SetPosition( GetPosition_x()+70, GetPosition_y()+m_iHeight-m_BreakUpGuildButton.GetHeight() );

	s_ptAppointWindow.x = s_ptAppointWindow.y = 0;
	m_AppointButton.Init( nButtonID++, GlobalText[1307] );
	m_AppointButton.SetParentUIID( GetUIID() );
	m_AppointButton.SetSize( 50, 18 );
	m_AppointButton.SetPosition( GetPosition_x()+15+3, GetPosition_y()+365 );
	

	m_DisbandButton.Init( nButtonID++, GlobalText[1308] );
	m_DisbandButton.SetParentUIID( GetUIID() );
	m_DisbandButton.SetSize( 50, 18 );
	m_DisbandButton.SetPosition( GetPosition_x()+15+55, GetPosition_y()+365 );
	

	m_FireButton.Init( nButtonID++, GlobalText[1309] );
	m_FireButton.SetParentUIID( GetUIID() );
	m_FireButton.SetSize( 50, 18 );
	m_FireButton.SetPosition( GetPosition_x()+15+107, GetPosition_y()+365 );
	

	s_eAppointType = APPOINT_SUBGUILDMASTER;

	s_PopupAppointOkButton.Init( nButtonID++, GlobalText[228] );
	s_PopupAppointOkButton.SetParentUIID( GetUIID() );
	s_PopupAppointOkButton.SetSize( 50, 18 );

	s_PopupAppointCancelButton.Init( nButtonID++, GlobalText[229] );
	s_PopupAppointCancelButton.SetParentUIID( GetUIID() );
	s_PopupAppointCancelButton.SetSize( 50, 18 );

	// 길드연합 해체/탈퇴
	m_BreakUnionButton.Init( nButtonID++, "" );
	m_BreakUnionButton.SetParentUIID( GetUIID() );
	m_BreakUnionButton.SetSize( 50, 18 );
	m_BreakUnionButton.SetPosition( GetPosition_x()+15+55, GetPosition_y()+350 );

	// 길드연합 방출
	m_BanUnionButton.Init( nButtonID++, GlobalText[1422] );	// 1422 "연합방출"
	m_BanUnionButton.SetParentUIID( GetUIID() );
	m_BanUnionButton.SetSize( 50, 18 );
	m_BanUnionButton.SetPosition( GetPosition_x()+15+55, GetPosition_y()+220 );
}

CUIGuildInfo::~CUIGuildInfo()
{
}

int CUIGuildInfo::GetGuildMemberIndex( char* szName )
{
	// 캐릭터명으로 길드에서의 인덱스를 구한다.
	for( int i=0 ; i<g_nGuildMemberCount ; ++i )
	{
		if( GuildList[i].Name && !strcmp( GuildList[i].Name, szName ) )
			return i;
	}

	return -1;
}

const char* CUIGuildInfo::GetGuildMasterName()
{
	for( int i=0 ; i<g_nGuildMemberCount ; ++i )
	{
		if( GuildList[i].Name && GuildList[i].GuildStatus == G_MASTER )
			return GuildList[i].Name;
	}

	return GlobalText[1361];
}

const char* CUIGuildInfo::GetSubGuildMasterName()
{
	for( int i=0 ; i<g_nGuildMemberCount ; ++i )
	{
		if( GuildList[i].Name && GuildList[i].GuildStatus == G_SUB_MASTER )
			return GuildList[i].Name;
	}

	return GlobalText[1361];
}

const char* CUIGuildInfo::GetBattleMasterName()
{
	for( int i=0 ; i<g_nGuildMemberCount ; ++i )
	{
		if( GuildList[i].Name && GuildList[i].GuildStatus == G_BATTLE_MASTER )
			return GuildList[i].Name;
	}

	return GlobalText[1361];
}

void CUIGuildInfo::CloseMyPopup()
{
	DWORD dwCurrPopupID = g_pUIPopup->GetPopupID();
	if( dwCurrPopupID == m_dwPopupID )
		g_pUIPopup->CancelPopup();
}

void CUIGuildInfo::DoGuildInfoTabMouseAction()
{
	// 길드로그
	g_dwActiveUIID = m_GuildNoticeListBox.GetUIID();
	m_GuildNoticeListBox.DoAction();
	g_dwActiveUIID = 0;

	// 길드 탈퇴 버튼 클릭시..
	if( m_BreakUpGuildButton.DoMouseAction() )
	{
		if( IsGuildMaster() )
		{
			// 연합마스터라면..
			if( !strcmp( GuildMark[Hero->GuildMarkIndex].GuildName, GuildMark[Hero->GuildMarkIndex].UnionName ) )
			{
				// 1270 "연합마스터는 길드해체를 할 수 없습니다."
				char szText[50];
				strcpy( szText, GlobalText[1270] );
				m_dwPopupID = g_pUIPopup->SetPopup( szText, 1, 50, POPUP_OK, NULL );
			}
			else
			{
#if SELECTED_LANGUAGE == LANGUAGE_ENGLISH || SELECTED_LANGUAGE == LANGUAGE_PHILIPPINES || SELECTED_LANGUAGE == LANGUAGE_VIETNAMESE
				char szText[4][100];
#else
				char szText[4][50];
#endif
				strcpy( szText[0], GlobalText[1363] );
				strcpy( szText[1], GlobalText[1364] );
				strcpy( szText[2], GlobalText[1365] );
				strcpy( szText[3], GlobalText[1366] );
#if SELECTED_LANGUAGE == LANGUAGE_ENGLISH || SELECTED_LANGUAGE == LANGUAGE_PHILIPPINES || SELECTED_LANGUAGE == LANGUAGE_VIETNAMESE
				m_dwPopupID = g_pUIPopup->SetPopup( &szText[0][0], 4, 100, POPUP_YESNO, ::DoBreakUpGuildAction );
#else
				m_dwPopupID = g_pUIPopup->SetPopup( &szText[0][0], 4, 50, POPUP_YESNO, ::DoBreakUpGuildAction );
#endif
			}
		}
		else
		{
			DeleteGuildIndex = GetGuildMemberIndex( Hero->ID );
			ErrorMessage = MESSAGE_DELETE_GUILD;
			ClearInput( FALSE );
			InputEnable = FALSE;
			InputNumber = 1;
			InputTextMax[0] = g_iLengthAuthorityCode;
			InputTextHide[0] = 1;
		}
	}
}

void CUIGuildInfo::RenderGuildInfoTab()
{
	POINT ptOrigin = { GetPosition_x()+15+54, GetPosition_y()+75+29 };

	// 길드마크
	RenderGoldRect( ptOrigin.x, ptOrigin.y, 53, 53 );
	ptOrigin.x += 3;	ptOrigin.y += 3;
	CreateGuildMark( Hero->GuildMarkIndex );
	RenderBitmap( BITMAP_GUILD, ptOrigin.x, ptOrigin.y, 48, 48 );

	char szTemp[64];

	// 길드 생성일
	ptOrigin.x = GetPosition_x()+15+10;	ptOrigin.y = GetPosition_y()+170;
	RenderGoldRect( ptOrigin.x, ptOrigin.y, 140, 62 );
	ptOrigin.x += 5;
	ptOrigin.y += 8;
	sprintf( szTemp, "%s :", GlobalText[1332] );
	g_pRenderText->RenderText(ptOrigin.x, ptOrigin.y, szTemp, 140*g_fScreenRate_x, 0, RT3_SORT_LEFT);
	// 길드 점수
	ptOrigin.y += 13;
	sprintf( szTemp, GlobalText[1256], GuildTotalScore );
	g_pRenderText->RenderText(ptOrigin.x, ptOrigin.y, szTemp, 140*g_fScreenRate_x, 0, RT3_SORT_LEFT);
	
	// 길드 인원
	ptOrigin.y += 13;
	if( IsGuildMaster() )
	{
		int Class = GetBaseClass ( CharacterAttribute->Class );
	    if ( Class == CLASS_DARK_LORD )
		{
			// 2005.4.28 마직막 계산 부분 /100 에서 /10 으로 고침
			int nCount = CharacterAttribute->Level/10+CharacterAttribute->Charisma/10;
			if( nCount > 80 )	nCount = 80;
			sprintf( szTemp, GlobalText[1362], g_nGuildMemberCount, nCount );
		}
		else
			sprintf( szTemp, GlobalText[1362], g_nGuildMemberCount, CharacterAttribute->Level/10 );
	}
	else
	{
		sprintf( szTemp, GlobalText[1310], g_nGuildMemberCount );
	}
	g_pRenderText->RenderText(ptOrigin.x, ptOrigin.y, szTemp, 140*g_fScreenRate_x, 0, RT3_SORT_LEFT);
	
	// 적대길드
	ptOrigin.y += 13;
	sprintf( szTemp, "%s : %s", GlobalText[1321], m_szRivalGuildName[0] ? m_szRivalGuildName : GlobalText[1361] );
	g_pRenderText->RenderText(ptOrigin.x, ptOrigin.y, szTemp, 140*g_fScreenRate_x, 0, RT3_SORT_LEFT);

	// 길드공지
	ptOrigin.x -= 5;
	ptOrigin.y += 33;
	g_pRenderText->RenderText(ptOrigin.x+5, ptOrigin.y, GlobalText[1323], 136*g_fScreenRate_x, 0, RT3_SORT_LEFT);
	
	ptOrigin.y += 10;
	m_GuildNoticeListBox.SetSize( 136, 80 );
	m_GuildNoticeListBox.SetPosition( ptOrigin.x+3, ptOrigin.y+m_GuildNoticeListBox.GetHeight() );
	m_GuildNoticeListBox.Render();
	RenderGoldRect( ptOrigin.x, ptOrigin.y-14, 140, 95 );

	// 해체/탈퇴 버튼
	m_BreakUpGuildButton.SetCaption( IsGuildMaster() ? GlobalText[188] : GlobalText[189] );
	m_BreakUpGuildButton.Render();
}

void CUIGuildInfo::DoGuildMemberTabMouseAction()
{
	// 길드원리스트 입력처리
	g_dwActiveUIID = m_GuildMemberListBox.GetUIID();
	m_GuildMemberListBox.DoAction();
	g_dwActiveUIID = 0;

	if(PressKey(VK_PRIOR))
		m_GuildMemberListBox.Scrolling(-1 * m_GuildMemberListBox.GetBoxSize());
	if(PressKey(VK_NEXT))
		m_GuildMemberListBox.Scrolling(m_GuildMemberListBox.GetBoxSize());

	if( IsGuildMaster() )
	{
		// 길드원 - 직책 버튼
		if( m_AppointButton.DoMouseAction() )
		{
			if( GUILDLIST_TEXT* pText = m_GuildMemberListBox.GetSelectedText() )
			{
				// 길마를 제외한 길드원 대상
				if( pText->m_GuildStatus != G_MASTER )
				{
					if( GUILDLIST_TEXT* pText = m_GuildMemberListBox.GetSelectedText() )
					{
						s_eAppointStatus = (GUILD_STATUS)pText->m_GuildStatus;
						strcpy( s_szTargetID, pText->m_szID );
						m_dwPopupID = g_pUIPopup->SetPopup( NULL, 0, 0, POPUP_CUSTOM, NULL );
						g_pUIPopup->SetPopupExtraFunc( ::DoAppointAction, ::RenderAppoint );
					}
				}
			}
		}
		// 길드원 - 해제 버튼
		if( m_DisbandButton.DoMouseAction() )
		{
			if( GUILDLIST_TEXT* pText = m_GuildMemberListBox.GetSelectedText() )
			{
				// 부길마나 배틀마스터만 대상
				if( pText->m_GuildStatus == G_SUB_MASTER || pText->m_GuildStatus == G_BATTLE_MASTER )
				{
					char szText[2][64];
					// 직위해제하시겠습니까?
					GUILDLIST_TEXT* pText = m_GuildMemberListBox.GetSelectedText();
					sprintf( szText[0], GlobalText[1367], pText->m_szID );
					strcpy( szText[1], GlobalText[1368] );

					// 직위해제 할 아이디 기억
					if( GUILDLIST_TEXT* pText = m_GuildMemberListBox.GetSelectedText() )
						strcpy( s_szTargetID, pText->m_szID );

					m_dwPopupID = g_pUIPopup->SetPopup( &szText[0][0], 2, 64, POPUP_YESNO, ::DoDisbandAction );
				}
			}
		}
		// 길드원 - 방출 버튼
		if( m_FireButton.DoMouseAction() )
		{
			if( GUILDLIST_TEXT* pText = m_GuildMemberListBox.GetSelectedText() )
			{
				// 길마를 제외한 길드원 대상
				if( pText->m_GuildStatus != G_MASTER )
				{
					// 방출하시겠습니까?
					GUILDLIST_TEXT* pText = m_GuildMemberListBox.GetSelectedText();
					// 방출 할 멤버 인덱스 기억
					if( GUILDLIST_TEXT* pText = m_GuildMemberListBox.GetSelectedText() )
					{
						s_nTargetFireMemberIndex = GetGuildMemberIndex( pText->m_szID );
					}

					char szText[2][64];
					sprintf( szText[0], GlobalText[1367], pText->m_szID );
					strcpy( szText[1], GlobalText[1369] );
					m_dwPopupID = g_pUIPopup->SetPopup( &szText[0][0], 2, 64, POPUP_YESNO, ::DoFireAction );
				}
			}
		}
	}
}

void CUIGuildInfo::RenderGuildMemberTab()
{
	// 길드원 목록 출력
	if( g_nGuildMemberCount > 0 )
		m_GuildMemberListBox.Render();

	// 직책, 해제, 방출 버튼
	if( IsGuildMaster() )
	{
		m_AppointButton.Render();
		m_DisbandButton.Render();
		m_FireButton.Render();
	}
}

int DoBanUnionGuildAction( POPUP_RESULT Result )
{
	if( Result == POPUP_RESULT_YES )
	{
		// 연합길드 방출 요청
		SendRequestBanUnionGuild( s_szTargetID );
	}
	return 1;
}

void CUIGuildInfo::DoGuildUnionMouseAction()
{
	// 길드연합 리스트
	g_dwActiveUIID = m_UnionListBox.GetUIID();
	m_UnionListBox.DoAction();
	g_dwActiveUIID = 0;

	if( Hero->GuildStatus == G_MASTER )
	{
		if( GuildMark[Hero->GuildMarkIndex].UnionName[0] )
		{
			if( m_BreakUnionButton.DoMouseAction() )
			{
				if( !strcmp( GuildMark[Hero->GuildMarkIndex].GuildName, GuildMark[Hero->GuildMarkIndex].UnionName ) )
				{
					// 1271 "연합마스터는 연합해체를 할 수 없습니다."
					char szText[50];
					strcpy( szText, GlobalText[1271] );
					m_dwPopupID = g_pUIPopup->SetPopup( szText, 1, 50, POPUP_OK, NULL );
				}
				else
				{
					SendRequestGuildRelationShip( 0x01, 0x02, HIBYTE(Hero->Key), LOBYTE(Hero->Key) );
				}
			}

			// 연합길드 방출
			if( m_BanUnionButton.DoMouseAction() )
			{
				if( UNIONGUILD_TEXT* pText = m_UnionListBox.GetSelectedText() )
				{
					// 자기 길드가 아닐 경우..
					if( strcmp( pText->szName, GuildMark[Hero->GuildMarkIndex].GuildName ) )
					{
						char szText[2][64];

						// 1423 "%s 길드를 연합에서"
						sprintf( szText[0], GlobalText[1423], pText->szName );
						// 1369 "방출 하시겠습니까?"
						strcpy( szText[1], GlobalText[1369] );

						// 방출 할 길드명 기억
						strcpy( s_szTargetID, pText->szName );

						m_dwPopupID = g_pUIPopup->SetPopup( &szText[0][0], 2, 64, POPUP_YESNO, ::DoBanUnionGuildAction );
					}
				}
			}
		}
	}
}

void CUIGuildInfo::RenderGuildUnionTab()
{
	POINT ptOrigin = { GetPosition_x()+15, GetPosition_y()+98 };

	// 내가 길마이고 길드연합 가입하지 않았다면
	if( GuildMark[Hero->GuildMarkIndex].UnionName[0] == NULL )
	{
		ptOrigin.x += 10;
		ptOrigin.y += 8;

		g_pRenderText->RenderText(ptOrigin.x, ptOrigin.y, GlobalText[1257]);
		ptOrigin.y += 15;
		g_pRenderText->RenderText(ptOrigin.x, ptOrigin.y, GlobalText[1258]);
		ptOrigin.y += 15;
		g_pRenderText->RenderText(ptOrigin.x, ptOrigin.y, GlobalText[1259]);
		ptOrigin.y += 15;
		g_pRenderText->RenderText(ptOrigin.x, ptOrigin.y, GlobalText[1260]);
		ptOrigin.y += 15;
		g_pRenderText->RenderText(ptOrigin.x, ptOrigin.y, GlobalText[1261]);

		g_pRenderText->SetTextColor(0xFFFFFFFF);
		g_pRenderText->SetBgColor(0xFF0000CC);

		ptOrigin.y += 25;
		g_pRenderText->RenderText(ptOrigin.x, ptOrigin.y, GlobalText[1262]);
		ptOrigin.y += 15;
		g_pRenderText->RenderText(ptOrigin.x, ptOrigin.y, GlobalText[1263]);
		ptOrigin.y += 15;
		g_pRenderText->RenderText(ptOrigin.x, ptOrigin.y, GlobalText[1264]);
		ptOrigin.y += 20;
		g_pRenderText->RenderText(ptOrigin.x, ptOrigin.y, GlobalText[1265]);
		ptOrigin.y += 15;
		g_pRenderText->RenderText(ptOrigin.x, ptOrigin.y, GlobalText[1266]);
		ptOrigin.y += 15;
		g_pRenderText->RenderText(ptOrigin.x, ptOrigin.y, GlobalText[1267]);

		g_pRenderText->SetTextColor(0xFFFFFFFF);
	}
	// 길드연합에 가입해 있다면 길드리스트 보여주기
	else if( GuildMark[Hero->GuildMarkIndex].UnionName[0] )
	{
		ptOrigin.y += 12;
		m_UnionListBox.SetSize( 160, 80 );
		m_UnionListBox.SetPosition( ptOrigin.x, ptOrigin.y+m_GuildNoticeListBox.GetHeight() );
		m_UnionListBox.Render();

		// 해체/탈퇴버튼
		if( Hero->GuildStatus == G_MASTER )
		{
			if( !strcmp( GuildMark[Hero->GuildMarkIndex].GuildName, GuildMark[Hero->GuildMarkIndex].UnionName ) )
			{
				m_BreakUnionButton.SetCaption( GlobalText[1324] );
				m_BanUnionButton.SetState( UISTATE_NORMAL );
				m_BanUnionButton.Render();
			}
			else
			{
				m_BreakUnionButton.SetCaption( GlobalText[1325] );
				m_BanUnionButton.SetState( UISTATE_DISABLE );
			}
			m_BreakUnionButton.Render();
		}
	}
}

void CUIGuildInfo::SetRivalGuildName( char* szName )
{
	memcpy( m_szRivalGuildName, szName, sizeof(char)*MAX_GUILDNAME );
	m_szRivalGuildName[MAX_GUILDNAME] = NULL;
}

void CUIGuildInfo::AddGuildNotice( char* szText )
{
	char szTemp[5][MAX_TEXT_LENGTH + 1] = { {0}, {0}, {0}, {0}, {0} } ;
	CutText3( szText, szTemp[0], 110, 5, MAX_TEXT_LENGTH + 1);

	for( int i=0 ; i<5 ; ++i )
	{
		if( szTemp[i][0] )
			m_GuildNoticeListBox.AddText( szTemp[i] );
	}
	m_GuildNoticeListBox.Scrolling( m_GuildNoticeListBox.GetLineNum()-m_GuildNoticeListBox.GetBoxSize() );
}

void CUIGuildInfo::ClearGuildLog()
{
	m_GuildNoticeListBox.Clear();
}

void CUIGuildInfo::AddMemberList( GUILD_LIST_t* pInfo )
{
	m_GuildMemberListBox.AddText( pInfo->Name, pInfo->Number, pInfo->Server, pInfo->GuildStatus );
}

void CUIGuildInfo::ClearMemberList()
{
	m_GuildMemberListBox.Clear();
}

void CUIGuildInfo::AddUnionList( BYTE* pGuildMark, char* szGuildName, int nMemberCount )
{
	m_UnionListBox.AddText( pGuildMark, szGuildName, nMemberCount );
}

int CUIGuildInfo::GetUnionCount()
{
	return m_UnionListBox.GetTextCount();
}

void CUIGuildInfo::ClearUnionList()
{
	m_UnionListBox.Clear();
}

BOOL CUIGuildInfo::DoMouseAction()
{
	if( CheckMouseIn( GetPosition_x(), GetPosition_y(), GetWidth(), 256+177 ) )
		MouseOnWindow = TRUE;

	// 닫기
	if( MouseLButtonPush && CheckMouseIn( GetPosition_x()+25, GetPosition_y()+395, 24, 24 ) )
	{
		MouseLButtonPush = FALSE;
		MouseUpdateTime = 0;
		MouseUpdateTimeMax = 6;
       	PlayBuffer( SOUND_CLICK01 );
		Close();
	}

	if( Hero->GuildStatus == G_NONE ) return FALSE;

	// 탭 전환
	if( MouseLButton )
	{
		if( m_nCurrentTab != 0 && CheckMouseIn( GetPosition_x()+15, GetPosition_y()+75, 52, 16 ) )
		{
			CloseMyPopup();
			m_nCurrentTab = 0;
		}
		else if( m_nCurrentTab != 1 && CheckMouseIn( GetPosition_x()+15+52, GetPosition_y()+75, 52, 16 ) )
		{
			CloseMyPopup();
			m_nCurrentTab = 1;
		}
		else if( m_nCurrentTab != 2 && CheckMouseIn( GetPosition_x()+15+52*2, GetPosition_y()+75, 52, 16 ) )
		{
			if( !m_bRequestUnionList && GuildMark[Hero->GuildMarkIndex].UnionName[0] )
			{
				SendRequestUnionList();
				m_bRequestUnionList = TRUE;
			}
			CloseMyPopup();
			m_nCurrentTab = 2;
		}
	}

	switch( m_nCurrentTab )
	{
	case 0:	// 길드
		DoGuildInfoTabMouseAction();
		break;
	case 1:	// 길드원
		DoGuildMemberTabMouseAction();
		break;
	case 2:	// 길드연합
		DoGuildUnionMouseAction();
		break;
	default:
		break;
	};
	return FALSE;
}

void CUIGuildInfo::Render()
{
	glColor4f( 1.f, 1.f, 1.f, 1.f );

	POINT ptOrigin = { GetPosition_x(), GetPosition_y() };

	DisableAlphaBlend();
    RenderBitmap( BITMAP_INVENTORY, ptOrigin.x, ptOrigin.y, 190, 256, 0.f, 0.f, 190.f/256.f, 256.f/256.f );
    RenderBitmap( BITMAP_INVENTORY+1, ptOrigin.x, ptOrigin.y+256, 190, 177, 0.f, 0.f, 190.f/256.f, 177.f/256.f );

	EnableAlphaTest();

	// 길드
	ptOrigin.x = GetPosition_x()+35;
	ptOrigin.y = GetPosition_y()+12;
	char szTemp[100];
	strcpy( szTemp, GlobalText[180] );

	g_pRenderText->SetFont(g_hFontBold);
	g_pRenderText->SetTextColor(220, 220, 220, 255);
	g_pRenderText->SetBgColor(0);
	g_pRenderText->RenderText( ptOrigin.x, ptOrigin.y, szTemp, 120, 0, RT3_SORT_CENTER);
    
	// 길드명
	if( Hero->GuildStatus != G_NONE )
	{
		ptOrigin.x = GetPosition_x()+35;
		ptOrigin.y = GetPosition_y()+53;
		g_pRenderText->SetTextColor(200, 255, 100, 255);
		sprintf( szTemp, "%s ( Score:%d )", GuildMark[Hero->GuildMarkIndex].GuildName, GuildTotalScore );
		g_pRenderText->RenderText( ptOrigin.x, ptOrigin.y, szTemp, 120, 0, RT3_SORT_CENTER);
	}

	// 길드가입법 출력
	ptOrigin.x = GetPosition_x()+20;
	ptOrigin.y = GetPosition_y()+50;
	if( Hero->GuildStatus == G_NONE )
	{
		g_pRenderText->SetFont(g_hFont);
		g_pRenderText->SetTextColor(230, 230, 230, 255);
		g_pRenderText->RenderText(ptOrigin.x, ptOrigin.y, GlobalText[185]);
		ptOrigin.y += 15;
		g_pRenderText->RenderText(ptOrigin.x, ptOrigin.y, GlobalText[186]);
		ptOrigin.y += 15;
		g_pRenderText->RenderText(ptOrigin.x, ptOrigin.y, GlobalText[187]);
	}

	// 닫기( X ) 버튼
	glColor4f( 1.f, 1.f, 1.f, 1.f );
	ptOrigin.x = GetPosition_x()+25;
	ptOrigin.y = GetPosition_y()+395;
	RenderBitmap( BITMAP_INVENTORY_BUTTON, ptOrigin.x, ptOrigin.y, 24, 24, 0.f, 0.f, 24.f/32.f, 24.f/32.f );
	if( CheckMouseIn( ptOrigin.x, ptOrigin.y, 24, 24 ) )
	{
		g_pRenderText->SetFont(g_hFont);
		g_pRenderText->SetTextColor(255, 255, 255, 255);
		g_pRenderText->SetBgColor(0, 0, 0, 255);		
		RenderTipText( ptOrigin.x, ptOrigin.y-13, GlobalText[220] );
	}

	if( Hero->GuildStatus == G_NONE )
		return;

	// 탭아랫줄 표시
	ptOrigin.x = GetPosition_x()+15;
	ptOrigin.y = GetPosition_y()+91;
	glColor4ub( 146, 144, 141, 255 );
	if( m_nCurrentTab != 0 ) RenderColor( ptOrigin.x, ptOrigin.y, 54, 1 );
	ptOrigin.x += 54;
	if( m_nCurrentTab != 1 ) RenderColor( ptOrigin.x, ptOrigin.y, 54, 1 );
	ptOrigin.x += 54;
	if( m_nCurrentTab != 2 ) RenderColor( ptOrigin.x, ptOrigin.y, 54, 1 );
	EndRenderColor();

	g_pRenderText->SetFont(g_hFontBold);
	g_pRenderText->SetTextColor(255, 255, 255, 255);
	g_pRenderText->SetBgColor(0, 0, 0, 0);

	// 길드 탭표시
	ptOrigin.x = GetPosition_x()+15;
	ptOrigin.y = GetPosition_y()+75;
	if( m_nCurrentTab == 0 ) glColor4f( 1.f, 1.f, 1.f, 1.f );
	else glColor4f( 0.6f, 0.6f, 0.6f, 1.f );
	RenderBitmap( BITMAP_INTERFACE_EX+9, ptOrigin.x, ptOrigin.y-( m_nCurrentTab == 0 ? 2 : 0 ), 
		(float)52, (float)16+( m_nCurrentTab == 0 ? 2 : 0 ), 0.f, 0.f, 48.f/64.f, 15.f/16.f );
	g_pRenderText->RenderText(ptOrigin.x, ptOrigin.y+4-( m_nCurrentTab == 0 ? 1 : 0 ), GlobalText[946], 52, 0, RT3_SORT_CENTER);

	// 길드원 탭표시
	ptOrigin.x += 54;
	if( m_nCurrentTab == 1 ) glColor4f( 1.f, 1.f, 1.f, 1.f );
	else glColor4f( 0.6f, 0.6f, 0.6f, 1.f );
	RenderBitmap( BITMAP_INTERFACE_EX+9, ptOrigin.x, ptOrigin.y-( m_nCurrentTab == 1 ? 2 : 0 ), 
		(float)52, (float)16+( m_nCurrentTab == 1 ? 2 : 0 ), 0.f, 0.f, 48.f/64.f, 15.f/16.f );
	g_pRenderText->RenderText(ptOrigin.x, ptOrigin.y+4-( m_nCurrentTab == 1 ? 1 : 0 ), GlobalText[1330], 52, 0, RT3_SORT_CENTER);

	// 길드연합 탭표시
	ptOrigin.x += 54;
	if( m_nCurrentTab == 2 ) glColor4f( 1.f, 1.f, 1.f, 1.f );
	else glColor4f( 0.6f, 0.6f, 0.6f, 1.f );
	RenderBitmap( BITMAP_INTERFACE_EX+9, ptOrigin.x, ptOrigin.y-( m_nCurrentTab == 2 ? 2 : 0 ), 
		(float)52, (float)16+( m_nCurrentTab == 2 ? 2 : 0 ), 0.f, 0.f, 48.f/64.f, 15.f/16.f );
	g_pRenderText->RenderText(ptOrigin.x, ptOrigin.y+4-( m_nCurrentTab == 2 ? 1 : 0 ), GlobalText[1352], 52, 0, RT3_SORT_CENTER);

	glColor4f( 1.f, 1.f, 1.f, 1.f );

	// 탭 내용 표시
	switch( m_nCurrentTab )
	{
	case 0:	// 길드
		RenderGuildInfoTab();
		break;
	case 1:	// 길드원
		RenderGuildMemberTab();
		break;
	case 2:	// 길드연합
		RenderGuildUnionTab();
		break;
	default:
		break;
	};
}

void CUIGuildInfo::Open()
{
	if( m_bOpened )	return;

	m_bOpened = TRUE;
}

bool CUIGuildInfo::IsOpen()
{
	return m_bOpened;	
}

void CUIGuildInfo::Close()
{
	if( !m_bOpened )	return;

	m_bOpened = FALSE;

	m_bRequestUnionList = FALSE;
	m_nCurrentTab = 1;

	PlayBuffer( SOUND_INTERFACE01 );
	CloseMyPopup();
}




//////////////////////////////////////////////////////////////////////////
//  배틀 마스터 스킬을 위한 함수.
//////////////////////////////////////////////////////////////////////////



//////////////////////////////////////////////////////////////////////////
//  사용 가능한 직책 스킬인가?
//////////////////////////////////////////////////////////////////////////
bool    CheckUseMasterSkill ( CHARACTER* c, int Index )
{
    BYTE GuildStatus = c->GuildStatus;
    BYTE Class       = GetBaseClass ( c->Class );
    bool bUse        = false;


    if ( SkillAttribute[Index].RequireClass[Class]!=0 )
    {
        if ( ( GuildStatus==G_MASTER          && SkillAttribute[Index].RequireDutyClass[0] ) ||
             ( GuildStatus==G_SUB_MASTER      && SkillAttribute[Index].RequireDutyClass[1] ) ||
             ( GuildStatus==G_BATTLE_MASTER   && SkillAttribute[Index].RequireDutyClass[2] ) ) 
        {
            bUse = true;
        }
    }
    

    return bUse;
}

//////////////////////////////////////////////////////////////////////////
//  배틀마스터 스킬을 발동할수 있게 한다.
//////////////////////////////////////////////////////////////////////////
void    UseBattleMasterSkill ( void )
{
	if ( !(Hero->EtcPart==PARTS_ATTACK_TEAM_MARK 
		|| Hero->EtcPart==PARTS_ATTACK_TEAM_MARK2
		|| Hero->EtcPart==PARTS_ATTACK_TEAM_MARK3
		|| Hero->EtcPart==PARTS_DEFENSE_TEAM_MARK) )
	{
		return;
	}

    if(Hero->GuildStatus == G_PERSON)
	{
		return;
	}

    int MaxKillCount = SkillAttribute[Hero->GuildSkill].KillCount;
    
    if ( Hero->GuildMasterKillCount >= MaxKillCount )
    {
#ifdef KWAK_FIX_KEY_STATE_RUNTIME_ERR
		if(SEASON3B::IsPress(VK_SHIFT) == TRUE)
#else // KWAK_FIX_KEY_STATE_RUNTIME_ERR
        if ( HIBYTE( GetAsyncKeyState( VK_SHIFT ) ) )
#endif // KWAK_FIX_KEY_STATE_RUNTIME_ERR
        {
			//박종훈 직책스킬 추가
			if(Hero->BackupCurrentSkill == 255)
			{
				Hero->BackupCurrentSkill = Hero->CurrentSkill;
			}
            Hero->CurrentSkill = FindHotKey( Hero->GuildSkill );
        }
		else
		{
			if(Hero->BackupCurrentSkill != 255)
			{
				Hero->CurrentSkill = Hero->BackupCurrentSkill;
				Hero->BackupCurrentSkill = 255;
			}
		}
    }
}
