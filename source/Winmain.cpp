///////////////////////////////////////////////////////////////////////////////
// À©µµ¿ì °ü·Ã ÇÔ¼ö
// nProtect¸¦ ¸ÕÀú ½ÇÇà ½ÃÅ² ÈÄ À©µµ¿ì¸¦ »ý¼ºÇÔ
//
// *** ÇÔ¼ö ·¹º§: 5
///////////////////////////////////////////////////////////////////////////////


#include "stdafx.h"

#define WIN32_LEAN_AND_MEAN
#define WIN32_EXTRA_LEAN

#include <locale.h>
#include <zmouse.h>
#include "UIWindows.h"
#include "UIManager.h"
#include "ZzzOpenglUtil.h"
#include "ZzzTexture.h"
#include "ZzzOpenData.h"
#include "ZzzScene.h"
#include "ZzzBMD.h"
#include "ZzzInfomation.h"
#include "ZzzObject.h"
#include "ZzzCharacter.h"
#include "ZzzInterface.h"
#include "ZzzInventory.h"
#include "zzzLodTerrain.h"
#include "DSPlaySound.h"
#include "DIMouse.h"
#include "wsclientinline.h"
#include "Resource.h"
#include <imm.h>
#include "zzzpath.h"
#include "Nprotect.h"
#include "./Utilities/Log/DebugAngel.h"
#include "Local.h"
#include "PersonalShopTitleImp.h"
#include "./Utilities/Log/ErrorReport.h"
#include "UIMapName.h"		// rozy
#include "CSMapInterface.h"
#include "./ExternalObject/leaf/ExceptionHandler.h"
#include "./Utilities/Dump/CrashReporter.h"
#if SELECTED_LANGUAGE == LANGUAGE_CHINESE
#include "iexplorer.h"
#endif //SELECTED_LANGUAGE == LANGUAGE_CHINESE
#ifdef PROTECT_SYSTEMKEY
	#include "ProtectSysKey.h"
#endif // PROTECT_SYSTEMKEY
#ifdef CONSOLE_DEBUG
	#include "./Utilities/Log/muConsoleDebug.h"
#endif // CONSOLE_DEBUG

#ifdef ATTACH_HACKSHIELD
	#include "HackShield/HShield.h"
	#pragma comment(lib, "HShield.lib")
	#pragma message("Enable Ahnlab HackShield.")
#endif // ATTACK_HACKSHIELD

#ifdef BAN_USE_CMDLINE
	#include "./LauncherHelper/LauncherHelper.h"
#endif // BAN_USE_CMDLINE
#include "CBTMessageBox.h"
#include "./ExternalObject/leaf/regkey.h"

#ifdef NP_GAME_GUARD
	#include "ExternalObject/Nprotect/npGameGuard.h"
#endif // NP_GAME_GUARD

#ifdef LDK_ADD_GLOBAL_PORTAL_SYSTEM
	#include "GlobalPortalSystem.h"
#endif //LDK_ADD_GLOBAL_PORTAL_SYSTEM
#ifdef LEM_ADD_GAMECHU	// Çì´õÆÄÀÏ ÀÎÅ¬·çµå
	#include <conio.h>
	#include "GCCertification.h"
#endif // LEM_ADD_GAMECHU


#include "CSChaosCastle.h"
#include "GMHellas.h"

#include <io.h>


#ifdef MR0
	#include "./Shader/EngineGate.h"
#endif //MR0

#include "Input.h"
#include "./Time/Timer.h"
#include "UIMng.h"

#ifdef MOVIE_DIRECTSHOW
#include <dshow.h>
#include "MovieScene.h"
#endif // MOVIE_DIRECTSHOW
#include "GameCensorship.h"
// ¸Ê °ü·Ã include
#ifdef PSW_ADD_MAPSYSTEM
	#include "w_MapHeaders.h"
#endif // PSW_ADD_MAPSYSTEM

#ifdef LDK_ADD_NEW_PETPROCESS
	#include "w_PetProcess.h"
#endif //LDK_ADD_NEW_PETPROCESS

#ifdef CSK_MOD_PROTECT_AUTO_V1
	#include "ProtectAuto.h"
#endif // CSK_MOD_PROTECT_AUTO_V1

#ifdef PBG_MOD_GAMEGUARD_HANDLE
	#include "./ExternalObject/Nprotect/NPGameGuardHandle.h"
#endif //PBG_MOD_GAMEGUARD_HANDLE

#include "ThemidaInclude.h"

#ifdef _DEBUG
	#include "./Shader/VPManager.h"
#endif // _DEBUG

#if defined LDK_ADD_SCALEFORM
#include "CGFxProcess.h"
#endif //LDK_ADD_SCALEFORM

#ifdef LJH_ADD_SUPPORTING_MULTI_LANGUAGE2
#include "MultiLanguage.h"
#endif //LJH_ADD_SUPPORTING_MULTI_LANGUAGE
///////////////////////////////////////////
CUIMercenaryInputBox * g_pMercenaryInputBox = NULL;
CUITextInputBox * g_pSingleTextInputBox = NULL;
CUITextInputBox * g_pSinglePasswdInputBox = NULL;
int g_iChatInputType = 1;
extern BOOL g_bIMEBlock;

CChatRoomSocketList * g_pChatRoomSocketList = NULL;

#ifdef LJH_ADD_SUPPORTING_MULTI_LANGUAGE2
CMultiLanguage *pMultiLanguage = NULL;
#endif //LJH_ADD_SUPPORTING_MULTI_LANGUAGE

extern DWORD g_dwTopWindow;

#ifdef MOVIE_DIRECTSHOW
CMovieScene*	g_pMovieScene = NULL;
#endif // MOVIE_DIRECTSHOW

CUIManager* g_pUIManager = NULL;
CUIMapName* g_pUIMapName = NULL;		// rozy

int Time_Effect = 0;
bool ashies = false;
int weather = rand()%3;	//0 = ¸¼À½,1 = ºñ¿À´Â³¯,2 = ¾È°³°¡ ³¤³¯.

#ifdef TEENAGER_REGULATION	//Ã»¼Ò³âÀÚÀ²±¸±ÔÁ¦
	int Time_Regulation = 0;
#endif

///////////////////////////////////////////

#ifdef NP_GAME_GUARD

	#if SELECTED_LANGUAGE == LANGUAGE_KOREAN
		#if defined USE_MU_INTERNAL_TEST
			const char* g_szGameGuard = "MuTestCS25";
		#elif defined USE_MUTEST_INI
			const char* g_szGameGuard = "MuTest";
		#else
#ifdef GAMEGUARD_BLUEMU_VERSION
			const char* g_szGameGuard = "MuBlue";
#else //GAMEGUARD_BLUEMU_VERSION
			const char* g_szGameGuard = "Mu";
#endif //GAMEGUARD_BLUEMU_VERSION
		#endif
	#elif SELECTED_LANGUAGE == LANGUAGE_JAPANESE
		const char* g_szGameGuard = "MuJP";
	#elif SELECTED_LANGUAGE == LANGUAGE_ENGLISH
		const char* g_szGameGuard = "MuEng";
	#elif SELECTED_LANGUAGE == LANGUAGE_TAIWANESE
		const char* g_szGameGuard = "MuInsrea";
	#elif SELECTED_LANGUAGE == LANGUAGE_CHINESE
		#ifndef _TEST_SERVER
			const char* g_szGameGuard = "MuThe9";
		#else // _TEST_SERVER
			const char* g_szGameGuard = "MuThe9Test";
		#endif// _TEST_SERVER
	#elif SELECTED_LANGUAGE == LANGUAGE_PHILIPPINES
		const char* g_szGameGuard = "MuPH";
	#elif SELECTED_LANGUAGE == LANGUAGE_VIETNAMESE
		#ifdef USE_VIETNAMESE_NPGAME_TEST
			const char* g_szGameGuard = "MuVNTest";
		#else //USE_VIETNAMESE_NPGAME_TEST
			const char* g_szGameGuard = "MuVN";	
		#endif //USE_VIETNAMESE_NPGAME_TEST
	#endif	// SELECTED_LANGUAGE == LANGUAGE_KOREAN

	CNPGameLib* g_pnpGL = NULL;

#endif	// NP_GAME_GUARD

HWND      g_hWnd  = NULL;
HINSTANCE g_hInst = NULL;
HDC       g_hDC   = NULL;
HGLRC     g_hRC   = NULL;
HFONT     g_hFont = NULL;
HFONT     g_hFontBold = NULL;
HFONT     g_hFontBig = NULL;
HFONT     g_hFixFont = NULL;	// ÇÈ¼¿ °íÁ¤ Å©±â UIÀÇ Àü¿ë ÆùÆ®.
#ifdef PBG_ADD_INGAMESHOP_FONT
HFONT     g_hInGameShopFont = NULL;
#endif //PBG_ADD_INGAMESHOP_FONT

CTimer*		g_pTimer = NULL;	// performance counter.
//HFONT     g_hFontSmall = NULL;          //  ÇöÀç »ç¿ëÇÏÁö ¾Ê´Â ÆùÆ®.
bool      Destroy = false;
bool      ActiveIME = false;

BYTE*				RendomMemoryDump;
ITEM_ATTRIBUTE*		ItemAttRibuteMemoryDump;
CHARACTER*			CharacterMemoryDump;

int       RandomTable[100];

char TextMu[]       = "mu.exe";


char *Language       = LanguageName[SELECTED_LANGUAGE];

char *lpszLocale = lpszLocaleName[SELECTED_LANGUAGE];

CErrorReport g_ErrorReport;

BOOL g_bMinimizedEnabled = FALSE;
int g_iScreenSaverOldValue = 60*15;


// For Debuging - Profiling
#ifdef DO_PROFILING
CProfiler *g_pProfiler = 0;
#endif // DO_PROFILING

#ifdef DO_PROFILING_FOR_LOADING
CProfiler *g_pProfilerForLoading = 0;
#endif // DO_PROFILING_FOR_LOADING

// For Debuging - DebugCamera
#ifdef DO_PROCESS_DEBUGCAMERA
CDebugCameraManager *g_pDebugCameraManager = 0;
#endif // DO_PROCESS_DEBUGCAMERA

// For Debuging - Unfix FixedFrame
#if defined(LDS_FOR_DEVELOPMENT_TESTMODE) || defined(LDS_UNFIXED_FIXEDFRAME_FORDEBUG)
bool g_bUnfixedFixedFrame = false;
#endif // defined(LDS_FOR_DEVELOPMENT_TESTMODE) || defined(LDS_UNFIXED_FIXEDFRAME_FORDEBUG)


//////////////////////////////////////////////////////////////////////////
//  EXTERN.
//////////////////////////////////////////////////////////////////////////
extern float g_fScreenRate_x;	// ¡Ø
extern float g_fScreenRate_y;

#if defined USER_WINDOW_MODE || (defined WINDOWMODE)
BOOL g_bUseWindowMode = TRUE;
#endif

///////////////////////////////////////////////////////////////////////////////
// mp3 ÇÃ·¹ÀÌ ÇÏ´Â ÇÔ¼ö
///////////////////////////////////////////////////////////////////////////////

char Mp3FileName[256];

#pragma comment(lib, "wzAudio.lib")
#include "wzAudio.h"

void StopMp3(char *Name, BOOL bEnforce)
{
    if(!m_MusicOnOff && !bEnforce) return;

	if(Mp3FileName[0] != NULL)
	{
		if(strcmp(Name, Mp3FileName) == 0) {
			wzAudioStop();
			Mp3FileName[0] = NULL;
		}
	}
}

void PlayMp3(char *Name, BOOL bEnforce )
{
	if(Destroy) return;
    if(!m_MusicOnOff && !bEnforce) return;

	if(strcmp(Name,Mp3FileName) == 0) {
		return ;
	}
	else {
#if SELECTED_LANGUAGE == LANGUAGE_JAPANESE
		wzAudioPlay(Name, -1);
#else
		wzAudioPlay(Name, 1);
#endif	// SELECTED_LANGUAGE == LANGUAGE_JAPANESE
		strcpy(Mp3FileName,Name);
	}
}

// À½¾ÇÀÌ ³¡³µ´Â°¡?
bool IsEndMp3()
{
	if (100 == wzAudioGetStreamOffsetRange())
		return true;
	return false;
}

#ifdef YDG_ADD_DOPPELGANGER_SOUND
int GetMp3PlayPosition()
{
	return wzAudioGetStreamOffsetRange();
}
#endif	// YDG_ADD_DOPPELGANGER_SOUND

///////////////////////////////////////////////////////////////////////////////
// Window °ü·ÃÇÔ¼ö
///////////////////////////////////////////////////////////////////////////////

bool FindHack = false;
extern int  LogIn;
extern char LogInID[];

//ÇÙ ÇÁ·Î±×·¥ ¹ß°ß½Ã À©µµ¿ì ºüÁ®³ª°¡´Â ÇÔ¼ö
void CloseHack(HWND shWnd,bool Flag)
{
#ifdef PBG_MOD_GAMEGUARD_HANDLE
	if(BLUE_MU::IsBlueMuServer())
		if(!g_NPGameGuardHandle->CheckDestroyWin())
			return;

	if(!g_NPGameGuardHandle->GetDestroyMsg())
	{
		g_NPGameGuardHandle->SetDestroyMsg(true);
#ifdef NP_GAME_GUARD
		npGameGuard::showErrorMessage (g_hWnd, g_NPGameGuardHandle->GetErrorMsgIndex());
#endif //NP_GAME_GUARD
	}
	else
	{
		return;
	}
#endif //PBG_MOD_GAMEGUARD_HANDLE
	FindHack = true;
	char Text[100];
	sprintf(Text,GlobalText[1],LogInID);
	MessageBox(g_hWnd,Text,"Error",MB_OK);
	g_ErrorReport.Write("%s\r\n", Text);
	SendMessage(g_hWnd,WM_DESTROY,0,0);
	if(Flag)
	{
		SendMessage( shWnd, WM_USER + 10010, 0, 0);
      	SendMessage(shWnd,WM_CLOSE,0,0);
	}
}

//ÇÙ ÇÁ·Î±×·¥ÀÌ »óÁÖ ÇØ ÀÖ´ÂÄ¡ Ã¼Å©ÇÏ´Â ÇÔ¼ö
void CheckHack( void)
{
	if(FindHack) return;
	SendCheck();
#ifndef FOR_HACKING
#ifdef NDEBUG
	if(LogIn >= 2)
	{
		HWND shWnd = FindWindow(NULL, "Speed Hack - PCGameHacks.com");
		if( shWnd )
		{
			CloseHack(shWnd,true);
			return;
		}
		shWnd = FindWindow(NULL, "GameHack 2.0");
		if( shWnd )
		{
			CloseHack(shWnd,true);
			return;
		}
		shWnd = FindWindow(NULL, "Game Master v7.00 (Win95 & Win98)");
		if( shWnd )
		{
			CloseHack(shWnd,true);
			return;
		}
		shWnd = FindWindow(NULL, "Game Cheater ArtMoney v6.08");
		if( shWnd )
		{
			CloseHack(shWnd,true);
			return;
		}
		shWnd = FindWindow(NULL, "Game Cheater ArtMoney v6.10");
		if( shWnd )
		{
			CloseHack(shWnd,true);
			return;
		}
		shWnd = FindWindow(NULL, "Game Cheater ArtMoney v6.12");
		if( shWnd )
		{
			CloseHack(shWnd,true);
			return;
		}
		/*shWnd = FindWindow(NULL, "Minimize Hack Tool v1.2");
		if( shWnd )
		{
			CloseHack(shWnd,true);
			return;
		}
		shWnd = FindWindow(NULL, "Minimize Window Hack Tool");
		if( shWnd )
		{
			CloseHack(shWnd,true);
			return;
		}*/
#ifdef USE_NPROTECT
		FindNprotectWindow();
#endif //USE_NPROTECT
	}
#endif
#endif
}

#ifdef ATTACH_HACKSHIELD
int __stdcall HackShieldCallback(long lCode, long lParamSize, void* pParam)
{
	const char* szErrorBoxTitle = "HackShield Error";
	switch(lCode)
	{
		//Engine Callback
		case AHNHS_ENGINE_DETECT_GAME_HACK:
		case AHNHS_ENGINE_DETECT_GENERAL_HACK:
		{
			leaf::CBTMessageBox(g_hWnd, GlobalText[1450], szErrorBoxTitle, MB_ICONERROR, true);
			g_ErrorReport.Write("[HACKSHIELD] ´ÙÀ½ À§Ä¡¿¡¼­ ÇØÅ·ÅøÀÌ ¹ß°ßµÇ¾î ÇÁ·Î±×·¥À» Á¾·á½ÃÄ×½À´Ï´Ù.(%s)\r\n", (char*)pParam);

			if(g_hWnd) {
				SendMessage(g_hWnd, WM_DESTROY, 0, 0);
			}
			break;
		}

		//ÀÌ¹Ì ÈÄÅ·ÀÌ ÀÌ·ç¾îÁø »óÅÂ 
		//ÀÏºÎ API°¡ ÀÌ¹Ì ÈÄÅ·µÇ¾î ÀÖ´Â »óÅÂ
		//±×·¯³ª ½ÇÁ¦·Î´Â ÀÌ¸¦ Â÷´ÜÇÏ°í ÀÖ±â ¶§¹®¿¡ ´Ù¸¥ ÈÄÅ·½Ãµµ ÇÁ·Î±×·¥À¸ µ¿ÀÛÇÏÁö ¾Ê½À´Ï´Ù.
		//ÀÌ CallbackÀº ´ÜÁö °æº¸³»Áö´Â Á¤º¸Á¦°ø Â÷¿ø¿¡¼­ »ç¿ëÇÒ ¼ö ÀÖ½À´Ï´Ù.
		case AHNHS_ACTAPC_DETECT_ALREADYHOOKED:
		{
			PACTAPCPARAM_DETECT_HOOKFUNCTION pHookFunction = (PACTAPCPARAM_DETECT_HOOKFUNCTION)pParam;
			
			g_ErrorReport.Write("[HACKSHIELD] Already Hooked(-szFunctionName : %s -szModuleName : %s)\r\n", 
				pHookFunction->szFunctionName, pHookFunction->szModuleName);

			break;
		}

		//Speed °ü·Ã
		case AHNHS_ACTAPC_DETECT_SPEEDHACK:
		case AHNHS_ACTAPC_DETECT_SPEEDHACK_APP:
		{
			leaf::CBTMessageBox(g_hWnd, GlobalText[1451], szErrorBoxTitle, MB_ICONERROR, true);
			g_ErrorReport.Write("[HACKSHIELD] PC¿¡¼­ ½ºÇÇµåÇÙÀ¸·Î ÀÇ½ÉµÇ´Â Áõ»óÀÌ ¹ß°ßµÇ¾ú½À´Ï´Ù.(Code : %d)\r\n", lCode);
			if(g_hWnd) {
				SendMessage(g_hWnd, WM_DESTROY, 0, 0);
			}
			break;
		}

		//µð¹ö±ë ¹æÁö 
		case AHNHS_ACTAPC_DETECT_KDTRACE:	
		case AHNHS_ACTAPC_DETECT_KDTRACE_CHANGED:
		{
			leaf::CBTMessageBox(g_hWnd, GlobalText[1452], szErrorBoxTitle, MB_ICONERROR, true);
			g_ErrorReport.Write("[HACKSHIELD] µð¹ö±ë½Ãµµ°¡ ÀÖ¾ú½À´Ï´Ù.(Code : %d)\r\n", lCode);
			if(g_hWnd) {
				SendMessage(g_hWnd, WM_DESTROY, 0, 0);
			}
			break;
		}

		//ÇØÅ· ¹æÁö ±â´É ÀÌ»ó 
		case AHNHS_ACTAPC_DETECT_AUTOMOUSE:
		{
			leaf::CBTMessageBox(g_hWnd, GlobalText[1453], szErrorBoxTitle, MB_ICONERROR, true);
			g_ErrorReport.Write("[HACKSHIELD] ÇØÅ·¹æÁö ±â´ÉÀÌ»ó.(Code : %d)\r\n", lCode);
			if(g_hWnd) {
				SendMessage(g_hWnd, WM_DESTROY, 0, 0);
			}
			break;
		}
		case AHNHS_ACTAPC_DETECT_DRIVERFAILED:
		{
			leaf::CBTMessageBox(g_hWnd, GlobalText[1454], szErrorBoxTitle, MB_ICONERROR, true);
			g_ErrorReport.Write("[HACKSHIELD] ÇØÅ·¹æÁö ±â´ÉÀÌ»ó.(Code : %d)\r\n", lCode);
			if(g_hWnd) {
				SendMessage(g_hWnd, WM_DESTROY, 0, 0);
			}
			break;
		}
		case AHNHS_ACTAPC_DETECT_HOOKFUNCTION:
		{
			leaf::CBTMessageBox(g_hWnd, GlobalText[1455], szErrorBoxTitle, MB_ICONERROR, true);
			g_ErrorReport.Write("[HACKSHIELD] ÇØÅ·¹æÁö ±â´ÉÀÌ»ó.(Code : %d)\r\n", lCode);
			if(g_hWnd) {
				SendMessage(g_hWnd, WM_DESTROY, 0, 0);
			}
			break;
		}
		case AHNHS_ACTAPC_DETECT_MESSAGEHOOK:
		{
			leaf::CBTMessageBox(NULL, GlobalText[1456], szErrorBoxTitle, MB_ICONERROR, true);
			g_ErrorReport.Write("[HACKSHIELD] ÇØÅ·¹æÁö ±â´ÉÀÌ»ó.(Code : 0x%d)\r\n", lCode);
			if(g_hWnd) {
				SendMessage(g_hWnd, WM_DESTROY, 0, 0);
			}
			break;
		}
	}
	return 1;
}
bool AttachHackShield(int nGameCode, const char* szLicenseKey) 
{
	char* szFileName;
	char szEhSvcFileFullPath[256] = {0,};
	GetFullPathName("HackShield/EhSvc.dll", 256, szEhSvcFileFullPath, &szFileName);

	int nRet;
	nRet = _AhnHS_Initialize(szEhSvcFileFullPath, HackShieldCallback, 
		nGameCode, szLicenseKey, 
		AHNHS_CHKOPT_SPEEDHACK | AHNHS_CHKOPT_AUTOMOUSE |
#ifndef _DEBUG
		AHNHS_CHKOPT_READWRITEPROCESSMEMORY | AHNHS_CHKOPT_KDTARCER | AHNHS_CHKOPT_OPENPROCESS |
#endif // _DEBUG
		AHNHS_CHKOPT_MESSAGEHOOK | AHNHS_CHKOPT_PROCESSSCAN | AHNHS_DONOT_TERMINATE_PROCESS |
		AHNHS_ALLOW_SVCHOST_OPENPROCESS | AHNHS_USE_LOG_FILE/* | AHNHS_CHECK_UPDATE_STATE*/);

	assert(nRet != HS_ERR_INVALID_PARAM);
	assert(nRet != HS_ERR_INVALID_LICENSE);
	assert(nRet != HS_ERR_ALREADY_INITIALIZED);

	const char* szErrorBoxTitle = "HackShield Initailize Error";
	if(nRet != HS_ERR_OK) 
	{
		switch(nRet)
		{
			case HS_ERR_ANOTHER_SERVICE_RUNNING:
			{
				leaf::CBTMessageBox(g_hWnd, "[HACKSHIELD] HS_ERR_ANOTHER_SERVICE_RUNNING", szErrorBoxTitle, MB_ICONERROR, true);
				g_ErrorReport.Write("[HACKSHIELD] ´Ù¸¥ °ÔÀÓÀÌ ½ÇÇàÁßÀÔ´Ï´Ù.\nÇÁ·Î±×·¥À» Á¾·áÇÕ´Ï´Ù.", szErrorBoxTitle, MB_ICONERROR);
				break;
			}
			case HS_ERR_INVALID_FILES:
			{
				leaf::CBTMessageBox(g_hWnd, "[HACKSHIELD] HS_ERR_INVALID_FILES", szErrorBoxTitle, MB_ICONERROR, true);
				g_ErrorReport.Write("[HACKSHIELD] Àß¸øµÈ ÆÄÀÏ ¼³Ä¡µÇ¾ú½À´Ï´Ù.\nÇÁ·Î±×·¥À» Àç¼³Ä¡ÇÏ½Ã±â ¹Ù¶ø´Ï´Ù.", szErrorBoxTitle, MB_ICONERROR);
				break;
			}
			case HS_ERR_SOFTICE_DETECT:
			{
				leaf::CBTMessageBox(g_hWnd, "[HACKSHIELD] HS_ERR_SOFTICE_DETECT", szErrorBoxTitle, MB_ICONERROR, true);
				g_ErrorReport.Write("[HACKSHIELD] ÄÄÇ»ÅÍ¿¡¼­ SoftICE ½ÇÇàÀÌ °¨ÁöµÇ¾ú½À´Ï´Ù.\nSoftICE ½ÇÇàÀ» ÁßÁö½ÃÅ² µÚ¿¡ ´Ù½Ã ½ÇÇà½ÃÄÑÁÖ½Ã±â¹Ù¶ø´Ï´Ù.", szErrorBoxTitle, MB_ICONERROR);
				break;
			}
			case HS_ERR_INIT_DRV_FAILED:
			{
				leaf::CBTMessageBox(g_hWnd, "[HACKSHIELD] HS_ERR_INIT_DRV_FAILED", szErrorBoxTitle, MB_ICONERROR, true);
				g_ErrorReport.Write("[HACKSHIELD] ÇØÅ·¹æÁö ±â´É¿¡ ¹®Á¦°¡ ¹ß»ýÇÏ¿´½À´Ï´Ù.(Error Code = %x)\nÇÁ·Î±×·¥À» Á¾·áÇÕ´Ï´Ù.", nRet);
				break;
			}
			case HS_ERR_NEED_UPDATE:
			{
				leaf::CBTMessageBox(g_hWnd, "[HACKSHIELD] HS_ERR_NEED_UPDATE", szErrorBoxTitle, MB_ICONERROR, true);
				g_ErrorReport.Write("[HACKSHIELD] ¾÷µ¥ÀÌÆ®ÆÄÀÏÀÌ Á¤»óÀûÀÌÁö ¾Ê½À´Ï´Ù.(Error Code = %x)\nÇÁ·Î±×·¥À» Á¾·áÇÕ´Ï´Ù.", nRet);
				break;
			}
		}
		return false;
	}

	//½ÃÀÛ ÇÔ¼ö È£Ãâ 
	nRet = _AhnHS_StartService();
	assert(nRet != HS_ERR_NOT_INITIALIZED);
	assert(nRet != HS_ERR_ALREADY_SERVICE_RUNNING);

	if(nRet != HS_ERR_OK)
	{
		// nRet ==  HS_ERR_START_ENGINE_FAILED || nRet == HS_ERR_DRV_FILE_CREATE_FAILED
		// || nRet == HS_ERR_REG_DRV_FILE_FAILED || nRet == HS_ERR_START_DRV_FAILED
		g_ErrorReport.Write("ÇØÅ·¹æÁö ±â´É¿¡ ¹®Á¦°¡ ¹ß»ýÇÏ¿´½À´Ï´Ù.(Error Code = 0x%x)\nÇÁ·Î±×·¥À» Á¾·áÇÕ´Ï´Ù.", nRet);
		leaf::CBTMessageBox(g_hWnd, "[HACKSHIELD] Start Error", szErrorBoxTitle, MB_ICONERROR, true);
		return false;
	}

	return true;
}
void DetachHackShield()
{
	//¼­ºñ½º Á¾·á ÇÔ¼ö È£Ãâ 
	_AhnHS_StopService();
	//¿Ï·á ÇÔ¼ö È£Ãâ 
	_AhnHS_Uninitialize();
}
#endif // ATTACH_HACKSHIELD

///////////////////////////////////////////////////////////////////////////////
// Window °ü·ÃÇÔ¼ö
///////////////////////////////////////////////////////////////////////////////

//À©µµ¿ì Á×ÀÌ´Â ÇÔ¼ö
GLvoid KillGLWindow(GLvoid)								
{
	if (g_hRC)											// ·£´õ¸µ ÄÁÅØ½ºÆ®°¡ ÀÖ´Ù¸é...
	{
		if (!wglMakeCurrent(NULL,NULL))					// DC¿Í RC ÄÁÅØ½ºÆ®¸¦ Á¦°ÅÇÒ ¼ö ÀÖ´Â°¡?
		{
			g_ErrorReport.Write( "GL - Release Of DC And RC Failed\r\n");
			MessageBox(NULL,"Release Of DC And RC Failed.","Error",MB_OK | MB_ICONINFORMATION);
		}

		if (!wglDeleteContext(g_hRC))						// ·£´õ¸µ ÄÁÅØ½ºÆ® Á¦°Å
		{
			g_ErrorReport.Write( "GL - Release Rendering Context Failed\r\n");
			MessageBox(NULL,"Release Rendering Context Failed.","Error",MB_OK | MB_ICONINFORMATION);
		}

		g_hRC=NULL;										// RC <- NULL ´ëÀÔ
	}

	if (g_hDC && !ReleaseDC(g_hWnd,g_hDC))					// DC Á¦°Å
	{
		g_ErrorReport.Write( "GL - OpenGL Release Error\r\n");
		MessageBox(NULL,"OpenGL Release Error.","Error",MB_OK | MB_ICONINFORMATION);
		g_hDC=NULL;										// DC <- NULL ´ëÀÔ
	}

	/*if (g_hWnd && !DestroyWindow(g_hWnd))					// À©µµ¿ìÁî¸¦ ÆÄ±«ÇÑ´Ù.
	{
		MessageBox(NULL,"OpenGL Destroy Error. ±×·¡ÇÈÄ«µå ÃÖ½Å µå¶óÀÌ¹ö¸¦ ¼³Ä¡ÇÏ½Ê½Ã¿ä.","ERROR",MB_OK | MB_ICONINFORMATION);
		g_hWnd=NULL;										// hWnd <- NULL ´ëÀÔ
	}*/

	/*if (!UnregisterClass("OpenGL",g_hInst))			// À©µµ¿ì Å¬·¡½º Á¦°Å
	{
		MessageBox(NULL,"Could Not Unregister Class.","ERROR",MB_OK | MB_ICONINFORMATION);
		g_hInst=NULL;									// hInstance <- NULL ´ëÀÔ
	}*/
#if (defined WINDOWMODE)
	if (g_bUseWindowMode == FALSE)
	{
		ChangeDisplaySettings(NULL,0);					// µ¥½ºÅ©Å¾ ¼³Á¤À¸·Î º¹±Í
		ShowCursor(TRUE);								// ¸¶¿ì½º Æ÷ÀÎÆ®¸¦ º¸ÀÌµµ·Ï
	}
#else
#ifdef ENABLE_FULLSCREEN
#if defined USER_WINDOW_MODE || (defined WINDOWMODE)
	if (g_bUseWindowMode == FALSE)
#endif	// USER_WINDOW_MODE
	{
		ChangeDisplaySettings(NULL,0);					// µ¥½ºÅ©Å¾ ¼³Á¤À¸·Î º¹±Í
		ShowCursor(TRUE);								// ¸¶¿ì½º Æ÷ÀÎÆ®¸¦ º¸ÀÌµµ·Ï
	}
#endif //ENABLE_FULLSCREEN
#endif	//WINDOWMODE(#else)
}


BOOL GetFileNameOfFilePath( char *lpszFile, char *lpszPath)
{
	int iFind = ( int)'\\';
	char *lpFound = lpszPath;
	char *lpOld = lpFound;
	while ( lpFound)
	{
		lpOld = lpFound;
		lpFound = strchr( lpFound + 1, iFind);
	}

	// ÀÌ¸§ º¹»ç
	if ( strchr( lpszPath, iFind))
	{
		strcpy( lpszFile, lpOld + 1);
	}
	else
	{
		strcpy( lpszFile, lpOld);
	}
	// µÚ¿¡ ¿É¼Ç ºÙÀº °Í ¾ø¾Ö±â
	BOOL bCheck = TRUE;
	for ( char *lpTemp = lpszFile; bCheck; ++lpTemp)
	{
		switch ( *lpTemp)
		{
		case '\"':
		case '\\':
		case '/':
		case ' ':
			*lpTemp = '\0';
		case '\0':
			bCheck = FALSE;
			break;
		}
	}

	return ( TRUE);
}

HANDLE g_hMainExe = INVALID_HANDLE_VALUE;

BOOL OpenMainExe( void)
{
#ifdef _DEBUG
	return ( TRUE);
#endif
	char lpszFile[MAX_PATH];
	char *lpszCommandLine = GetCommandLine();
#ifdef KWAK_FIX_COMPILE_LEVEL4_WARNING
	GetFileNameOfFilePath( lpszFile, lpszCommandLine);
#else // KWAK_FIX_COMPILE_LEVEL4_WARNING
	BOOL bResult = GetFileNameOfFilePath( lpszFile, lpszCommandLine);
#endif // KWAK_FIX_COMPILE_LEVEL4_WARNING


	// ¿­¾î³ö¼­ °íÄ¡Áö ¸øÇÏ°Ô ÇÑ´Ù.
	g_hMainExe = CreateFile( ( char*)lpszFile, GENERIC_READ, FILE_SHARE_READ | FILE_SHARE_WRITE, NULL, OPEN_EXISTING,
								FILE_ATTRIBUTE_NORMAL, 0);
	
	return ( INVALID_HANDLE_VALUE != g_hMainExe);
}

void CloseMainExe( void)
{
	CloseHandle( g_hMainExe);
}

WORD DecryptCheckSumKey( WORD wSource)
{
	WORD wAcc = wSource ^ 0xB479;
	return ( ( wAcc >> 10) << 4) | ( wAcc & 0xF);
}

DWORD GenerateCheckSum( BYTE *pbyBuffer, DWORD dwSize, WORD wKey)
{
	DWORD dwKey = ( DWORD)wKey;
	DWORD dwResult = dwKey << 9;
	for ( DWORD dwChecked = 0; dwChecked <= dwSize - 4; dwChecked += 4)
	{
		DWORD dwTemp;
		memcpy( &dwTemp, pbyBuffer + dwChecked, sizeof ( DWORD));

		// 1. ´Ü°è
		switch ( ( dwChecked / 4 + wKey) % 3)
		{
		case 0:
			dwResult ^= dwTemp;
			break;
		case 1:
			dwResult += dwTemp;
			break;
		case 2:
			dwResult <<= ( dwTemp % 11);
			dwResult ^= dwTemp;
			break;
		}

		// 2. ´Ü°è
		if ( 0 == ( dwChecked % 4))
		{
			dwResult ^= ( ( dwKey + dwResult) >> ( ( dwChecked / 4) % 16 + 3));
		}
	}

	return ( dwResult);
}

DWORD GetCheckSum( WORD wKey)
{
	wKey = DecryptCheckSumKey( wKey);

#ifdef KJH_MOD_RESOURCE_GUARD
	// ÆÄÀÏ ¿­±â
	char lpszFile[MAX_PATH];

#ifdef _TEST_SERVER
	strcpy( lpszFile, "data\\local\\Gameguardtest.csr");
#else  // _TEST_SERVER
	strcpy( lpszFile, "data\\local\\Gameguard.csr");
#endif // _TEST_SERVER

	HANDLE hFile = CreateFile( ( char*)lpszFile, GENERIC_READ, FILE_SHARE_READ, NULL, OPEN_EXISTING, FILE_ATTRIBUTE_NORMAL, 0);
	if ( INVALID_HANDLE_VALUE == hFile)
	{
		return ( 0);
	}
	
	DWORD dwSize = GetFileSize( hFile, NULL);
	BYTE *pbyBuffer = new BYTE [dwSize];
	DWORD dwNumber;
	ReadFile( hFile, pbyBuffer, dwSize, &dwNumber, 0);
	CloseHandle( hFile);
	
	// Å×ÀÌºí »ý¼º
	DWORD dwCheckSum = GenerateCheckSum(pbyBuffer, dwSize, wKey);
	delete [] pbyBuffer;
	
	return (dwCheckSum);
#else // KJH_MOD_RESOURCE_GUARD

	// ÆÄÀÏ ¿­±â
	char lpszFile[MAX_PATH];
#ifdef _DEBUG
	strcpy( lpszFile, "main.exe");
#else // _DEBUG
	char *lpszCommandLine = GetCommandLine();
	BOOL bResult = GetFileNameOfFilePath( lpszFile, lpszCommandLine);
#endif // _DEBUG

	HANDLE hFile;
#ifdef NDEBUG
	FAKE_CODE(Pos_WritableCheck);
Pos_WritableCheck:
	// ¾²±â °¡´É¿©ºÎ Ã¼Å© (main.exe °¡ ½ÇÇàÁßÀÌ¸é ¾²±â °¡´ÉÇÏÁö ¾Ê´Ù.)
	hFile = CreateFile( ( char*)lpszFile, GENERIC_WRITE, FILE_SHARE_READ, NULL, OPEN_EXISTING, FILE_ATTRIBUTE_NORMAL, 0);
	if ( INVALID_HANDLE_VALUE != hFile)
	{
		// ÇØÅ·½Ãµµ
		SendHackingChecked( 0x03, 0);
		return ( 0);
	}
#endif // NDEBUG

	hFile = CreateFile( ( char*)lpszFile, GENERIC_READ, FILE_SHARE_READ, NULL, OPEN_EXISTING, FILE_ATTRIBUTE_NORMAL, 0);
	if ( INVALID_HANDLE_VALUE == hFile)
	{
		return ( 0);
	}

	DWORD dwSize = GetFileSize( hFile, NULL);
	BYTE *pbyBuffer = new BYTE [dwSize];
	DWORD dwNumber;
	ReadFile( hFile, pbyBuffer, dwSize, &dwNumber, 0);
	CloseHandle( hFile);

	// Å×ÀÌºí »ý¼º
	DWORD dwCheckSum = GenerateCheckSum( pbyBuffer, dwSize, wKey);
	delete [] pbyBuffer;

	return ( dwCheckSum);
#ifdef USE_SELFCHECKCODE
	END_OF_FUNCTION( Pos_SelfCheck01);
Pos_SelfCheck01:
	;
#endif
#endif // KJH_MOD_RESOURCE_GUARD
}


BOOL GetFileVersion( char *lpszFileName, WORD *pwVersion)
{
	DWORD dwHandle;
	DWORD dwLen = GetFileVersionInfoSize( lpszFileName, &dwHandle);	// »çÀÌÁî ¾ò±â
	if ( dwLen <= 0)
	{
		return ( FALSE);
	}

	BYTE *pbyData = new BYTE [dwLen];
	if ( !GetFileVersionInfo( lpszFileName, dwHandle, dwLen, pbyData))	// ½ÇÁ¦ Á¤º¸ ¾ò±â
	{
		delete [] pbyData;
		return ( FALSE);
	}

	VS_FIXEDFILEINFO *pffi;
	UINT uLen;
	if ( !VerQueryValue( pbyData, "\\", ( LPVOID*)&pffi, &uLen))	// ¹öÁ¯°ª ¾ò±â
	{
		delete [] pbyData;
		return ( FALSE);
	}

	pwVersion[0] = HIWORD( pffi->dwFileVersionMS);
	pwVersion[1] = LOWORD( pffi->dwFileVersionMS);
	pwVersion[2] = HIWORD( pffi->dwFileVersionLS);
	pwVersion[3] = LOWORD( pffi->dwFileVersionLS);

	delete [] pbyData;
	return ( TRUE);
}


extern PATH     *path;

//À©µµ¿ì Á×ÀÌ´Â ÇÔ¼ö
void DestroyWindow()
{
	//. save volume level
	leaf::CRegKey regkey;
#ifdef PBG_ADD_LAUNCHER_BLUE
	regkey.SetKey(leaf::CRegKey::_HKEY_CURRENT_USER, "SOFTWARE\\Webzen\\Mu_Blue\\Config");
#else //PBG_ADD_LAUNCHER_BLUE
	regkey.SetKey(leaf::CRegKey::_HKEY_CURRENT_USER, "SOFTWARE\\Webzen\\Mu\\Config");
#endif //PBG_ADD_LAUNCHER_BLUE
	regkey.WriteDword("VolumeLevel", g_pOption->GetVolumeLevel());


#ifdef MR0
	EngineGate::UnInit();
#endif //MR0

	CUIMng::Instance().Release();

#ifdef LDK_ADD_SCALEFORM
	if(GFxProcess::GetInstancePtr()->GetUISelect() == 1)
	{
		GFxProcess::GetInstancePtr()->GFxDestroy();
		GFxProcess* temp = GFxProcess::GetInstancePtr();
 		delete temp;
 		temp = NULL;
	}
#endif //LDK_ADD_SCALEFORM

#ifdef MOVIE_DIRECTSHOW
	if(g_pMovieScene)
	{
		g_pMovieScene->Destroy();
	}
#endif // MOVIE_DIRECTSHOW

	//. release font handle
	if(g_hFont)
		DeleteObject((HGDIOBJ)g_hFont);

	if(g_hFontBold)
		DeleteObject((HGDIOBJ)g_hFontBold);

	if(g_hFontBig)
		DeleteObject((HGDIOBJ)g_hFontBig);

	if(g_hFixFont)
		::DeleteObject((HGDIOBJ)g_hFixFont);
#ifdef PBG_ADD_INGAMESHOP_FONT
	if(g_hInGameShopFont)
		::DeleteObject((HGDIOBJ)g_hInGameShopFont);
#endif //PBG_ADD_INGAMESHOP_FONT

	//////////////////////////////////////////////////////////////////////////
    //  ¸Þ¸ð¸® ÇØÁ¦

#ifdef YDG_MOD_PROTECT_AUTO_V4_R3
	SEASON3B::CMoveCommandWindowEncrypt::DeleteKey();
#endif	// YDG_MOD_PROTECT_AUTO_V4_R3
#ifdef CSK_MOD_PROTECT_AUTO_V1
	CProtectAuto::Destroy();
#endif // CSK_MOD_PROTECT_AUTO_V1
	

    //  Ä³¸¯ÅÍ ÇØÁ¦.
	ReleaseCharacters();

    //  ±æÃ£±â ¸Þ¸ð¸® ÇØÁ¦.
    if ( path!=NULL )
    {
	    delete path;
    }
	SAFE_DELETE(GateAttribute);
    //  ½ºÅ³ Á¤º¸ ÇØÁ¦.
	for ( int i = 0; i < MAX_SKILLS; ++i)
	{
	}
	SAFE_DELETE(SkillAttribute);

    //  ÁÖÀÎ°ø Ä³¸¯ÅÍ Á¤º¸ ÇØÁ¦.
	SAFE_DELETE(CharacterMachine);

    DeleteWaterTerrain ();

#ifdef MOVIE_DIRECTSHOW
	if(SceneFlag != MOVIE_SCENE)
#endif // MOVIE_DIRECTSHOW
	{
		DeleteObjects();

		//  Object µ¥ÀÌÅÍ ÇØÁ¦.
#ifdef _VS2008PORTING
		for(int i=MODEL_LOGO;i<MAX_MODELS;i++)
#else // _VS2008PORTING
		for(i=MODEL_LOGO;i<MAX_MODELS;i++)
#endif // _VS2008PORTING
		{
			Models[i].Release();
		}

		//  ¸ðµç Bitmap µ¥ÀÌÅÍ ÇØÁ¦.
		Bitmaps.UnloadAllImages();
	}

	SAFE_DELETE_ARRAY( CharacterMemoryDump );
	SAFE_DELETE_ARRAY( ItemAttRibuteMemoryDump );
	SAFE_DELETE_ARRAY( RendomMemoryDump );

#ifdef LDS_FIX_MEMORYLEAK_BMDOPEN2_DUMPMODEL
	SAFE_DELETE_ARRAY( ModelsDump );
#endif // LDS_FIX_MEMORYLEAK_BMDOPEN2_DUMPMODEL
	
#ifdef DYNAMIC_FRUSTRUM
	DeleteAllFrustrum();
#endif //DYNAMIC_FRUSTRUM

///////////////////////////////////////////
	SAFE_DELETE(g_pMercenaryInputBox);
	SAFE_DELETE(g_pSingleTextInputBox);
	SAFE_DELETE(g_pSinglePasswdInputBox);

	SAFE_DELETE(g_pChatRoomSocketList);
	SAFE_DELETE(g_pUIMapName);	// rozy
	SAFE_DELETE( g_pTimer );
	SAFE_DELETE(g_pUIManager);
	 
#ifdef MOVIE_DIRECTSHOW
	SAFE_DELETE(g_pMovieScene);
#endif // MOVIE_DIRECTSHOW

#ifdef LJH_ADD_SUPPORTING_MULTI_LANGUAGE2
	SAFE_DELETE(pMultiLanguage);
#endif //LJH_ADD_SUPPORTING_MULTI_LANGUAGE
	BoostRest( g_BuffSystem );

#ifdef NEW_USER_INTERFACE_SHELL
	BoostRest( g_shell );
#endif //NEW_USER_INTERFACE_SHELL
	
#ifdef PSW_ADD_MAPSYSTEM
	BoostRest( g_MapProcess );
#endif //PSW_ADD_MAPSYSTEM

#ifdef LDK_ADD_NEW_PETPROCESS
	BoostRest( g_petProcess );
#endif //LDK_ADD_NEW_PETPROCESS

	g_ErrorReport.Write( "Destroy" );
	 
	// Á¾·á
    KillProtect();
	HWND shWnd = FindWindow(NULL, "MuPlayer");
	if(shWnd)
		SendMessage(shWnd, WM_DESTROY, 0, 0);
#ifdef ATTACH_HACKSHIELD
	DetachHackShield();
#endif // ATTACH_HACKSHIELD
	
#ifdef NDEBUG
#ifndef FOR_WORK
	int nOldVal; // °ªÀÌ µé¾î°¥ ÇÊ¿ä°¡ ¾øÀ½
	SystemParametersInfo(SPI_SETSCREENSAVETIMEOUT, g_iScreenSaverOldValue, NULL, 0);  // ½ºÅ©¸°¼¼ÀÌ¹ö º¹±¸
    SystemParametersInfo(SPI_SCREENSAVERRUNNING, 0, &nOldVal, 0);  // ´ÜÃàÅ°¸¦ ¾²°Ô ÇÔ
#endif
#endif
}
void DestroySound()
{
	//  ¸ðµç Sound Buffer ÇØÁ¦.
	for(int i=0;i<MAX_BUFFER;i++)
		ReleaseBuffer(i);
	//  
	FreeDirectSound();	//. È¿°úÀ½
	wzAudioDestroy();	//. BGM
}

int g_iInactiveTime = 0;
int g_iNoMouseTime = 0;
int g_iInactiveWarning = 0;
bool g_bWndActive = false;
bool HangulDelete = false;
int Hangul = 0;
bool g_bEnterPressed = false;

int g_iMousePopPosition_x = 0;
int g_iMousePopPosition_y = 0;

extern int TimeRemain;
extern bool EnableFastInput;
void MainScene(HDC hDC);

#ifdef LDS_ADD_MULTISAMPLEANTIALIASING
BOOL ReCreateGLWithWindow(int uiPixelFormat);
BOOL DestroyWindowWithGL();
#endif // LDS_ADD_MULTISAMPLEANTIALIASING

//  ¼îÇÎ¸ôÀ» º¸¿©ÁØ´Ù.
//extern bool showShoppingMall;

#if SELECTED_LANGUAGE == LANGUAGE_TAIWANESE
BOOL g_bTaiwanIMEDouble = FALSE;
#endif	// SELECTED_LANGUAGE == LANGUAGE_TAIWANESE

//À©µµ¿ì ¸Þ¼¼Áö Ã³¸® ÇÔ¼ö
LONG FAR PASCAL WndProc(HWND hwnd,UINT msg,WPARAM wParam,LPARAM lParam)
{
    switch (msg)
    {
#ifdef KWAK_FIX_ALT_KEYDOWN_MENU_BLOCK
	case WM_SYSKEYDOWN:
		{
			return 0;
		}
		break;
#endif // KWAK_FIX_ALT_KEYDOWN_MENU_BLOCK

#if defined PROTECT_SYSTEMKEY && defined NDEBUG
#ifndef FOR_WORK
	case WM_SYSCOMMAND:
		{
			if(wParam == SC_KEYMENU || wParam == SC_SCREENSAVE)
			{
				return 0;
			}
		}
		break;
#endif // !FOR_WORK
#endif // PROTECT_SYSTEMKEY && NDEBUG
    case WM_ACTIVATE:
		if(LOWORD(wParam) == WA_INACTIVE)
		{
			FAKE_CODE( Pos_ActiveFalse);
Pos_ActiveFalse:
#ifdef ACTIVE_FOCUS_OUT
			if (g_bUseWindowMode == FALSE)
#endif	// ACTIVE_FOCUS_OUT
				g_bWndActive = false;
#if defined USER_WINDOW_MODE || (defined WINDOWMODE)
			if (g_bUseWindowMode == TRUE)
			{
				MouseLButton = false;
				MouseLButtonPop = false;
				//MouseLButtonPush = false;
				MouseRButton = false;
				MouseRButtonPop = false;
				MouseRButtonPush = false;
				MouseLButtonDBClick = false;
				MouseMButton = false;
				MouseMButtonPop = false;
				MouseMButtonPush = false;
				MouseWheel = 0;
			}
#ifdef ASG_FIX_ACTIVATE_APP_INPUT
			g_pNewKeyInput->Init();
#endif	// ASG_FIX_ACTIVATE_APP_INPUT
#endif
		}
		else
		{
			FAKE_CODE( Pos_ActiveTrue);
Pos_ActiveTrue:
			g_bWndActive = true;
		}
		break;
	case WM_TIMER :
		//MessageBox(NULL,GlobalText[16],"Error",MB_OK);
		switch( wParam )
		{
		case HACK_TIMER:
			// PKD_ADD_BINARY_PROTECTION
			VM_START
#ifdef NP_GAME_GUARD
			npGameGuard::CheckGameMon();
            SendCheck();
#else // NP_GAME_GUARD
			CheckNpmonCrc( hwnd);
			CheckHack();
#endif // NP_GAME_GUARD
			VM_END
			break;
		case WINDOWMINIMIZED_TIMER:	// À©ÆÃ ¹æÁö ÄÚµå
			PostMessage(g_hWnd, WM_CLOSE, 0, 0);
			break;
		case CHATCONNECT_TIMER:
			g_pFriendMenu->SendChatRoomConnectCheck();
			break;
		case SLIDEHELP_TIMER:
			if(g_bWndActive)
			{
				if(g_pSlideHelpMgr)
					g_pSlideHelpMgr->CreateSlideText();
			}
			break;
#ifdef TEENAGER_REGULATION
		case WARNING_TIMER:
			{
				char dummy_chr[300];
				Time_Regulation++;
				if(Time_Regulation > 3)
					wsprintf(dummy_chr,GlobalText[2035],Time_Regulation);
				else
					wsprintf(dummy_chr,GlobalText[2036],Time_Regulation);
		
				g_pChatListBox->AddText("", dummy_chr, SEASON3B::TYPE_UNION_MESSAGE);	
				
				if(m_pc_wanted == true)
				{
					wsprintf(dummy_chr,GlobalText[2227]);
					g_pChatListBox->AddText("", dummy_chr, SEASON3B::TYPE_UNION_MESSAGE);			
				}

				g_GameCensorship->SetVisible(true);
			}
			break;
#endif
		}
		break;
	case WM_USER_MEMORYHACK:
		//SetTimer( g_hWnd, WINDOWMINIMIZED_TIMER, 1*1000, NULL);
		FAKE_CODE( Pos_UserMemoryHack);
Pos_UserMemoryHack:
		KillGLWindow();
		break;
	case WM_NPROTECT_EXIT_TWO:
		SendHackingChecked( 0x04, 0);
		SetTimer( g_hWnd, WINDOWMINIMIZED_TIMER, 1*1000, NULL);
		MessageBox(NULL,GlobalText[16],"Error",MB_OK);
		break;
	case WM_ASYNCSELECTMSG :
		switch( WSAGETSELECTEVENT( lParam ) )
		{
		case FD_CONNECT : // ¼­¹ö¿¡ Á¢¼Ó µÇ¾ú´Ù.
			break;
		case FD_READ :
			SocketClient.nRecv();
			break;
		case FD_WRITE :
			SocketClient.FDWriteSend();
			break;
		case FD_CLOSE : // ¼­¹ö¿ÍÀÇ Á¢¼ÓÀÌ Á¾·áµÇ¾ú´Ù.
			// 3  "¼­¹ö¿ÍÀÇ ¿¬°áÀÌ ²÷¾îÁ³½À´Ï´Ù."
			g_pChatListBox->AddText("", GlobalText[3], SEASON3B::TYPE_SYSTEM_MESSAGE);
			g_ErrorReport.Write("¼­¹ö¿ÍÀÇ Á¢¼ÓÁ¾·á.\r\n");
#ifdef CONSOLE_DEBUG
			switch(WSAGETSELECTERROR(lParam))
			{
			case WSAECONNRESET:
				g_ConsoleDebug->Write(MCD_ERROR, "The connection was reset by the remote side.");
				g_ErrorReport.Write("The connection was reset by the remote side.\r\n");
				g_ErrorReport.WriteCurrentTime();
				break;
			case WSAECONNABORTED:
				g_ConsoleDebug->Write(MCD_ERROR, "The connection was terminated due to a time-out or other failure.");
				g_ErrorReport.Write("The connection was terminated due to a time-out or other failure.\r\n");
				g_ErrorReport.WriteCurrentTime();
				break;
			}
#endif // CONSOLE_DEBUG
			SocketClient.Close();
			CUIMng::Instance().PopUpMsgWin(MESSAGE_SERVER_LOST);
			break;
		}
		break;
	case WM_CTLCOLOREDIT:
		SetBkColor((HDC)wParam, RGB(0, 0, 0));
		SetTextColor((HDC)wParam, RGB(255, 255, 255));
		return (LRESULT)GetStockObject(BLACK_BRUSH);
		break;
	case WM_ERASEBKGND:
		return TRUE;
		break;
	case WM_PAINT:
		{
			PAINTSTRUCT ps ;
#ifdef KWAK_FIX_COMPILE_LEVEL4_WARNING
			BeginPaint(hwnd, &ps);
#else // KWAK_FIX_COMPILE_LEVEL4_WARNING
			HDC hDC = BeginPaint(hwnd, &ps);
#endif // KWAK_FIX_COMPILE_LEVEL4_WARNING
			EndPaint(hwnd, &ps) ;
		}
		return 0;
		break;
	case WM_DESTROY:
		{
#ifdef LDS_ADD_MULTISAMPLEANTIALIASING
			if( g_bIsNowRecreationingForMSAA == FALSE )
#endif // LDS_ADD_MULTISAMPLEANTIALIASING
			{
				Destroy = true;
				
				//  
				SocketClient.Close();
				
				DestroySound();
				
				//DestroyWindow();
				KillGLWindow();
				
#ifdef ANTIHACKING_ENABLE
				exit_hanguo_protect();
#endif //ANTIHACKING_ENABLE
				
				CloseMainExe();
				
#if SELECTED_LANGUAGE == LANGUAGE_CHINESE
				leaf::OpenExplorer("www.muchina.com/pop.html");
#endif //SELECTED_LANGUAGE == LANGUAGE_CHINESE
				
				PostQuitMessage(0);
			}
		}
		break;
    case WM_SETCURSOR:
        ShowCursor(false);
		break;
		// À©ÆÃ ¹æÁö ÄÚµå
//---------------------------- À©µµ¿ì¸¦ ÃÖ¼ÒÈ­ ÇÏ´Â °ÍÀ» ¹æÁöÇÏ±â
#if (defined WINDOWMODE)
	case WM_SIZE:
		if ( SIZE_MINIMIZED == wParam
			&& g_bUseWindowMode == FALSE
			)
		{	// ¿ÜºÎ¿¡¼­ À©µµ¿ì¸¦ ÃÖ¼ÒÈ­ ½ÃÄ×´Ù.
			if ( !( g_bMinimizedEnabled))
			{
				SendHackingChecked( 0x05, 0);
				FAKE_CODE( Pos_Wm_Move_MinimizedNotEnabled);
Pos_Wm_Move_MinimizedNotEnabled:
				DWORD dwMess[SIZE_ENCRYPTION_KEY];
				for ( int i = 0; i < SIZE_ENCRYPTION_KEY; ++i)
				{
					dwMess[i] = GetTickCount();
				}
				g_SimpleModulusCS.LoadKeyFromBuffer( ( BYTE*)dwMess, FALSE, FALSE, FALSE, TRUE);
			}
		}
		break;
#else
#ifdef NDEBUG
#ifndef FOR_WORK
#if defined USER_WINDOW_MODE || (defined WINDOWMODE)
	case WM_SIZE:
		if ( SIZE_MINIMIZED == wParam
#if defined USER_WINDOW_MODE || (defined WINDOWMODE)
			&& g_bUseWindowMode == FALSE
#endif
			)
		{	// ¿ÜºÎ¿¡¼­ À©µµ¿ì¸¦ ÃÖ¼ÒÈ­ ½ÃÄ×´Ù.
			if ( !( g_bMinimizedEnabled))
			{
				SendHackingChecked( 0x05, 0);
				FAKE_CODE( Pos_Wm_Move_MinimizedNotEnabled);
Pos_Wm_Move_MinimizedNotEnabled:
				DWORD dwMess[SIZE_ENCRYPTION_KEY];
				for ( int i = 0; i < SIZE_ENCRYPTION_KEY; ++i)
				{
					dwMess[i] = GetTickCount();
				}
				g_SimpleModulusCS.LoadKeyFromBuffer( ( BYTE*)dwMess, FALSE, FALSE, FALSE, TRUE);
			}
		}
		break;
#endif
#endif
#endif
#endif	//WINDOWMODE(#else)
//-----------------------------
	default:
		if (msg >= WM_CHATROOMMSG_BEGIN && msg < WM_CHATROOMMSG_END)
			g_pChatRoomSocketList->ProcessSocketMessage(msg - WM_CHATROOMMSG_BEGIN, WSAGETSELECTEVENT(lParam));
		break;
	}

#ifdef USE_SELFCHECKCODE
	if ( TimeRemain >= 40)
	{
		SendCrcOfFunction( 4, 9, MainScene, 0x173C);
	}
#endif
	
	// Åñëè îêíî íåàêòèâíî, âîçâðàùàåòñÿ ñîîáùåíèå.
// 	if(!g_bWndActive)
//         return DefWindowProc(hwnd,msg,wParam,lParam);

	MouseLButtonDBClick = false;
	if (MouseLButtonPop == true && (g_iMousePopPosition_x != MouseX || g_iMousePopPosition_y != MouseY)) 
		MouseLButtonPop = false;
    switch (msg)
	{
	case WM_MOUSEMOVE:
		{
#ifdef _VS2008PORTING
			MouseX = (float)LOWORD(lParam) / g_fScreenRate_x;
			MouseY = (float)HIWORD(lParam) / g_fScreenRate_y;
#else // _VS2008PORTING
			MouseX = short(lParam) / g_fScreenRate_x;
			MouseY = short(lParam>>16) / g_fScreenRate_y;
#endif // _VS2008PORTING
			if(MouseX < 0) 
				MouseX = 0;
			if(MouseX > 640) 
				MouseX = 640;
			if(MouseY < 0) 
				MouseY = 0;
			if(MouseY > 480) 
				MouseY = 480;
		}
		break;

#ifdef LDK_ADD_SCALEFORM
	//¿ì¼± ¼øÀ§ º¯°æÇØ¾ßµÉ¼ö ÀÖÀ½
	}
	// Pass events to GFx
	bool pbNoFurtherProcessing = false;
	if(GFxProcess::GetInstancePtr()->GetUISelect() == 1)
	{
		GFxProcess::GetInstancePtr()->GFxProcessEvent(hwnd, msg, wParam, lParam, &pbNoFurtherProcessing);
	}

	if( pbNoFurtherProcessing )
		return 0;

	switch(msg)
	{
#endif //LDK_ADD_SCALEFORM

	case WM_LBUTTONDOWN:
		FAKE_CODE( Pos_LButtonDown);
Pos_LButtonDown:
		g_iNoMouseTime = 0;
		MouseLButtonPop = false;
		if(!MouseLButton) 
			MouseLButtonPush = true;
		MouseLButton = true;
#if defined USER_WINDOW_MODE || (defined WINDOWMODE)
		SetCapture(g_hWnd);
#endif
		break;
	case WM_LBUTTONUP:
		FAKE_CODE( Pos_LButtonUp);
Pos_LButtonUp:
		g_iNoMouseTime = 0;
		MouseLButtonPush = false;
		//if(MouseLButton) MouseLButtonPop = true;
		MouseLButtonPop = true;
		MouseLButton = false;
		g_iMousePopPosition_x = MouseX;
		g_iMousePopPosition_y = MouseY;
#if defined USER_WINDOW_MODE || (defined WINDOWMODE)
		ReleaseCapture();
#endif
		break;
	case WM_RBUTTONDOWN:
		g_iNoMouseTime = 0;
		MouseRButtonPop = false;
		if(!MouseRButton) MouseRButtonPush = true;
		MouseRButton = true;
#if defined USER_WINDOW_MODE || (defined WINDOWMODE)
		SetCapture(g_hWnd);
#endif
		break;
	case WM_RBUTTONUP:
		g_iNoMouseTime = 0;
		MouseRButtonPush = false;
		if(MouseRButton) MouseRButtonPop = true;
		MouseRButton = false;
#if defined USER_WINDOW_MODE || (defined WINDOWMODE)
		ReleaseCapture();
#endif
		break;
    case WM_LBUTTONDBLCLK:
		g_iNoMouseTime = 0;
		MouseLButtonDBClick = true;
		break;
	case WM_MBUTTONDOWN:
		g_iNoMouseTime = 0;
		MouseMButtonPop = false;
		if(!MouseMButton) MouseMButtonPush = true;
		MouseMButton = true;
#if defined USER_WINDOW_MODE || (defined WINDOWMODE)
		SetCapture(g_hWnd);
#endif
		break;
	case WM_MBUTTONUP:
		g_iNoMouseTime = 0;
		MouseMButtonPush = false;
		if(MouseMButton) MouseMButtonPop = true;
		MouseRButton = false;
#if defined USER_WINDOW_MODE || (defined WINDOWMODE)
		ReleaseCapture();
#endif
		break;
	case WM_MOUSEWHEEL:
        {
            MouseWheel = (short)HIWORD( wParam)/WHEEL_DELTA;
        }
        break;
	case WM_IME_NOTIFY:				// IMM »óÅÂ º¯°æ
		{
			if (g_iChatInputType == 1)
			{
#ifdef KWAK_FIX_COMPILE_LEVEL4_WARNING
				int iSelectedLanguage = SELECTED_LANGUAGE;
#endif // KWAK_FIX_COMPILE_LEVEL4_WARNING
				switch (wParam)
				{
				case IMN_SETCONVERSIONMODE:
					if (GetFocus() == g_hWnd)
					{
						// Ã¤ÆÃ ¾Æ´Ñ »óÅÂ¿¡¼­ IME º¯°æ
						CheckTextInputBoxIME(IME_CONVERSIONMODE);
					}
#if SELECTED_LANGUAGE == LANGUAGE_TAIWANESE
					else if (g_bIMEBlock == TRUE)	// ´ë¸¸ IME ÀüÈ¯ ¾ÈµÇ´Â °Í ¼öÁ¤
					{
						HIMC hIMC = ImmGetContext(g_hWnd);
						DWORD dwConv, dwSent;
						ImmGetConversionStatus(hIMC, &dwConv, &dwSent);
						if (dwSent == 4 || g_bTaiwanIMEDouble == FALSE)
						{
							g_bTaiwanIMEDouble = TRUE;
							break;
						}
						g_bIMEBlock = FALSE;
						if (dwConv != IME_CMODE_ALPHANUMERIC)
							ImmSetConversionStatus(hIMC, IME_CMODE_ALPHANUMERIC, dwSent);
						else
							ImmSetConversionStatus(hIMC, IME_CMODE_NATIVE, dwSent);
						g_bIMEBlock = TRUE;
						g_bTaiwanIMEDouble = FALSE;
						ImmReleaseContext(g_hWnd, hIMC);
					}
#endif	// SELECTED_LANGUAGE == LANGUAGE_TAIWANESE
					break;
				case IMN_SETSENTENCEMODE:
					if (GetFocus() == g_hWnd)
					{
						// Ã¤ÆÃ ¾Æ´Ñ »óÅÂ¿¡¼­ IME º¯°æ
						CheckTextInputBoxIME(IME_SENTENCEMODE);
					}
					break;
#ifdef KWAK_FIX_COMPILE_LEVEL4_WARNING
				case IMN_SETOPENSTATUS:
					if(iSelectedLanguage == LANGUAGE_JAPANESE && GetFocus() == g_hWnd)
#else // KWAK_FIX_COMPILE_LEVEL4_WARNING
				case IMN_SETOPENSTATUS:
					if (SELECTED_LANGUAGE == LANGUAGE_JAPANESE && GetFocus() == g_hWnd)
#endif // KWAK_FIX_COMPILE_LEVEL4_WARNING
					{
						// Ã¤ÆÃ ¾Æ´Ñ »óÅÂ¿¡¼­ CONVERSIONMODE º¯°æ (ÀÏº»)
						CheckTextInputBoxIME(IME_CONVERSIONMODE);
					}
					break;
				default:
					break;
				}
			}
		}
		break;
#ifdef PSW_BUGFIX_IME
	case WM_CHAR:
		{
			switch(wParam)
			{
			case VK_RETURN:
				{
					SetEnterPressed( true );
				}
				break;
			}
		}
		break;
#endif //PSW_BUGFIX_IME
    }

#ifdef NEW_USER_INTERFACE_SHELL
	if( g_shell ) {
		LRESULT result;
		TheShell().HandleWindowMessage( msg, wParam, lParam, result );
	}
#endif //NEW_USER_INTERFACE_SHELL

	if( g_BuffSystem ) {
		LRESULT result;
		TheBuffStateSystem().HandleWindowMessage( msg, wParam, lParam, result );
	}
#ifdef PBG_MOD_GAMEGUARD_HANDLE
	if(BLUE_MU::IsBlueMuServer())
	{
		g_NPGameGuardHandle->CheckTime();
		if(g_NPGameGuardHandle->IsNPHack())
			CloseHack(g_hWnd, true);
	}	
#endif //PBG_MOD_GAMEGUARD_HANDLE

#ifdef USE_SELFCHECKCODE
	if ( TimeRemain >= 40)
	{
		SendCrcOfFunction( 14, 19, GetCheckSum, 0x3A7F);
	}
#endif
    return DefWindowProc(hwnd,msg,wParam,lParam);
#ifdef USE_SELFCHECKCODE
	END_OF_FUNCTION( Pos_SelfCheck01);
Pos_SelfCheck01:
	;
#endif
}

BOOL g_bSavage = FALSE;
bool CreateOpenglWindow();

BOOL IsUsingSavage( HINSTANCE hCurrentInst)
{
    char *windowName = "MU launching";
    WNDCLASS wndClass;
	
    wndClass.style         = CS_OWNDC | CS_DBLCLKS | CS_HREDRAW | CS_VREDRAW;
    wndClass.lpfnWndProc   = DefWindowProc;
    wndClass.cbClsExtra    = 0;
    wndClass.cbWndExtra    = 0;
    wndClass.hInstance     = hCurrentInst;
    wndClass.hIcon         = LoadIcon(NULL, "IDI_ICON1");
    wndClass.hCursor	   = LoadCursor(NULL, IDC_ARROW);
    wndClass.hbrBackground = (HBRUSH)GetStockObject(BLACK_BRUSH);
    wndClass.lpszMenuName  = NULL;
    wndClass.lpszClassName = windowName;
    RegisterClass(&wndClass);

	g_hWnd = CreateWindow(
		windowName, windowName,
		WS_OVERLAPPEDWINDOW | WS_CLIPCHILDREN,
		0,
		0,
		100,
		40,
		NULL, NULL, hCurrentInst, NULL);

	g_ErrorReport.Write("Create OpenGL Window For Savage Test.\n\r");
	if ( !CreateOpenglWindow())
	{
		return ( FALSE);
	}

	char *lpszRenderer = ( char*)glGetString( GL_VENDOR);
	char *lpszSavage = "s3";
	BOOL bResult = ( 0 == strnicmp( lpszRenderer, lpszSavage, 2));

	KillGLWindow();
	DestroyWindow( g_hWnd);

	return ( bResult);
}

//¿ÀÇÂÁö¿¤ À©µµ¿ì »ý¼º ÇÔ¼ö
bool CreateOpenglWindow()
{
    PIXELFORMATDESCRIPTOR pfd;

    memset(&pfd, 0, sizeof(pfd));
    pfd.nSize        = sizeof(pfd);
    pfd.nVersion     = 1;
    pfd.dwFlags      = PFD_DRAW_TO_WINDOW | PFD_SUPPORT_OPENGL | PFD_DOUBLEBUFFER;
    pfd.iPixelType   = PFD_TYPE_RGBA;
    pfd.cColorBits   = 16;
	pfd.cDepthBits   = 16;
#ifdef MOD_STENCILBUFFER
	pfd.cStencilBits = 8;
#endif //MOD_STENCILBUFFER
#ifdef USE_SHADOWVOLUME
	pfd.cStencilBits = 8;
#endif //USE_SHADOWVOLUME

#ifdef KWAK_FIX_COMPILE_LEVEL4_WARNING
	g_hDC = GetDC(g_hWnd);
	if( !g_hDC )
#else // KWAK_FIX_COMPILE_LEVEL4_WARNING
	if (!(g_hDC=GetDC(g_hWnd)))							// µð¹ÙÀÌ½º ÄÁÅØ½ºÆ®¸¦ ¾ò´Â´Ù.
#endif // KWAK_FIX_COMPILE_LEVEL4_WARNING
	{
		g_ErrorReport.Write( "OpenGL Get DC Error - ErrorCode : %d\r\n", GetLastError());
		KillGLWindow();								// µð½ºÇÃ·¹ÀÌ ¸®¼Â
		MessageBox(NULL,GlobalText[4],"OpenGL Get DC Error.",MB_OK|MB_ICONEXCLAMATION);
		return FALSE;								// ½ÇÆÐ
	}

#ifdef KWAK_FIX_COMPILE_LEVEL4_WARNING
	GLuint PixelFormat = ChoosePixelFormat(g_hDC,&pfd);			// ¾Ë¸ÂÀº ÇÈ¼¿Æ÷¸ËÀ» Ã£¾Æ¼­ ±â¾ïÇÑ´Ù.
	if ( !PixelFormat )	// pdf¿¡ ÀÇÇØ ÁöÁ¤µÈ °Í°ú °¡Àå ±ÙÁ¢ÇÑ ÇÈ¼¿Æ÷¸ËÀ» ¼±ÅÃÇÑ´Ù.
#else // KWAK_FIX_COMPILE_LEVEL4_WARNING
	GLuint PixelFormat;			// ¾Ë¸ÂÀº ÇÈ¼¿Æ÷¸ËÀ» Ã£¾Æ¼­ ±â¾ïÇÑ´Ù.
	if (!(PixelFormat=ChoosePixelFormat(g_hDC,&pfd)))	// pdf¿¡ ÀÇÇØ ÁöÁ¤µÈ °Í°ú °¡Àå ±ÙÁ¢ÇÑ ÇÈ¼¿Æ÷¸ËÀ» ¼±ÅÃÇÑ´Ù.
#endif // KWAK_FIX_COMPILE_LEVEL4_WARNING
	{
		g_ErrorReport.Write( "OpenGL Choose Pixel Format Error - ErrorCode : %d\r\n", GetLastError());
		KillGLWindow();								// µð½ºÇÃ·¹ÀÌ ¸®¼Â
		MessageBox(NULL,GlobalText[4],"OpenGL Choose Pixel Format Error.",MB_OK|MB_ICONEXCLAMATION);
		return FALSE;								// ½ÇÆÐ
	}

	if(!SetPixelFormat(g_hDC,PixelFormat,&pfd))		// µð¹ÙÀÌ½º ÄÁÅØ½ºÆ®ÀÇ ÇÈ¼¿ Æ÷¸ËÀ» Á¤ÇÑ´Ù.
	{
		g_ErrorReport.Write( "OpenGL Set Pixel Format Error - ErrorCode : %d\r\n", GetLastError());
		KillGLWindow();								// µð½ºÇÃ·¹ÀÌ ¸®¼Â
		MessageBox(NULL,GlobalText[4],"OpenGL Set Pixel Format Error.",MB_OK|MB_ICONEXCLAMATION);
		return FALSE;								// ½ÇÆÐ
	}

#ifdef KWAK_FIX_COMPILE_LEVEL4_WARNING
	g_hRC = wglCreateContext(g_hDC);
	if ( !g_hRC )				// µð¹ÙÀÌ½º ÄÁÅØ½ºÆ®·Î ÀûÀýÇÑ ·£´õ¸µ ÄÁÅØ½ºÆ®¸¦ ¸¸µç´Ù.
#else // KWAK_FIX_COMPILE_LEVEL4_WARNING
	if (!(g_hRC=wglCreateContext(g_hDC)))				// µð¹ÙÀÌ½º ÄÁÅØ½ºÆ®·Î ÀûÀýÇÑ ·£´õ¸µ ÄÁÅØ½ºÆ®¸¦ ¸¸µç´Ù.
#endif // KWAK_FIX_COMPILE_LEVEL4_WARNING
	{
		g_ErrorReport.Write( "OpenGL Create Context Error - ErrorCode : %d\r\n", GetLastError());
		KillGLWindow();								// µð½ºÇÃ·¹ÀÌ ¸®¼Â
		MessageBox(NULL,GlobalText[4],"OpenGL Create Context Error.",MB_OK|MB_ICONEXCLAMATION);
		return FALSE;								// ½ÇÆÐ
	}

	if(!wglMakeCurrent(g_hDC,g_hRC))					// ·£´õ¸µ ÄÁÅØ½ºÆ®¸¦ È°¼ºÈ­ÇÏ°í µð¹ÙÀÌ½º ÄÁÅØ½ºÆ®¿Í °ü·Ã½ÃÅ²´Ù.
	{
		g_ErrorReport.Write( "OpenGL Make Current Error - ErrorCode : %d\r\n", GetLastError());
		KillGLWindow();								// µð½ºÇÃ·¹ÀÌ ¸®¼Â
		MessageBox(NULL,GlobalText[4],"OpenGL Make Current Error.",MB_OK|MB_ICONEXCLAMATION);
		return FALSE;								// ½ÇÆÐ
	}

#ifdef LDS_ADD_MULTISAMPLEANTIALIASING
	if( TRUE == g_bActivityProcessMSAA )
	{
		int iPixelFormat = 0;
		g_ErrorReport.Write( "OpenGL g_iMSAALevel : %d\r\n", g_iMSAALevel);
		g_bSupportedMSAA = InitGLMultisample(g_hInst,g_hWnd,pfd,g_iMSAALevel,iPixelFormat);	// Èíèöèàëèçàöèÿ ôóíêöèè Multisample äëÿ ñãëàæèâàíèÿ

		if( TRUE == g_bSupportedMSAA )
		{
			g_ErrorReport.Write( "OpenGL g_bSupportedMSAA == TRUE : Recreation Window\r\n");
			// Recreation Window, GLWindow
			ReCreateGLWithWindow(iPixelFormat);
		}
	}

#endif // LDS_ADD_MULTISAMPLEANTIALIASING

	ShowWindow(g_hWnd,SW_SHOW);						// À©µµ¿ì¸¦ º¸ÀÌ°Ô
	SetForegroundWindow(g_hWnd);						// À©µµ¿ì¸¦ ¸Ç À§·Î
	SetFocus(g_hWnd);									// À©µµ¿ì¿¡ Å°º¸µå Æ÷Ä¿½º¸¦ ÁØ´Ù.

#if defined(_DEBUG)
	CheckGLError( __FILE__, __LINE__ );
#endif // defined(_DEBUG)

	return true;
}

HWND StartWindow(HINSTANCE hCurrentInst,int nCmdShow)
{
#ifdef PBG_FIX_BLUEHOMEPAGE_LINK
	char *windowName = "MU BLUE";
#else //PBG_FIX_BLUEHOMEPAGE_LINK
    char *windowName = "MU";
#endif //PBG_FIX_BLUEHOMEPAGE_LINK

    WNDCLASS wndClass;
    HWND hWnd;
	
    wndClass.style         = CS_OWNDC | CS_DBLCLKS | CS_HREDRAW | CS_VREDRAW;
    wndClass.lpfnWndProc   = WndProc;
    wndClass.cbClsExtra    = 0;
    wndClass.cbWndExtra    = 0;
    wndClass.hInstance     = hCurrentInst;
    wndClass.hIcon         = LoadIcon(NULL, "IDI_ICON1");
    wndClass.hCursor	   = LoadCursor(NULL, IDC_ARROW);
    wndClass.hbrBackground = (HBRUSH)GetStockObject(BLACK_BRUSH);
    wndClass.lpszMenuName  = NULL;
    wndClass.lpszClassName = windowName;
    RegisterClass(&wndClass);













#ifdef ENABLE_FULLSCREEN
	{
#ifndef FOR_WORK
#if defined USER_WINDOW_MODE || (defined WINDOWMODE)
		if (g_bUseWindowMode == TRUE)
		{
			// ¡Ú ÇÊ¿äÇÑ Ã¢ Å©±â °è»ê
			RECT rc = { 0, 0, WindowWidth, WindowHeight };
#if defined WINDOWMODE
			if (g_bUseWindowMode == TRUE)
				AdjustWindowRect(&rc, WS_OVERLAPPED | WS_CAPTION | WS_SYSMENU | WS_MINIMIZEBOX | WS_BORDER | WS_CLIPCHILDREN, NULL);
			else
#endif	//WINDOWMODE
			AdjustWindowRect(&rc, WS_OVERLAPPEDWINDOW | WS_CLIPCHILDREN, NULL);
			rc.right -= rc.left;
			rc.bottom -= rc.top;

#if defined WINDOWMODE
			if (g_bUseWindowMode == TRUE)
			{
			hWnd = CreateWindow(
				windowName, windowName,
				WS_OVERLAPPED | WS_CAPTION | WS_SYSMENU | WS_MINIMIZEBOX | WS_BORDER | WS_CLIPCHILDREN,
				(GetSystemMetrics(SM_CXSCREEN) - rc.right) / 2,
				(GetSystemMetrics(SM_CYSCREEN) - rc.bottom) / 2,
				rc.right,
				rc.bottom,
				NULL, NULL, hCurrentInst, NULL);
			}
			else
#endif//WINDOWMODE
			{
			hWnd = CreateWindow(
				windowName, windowName,
				WS_OVERLAPPEDWINDOW | WS_CLIPCHILDREN,
				(GetSystemMetrics(SM_CXSCREEN) - rc.right) / 2,
				(GetSystemMetrics(SM_CYSCREEN) - rc.bottom) / 2,
				rc.right,
				rc.bottom,
				NULL, NULL, hCurrentInst, NULL);
			}
		}
		else
#endif//WINDOWMODE
		{
			hWnd = CreateWindowEx( WS_EX_TOPMOST | WS_EX_APPWINDOW,
				windowName, windowName,
				WS_POPUP,
				0, 0,
				WindowWidth,
				WindowHeight,
				NULL, NULL, hCurrentInst, NULL);
		}
#else //FOR_WORK
		hWnd = CreateWindow(
			windowName, windowName,
			WS_POPUP,
			0, 0,
			WindowWidth,
			WindowHeight,
			NULL, NULL, hCurrentInst, NULL);
#endif
	}
#else //ENABLE_FULLSCREEN
	{
		// ¡Ú ÇÊ¿äÇÑ Ã¢ Å©±â °è»ê
		RECT rc = { 0, 0, WindowWidth, WindowHeight };
#if defined WINDOWMODE
		if (g_bUseWindowMode == TRUE)
			AdjustWindowRect(&rc, WS_OVERLAPPED | WS_CAPTION | WS_SYSMENU | WS_MINIMIZEBOX | WS_BORDER | WS_CLIPCHILDREN, NULL);
		else
#endif
		AdjustWindowRect(&rc, WS_OVERLAPPEDWINDOW | WS_CLIPCHILDREN, NULL);
		rc.right -= rc.left;
		rc.bottom -= rc.top;
#if defined WINDOWMODE
		if (g_bUseWindowMode == TRUE)
		{
		hWnd = CreateWindow(
			windowName, windowName,
			WS_OVERLAPPED | WS_CAPTION | WS_SYSMENU | WS_MINIMIZEBOX | WS_BORDER | WS_CLIPCHILDREN,
			(GetSystemMetrics(SM_CXSCREEN) - rc.right) / 2,
			(GetSystemMetrics(SM_CYSCREEN) - rc.bottom) / 2,
			rc.right,
			rc.bottom,
			NULL, NULL, hCurrentInst, NULL);
		}
		else
#endif
		{
		hWnd = CreateWindow(
			windowName, windowName,
			WS_OVERLAPPEDWINDOW | WS_CLIPCHILDREN,
			(GetSystemMetrics(SM_CXSCREEN) - rc.right) / 2,
			(GetSystemMetrics(SM_CYSCREEN) - rc.bottom) / 2,
			rc.right,
			rc.bottom,
			NULL, NULL, hCurrentInst, NULL);
		}
	}
#endif //ENABLE_FULLSCREEN
	
    return hWnd;
}

#ifdef LDS_ADD_MULTISAMPLEANTIALIASING
BOOL ReCreateGLWithWindow(int iPixelFormat)
{
	// ========================================================================== Destroy GLWindows	
	// ========================================================================== Destroy Windows	
	DestroyWindowWithGL();	

	// ========================================================================== Creation Windows	
	g_hWnd = StartWindow(g_hInst, 1);	


	// ========================================================================== Creation GLWindows
	PIXELFORMATDESCRIPTOR pfd;
	
	
    memset(&pfd, 0, sizeof(pfd));
    pfd.nSize        = sizeof(pfd);
    pfd.nVersion     = 1;
    pfd.dwFlags      = PFD_DRAW_TO_WINDOW | PFD_SUPPORT_OPENGL | PFD_DOUBLEBUFFER;
    pfd.iPixelType   = PFD_TYPE_RGBA;
    pfd.cColorBits   = 16;
	pfd.cDepthBits   = 16;
#ifdef USE_SHADOWVOLUME
	pfd.cStencilBits = 8;
#endif //USE_SHADOWVOLUME
	
	if (!(g_hDC=GetDC(g_hWnd)))							// µð¹ÙÀÌ½º ÄÁÅØ½ºÆ®¸¦ ¾ò´Â´Ù.
	{
		g_ErrorReport.Write( "OpenGL Get DC Error - ErrorCode : %d\r\n", GetLastError());
		KillGLWindow();								// µð½ºÇÃ·¹ÀÌ ¸®¼Â
		MessageBox(NULL,GlobalText[4],"OpenGL Get DC Error.",MB_OK|MB_ICONEXCLAMATION);
		return FALSE;								// ½ÇÆÐ
	}
	
	if(!SetPixelFormat(g_hDC,iPixelFormat,&pfd))		// µð¹ÙÀÌ½º ÄÁÅØ½ºÆ®ÀÇ ÇÈ¼¿ Æ÷¸ËÀ» Á¤ÇÑ´Ù.
	{
		g_ErrorReport.Write( "OpenGL Set Pixel Format Error - ErrorCode : %d\r\n", GetLastError());
		KillGLWindow();								// µð½ºÇÃ·¹ÀÌ ¸®¼Â
		MessageBox(NULL,GlobalText[4],"OpenGL Set Pixel Format Error.",MB_OK|MB_ICONEXCLAMATION);
		return FALSE;								// ½ÇÆÐ
	}

	if (!(g_hRC=wglCreateContext(g_hDC)))				// µð¹ÙÀÌ½º ÄÁÅØ½ºÆ®·Î ÀûÀýÇÑ ·£´õ¸µ ÄÁÅØ½ºÆ®¸¦ ¸¸µç´Ù.
	{
		g_ErrorReport.Write( "OpenGL Create Context Error - ErrorCode : %d\r\n", GetLastError());
		KillGLWindow();								// µð½ºÇÃ·¹ÀÌ ¸®¼Â
		MessageBox(NULL,GlobalText[4],"OpenGL Create Context Error.",MB_OK|MB_ICONEXCLAMATION);
		return FALSE;								// ½ÇÆÐ
	}

	if(!wglMakeCurrent(g_hDC,g_hRC))					// ·£´õ¸µ ÄÁÅØ½ºÆ®¸¦ È°¼ºÈ­ÇÏ°í µð¹ÙÀÌ½º ÄÁÅØ½ºÆ®¿Í °ü·Ã½ÃÅ²´Ù.
	{
		g_ErrorReport.Write( "OpenGL Make Current Error - ErrorCode : %d\r\n", GetLastError());
		KillGLWindow();								// µð½ºÇÃ·¹ÀÌ ¸®¼Â
		MessageBox(NULL,GlobalText[4],"OpenGL Make Current Error.",MB_OK|MB_ICONEXCLAMATION);
		return FALSE;								// ½ÇÆÐ
	}

	return TRUE;
};

BOOL DestroyWindowWithGL ()								// Destroy The OpenGL Window & Release Resources
{
	g_bIsNowRecreationingForMSAA = TRUE;

	KillGLWindow();

	DestroyWindow (g_hWnd);									// Destroy The Window

	g_hWnd = 0;												// Zero The Window Handle

	if (g_bUseWindowMode == FALSE)										// Is Window In Fullscreen Mode
	{
		ChangeDisplaySettings (NULL,0);									// Switch Back To Desktop Resolution
		ShowCursor (TRUE);												// Show The Cursor
	}

	g_bIsNowRecreationingForMSAA = FALSE;

	return TRUE;

// 	g_bIsNowRecreationingForMSAA = TRUE;
// 	if (g_hWnd != 0)												// Does The Window Have A Handle?
// 	{	
// 		if (g_hDC != 0)											// Does The Window Have A Device Context?
// 		{
// 			//wglMakeCurrent (g_hDC, 0);							// Set The Current Active Rendering Context To Zero
// 			wglMakeCurrent (NULL, NULL);							// Set The Current Active Rendering Context To Zero
// 
// 			if (g_hRC != 0)										// Does The Window Have A Rendering Context?
// 			{
// 				wglDeleteContext (g_hRC);							// Release The Rendering Context
// 				g_hRC = 0;										// Zero The Rendering Context
// 			}
// 			ReleaseDC (g_hWnd, g_hDC);						// Release The Device Context
// 			g_hDC = 0;											// Zero The Device Context
// 		}
// 		DestroyWindow (g_hWnd);									// Destroy The Window
// 		g_hWnd = 0;												// Zero The Window Handle
// 	}
// 	
// 	if (g_bUseWindowMode == FALSE)										// Is Window In Fullscreen Mode
// 	{
// 		ChangeDisplaySettings (NULL,0);									// Switch Back To Desktop Resolution
// 		ShowCursor (TRUE);												// Show The Cursor
// 	}
// 	
// 	g_bIsNowRecreationingForMSAA = FALSE;
// 
// 	return TRUE;														// Return True
}
#endif // LDS_ADD_MULTISAMPLEANTIALIASING

//#ifdef _DEBUG
#if SELECTED_LANGUAGE == LANGUAGE_CHINESE
// ÆÄÆ¼¼Ç Ç¥½Ã
extern char g_lpszCmdURL[50];
char g_lpszPartitionName[64] = "";
BOOL OpenPartitionInfo( char *lpszFile)
{
	g_lpszPartitionName[0] = '\0';

	FILE *fp = fopen(lpszFile,"rt");
	if(fp == NULL) return ( FALSE);

	char lpszPartition[3][64];
	for ( int i = 0; i < 50; ++i)
	{
		if ( EOF == fscanf( fp, "%s", lpszPartition[0]))
		{
			break;
		}
		if ( EOF == fscanf( fp, "%s", lpszPartition[1]))
		{
			break;
		}
		if ( EOF == fscanf( fp, "%s", lpszPartition[2]))
		{
			break;
		}

		if ( 0 == strcmp( g_lpszCmdURL, lpszPartition[1]) &&
			g_ServerPort == atoi( lpszPartition[2]))
		{	// Ã£¾Ò´Ù.
			strcpy( g_lpszPartitionName, lpszPartition[0]);
			fclose(fp);
			return ( TRUE);
		}
	}
	fclose(fp);

	return ( FALSE);
}
#endif //SELECTED_LANGAUGE == LANGUAGE_CHINESE*/

char m_ID[11];
char m_Version[11];
char m_ExeVersion[11];
int  m_SoundOnOff;
int  m_MusicOnOff;
int  m_Resolution;
int	m_nColorDepth;
int	g_iRenderTextType = 0;

#ifdef LJH_ADD_SUPPORTING_MULTI_LANGUAGE2
// ´Ù±¹¾î Áö¿ø ·±ÃÄ¿¡¼­ ¼±ÅÃµÈ ¾ð¾î
char g_aszMLSelection[MAX_LANGUAGE_NAME_LENGTH] = {'\0'};
string g_strSelectedML = "";
#endif //LJH_ADD_SUPPORTING_MULTI_LANGUAGE

//int ÆÄÀÏ ÀÐ´Â ÇÔ¼ö
BOOL OpenInitFile()
{
	char szTemp[8];
	char szIniFilePath[256+20]="";
	char szCurrentDir[256];

	GetCurrentDirectory(256, szCurrentDir);

	strcpy(szIniFilePath, szCurrentDir);
	if( szCurrentDir[strlen(szCurrentDir)-1] == '\\' ) 
		strcat(szIniFilePath, "config.ini");
	else strcat(szIniFilePath, "\\config.ini");

	GetPrivateProfileString ("LOGIN", "ID", "", m_ID, 11, szIniFilePath);
#ifdef _TEST_SERVER
	GetPrivateProfileString ("LOGIN", "TestVersion", "", m_Version, 11, szIniFilePath);
#else
	GetPrivateProfileString ("LOGIN", "Version", "", m_Version, 11, szIniFilePath);
#endif //_TEST_SERVER
	/*GetPrivateProfileString ("OPTION", "SoundOnOff", "1", szTemp, 10, szIniFilePath);
	m_SoundOnOff = atoi(szTemp);
	GetPrivateProfileString ("OPTION", "MusicOnOff", "1", szTemp, 10, szIniFilePath);
	m_MusicOnOff = atoi(szTemp);*/
	GetPrivateProfileString ("OPTION", "Resolution", "5", szTemp, 10, szIniFilePath);
	m_Resolution = atoi(szTemp);
	char *lpszCommandLine = GetCommandLine();
	char lpszFile[MAX_PATH];
	if ( GetFileNameOfFilePath( lpszFile, lpszCommandLine))
	{
		WORD wVersion[4];
		if ( GetFileVersion( lpszFile, wVersion))
		{
			sprintf( m_ExeVersion, "%d.%02d", wVersion[0], wVersion[1]);
			if ( wVersion[2] > 0)
			{
                char lpszMinorVersion[3] = "a";
                if ( wVersion[2]>26 )
                {
                    lpszMinorVersion[0] = 'A';
				    lpszMinorVersion[0] += ( wVersion[2] - 27 );
                    lpszMinorVersion[1] = '+';
                }
                else
                {
				    lpszMinorVersion[0] += ( wVersion[2] - 1);
                }
				strcat( m_ExeVersion, lpszMinorVersion);
			}
		}
		else
		{
			strcpy( m_ExeVersion, m_Version);
		}
	}
	else
	{
		strcpy( m_ExeVersion, m_Version);
	}

	// ÆÄÆ¼¼Ç Ç¥½Ã - ini ÀÐ±â
//#ifdef _DEBUG
#if SELECTED_LANGUAGE == LANGUAGE_CHINESE
	OpenPartitionInfo( "partition.inf");
#endif //SELECTED_LANGAUGE == LANGUAGE_CHINESE*/

	// ÃÊ±âÈ­
	//m_ID[0] = '\0';
	m_SoundOnOff = 1;
	m_MusicOnOff = 1;
	//m_Resolution = 0;
	m_nColorDepth = 0;

	// ·¹Áö½ºÆ®¸® ÀÐ±â
	HKEY hKey;
	DWORD dwDisp;
	DWORD dwSize;
#ifdef PBG_ADD_LAUNCHER_BLUE
	if ( ERROR_SUCCESS == RegCreateKeyEx(HKEY_CURRENT_USER, "SOFTWARE\\Webzen\\Mu_Blue\\Config", 0, NULL, REG_OPTION_NON_VOLATILE, KEY_ALL_ACCESS, NULL, & hKey, &dwDisp))
#else //PBG_ADD_LAUNCHER_BLUE
	if ( ERROR_SUCCESS == RegCreateKeyEx(HKEY_CURRENT_USER, "SOFTWARE\\Webzen\\Mu\\Config", 0, NULL, REG_OPTION_NON_VOLATILE, KEY_ALL_ACCESS, NULL, & hKey, &dwDisp))
#endif //PBG_ADD_LAUNCHER_BLUE
	{
		/*dwSize = 11;
		if ( RegQueryValueEx (hKey, "ID", 0, NULL, (LPBYTE)m_ID, & dwSize) != ERROR_SUCCESS)
		{
		}*/
		dwSize = sizeof ( int);
		if ( RegQueryValueEx (hKey, "SoundOnOff", 0, NULL, (LPBYTE) & m_SoundOnOff, &dwSize) != ERROR_SUCCESS)
		{
			m_SoundOnOff = true;
		}
		dwSize = sizeof ( int);
		if ( RegQueryValueEx (hKey, "MusicOnOff", 0, NULL, (LPBYTE) & m_MusicOnOff, &dwSize) != ERROR_SUCCESS)
		{
			m_MusicOnOff = false;
		}
		/*dwSize = sizeof ( int);
		if ( RegQueryValueEx (hKey, "Resolution", 0, NULL, (LPBYTE) & m_Resolution, &dwSize) != ERROR_SUCCESS)
			m_Resolution = 1;*/

		//if (0 == m_Resolution)	// 640*480 ¸ðµå´Â »ç¶óÁ³À½.
		//	m_Resolution = 1;

	    if ( RegQueryValueEx (hKey, "ColorDepth", 0, NULL, (LPBYTE) & m_nColorDepth, &dwSize) != ERROR_SUCCESS)
	    {
		    m_nColorDepth = 0;
	    }
		dwSize = sizeof ( int);
		if ( RegQueryValueEx (hKey, "TextOut", 0, NULL, (LPBYTE) & g_iRenderTextType, &dwSize) != ERROR_SUCCESS)
		{
			g_iRenderTextType = 0;	// ×òî ýòî? Â íàñòîÿùåå âðåìÿ â ðååñòðå èíôîðìàöèè íåò.
		}

		g_iChatInputType = 1;	// ÀÌÁ¨ ±¸ÇüÀº »ç¿ëÇÏÁö ¾ÊÀ½.g_iChatInputTypeÀº ³ªÁß¿¡ ¸ðµÎ »èÁ¦ ÇÒ °Í.

#if defined USER_WINDOW_MODE || (defined WINDOWMODE)
		dwSize = sizeof ( int);
		if ( RegQueryValueEx (hKey, "WindowMode", 0, NULL, (LPBYTE) & g_bUseWindowMode, &dwSize) != ERROR_SUCCESS)
		{
			g_bUseWindowMode = TRUE;
		}
#endif // USER_WINDOW_MODE

#ifdef LDS_ADD_MULTISAMPLEANTIALIASING
		dwSize = sizeof(int);
		if( RegQueryValueEx(hKey, "MSAAONOFF", 0, NULL, (LPBYTE) & g_bActivityProcessMSAA, &dwSize ) != ERROR_SUCCESS)
		{
			g_bActivityProcessMSAA = DEFAULT_USINGMSAA;
		}
		dwSize = sizeof(int);
		if( RegQueryValueEx(hKey, "MSAALEVEL", 0, NULL, (LPBYTE) & g_iMSAALevel, &dwSize ) != ERROR_SUCCESS)
		{
			g_iMSAALevel = DEFAULT_MSAAVALUE;
		}

		int arriMSAAValidate [] = { 1, 2, 4, 8, 16, 32};

		BOOL	bIsValidate = FALSE;
		for( int i = 0; i < 6; i++ )
		{
			if(g_iMSAALevel == arriMSAAValidate[i])
			{
				bIsValidate = TRUE;
				break;
			}
		}

		if(bIsValidate != TRUE)
		{
			g_iMSAALevel = DEFAULT_MSAAVALUE;
		}
#endif // LDS_ADD_MULTISAMPLEANTIALIASING

#ifdef LJH_ADD_SUPPORTING_MULTI_LANGUAGE
		dwSize = MAX_LANGUAGE_NAME_LENGTH;
		if ( RegQueryValueEx (hKey, "LangSelection", 0, NULL, (LPBYTE)g_aszMLSelection, &dwSize) != ERROR_SUCCESS)
		{
			strcpy(g_aszMLSelection, "Eng");
		}
		g_strSelectedML = g_aszMLSelection;
#endif //LJH_ADD_SUPPORTING_MULTI_LANGUAGE

#ifdef LDK_ADD_GLOBAL_PORTAL_SYSTEM
 		// ·¹Áö½ºÆ®¸®¿¡ °æ·Î ³²±â±â.
		GlobalPortalSystem::Instance().SetPathToRegistry(&hKey);
#endif //LDK_ADD_GLOBAL_PORTAL_SYSTEM

#ifdef ADD_GFX_REG_OPTION
		//·¹Áö½ºÆ®·¹¿¡¼­ ui¼³Á¤°ª È®ÀÎ
		dwSize = sizeof (int);
		int _iUiSelection = 0;
		if ( RegQueryValueEx (hKey, "UiSelection", 0, NULL, (LPBYTE) & _iUiSelection, &dwSize) != ERROR_SUCCESS)
		{
			_iUiSelection = 0;
		}
		GFxProcess::GetInstancePtr()->SetUISelect(_iUiSelection);
#endif //ADD_GFX_REG_OPTION
	}
	RegCloseKey( hKey);

	switch(m_Resolution)
	{
	case 0:WindowWidth=640 ;WindowHeight=480 ;break;
	case 1:WindowWidth=800 ;WindowHeight=600 ;break;
	case 2:WindowWidth=1024;WindowHeight=768 ;break;
	//
	case 3:WindowWidth=1152;WindowHeight=864;break;
	case 4:WindowWidth=1248;WindowHeight=702;break;
	case 5:WindowWidth=1280;WindowHeight=768;break;
	case 6:WindowWidth=1280;WindowHeight=800;break;
	case 7:WindowWidth=1280;WindowHeight=960;break;
	case 8:WindowWidth=1280;WindowHeight=1024;break;
	case 9:WindowWidth=1360;WindowHeight=768;break;
	case 10:WindowWidth=1600;WindowHeight=900;break;
	case 11:WindowWidth=1600;WindowHeight=1200;break;
	case 12:WindowWidth=1802;WindowHeight=1014;break;
	case 13:WindowWidth=1920;WindowHeight=1080;break;
	case 14:WindowWidth=1920;WindowHeight=1200;break;
	default:WindowWidth=1024;WindowHeight=768;break;
	//
	//case 3:WindowWidth=1280;WindowHeight=1024;break;	// removed
	//case 3:WindowWidth=1920;WindowHeight=1440;break;
	//case 4:WindowWidth=1600;WindowHeight=1200;break;	// removed
	}
	
	g_fScreenRate_x = (float)WindowWidth / 640;		// ¡Ø
	g_fScreenRate_y = (float)WindowHeight / 480;

	return TRUE;
}

BOOL Util_CheckOption( char *lpszCommandLine, unsigned char cOption, char *lpszString)
{
	unsigned char cComp[2];
	cComp[0] = cOption; cComp[1] = cOption;
	if ( islower( ( int)cOption))
	{
		cComp[1] = toupper( ( int)cOption);
	}
	else if ( isupper( ( int)cOption))
	{
		cComp[1] = tolower( ( int)cOption);
	}

	int nFind = ( int)'/';
	unsigned char *lpFound = ( unsigned char*)lpszCommandLine;
	while ( lpFound)
	{
		lpFound = ( unsigned char*)strchr( ( char*)( lpFound + 1), nFind);
		if ( lpFound && ( *( lpFound + 1) == cComp[0] || *( lpFound + 1) == cComp[1]))
		{	// ¹ß°ß
			if ( lpszString)
			{
				int nCount = 0;
				for ( unsigned char *lpSeek = lpFound + 2; *lpSeek != ' ' && *lpSeek != '\0'; lpSeek++)
				{
					nCount++;
				}

				memcpy( lpszString, lpFound + 2, nCount);
				lpszString[nCount] = '\0';
			}
			return ( TRUE);
		}
	}

	return ( FALSE);
}

BOOL UpdateFile( char *lpszOld, char *lpszNew)
{
	SetFileAttributes(lpszOld, FILE_ATTRIBUTE_NORMAL);
	SetFileAttributes(lpszNew, FILE_ATTRIBUTE_NORMAL);

	DWORD dwStartTickCount = ::GetTickCount();
	while(::GetTickCount() - dwStartTickCount < 5000) {
		if ( CopyFile( lpszOld, lpszNew, FALSE))
		{	// ¼º°ø
			DeleteFile( lpszOld);
			return ( TRUE);
		}
	}
	g_ErrorReport.Write("%s to %s CopyFile Error : %d\r\n", lpszNew, lpszOld, GetLastError());
	return ( FALSE);
}

#include <tlhelp32.h>

BOOL KillExeProcess( char *lpszExe)
{	// NT 4.0 ¿¡¼­ ¾ÈµÈ´Ù.
	HANDLE hProcessSnap = NULL; 
    BOOL bRet = FALSE; 
    PROCESSENTRY32 pe32 = { 0 }; 
 
    //  Take a snapshot of all processes in the system. 

    hProcessSnap = CreateToolhelp32Snapshot(TH32CS_SNAPPROCESS, 0); 

    if (hProcessSnap == INVALID_HANDLE_VALUE) 
        return (FALSE); 
 
    //  Fill in the size of the structure before using it. 

    pe32.dwSize = sizeof(PROCESSENTRY32); 
 
    //  Walk the snapshot of the processes, and for each process, 
    //  display information. 






    if (Process32First(hProcessSnap, &pe32)) 
    {
        do 
        { 
			if(stricmp(pe32.szExeFile, lpszExe) == 0)
			{
				HANDLE process = OpenProcess(PROCESS_ALL_ACCESS, FALSE, pe32.th32ProcessID);

				if(process)
				{
					TerminateProcess(process, 0);
				}
			}
        } while (Process32Next(hProcessSnap, &pe32)); 
        bRet = TRUE; 
    } 
    else 
        bRet = FALSE;    // could not walk the list of processes 
 
    // Do not forget to clean up the snapshot object. 

    CloseHandle (hProcessSnap);

	return bRet;
}


bool KillHackProgram ( void )
{
#if SELECTED_LANGUAGE==LANGUAGE_JAPANESE
    int     HackNum = 7;
    LPCSTR  ProcessClassName[7] = { "TWINSPEEDER_DXX", "CNSE", "CNSE", "#32770", "#32770", "#32770", "#32770" };
    LPCSTR  ProcessWindowName[7]= { "A Speeder", "‘‹", "Win MU", "ÐÖµÜ±ä", "SpeederXP v1.60 - Unregistered", "SpeederXP v1.60 - Registered", "SpeederXP v1.60" };

    //  ÇÙÇÁ·Î±×·¥À» Á¦°ÅÇÑ´Ù.
    for ( int i=0; i<HackNum; ++i )
    {
        if ( i==3 )
        {
	        HWND shWnd = FindWindow( ProcessClassName[i], ProcessWindowName[i] );
	        if(shWnd)
            {
                PostMessage ( shWnd, WM_NCDESTROY, 0, 0 );
            }
        }
        else
        {
	        HWND shWnd = FindWindow( ProcessClassName[i], ProcessWindowName[i] );
	        if(shWnd)
	        {
                if ( i>3 )
                {
	                char Text[100];
	                sprintf(Text,GlobalText[1],LogInID);
	                MessageBox(g_hWnd,Text,"Error",MB_OK);

                    return true;
                }
                else
                {
                    PostMessage ( shWnd, WM_CLOSE, 0, 0 );
                }
	        }
        }
    }
#endif
    return false;
}


BOOL UpdateMuExe( void)
{
	char *lpszNewMuFile[4] = { "mu._xe", "mumsg._ll", "wz_zp._ll", "message._tf"};
	char *lpszDestFile[4] = { "mu.exe", "mumsg.dll", "wz_zp.dll", "message.wtf"};
	// mu._xe °¡ ÀÖ´ÂÁö °Ë»ç
	BOOL bAtLeastOne = FALSE;
	BOOL bNewFileFound[4] = { 0, 0, 0, 0};
	for ( int i = 0; i < 4; ++i)
	{
		WIN32_FIND_DATA wfd;
		HANDLE hFind = FindFirstFile( lpszNewMuFile[i], &wfd);
		if ( INVALID_HANDLE_VALUE != hFind)
		{
			bAtLeastOne = TRUE;
			bNewFileFound[i] = TRUE;
		}
		FindClose( hFind);
	}

	if ( !bAtLeastOne)
	{
		return ( TRUE);
	}

	// mu.exe Á¾·áµÇ±æ ±â´Ù¸²

	BOOL bDone = FALSE;
	DWORD dwStartTickCount = ::GetTickCount();
	while(TRUE) {
		if(::GetTickCount() - dwStartTickCount > 6000)
			break;
		HWND shWnd = FindWindow( "#32770", "MU Auto Update");
		if(NULL == shWnd) {
			bDone = TRUE;
			break;
		}
		::Sleep(10);
	}
	if ( !bDone)
	{	// Á¾·á¿¡ ½ÇÆÐ
		g_ErrorReport.Write( "Failed to close MU Auto Update window.\r\n");
		MessageBox( NULL, GlobalText[13], NULL, MB_OK);
		return ( FALSE);
	}

	// mu.exe ¼öÁ¤
#ifdef _VS2008PORTING
	for (int i = 0; i < 4; ++i)
#else // _VS2008PORTING
	for ( i = 0; i < 4; ++i)
#endif // _VS2008PORTING
	{
		if ( bNewFileFound[i] && !UpdateFile( lpszNewMuFile[i], lpszDestFile[i]))
		{
			g_ErrorReport.Write( GlobalText[13]);
			g_ErrorReport.Write( "\r\n");
			MessageBox( NULL, GlobalText[13], NULL, MB_OK);
			return ( FALSE);
		}
	}


	// mu.exe ½ÇÇà
	if ( bNewFileFound[0])
	{
		g_ErrorReport.Write( "> ");
		g_ErrorReport.Write( GlobalText[14]);
		g_ErrorReport.Write( "\r\n");
		MessageBox( NULL, GlobalText[14], "Update", MB_OK);

		// 1. mu.exe ÀÌ¸§
		char lpszStr[MAX_PATH];
		strcpy( lpszStr, TextMu);
		
		// 2. /t ¿É¼Ç ºÙÀÌ±â
#ifdef _TEST_SERVER
		strcat( lpszStr, " /t");
#endif //_TEST_SERVER
		
		// 3. ½ÇÇà
		WinExec(lpszStr, SW_SHOW);
		return ( FALSE);
	}

// À§¿¡ ÀÖ´Â ÄÚµåÀÎµ¥ ¿Ö ¶ÇÀÖÀ»±î???
#ifndef KJH_FIX_SOURCE_CODE_REPEATED				// Á¤¸®ÇÒ¶§ Áö¿ö¾ß ÇÏ´Â ¼Ò½º
	// mu.exe ½ÇÇà
	if ( bNewFileFound[0])
	{
		g_ErrorReport.Write( "> ");
		g_ErrorReport.Write( GlobalText[14]);
		g_ErrorReport.Write( "\r\n");
		MessageBox( NULL, GlobalText[14], "Update", MB_OK);

		// 1. mu.exe ÀÌ¸§
		char lpszStr[MAX_PATH];
		strcpy( lpszStr, TextMu);
		
		// 2. /t ¿É¼Ç ºÙÀÌ±â
#ifdef _TEST_SERVER
		strcat( lpszStr, " /t");
#endif //_TEST_SERVER
		
		// 3. ½ÇÇà
		WinExec(lpszStr, SW_SHOW);
		return ( FALSE);
	}
#endif // KJH_FIX_SOURCE_CODE_REPEATED				// Á¤¸®ÇÒ¶§ Áö¿ö¾ß ÇÏ´Â ¼Ò½º
	return ( TRUE);
}


char g_lpszCmdURL[50];
BOOL GetConnectServerInfo( PSTR szCmdLine, char *lpszURL, WORD *pwPort)
{
	char lpszTemp[256] = {0, };
	if( Util_CheckOption( szCmdLine, 'y', lpszTemp)){
		BYTE bySuffle[] = { 0x0C, 0x07, 0x03, 0x13 };
#ifdef _VS2008PORTING
		for(int i=0; i<(int)strlen(lpszTemp); i++)
#else // _VS2008PORTING
		for(int i=0; i<strlen(lpszTemp); i++)
#endif // _VS2008PORTING
			lpszTemp[i] -= bySuffle[i%4];
		strcpy(lpszURL, lpszTemp);

		if( Util_CheckOption( szCmdLine, 'z', lpszTemp)) {
#ifdef _VS2008PORTING
			for(int j=0; j<(int)strlen(lpszTemp); j++)
#else // _VS2008PORTING
			for(int j=0; j<strlen(lpszTemp); j++)
#endif // _VS2008PORTING
				lpszTemp[j] -= bySuffle[j%4];
			*pwPort = atoi( lpszTemp);
		}
		g_ErrorReport.Write("[Virtual Connection] Connect IP : %s, Port : %d\r\n", lpszURL, *pwPort);
		return (TRUE);
	}
	if ( !Util_CheckOption( szCmdLine, 'u', lpszTemp))
	{
		return ( FALSE);
	}
	strcpy( lpszURL, lpszTemp);
	if ( !Util_CheckOption( szCmdLine, 'p', lpszTemp))
	{
		return ( FALSE);
	}
	*pwPort = atoi( lpszTemp);

	return ( TRUE);
}


extern int TimeRemain;
BOOL g_bInactiveTimeChecked = FALSE;
void ConvertSoundFileName( void);
void MoveObject(OBJECT *o);

bool ExceptionCallback(_EXCEPTION_POINTERS* pExceptionInfo )
{
#ifdef KJH_LOG_ERROR_DUMP
	DebugAngel_Write(LOG_ERROR_DUMP_FILENAME, " ## Start Log\r\n");
#endif // KJH_LOG_ERROR_DUMP

#ifndef MSZ_ADD_CRASH_DUMP_UPLOAD	// ´ýÇÁ¸¦ µÎ¹ø »ý¼ºÇÒ ÇÊ¿ä´Â ¾øÀ¸¹Ç·Î..
	if(leaf::SaveExceptionDumpFile("MuError.dmp", pExceptionInfo->ContextRecord, pExceptionInfo))
	{
		g_ErrorReport.Write("Save DumpFile complete - MuError.dmp\r\n");
	}
#endif

#ifdef KJH_LOG_ERROR_DUMP
	DebugAngel_Write(LOG_ERROR_DUMP_FILENAME, " ## End Log\r\n");
#endif // KJH_LOG_ERROR_DUMP

#ifdef NP_GAME_GUARD
	if(g_pnpGL) 
	{	//. °ÔÀÓ°¡µå °´Ã¼°¡ »ý¼ºµÇ¾ú´Ù¸é ÇØÁ¦ÇÑ´Ù.
		delete g_pnpGL;
		g_pnpGL = NULL;
	}
#endif // NP_GAME_GUARD

#ifdef ATTACH_HACKSHIELD
	DetachHackShield();
#endif // ATTACH_HACKSHIELD

#ifdef ENABLE_FULLSCREEN
#if defined USER_WINDOW_MODE || (defined WINDOWMODE)
	if (g_bUseWindowMode == FALSE)
#endif	// USER_WINDOW_MODE
	{
		ChangeDisplaySettings(NULL,0);					// µ¥½ºÅ©Å¾ ¼³Á¤À¸·Î º¹±Í
	}
#endif //ENABLE_FULLSCREEN

	return true;
}

int APIENTRY WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, PSTR szCmdLine, int nCmdShow)
{
#ifdef LDK_ADD_SCALEFORM
	//°¡Àå Ã³À½¿¡ »ý¼º . ÇÊ¼ö!!
	GFxSystem gfxInit;
#endif //LDK_ADD_SCALEFORM

	MSG msg;

#ifdef USE_CRT_DEBUG
	//_CrtSetBreakAlloc(67839);
	_CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);
#endif

#ifdef MSZ_ADD_CRASH_DUMP_UPLOAD
	char szIniFilePath[256+20]="";
	char szCurrentDir[256];

	GetCurrentDirectory(256, szCurrentDir);

	strcpy(szIniFilePath, szCurrentDir);
	if( szCurrentDir[strlen(szCurrentDir)-1] == '\\' ) 
		strcat(szIniFilePath, "config.ini");
	else strcat(szIniFilePath, "\\config.ini");

	TCHAR szToken1[256] = _T("webzen");
	TCHAR szHttpUrl[256] = {0, };
	TCHAR szFtpUrl[256] = {0, };
	TCHAR szToken2[256] = _T("#@!");
	TCHAR szFtpID[256] = {0, };
	TCHAR szFtpPW[256] = {0, };
	TCHAR szToken3[256] = _T("01");
	int nFtpPort;

	_tcsnset_s(szHttpUrl, 256, 0x00, 256);
	_tcsnset_s(szFtpUrl, 256, 0x00, 256);
	sprintf_s(szFtpID, 256, "%s%s", szToken1, szToken3);
	sprintf_s(szFtpPW, 256, "%s%s%s", szToken1, szToken2, szToken3);

	GetPrivateProfileString(_T("Option"), _T("HTTP_URL"), _T(""), szHttpUrl, 256, szIniFilePath);
	GetPrivateProfileString(_T("Option"), _T("FTP_URL"), _T(""), szFtpUrl, 256, szIniFilePath);
	nFtpPort = GetPrivateProfileInt(_T("Option"), _T("FTP_PORT"), 0, szIniFilePath);

	Crash::Install(
		NULL,
		ExceptionCallback,
		1,
		NULL,
		MiniDumpNormal,
		szHttpUrl,
		szFtpUrl,
		nFtpPort,
		szFtpID,
		szFtpPW,
		3,
		0,
		1,
		1,
		NULL, 
		true);
#else
	leaf::AttachExceptionHandler(ExceptionCallback);
#endif

#ifndef LJH_ADD_SUPPORTING_MULTI_LANGUAGE
	OpenTextData();		//. Text.bmd, Testtest.bmd¸¦ ÀÐ´Â´Ù.
#endif //LJH_ADD_SUPPORTING_MULTI_LANGUAGE

#ifndef FOR_HACKING
#ifdef NDEBUG	// (RELEASE MODE)

#ifdef BAN_USE_CMDLINE
	WZLAUNCHINFO LaunchInfo;
#endif

#if defined USER_WINDOW_MODE || (defined WINDOWMODE)
#ifndef ASG_ADD_MULTI_CLIENT	// µðÆÄÀÎ Á¤¸®½Ã »èÁ¦. ÇÑ±¹¸¸ Àû¿ëµÈ µðÆÄÀÎÀÌ¹Ç·Î ÁÖÀÇ.
	if (g_bUseWindowMode == TRUE)
	{
		CreateMutex(NULL, TRUE, "MuOnline");
		if (GetLastError() == ERROR_ALREADY_EXISTS)
			return FALSE;
	}
#endif	// ASG_ADD_MULTI_CLIENT
#endif	// USER_WINDOW_MODE

	// "#32770"ÀÌ¶õ ÀÏ¹ÝÀûÀÎ ´ëÈ­»óÀÚ ClassNameÀ» ¸»ÇÔ. 
	// "MU Auto Update"Àº MU ·±Ã³¸¦ ¸»ÇÔ.
	HWND shWnd = FindWindow( "#32770", "MU Auto Update");
	if(shWnd)
		SendMessage(shWnd, WM_CLOSE, 0, 0);

	// mu.exe ¾÷±×·¹ÀÌµå : Mu.exe¸¦ Á¾·áÇÑ ÈÄ¿¡ È£ÃâÇØ¾ß¸¸ ÇÑ´Ù.
	if ( !UpdateMuExe())
	{
		return ( FALSE);
	}

	//ÆÄ¶ó¸ÞÅÍ ¾øÀÌ ½ÇÇà½Ã mu.exe½ÇÇà
#ifdef BAN_USE_CMDLINE
//	WZLAUNCHINFO LaunchInfo;
	if( false == wzPopLaunchInfo(LaunchInfo) )
#else	// !BAN_USE_CMDLINE
	if( strlen( szCmdLine ) < 1 ) 
#endif // BAN_USE_CMDLINE
	{
		g_ErrorReport.Write("wzPopLaunchInfoÇÔ¼ö°¡ ½ÇÆÐÇÏ¿©, Mu.exe¸¦ ´Ù½Ã ½ÇÇàÇÕ´Ï´Ù.");
		
		// 1. mu.exe ÀÌ¸§
		char lpszStr[MAX_PATH];
		strcpy( lpszStr, TextMu);
		
		// 2. /t ¿É¼Ç ºÙÀÌ±â
#ifdef _TEST_SERVER
		strcat( lpszStr, " /t");
#endif //_TEST_SERVER
		
		// 3. ½ÇÇà
		WinExec(lpszStr, SW_SHOW);
		
		return FALSE;
	}
#endif	// NDEBUG (RELEASE MODE)
#endif	// !FOR_HACKING

	// ¾ÏÈ£È­ ½ÃÄÑ³õ±â À§ÇÔ

#ifdef WAV_CONVERT
	ConvertSoundFileName();
#endif

#ifdef ATTACH_HACKSHIELD
	// PKD_ADD_BINARY_PROTECTION
	VM_START
#ifndef _DEBUG	// for release mode
#ifdef _TEST_SERVER
	if(!AttachHackShield(7002, "54F49D65DBA5A527"))		//. Å×¼·(maintest.exe)
		return FALSE;
#else
	if(!AttachHackShield(7001, "8114A27E5DDA00BA"))		//. º»¼·(main.exe)
		return FALSE;
#endif // _TEST_SERVER
#else	// for debug mode
	if(!AttachHackShield(7003, "8F6E59C3A9E83223"))		//. µð¹ö±×¿ë(maindebug.exe)
		return FALSE;
#endif
	g_ErrorReport.Write("HackShield Launched.\r\n");
	VM_END
#endif // ATTACH_HACKSHIELD
	{
		char lpszExeVersion[256] = "unknown";

		char *lpszCommandLine = GetCommandLine();
		char lpszFile[MAX_PATH];
		WORD wVersion[4] = { 0,};
		if ( GetFileNameOfFilePath( lpszFile, lpszCommandLine))
		{
			if ( GetFileVersion( lpszFile, wVersion))
			{
				sprintf( lpszExeVersion, "%d.%02d", wVersion[0], wVersion[1]);
				if ( wVersion[2] > 0)
				{
					char lpszMinorVersion[2] = "a";
					lpszMinorVersion[0] += ( wVersion[2] - 1);
					strcat( lpszExeVersion, lpszMinorVersion);
				}
			}
		}

		g_ErrorReport.Write( "\r\n");
		g_ErrorReport.WriteLogBegin();
		g_ErrorReport.AddSeparator();
		g_ErrorReport.Write( "Mu online %s (%s) executed. (%d.%d.%d.%d)\r\n", lpszExeVersion, Language, wVersion[0], wVersion[1], wVersion[2], wVersion[3]);
#ifdef CONSOLE_DEBUG
		g_ConsoleDebug->Write(MCD_NORMAL, "Mu Online (Version: %d.%d.%d.%d)", wVersion[0], wVersion[1], wVersion[2], wVersion[3]);
#endif // CONSOLE_DEBUG
		g_ErrorReport.WriteCurrentTime();
		ER_SystemInfo si;
		ZeroMemory( &si, sizeof ( ER_SystemInfo));
		GetSystemInfo( &si);
		g_ErrorReport.AddSeparator();
		g_ErrorReport.WriteSystemInfo( &si);
		g_ErrorReport.AddSeparator();
	}

	// PKD_ADD_BINARY_PROTECTION
	VM_START
#if defined (BAN_USE_CMDLINE) && !defined(FOR_HACKING) && defined(NDEBUG)
	// LauncherHelper¿¡¼­ ³Ñ°ÜÁÖ´Â URL°ú Port ¹øÈ£¸¦ »ç¿ëÇÑ´Ù.
	if(!LaunchInfo.ip.empty()) {
		strcpy(g_lpszCmdURL, LaunchInfo.ip.c_str());
		szServerIpAddress = g_lpszCmdURL;
		g_ServerPort = LaunchInfo.port;
	}
#else // !BAN_USE_CMDLINE
	// mu.exe ¿¡¼­ ³Ñ°ÜÁÖ´Â ¼­¹ö URL °ú Port ¹øÈ£¸¦ ¾ò¾î¼­ ¾´´Ù.
	WORD wPortNumber;	
	if ( GetConnectServerInfo( szCmdLine, g_lpszCmdURL, &wPortNumber))
	{
		szServerIpAddress = g_lpszCmdURL;
		g_ServerPort = wPortNumber;
	}
#endif // BAN_USE_CMDLINE
	VM_END

	// [Å©·¢¹æÁö] main.exe ¸¦ ¿­¾î³õÀ¸¸é ½ÇÇàÁß¿¡ ±³Ã¼°¡ ºÒ°¡´ÉÇÏ´Ù.
	if ( !OpenMainExe())
	{
		return false;
	}

#if SELECTED_LANGUAGE==LANGUAGE_JAPANESE
    //  ¹Ì¸® ½ÇÇàµÈ ÇÙ ÇÁ·Î±×·¥À» Á¦°ÅÇÑ´Ù.
    if ( KillHackProgram() )
    {
        return false;
    }
#endif

	// PKD_ADD_BINARY_PROTECTION
	VM_START
	g_SimpleModulusCS.LoadEncryptionKey( "Data\\Enc1.dat");
	g_SimpleModulusSC.LoadDecryptionKey( "Data\\Dec2.dat");
	VM_END

	//initÈ­ÀÏ ÀÐ±â
	g_ErrorReport.Write( "> To read config.ini.\r\n");
	if( OpenInitFile() == FALSE )
	{
		g_ErrorReport.Write( "config.ini read error\r\n");
#ifdef ATTACH_HACKSHIELD
		DetachHackShield();
#endif // ATTACH_HACKSHIELD
		return false;
	}

#ifdef LEM_ADD_GAMECHU	// °ÔÀÓÃò À¯Àú µ¥ÀÌÅ¸ ¼ÂÆÃ
	#ifdef FOR_WORK
		g_ErrorReport.Write( " ! [Gamechu] - GCCertification.dll Loading-- \n");
	#endif // FOR_WORK

	if( !GAMECHU->Load_GamechuDLL( "GCCertification.dll") )
	{
	#ifdef FOR_WORK
		g_ErrorReport.Write( " [Gamechu] GCCertification.dll Failed\0 \n" );		
	#endif // FOR_WORK
		return false;
	}
	
 	GAMECHU->Set_GameChuMyData(szCmdLine);

	if( !GAMECHU->Get_GameChuLogin() )
	{
#ifdef FOR_WORK
		g_ErrorReport.Write( " [GameChu =ErrorMsg] < %s >\n", GAMECHU->Get_Error().c_str() );
#endif // FOR_WORK
	}
#endif // LEM_ADD_GAMECHU



#ifdef LJH_ADD_SUPPORTING_MULTI_LANGUAGE2
	pMultiLanguage = new CMultiLanguage(g_strSelectedML);
#endif //LJH_ADD_SUPPORTING_MULTI_LANGUAGE

#ifdef ANTIHACKING_ENABLE
	if(!init_hanguo_protect( hInstance))
	{
		return FALSE;
	}
#endif //ANTIHACKING_ENABLE
#ifdef NP_GAME_GUARD
	// PKD_ADD_BINARY_PROTECTION
	VM_START
	g_pnpGL = new CNPGameLib(g_szGameGuard);

	if ( !npGameGuard::init() )
    {
		g_ErrorReport.Write( "gg init error\r\n");
		KillGLWindow();
		
		if(g_pnpGL) 
		{	//. °ÔÀÓ°¡µå °´Ã¼°¡ »ý¼ºµÇ¾ú´Ù¸é ÇØÁ¦ÇÑ´Ù.
			delete g_pnpGL;
			g_pnpGL = NULL;
		}
        return FALSE;
    }

	g_ErrorReport.Write( "> gg init success.\r\n");
	g_ErrorReport.AddSeparator();
	VM_END
#endif	// NP_GAME_GUARD

	if (g_iChatInputType == 1)
		ShowCursor(FALSE);		// ¸¶¿ì½º Æ÷ÀÎÆ®¸¦ ¾Èº¸ÀÌµµ·Ï

	g_ErrorReport.Write( "> Enum display settings.\r\n");
	DEVMODE DevMode;
	DEVMODE* pDevmodes;
	int nModes = 0;
	while (EnumDisplaySettings(NULL, nModes, &DevMode)) nModes++;
	pDevmodes = new DEVMODE[nModes+1];		//. ¸ðµå¸®½ºÆ® »ý¼º
	nModes = 0;
	while (EnumDisplaySettings(NULL, nModes, &pDevmodes[nModes])) nModes++;

	DWORD dwBitsPerPel = 16;
	for(int n1=0; n1<nModes; n1++)
	{
		if(pDevmodes[n1].dmBitsPerPel == 16 && m_nColorDepth == 0) {
			dwBitsPerPel = 16; break;
		}
		if(pDevmodes[n1].dmBitsPerPel == 24 && m_nColorDepth == 1) {
			dwBitsPerPel = 24; break;
		}
		if(pDevmodes[n1].dmBitsPerPel == 32 && m_nColorDepth == 1) {
			dwBitsPerPel = 32; break;
		}
	}

#ifdef ENABLE_FULLSCREEN
#if defined USER_WINDOW_MODE || (defined WINDOWMODE)
	if (g_bUseWindowMode == FALSE)
#endif	// USER_WINDOW_MODE
	{
    	//À©µµ¿ì¸¦ Ç®½ºÅ©¸°À¸·Î º¯È¯	
		for(int n2=0; n2<nModes; n2++)
		{
			if(pDevmodes[n2].dmPelsWidth==WindowWidth && pDevmodes[n2].dmPelsHeight==WindowHeight && pDevmodes[n2].dmBitsPerPel == dwBitsPerPel)
			{
				g_ErrorReport.Write( "> Change display setting %dx%d.\r\n", pDevmodes[n2].dmPelsWidth, pDevmodes[n2].dmPelsHeight);
				ChangeDisplaySettings(&pDevmodes[n2],0);
				break;
			}
		}
	}
#endif //ENABLE_FULLSCREEN

	delete [] pDevmodes;		//. ¸ðµå¸®½ºÆ® Á¦°Å

	g_ErrorReport.Write( "> Screen size = %d x %d.\r\n", WindowWidth, WindowHeight);

    //À©µµ¿ì »ý¼º
    g_hInst = hInstance;
    g_hWnd = StartWindow(hInstance,nCmdShow);
	g_ErrorReport.Write( "> Start window success.\r\n");

    if ( !CreateOpenglWindow())
	{
#ifdef ATTACH_HACKSHIELD
		DetachHackShield();
#endif // ATTACH_HACKSHIELD
#ifdef NP_GAME_GUARD
		//. °ÔÀÓ°¡µå °´Ã¼°¡ »ý¼ºµÇ¾ú´Ù¸é ÇØÁ¦ÇÑ´Ù.
		if(g_pnpGL)
		{	
			delete g_pnpGL;
			g_pnpGL = NULL;
		}
#endif // NP_GAME_GUARD
		return FALSE;
	}

#if defined(_DEBUG)
	CheckGLError( __FILE__, __LINE__ );
#endif // defined(_DEBUG)

	g_ErrorReport.Write( "> OpenGL init success.\r\n");
	g_ErrorReport.AddSeparator();
	g_ErrorReport.WriteOpenGLInfo();
	g_ErrorReport.AddSeparator();
	g_ErrorReport.WriteSoundCardInfo();

    ShowWindow(g_hWnd, nCmdShow);
    UpdateWindow(g_hWnd);

	// PKD_ADD_BINARY_PROTECTION
	VM_START
#ifdef NP_GAME_GUARD
	npGameGuard::SetHwnd( g_hWnd );
	g_ErrorReport.Write( "> gg connect Window Handle.\r\n");
	g_ErrorReport.AddSeparator();
#endif
	VM_END
	g_ErrorReport.WriteImeInfo( g_hWnd);
	g_ErrorReport.AddSeparator();
	
	switch(WindowWidth)
	{
	case 640 :FontHeight = 12;break;
	case 800 :FontHeight = 13;break;
	case 1024:FontHeight = 14;break;
	case 1280:FontHeight = 15;break;
	}
	
	int nFixFontHeight = 13;
	int nFixFontSize;
	int iFontSize;

	//ÆùÆ® »ý¼º
#if SELECTED_LANGUAGE == LANGUAGE_JAPANESE
	//FontHeight -= 2;
	iFontSize = - ( FontHeight - 2);
	//FontHeight += 5;
	nFixFontSize = - ( nFixFontHeight - 2);
#else // SELECTED_LANGUAGE == LANGUAGE_JAPANESE
	iFontSize = FontHeight - 1;
	nFixFontSize = nFixFontHeight - 1;
#endif // SELECTED_LANGUAGE == LANGUAGE_JAPANESE

	g_hFont = CreateFont(14,0,0,0,FW_NORMAL,0,0,0,
		g_dwCharSet[SELECTED_LANGUAGE],OUT_DEFAULT_PRECIS,CLIP_DEFAULT_PRECIS,
		NONANTIALIASED_QUALITY,DEFAULT_PITCH|FF_DONTCARE,
		GlobalText[0][0] ? GlobalText[0] : NULL);
	g_hFontBold = CreateFont(15,0,0,0,FW_BOLD,0,0,0,
		g_dwCharSet[SELECTED_LANGUAGE],OUT_DEFAULT_PRECIS,CLIP_DEFAULT_PRECIS,
		NONANTIALIASED_QUALITY,DEFAULT_PITCH|FF_DONTCARE,
		GlobalText[0][0] ? GlobalText[0] : NULL);
	g_hFontBig = CreateFont(15*2,0,0,0,FW_BOLD,0,0,0,
		g_dwCharSet[SELECTED_LANGUAGE],OUT_DEFAULT_PRECIS,CLIP_DEFAULT_PRECIS,
		NONANTIALIASED_QUALITY,DEFAULT_PITCH|FF_DONTCARE,
		GlobalText[0][0] ? GlobalText[0] : NULL);
	g_hFixFont = ::CreateFont(nFixFontSize, 0, 0, 0, FW_NORMAL, 0, 0, 0,
		g_dwCharSet[SELECTED_LANGUAGE], OUT_DEFAULT_PRECIS, CLIP_DEFAULT_PRECIS,
		NONANTIALIASED_QUALITY, DEFAULT_PITCH | FF_DONTCARE,
		GlobalText[18][0] ? GlobalText[18] : NULL);
#ifdef PBG_ADD_INGAMESHOP_FONT
	int _FontSize = 12;
	switch(WindowWidth)
	{
	case 800:
		_FontSize = 16;
		break;
	case 1024:
		_FontSize = 19;
		break;
	case 1280:
		_FontSize = 26;
		break;
	default:
		_FontSize = 12;
		break;
	}

	g_hInGameShopFont = CreateFont(_FontSize,0,0,0,FW_NORMAL,0,0,0,
		g_dwCharSet[SELECTED_LANGUAGE],OUT_DEFAULT_PRECIS,CLIP_DEFAULT_PRECIS,
		NONANTIALIASED_QUALITY,DEFAULT_PITCH|FF_DONTCARE,
		GlobalText[0][0] ? GlobalText[0] : NULL);
#endif //PBG_ADD_INGAMESHOP_FONT
	// ÅØ½ºÆ® ±æÀÌ °è»êÀ» À§ÇÑ ºÎºÐ
	setlocale( LC_ALL, lpszLocale);

	CInput::Instance().Create(g_hWnd, WindowWidth, WindowHeight);

	// »õ·Î¿î UI½Ã½ºÅÛ »ý¼º
	g_pNewUISystem->Create();

#ifdef LDK_ADD_SCALEFORM
	if(GFxProcess::GetInstancePtr()->GetUISelect() == 1)
	{
		if(GFxProcess::GetInstancePtr()->GFxInit())
		{
			//error log
		}
		
		GFxProcess::GetInstancePtr()->OnCreateDevice(WindowWidth, WindowHeight, 0, 0, WindowWidth, WindowHeight);
	}
#endif //LDK_ADD_SCALEFORM

	//´ÙÀÌ·ºÆ® »ç¿îµå ÃÊ±âÈ­
	if(m_MusicOnOff)
	{
		wzAudioCreate(g_hWnd);
		wzAudioOption(WZAOPT_STOPBEFOREPLAY, 1);
	}

	if(m_SoundOnOff)
	{
		InitDirectSound(g_hWnd);
		//. g_VolumeLevel ÀúÀåÇÑ°Å ÀÐ¾îµéÀÌ´Â ºÎºÐ ÇÊ¿ä
		leaf::CRegKey regkey;
#ifdef PBG_ADD_LAUNCHER_BLUE
		regkey.SetKey(leaf::CRegKey::_HKEY_CURRENT_USER, "SOFTWARE\\Webzen\\Mu_Blue\\Config");
#else //PBG_ADD_LAUNCHER_BLUE
		regkey.SetKey(leaf::CRegKey::_HKEY_CURRENT_USER, "SOFTWARE\\Webzen\\Mu\\Config");
#endif //PBG_ADD_LAUNCHER_BLUE
		DWORD value;
		if(!regkey.ReadDword("VolumeLevel", value))
		{
			value = 5;	//. default setting
			regkey.WriteDword("VolumeLevel", value);
		}
		if(value<0 || value>=10)	//. º¼·ýÀÌ ¹üÀ§¹ÛÀÌ¸é µðÆúÆ®¼ÂÆÃÀ¸·Î ¹Ù²ãÁØ´Ù
			value = 5;	//. default setting
		
		g_pOption->SetVolumeLevel(int(value));
		SetEffectVolumeLevel(g_pOption->GetVolumeLevel());
	}

	//ÇØÅ· ÇÁ·Î±×·¥ÀÌ »óÁÖÇØ ÀÖ´ÂÁö Ã¼Å©ÇÏ´Â ÇÔ¼öÀÇ Å¸ÀÌ¸Ó ¼³Á¤
	SetTimer(g_hWnd, HACK_TIMER, 20*1000, NULL);

	//ÇØÅ· ¹æÁö¸¦ À§ÇØ¼­ ´ýÇÁ ¸Þ¸ð¸® ÇÒ´ç
	//srand(timeGetTime());
	srand((unsigned)time(NULL));
	for(int i=0;i<100;i++)
		RandomTable[i] = rand()%360;

	//memorydump[0]
	RendomMemoryDump = new BYTE [rand()%100+1];

	//////////////////////////////////////////////////////////////////////////
	// ¸Þ¸ð¸® ÇÒ´ç

#ifdef CSK_MOD_PROTECT_AUTO_V1
	CProtectAuto::Create();
	
#ifdef CSK_MOD_PROTECT_AUTO_V2
	g_pProtectAuto->CheckAuto();
#endif // CSK_MOD_PROTECT_AUTO_V2
#endif // CSK_MOD_PROTECT_AUTO_V1
	
	GateAttribute				= new GATE_ATTRIBUTE [MAX_GATES];
	SkillAttribute				= new SKILL_ATTRIBUTE[MAX_SKILLS];

	//memorydump[1]
	ItemAttRibuteMemoryDump		= new ITEM_ATTRIBUTE [MAX_ITEM+1024];
	ItemAttribute				= ((ITEM_ATTRIBUTE*)ItemAttRibuteMemoryDump)+rand()%1024;

	//memorydump[2]
	CharacterMemoryDump			= new CHARACTER      [MAX_CHARACTERS_CLIENT+1+128];
	CharactersClient			= ((CHARACTER*)CharacterMemoryDump)+rand()%128;
	CharacterMachine			= new CHARACTER_MACHINE;

	memset(GateAttribute       ,0,sizeof(GATE_ATTRIBUTE   )*(MAX_GATES              ));
	memset(ItemAttribute       ,0,sizeof(ITEM_ATTRIBUTE   )*(MAX_ITEM               ));
	memset(SkillAttribute      ,0,sizeof(SKILL_ATTRIBUTE  )*(MAX_SKILLS             ));
	memset(CharacterMachine    ,0,sizeof(CHARACTER_MACHINE));

    CharacterAttribute   = &CharacterMachine->Character;
    CharacterMachine->Init();
	Hero = &CharactersClient[0];	

///////////////////////////////////////////
	if (g_iChatInputType == 1)
	{
		 g_pMercenaryInputBox = new CUIMercenaryInputBox;
		 g_pSingleTextInputBox = new CUITextInputBox;
		 g_pSinglePasswdInputBox = new CUITextInputBox;
	}
	
	g_pChatRoomSocketList = new CChatRoomSocketList;
	g_pUIManager = new CUIManager;
	g_pUIMapName = new CUIMapName;	// rozy
	g_pTimer = new CTimer();

#ifdef MOVIE_DIRECTSHOW
	g_pMovieScene = new CMovieScene;
#endif // MOVIE_DIRECTSHOW
	
#ifdef MR0
	EngineGate::Init();
#endif //MR0
/////////////////////////////////////////////

#ifdef NEW_USER_INTERFACE_SHELL
	g_shell = Shell::Make();
	g_shell->Initialize( g_hWnd, WindowWidth, WindowHeight );
#endif //NEW_USER_INTERFACE_SHELL

	g_BuffSystem = BuffStateSystem::Make();

#ifdef PSW_ADD_MAPSYSTEM
	g_MapProcess = MapProcess::Make();
#endif //PSW_ADD_MAPSYSTEM

#ifdef LDK_ADD_NEW_PETPROCESS
	g_petProcess = PetProcess::Make();
#endif //LDK_ADD_NEW_PETPROCESS

	CUIMng::Instance().Create();

	if (g_iChatInputType == 1)
	{
		g_pMercenaryInputBox->Init(g_hWnd);							// »ç¿ëÇÏÁö ¾Ê´Â°Í °°À½
		g_pSingleTextInputBox->Init(g_hWnd, 200, 20);				// Ä³¸¯ÅÍ ¸¸µå´Â Ã¢¿¡¼­ Ä³¸¯ÅÍ ÀÌ¸§ ÀÔ·Â
		g_pSinglePasswdInputBox->Init(g_hWnd, 200, 20, 9, TRUE);	// Ä³¸¯ÅÍ Áö¿ì´Â Ã¢¿¡¼­ ÆÐ½º¿öµå ÀÔ·Â
		g_pSingleTextInputBox->SetState(UISTATE_HIDE);
		g_pSinglePasswdInputBox->SetState(UISTATE_HIDE);

		g_pMercenaryInputBox->SetFont(g_hFont);
		g_pSingleTextInputBox->SetFont(g_hFont);
		g_pSinglePasswdInputBox->SetFont(g_hFont);

		g_bIMEBlock = FALSE;
		HIMC  hIMC = ImmGetContext(g_hWnd);
		ImmSetConversionStatus(hIMC, IME_CMODE_ALPHANUMERIC, IME_SMODE_NONE );
		ImmReleaseContext(g_hWnd, hIMC);
		SaveIMEStatus();
		g_bIMEBlock = TRUE;
	}
#if (defined WINDOWMODE)
	if (g_bUseWindowMode == FALSE)
	{
		int nOldVal; // °ªÀÌ µé¾î°¥ ÇÊ¿ä°¡ ¾øÀ½
		SystemParametersInfo(SPI_SCREENSAVERRUNNING, 1, &nOldVal, 0);  // ´ÜÃàÅ°¸¦ ¸ø¾²°Ô ÇÔ
		SystemParametersInfo(SPI_GETSCREENSAVETIMEOUT, 0, &g_iScreenSaverOldValue, 0);  // ½ºÅ©¸°¼¼ÀÌ¹ö Â÷´Ü
		SystemParametersInfo(SPI_SETSCREENSAVETIMEOUT, 300*60, NULL, 0);  // ½ºÅ©¸°¼¼ÀÌ¹ö Â÷´Ü
	}
#else
#ifdef NDEBUG
#ifndef FOR_WORK
#ifdef ACTIVE_FOCUS_OUT
	if (g_bUseWindowMode == FALSE)
	{
#endif	// ACTIVE_FOCUS_OUT
		int nOldVal; // °ªÀÌ µé¾î°¥ ÇÊ¿ä°¡ ¾øÀ½
		SystemParametersInfo(SPI_SCREENSAVERRUNNING, 1, &nOldVal, 0);  // ´ÜÃàÅ°¸¦ ¸ø¾²°Ô ÇÔ
		SystemParametersInfo(SPI_GETSCREENSAVETIMEOUT, 0, &g_iScreenSaverOldValue, 0);  // ½ºÅ©¸°¼¼ÀÌ¹ö Â÷´Ü
		SystemParametersInfo(SPI_SETSCREENSAVETIMEOUT, 300*60, NULL, 0);  // ½ºÅ©¸°¼¼ÀÌ¹ö Â÷´Ü
#ifdef ACTIVE_FOCUS_OUT
	}
#endif	// ACTIVE_FOCUS_OUT
#endif
#endif
#endif	//WINDOWMODE(#else)

#ifdef SAVE_PACKET
	DeleteFile( PACKET_SAVE_FILE);
#endif

#if defined PROTECT_SYSTEMKEY && defined NDEBUG
#ifndef FOR_WORK
	ProtectSysKey::AttachProtectSysKey(g_hInst, g_hWnd);
#endif // !FOR_WORK
#endif // PROTECT_SYSTEMKEY && NDEBUG
	
#ifdef TEENAGER_REGULATION
	SetTimer( g_hWnd, WARNING_TIMER, 60*60*1000, NULL);
//	SetTimer( g_hWnd, WARNING_TIMER, 3*60*1000, NULL);
	//½Ã°£Á¶Á¤
#endif
	//¸Þ¼¼Áö ·çÇÁ
	//MSG msg;

	// Profiling Initialize Á¤ÀÇ
#ifdef DO_PROFILING
	g_pProfiler = g_pProfiler->GetThis_();
	g_pProfiler->Initialize(	TRUE, 
								"PROFILING_RESULT.txt",
								EPROFILESORTING_WEIGHT, 
								EPROFILESORTING_DIRECTION_DESCENDING );	// m_pProfiler->Initialize( TRUE, "PROFILE_RESULT.txt" );
#endif // DO_PROFILING

#ifdef DO_PROCESS_DEBUGCAMERA
	g_pDebugCameraManager = g_pDebugCameraManager->GetThis_();
	
	g_pDebugCameraManager->Initialize();
	
	for( int i_ = 0; i_ < (int)EDEBUGCAMERA_END; ++i_ )
	{
		vec3_t	v3DefaultPosition, v3DefaultAngle;
		v3DefaultPosition[0] = 0.0f; v3DefaultPosition[1] = 0.0f; v3DefaultPosition[2] = 0.0f; 
		v3DefaultAngle[0] = 0.0f; v3DefaultAngle[1] = 0.0f; v3DefaultAngle[2] = 0.0f; 
		
		g_pDebugCameraManager->InsertNewCamera( (EDEBUGCAMERA_TYPE)i_,
												v3DefaultPosition,
												v3DefaultAngle, 
												_DEFAULT_CAMERADISTANCE_NEAR_, 
												_DEFAULT_CAMERADISTANCE_FAR_,
												_DEFAULT_VELOCITY_PERTICK * 10, 
												_DEFAULT_RATE_ANGULARVELOCITY * 0.25f, 
												FALSE );
	}
#endif // DO_PROCESS_DEBUGCAMERA

    while( 1 )
    {
#ifdef DO_PROFILING
		g_pProfiler->BeginTotal( FALSE );	
#endif // DO_PROFILING

#ifdef DO_PROFILING
		g_pProfiler->BeginUnit( EPROFILING_PROCESS_TOTAL, PROFILING_PROCESS_TOTAL );
#endif // DO_PROFILING

#ifdef USE_SELFCHECKCODE
		if ( TimeRemain >= 40)
		{
			SendCrcOfFunction( 8, 20, MoveHero, 0x93B7);
		}
#endif
        if( PeekMessage( &msg, NULL, 0, 0, PM_NOREMOVE ) )
        {
            if( !GetMessage( &msg, NULL, 0, 0 ) )
            {
				break;
            }
            else
			{
                TranslateMessage(&msg);
                DispatchMessage(&msg);
            }
        }
     	else 
		{
			ProtocolCompiler();
			// À©ÆÃ ¹æÁö ÄÚµå
#ifdef NDEBUG
#ifndef FOR_WORK
#if defined USER_WINDOW_MODE || (defined WINDOWMODE)
			if (g_bUseWindowMode == FALSE)
#endif
			{
				// Alt-Tab ÇØ¼­ ¹é±×¶ó¿îµå·Î °¬´ÂÁö Ã¼Å©
				FAKE_CODE( Pos_NoMouseTimeCheck);
	Pos_NoMouseTimeCheck:
				FAKE_CODE( Pos_NoMouseTimeCheck2);
	Pos_NoMouseTimeCheck2:
				if ( ++g_iNoMouseTime > 30)
				{
					if ( ++g_iInactiveTime > 30)
					{
						g_iNoMouseTime = 0;
						g_iInactiveTime = 0;
						// ÇØÅ·½Ãµµ
						if ( !g_bInactiveTimeChecked)
						{
							SendHackingChecked( 0x01, 0);
							g_bInactiveTimeChecked = TRUE;
						}
						SetTimer( g_hWnd, WINDOWMINIMIZED_TIMER, 1*1000, NULL);
						LoadingWorld = 7623421;
					}
					else
					{
					}
					if ( !IsIconic( g_hWnd))
					{
						g_iInactiveTime = 0;
						g_iNoMouseTime = 0;
					}
				}
			}
#endif
#endif

#ifdef USE_SELFCHECKCODE
			if ( TimeRemain >= 40)
			{
				SendCrcOfFunction( 15, 11, MoveObject, 0x7AC0);
			}
#endif

			//Scene ÇÔ¼ö
			FAKE_CODE( Pos_ActiveCheck);
Pos_ActiveCheck:
#if (defined WINDOWMODE)
			if (g_bUseWindowMode == TRUE)
			{
				Scene(g_hDC);
			}
			else if(g_bWndActive)//¹ÚÁ¾ÈÆ
			{
		       	Scene(g_hDC);
			}
#ifndef FOR_WORK
			else if (g_bUseWindowMode == FALSE)		// À©ÆÃ ¹æÁö ÄÚµå
			{	// ´Ù¸¥ ÇÁ·Î±×·¥À¸·Î ³Ñ¾î°¡Áö ¸øÇÏ°Ô ÇÑ´Ù.
				SetForegroundWindow( g_hWnd);
				SetFocus(g_hWnd);

				// À©µµ¿ì¸¦ ÃÖ¼ÒÈ­½ÃÄ×´Ù°¡ µÇµ¹·Á¼­ Æ÷Ä¿½º ¾ò±â
				if ( g_iInactiveWarning > 1)
				{
					SetTimer( g_hWnd, WINDOWMINIMIZED_TIMER, 1*1000, NULL);
					PostMessage(g_hWnd, WM_CLOSE, 0, 0);
				}
				else
				{
					g_iInactiveWarning++;
					g_bMinimizedEnabled = TRUE;
					ShowWindow( g_hWnd, SW_MINIMIZE);
					g_bMinimizedEnabled = FALSE;
					ShowWindow( g_hWnd, SW_MAXIMIZE);
				}
			}
#endif//FOR_WORK
#else//WINDOWMODE
			if(g_bWndActive)//¹ÚÁ¾ÈÆ
		       	Scene(g_hDC);

#ifdef NDEBUG
#ifndef FOR_WORK
			else	// À©ÆÃ ¹æÁö ÄÚµå
#if defined USER_WINDOW_MODE || (defined WINDOWMODE)
			if (g_bUseWindowMode == FALSE)
#endif
			{	// ´Ù¸¥ ÇÁ·Î±×·¥À¸·Î ³Ñ¾î°¡Áö ¸øÇÏ°Ô ÇÑ´Ù.
				SetForegroundWindow( g_hWnd);
				SetFocus(g_hWnd);

				// À©µµ¿ì¸¦ ÃÖ¼ÒÈ­½ÃÄ×´Ù°¡ µÇµ¹·Á¼­ Æ÷Ä¿½º ¾ò±â
				if ( g_iInactiveWarning > 1)
				{
					SetTimer( g_hWnd, WINDOWMINIMIZED_TIMER, 1*1000, NULL);
					PostMessage(g_hWnd, WM_CLOSE, 0, 0);
				}
				else
				{
					g_iInactiveWarning++;
					g_bMinimizedEnabled = TRUE;
					ShowWindow( g_hWnd, SW_MINIMIZE);
					g_bMinimizedEnabled = FALSE;
					ShowWindow( g_hWnd, SW_MAXIMIZE);

				}
			}
#endif
#endif
#endif	//WINDOWMODE(#else)
		}
		//ÇÁ·ÎÅäÄÝ ¹Þ´Â ÇÔ¼ö
        //ProtocolCompiler();
		g_pChatRoomSocketList->ProtocolCompile();

#ifdef DO_PROFILING
		g_pProfiler->EndUnit( EPROFILING_PROCESS_TOTAL );
#endif // DO_PROFILING
		
#ifdef DO_PROFILING
		g_pProfiler->EndTotal();
#endif // DO_PROFILING
    } // while( 1 )

#ifdef DO_PROCESS_DEBUGCAMERA	
	g_pDebugCameraManager->Release();
#endif // DO_PROCESS_DEBUGCAMERA

#ifdef DO_PROFILING
	g_pProfiler->Release();
#endif // DO_PROFILING

#if defined PROTECT_SYSTEMKEY && defined NDEBUG
#ifndef FOR_WORK
	ProtectSysKey::DetachProtectSysKey();
#endif // !FOR_WORK
#endif // PROTECT_SYSTEMKEY && NDEBUG


#ifdef NP_GAME_GUARD
	//. °ÔÀÓ°¡µå °´Ã¼°¡ »ý¼ºµÇ¾ú´Ù¸é ÇØÁ¦ÇÑ´Ù.
	if(g_pnpGL) 
	{	
		delete g_pnpGL;
		g_pnpGL = NULL;
	}
#endif // NP_GAME_GUARD

#ifdef MSZ_ADD_CRASH_DUMP_UPLOAD
	Crash::Uninstall();
#endif

	DestroyWindow();

    return msg.wParam;
#ifdef USE_SELFCHECKCODE
	END_OF_FUNCTION( Pos_SelfCheck01);
Pos_SelfCheck01:
	;
#endif
}

#ifdef MR0
unsigned int GenID()
{
	static unsigned int s_iKey = 0;
	return s_iKey++;
}
#endif //MR0

