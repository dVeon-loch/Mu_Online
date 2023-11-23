//=============================================================================
//    File : NPGameLib.h
//     Use : Handle Communication between Game and GameMon
//  Author : Kim Chan Ho (chkim@inca.co.kr)
//    Date : 2003/07/01 - 03
//=============================================================================

#ifndef __NPGAMELIB_H__
#define __NPGAMELIB_H__

#ifdef GAMEGUARD_LIB_SELECTED_LANGUAGE

// 각국의 라이브러리 변경으로 인해 lib 정리
#if (SELECTED_LANGUAGE == LANGUAGE_KOREAN)
#ifdef _BLUE_SERVER
#pragma comment(lib, "GameGuardLib/KorBlue/NPGameLib.lib")
#else //_BLUE_SERVER
#pragma comment(lib, "GameGuardLib/Kor/NPGameLib_MT_DE.lib")
#endif //_BLUE_SERVER
#elif (SELECTED_LANGUAGE == LANGUAGE_TAIWANESE)
#pragma comment(lib, "GameGuardLib/Twn/NPGameLib_MT.lib")
#elif (SELECTED_LANGUAGE == LANGUAGE_ENGLISH)
#pragma comment(lib, "GameGuardLib/Eng/NPGameLib_68_MT.lib")
#elif (SELECTED_LANGUAGE == LANGUAGE_JAPANESE)
#pragma comment(lib, "GameGuardLib/Jpn/NPGameLib_MT.lib")
#elif (SELECTED_LANGUAGE == LANGUAGE_CHINESE) || (SELECTED_LANGUAGE == LANGUAGE_PHILIPPINES)
#pragma comment(lib, "GameGuardLib/Chs/NPGameLib.lib")
#elif (SELECTED_LANGUAGE == LANGUAGE_VIETNAMESE)
#pragma comment(lib, "GameGuardLib/Vie/NPGameLib.lib")
#else //태국?
#pragma comment(lib, "GameGuardLib/etc/NPGameLib2_5.lib")
#endif 

#else //GAMEGUARD_LIB_SELECTED_LANGUAGE

#ifdef GAMEGUARD_NPLIB_WIN7									// 정리할 때 지워야 하는 소스
#if defined GAMEGUARD_NPGAMELIB_VER60
#pragma comment(lib, "NPGameLib_MT.lib")		// 대만 적용할 lib
#elif defined GAMEGUARD_BLUEMU_VERSION
#pragma comment(lib, "NPGameLib.lib")			// 블루 서버 적용할 lib
#elif defined GAMEGUARD_NPLIB_WIN7
#pragma comment(lib, "NPGameLib_68_MT.lib")		// 글로벌 적용할 lib
#else
#pragma comment(lib, "NPGameLib_MT_DE.lib")
#endif
#else //GAMEGUARD_NPLIB_WIN7
#ifdef GAMEGUARD_NPGAMELIB_VER60
#pragma comment(lib, "NPGameLib_MT.lib")		//대만 적용할 lib
#else //GAMEGUARD_NPGAMELIB_VER60
#ifdef GAMEGUARD_BLUEMU_VERSION
#pragma comment(lib, "NPGameLib.lib")			// 블루 서버 적용할 lib
#else //GAMEGUARD_BLUEMU_VERSION
#ifdef GAMEGUARD_NPLIB_WIN7_JPN
#pragma comment(lib, "lib/NPGameLib_MT.lib")
#else //GAMEGUARD_NPLIB_WIN7_JPN
#pragma comment(lib, "NPGameLib_MT_DE.lib")
#endif //GAMEGUARD_NPLIB_WIN7_JPN
#endif //GAMEGUARD_BLUEMU_VERSION
#endif //GAMEGUARD_NPGAMELIB_VER60
#endif //GAMEGUARD_NPLIB_WIN7								// 정리할 때 지워야 하는 소스

#endif //GAMEGUARD_LIB_SELECTED_LANGUAGE

#if defined GAMEGUARD_NPGAMELIB_VER60 || defined GAMEGUARD_AUTH25_MULTI || defined GAMEGUARD_NPLIB_WIN7 || defined GAMEGUARD_NPLIB_WIN7_JPN || defined GAMEGUARD_NEWHEADER

/// Definitions
#ifdef NPGAMEDLL_EXPORTS
#define NPGAMEDLL_API __declspec(dllexport)
#else
#define NPGAMEDLL_API
#endif


// Callback Message
#define NPGAMEMON_UNDEFINED            1000        // Undefined message
#define NPGAMEMON_COMM_ERROR           1001        // Communication error
#define NPGAMEMON_COMM_CLOSE           1002        // Communication closing

#define NPGAMEMON_SPEEDHACK            1011        // SpeedHack detected
#define NPGAMEMON_GAMEHACK_KILLED      1012        // GameHack killed
#define NPGAMEMON_GAMEHACK_DETECT      1013        // GameHack detected
#define NPGAMEMON_INIT_ERROR           1014        // GameMon Init Error
#define NPGAMEMON_GAMEHACK_DOUBT       1015        // GameHack doubt
#define NPGAMEMON_CHECK_CSAUTH         1016        // CSAuth
#define NPGAMEMON_CHECK_CSAUTH2        1017        // CSAuth2
#define NPGAMEMON_GAMEHACK_REPORT      1018        // GameHack report

// Error Code  110 - 300
#define NPGAMEMON_ERROR_EXIST          110         // GameMon Already Exist
#define NPGAMEMON_ERROR_CREATE         111         // GameGuard Directory Create Error
#define NPGAMEMON_ERROR_NPSCAN         112         // npscan.des Error
#define NPGAMEMON_ERROR_THREAD         113         // CreateThread Error
#define NPGAMEMON_ERROR_INIT           114         // GameMon Initialize Error
#define NPGAMEMON_ERROR_GAME_EXIST     115         // Game Instance Already Exist
#define NPGAMEMON_ERROR_AUTH_INI       120         // .ini Authentication Fail
#define NPGAMEMON_ERROR_AUTH_NPGMUP    121         // npgmup.des Authentication Fail
#define NPGAMEMON_ERROR_AUTH_GAMEMON   122         // GameMon.des Authentication Fail
#define NPGAMEMON_ERROR_AUTH_NEWUP     123         // npgmup.des.new Auth Fail
#define NPGAMEMON_ERROR_AUTH_GAMEGUARD 124         // GameGuard.des Authentication Fail
#define NPGAMEMON_ERROR_AUTH_DLL       125         // NPGameDLL.dll Authentication Fail
#define NPGAMEMON_ERROR_DECRYPT        130         // .ini File Decryption Fail
#define NPGAMEMON_ERROR_CORRUPT_INI    141         // Corrupt ini file Error
#define NPGAMEMON_ERROR_CORRUPT_INI2   142         // Not match GameName in ini file Error
#define NPGAMEMON_ERROR_NFOUND_INI     150         // ini File not Found
#define NPGAMEMON_ERROR_NFOUND_NPGMUP  151         // npgmup.des not found
#define NPGAMEMON_ERROR_NFOUND_NEWUP   152         // npgmup.des.new not found
#define NPGAMEMON_ERROR_NFOUND_GG      153         // GameGuard.des not found
#define NPGAMEMON_ERROR_NFOUND_GM      154         // GameMon.des not found
#define NPGAMEMON_ERROR_CRYPTOAPI      155         // rsabase.dll is corrupted
#define NPGAMEMON_ERROR_COMM           160         // Communication Init Error
#define NPGAMEMON_ERROR_EXECUTE        170         // GameMon Execute Error
#define NPGAMEMON_ERROR_EVENT          171         // GameMon Event Create Error
#define NPGAMEMON_ERROR_NPGMUP         180         // npgmup.dll Error
#define NPGAMEMON_ERROR_MOVE_INI       191         // Move ini Error
#define NPGAMEMON_ERROR_MOVE_NEWUP     192         // Move npgmup.des.new Error

#define NPGAMEMON_ERROR_ILLEGAL_PRG    200         // Detected a illegal program

#define NPGAMEMON_ERROR_GAMEMON        210         // GameMon Init Error
#define NPGAMEMON_ERROR_SPEEDCHECK     220         // SpeedCheck Init Error
#define NPGAMEMON_ERROR_GAMEGUARD      230         // GameGuard Init Error

// Error Code  310 - 400
// Update Error Code
#define NPGMUP_ERROR_PARAM             320         // Invalid .ini
#define NPGMUP_ERROR_INIT              330         // npgmup.des Initialize Error
#define NPGMUP_ERROR_DOWNCFG           340         // Download Error
#define NPGMUP_ERROR_ABORT             350         // Canceled by User
#define NPGMUP_ERROR_AUTH              360         // File Authentication Error
#define NPGMUP_ERROR_AUTH_INI          361         // .ini Authentication Error
#define NPGMUP_ERROR_DECRYPT           370         // .ini Decrypt Error
#define NPGMUP_ERROR_CONNECT           380         // Connect to update server Fail
#define NPGMUP_ERROR_INI               390         // .ini is corrupted

// Error Code  500
// Collision Error Code
#define NPGG_ERROR_COLLISION				500         // Detected a Collision Program

#define NPGAMEMON_SUCCESS              0x755       // GameMon Initialize Success


// USER_POLYBUFFER (NPGE L5 only)
#define USER_POLYBUFFER \
	__asm _emit 0xEB \
	__asm _emit 0x04 \
	__asm _emit 0xEB \
	__asm _emit 0x05 \
	__asm _emit 0x39 \
	__asm _emit 0x19


// gameguard auth data
typedef struct _GG_AUTH_DATA
{
	DWORD dwIndex;
	DWORD dwValue1;
	DWORD dwValue2;
	DWORD dwValue3;
} GG_AUTH_DATA, *PGG_AUTH_DATA;


#if defined(_LIB) || !defined(__LITE_VERSION)

#ifdef __cplusplus
extern "C" {
#endif

NPGAMEDLL_API DWORD __cdecl CheckNPGameMon();
NPGAMEDLL_API BOOL  __cdecl CloseNPGameMon();
NPGAMEDLL_API DWORD __cdecl InitNPGameMon();
NPGAMEDLL_API void  __cdecl SetHwndToGameMon(HWND hWnd);
NPGAMEDLL_API DWORD __cdecl PreInitNPGameMonA(LPCSTR szGameName);
NPGAMEDLL_API DWORD __cdecl PreInitNPGameMonW(LPCWSTR szGameName);
NPGAMEDLL_API BOOL  __cdecl SendUserIDToGameMonA(LPCSTR szUserID);
NPGAMEDLL_API BOOL  __cdecl SendUserIDToGameMonW(LPCWSTR szUserID);
NPGAMEDLL_API BOOL  __cdecl SendCSAuthToGameMon(DWORD dwAuth);
NPGAMEDLL_API BOOL  __cdecl SendCSAuth2ToGameMon(PGG_AUTH_DATA pAuth);
NPGAMEDLL_API LPSTR __cdecl NPDect(LPSTR lpszString);
NPGAMEDLL_API BOOL  __cdecl NPGuardData(LPVOID lpData, DWORD dwSize);
NPGAMEDLL_API BOOL  __cdecl NPReleaseData(LPVOID lpData, DWORD dwSize);
NPGAMEDLL_API LPCSTR __cdecl GetInfoFromGameMon();
NPGAMEDLL_API LPBYTE __cdecl GetHackInfoFromGameMon(DWORD* dwSize);
NPGAMEDLL_API BOOL  __cdecl ResourceAuthA(LPCSTR lpszFilename, bool bCheckFilename /* = true */ );
NPGAMEDLL_API BOOL  __cdecl ResourceAuthW(LPCWSTR lpszFilename, bool bCheckFilename /* = true */ );
NPGAMEDLL_API BOOL  __cdecl CheckD3DDevice(LPVOID lpD3DDevice, LPSTR lpszDll);
#if defined GAMEGUARD_BLUEMU_VERSION || defined GAMEGUARD_NEWHEADER_ERRORCODE
NPGAMEDLL_API DWORD __cdecl GGGetLastError();		// 2009.07.27
#endif //defined GAMEGUARD_BLUEMU_VERSION || defined GAMEGUARD_NEWHEADER_ERRORCODE

NPGAMEDLL_API DWORD __cdecl InitPacketProtect(LPCSTR lpszUserKey);
NPGAMEDLL_API DWORD __cdecl EncryptPacket(LPVOID lpData, DWORD dwLength);
NPGAMEDLL_API DWORD __cdecl DecryptPacket(LPVOID lpData, DWORD dwLength);
NPGAMEDLL_API DWORD __cdecl EncryptPeerPacket(LPVOID lpData, DWORD dwLength);
NPGAMEDLL_API DWORD __cdecl DecryptPeerPacket(LPVOID lpData, DWORD dwLength);
NPGAMEDLL_API DWORD __cdecl PPGetLastError();

NPGAMEDLL_API BOOL __cdecl FixVC80DEP();

typedef BOOL (CALLBACK *NPGMCALLBACK)(DWORD dwMsg, DWORD dwArg);
NPGAMEDLL_API void  __cdecl SetCallbackToGameMon(NPGMCALLBACK fnCallback);

#if defined GAMEGUARD_AUTH25_MULTI || defined GAMEGUARD_NEWHEADER_FIX

NPGAMEDLL_API DWORD __cdecl SetModulePathA(LPCSTR szModulePath);	// 2008.10.31
NPGAMEDLL_API DWORD __cdecl SetModulePathW(LPCWSTR szModulePath); // 2008.10.31

NPGAMEDLL_API BOOL  __cdecl IsAdminPrivilege();	// 2009.02.25

#else	// defined GAMEGUARD_AUTH25_MULTI || defined GAMEGUARD_NEWHEADER_FIX

NPGAMEDLL_API DWORD __cdecl SetModuelPathA(LPCSTR szModulePath);	// 2008.10.31
NPGAMEDLL_API DWORD __cdecl SetModuelPathW(LPCWSTR szModulePath); // 2008.10.31

#endif	// defined GAMEGUARD_AUTH25_MULTI || defined GAMEGUARD_NEWHEADER_FIX

#ifdef __cplusplus
}
#endif


#ifdef _UNICODE
#define PreInitNPGameMon		PreInitNPGameMonW
#if defined GAMEGUARD_AUTH25_MULTI || defined GAMEGUARD_NEWHEADER_FIX
#define SetModulePath			SetModulePathW
#else	// defined GAMEGUARD_AUTH25_MULTI || defined GAMEGUARD_NEWHEADER_FIX
#define SetModuelPath			SetModuelPathW
#endif	// defined GAMEGUARD_AUTH25_MULTI || defined GAMEGUARD_NEWHEADER_FIX
#define SendUserIDToGameMon	SendUserIDToGameMonW
#define ResourceAuth				ResourceAuthW
#else
#if defined GAMEGUARD_AUTH25_MULTI || defined GAMEGUARD_NEWHEADER_FIX
#define SetModulePath			SetModulePathA
#else	// defined GAMEGUARD_AUTH25_MULTI || defined GAMEGUARD_NEWHEADER_FIX
#define SetModuelPath			SetModuelPathA
#endif	// defined GAMEGUARD_AUTH25_MULTI || defined GAMEGUARD_NEWHEADER_FIX
#define PreInitNPGameMon		PreInitNPGameMonA
#define SendUserIDToGameMon	SendUserIDToGameMonA
#define ResourceAuth				ResourceAuthA
#endif


#ifndef NPGAMELIB_C

/// CNPGameLib Wrapper Class ///
class CNPGameLib
{
public:
   explicit CNPGameLib(LPCTSTR lpszGameName)
   {
#ifdef NO_GAMEGUARD
      return;
#endif
      PreInitNPGameMon(lpszGameName);
   }

	explicit CNPGameLib(LPCTSTR lpszGameName, LPCTSTR lpszModulePath)
   {
#ifdef NO_GAMEGUARD
      return;
#endif
#if defined GAMEGUARD_AUTH25_MULTI || defined GAMEGUARD_NEWHEADER_FIX
	  SetModulePath(lpszModulePath);
#else	// defined GAMEGUARD_AUTH25_MULTI || defined GAMEGUARD_NEWHEADER_FIX
      SetModuelPath(lpszModulePath);
#endif	// defined GAMEGUARD_AUTH25_MULTI || defined GAMEGUARD_NEWHEADER_FIX
      PreInitNPGameMon(lpszGameName);
   }

   ~CNPGameLib()
   {
#ifdef NO_GAMEGUARD
      return;
#endif
      CloseNPGameMon();
   }

public:
   DWORD Init()
   {
#ifdef NO_GAMEGUARD
      return NPGAMEMON_SUCCESS;
#endif
      return (InitNPGameMon());
   }

   void SetHwnd(HWND hWnd)
   {
#ifdef NO_GAMEGUARD
      return;
#endif
      SetHwndToGameMon(hWnd);
   }

   DWORD Check()
   {
#ifdef NO_GAMEGUARD
      return NPGAMEMON_SUCCESS;
#endif
      return (CheckNPGameMon());
   }

   DWORD Send(LPCTSTR lpszUserId)
   {
#ifdef NO_GAMEGUARD
      return NPGAMEMON_SUCCESS;
#endif
      return (SendUserIDToGameMon(lpszUserId));
   }

   LPCSTR GetInfo()
   {
#ifdef NO_GAMEGUARD
      return NULL;
#endif
      return (GetInfoFromGameMon());
   }
   LPBYTE GetHackInfo(DWORD *dwSize)
   {
#ifdef NO_GAMEGUARD
      return NULL;
#endif
      return (GetHackInfoFromGameMon(dwSize));
   }
   DWORD Auth(DWORD dwAuth)
   {
#ifdef NO_GAMEGUARD
      return NPGAMEMON_SUCCESS;
#endif
      return (SendCSAuthToGameMon(dwAuth));
   }

   DWORD Auth2(PGG_AUTH_DATA pAuth)
   {
#ifdef NO_GAMEGUARD
      return NPGAMEMON_SUCCESS;
#endif
      return (SendCSAuth2ToGameMon(pAuth));
   }

   BOOL ResAuth(LPCTSTR lpszFilename, bool bCheckFilename = true)
   {
#ifdef NO_GAMEGUARD
      return TRUE;
#endif
      return (ResourceAuth(lpszFilename, bCheckFilename));
   }

private:
   // No copies
   CNPGameLib(const CNPGameLib &rhs);
   CNPGameLib &operator=(const CNPGameLib &rhs);
};

/// 
/*
class CNPDword
{
public:
   CNPDword();
   //CNPDword(DWORD dwSize);
   ~CNPDword();
   DWORD Get();
   void Set(DWORD dwValue);

private:
   void Guard();
   void Release();

public:
   LPDWORD m_pValue;
   DWORD m_dwSize;
};
*/

extern BOOL  __cdecl RegisterToMgr(LPVOID);
extern void  __cdecl RemoveFromMgr(LPVOID);
extern DWORD __cdecl GetDataFromMgr(LPVOID);
extern void  __cdecl SetDataToMgr(LPVOID, DWORD);


class CNPDword {
public:
	CNPDword() : m_dwData(0)
	{
		m_bFlag = RegisterToMgr(this);
	}

	~CNPDword()
	{
		RemoveFromMgr(this);
	}

	DWORD Get()
	{
		if (m_bFlag)
			return GetDataFromMgr(this);
		else
			return m_dwData;
	}

	void Set(DWORD dwData)
	{
		if (m_bFlag)
			SetDataToMgr(this, dwData);
		else
			m_dwData = dwData;
	}

private:
	DWORD m_dwData;
	BOOL  m_bFlag;
};

#endif // NPGAMELIB_C

#else // defined(_LIB) || !defined(__LITE_VERSION)

#ifdef __cplusplus
extern "C" {
#endif

NPGAMEDLL_API DWORD __cdecl StartGameGuard(LPCSTR szGameName);
NPGAMEDLL_API BOOL  __cdecl EndGameGuard();

#ifdef __cplusplus
}
#endif

#endif // defined(_LIB) || !defined(__LITE_VERSION)


#else // GAMEGUARD_NEWHEADER


#ifdef GAMEGUARD_AUTH25

#ifndef GAMEGUARD_LIB_SELECTED_LANGUAGE
#pragma comment(lib, "NPGameLib2_5.lib")
#endif //GAMEGUARD_LIB_SELECTED_LANGUAGE

/// Definitions
#ifdef NPGAMEDLL_EXPORTS
#define NPGAMEDLL_API __declspec(dllexport)
#else
#define NPGAMEDLL_API
#endif


// Callback Message
#define NPGAMEMON_UNDEFINED            1000        // Undefined message
#define NPGAMEMON_COMM_ERROR           1001        // Communication error
#define NPGAMEMON_COMM_CLOSE           1002        // Communication closing

#define NPGAMEMON_SPEEDHACK            1011        // SpeedHack detected
#define NPGAMEMON_GAMEHACK_KILLED      1012        // GameHack killed
#define NPGAMEMON_GAMEHACK_DETECT      1013        // GameHack detected
#define NPGAMEMON_INIT_ERROR           1014        // GameMon Init Error
#define NPGAMEMON_GAMEHACK_DOUBT       1015        // GameHack doubt
#define NPGAMEMON_CHECK_CSAUTH         1016        // CSAuth
#define NPGAMEMON_CHECK_CSAUTH2        1017        // CSAuth2

// Error Code  110 - 300
#define NPGAMEMON_ERROR_EXIST          110         // GameMon Already Exist
#define NPGAMEMON_ERROR_CREATE         111         // GameGuard Directory Create Error
#define NPGAMEMON_ERROR_NPSCAN         112         // npscan.des Error
#define NPGAMEMON_ERROR_THREAD         113         // CreateThread Error
#define NPGAMEMON_ERROR_INIT           114         // GameMon Initialize Error
#define NPGAMEMON_ERROR_GAME_EXIST     115         // Game Instance Already Exist
#define NPGAMEMON_ERROR_AUTH_INI       120         // .ini Authentication Fail
#define NPGAMEMON_ERROR_AUTH_NPGMUP    121         // npgmup.des Authentication Fail
#define NPGAMEMON_ERROR_AUTH_GAMEMON   122         // GameMon.des Authentication Fail
#define NPGAMEMON_ERROR_AUTH_NEWUP     123         // npgmup.des.new Auth Fail
#define NPGAMEMON_ERROR_AUTH_GAMEGUARD 124         // GameGuard.des Authentication Fail
#define NPGAMEMON_ERROR_AUTH_DLL       125         // NPGameDLL.dll Authentication Fail
#define NPGAMEMON_ERROR_DECRYPT        130         // .ini File Decryption Fail
#define NPGAMEMON_ERROR_CORRUPT_INI    141         // Corrupt ini file Error
#define NPGAMEMON_ERROR_CORRUPT_INI2   142         // Not match GameName in ini file Error
#define NPGAMEMON_ERROR_NFOUND_INI     150         // ini File not Found
#define NPGAMEMON_ERROR_NFOUND_NPGMUP  151         // npgmup.des not found
#define NPGAMEMON_ERROR_NFOUND_NEWUP   152         // npgmup.des.new not found
#define NPGAMEMON_ERROR_NFOUND_GG      153         // GameGuard.des not found
#define NPGAMEMON_ERROR_NFOUND_GM      154         // GameMon.des not found
#define NPGAMEMON_ERROR_CRYPTOAPI      155         // rsabase.dll is corrupted
#define NPGAMEMON_ERROR_COMM           160         // Communication Init Error
#define NPGAMEMON_ERROR_EXECUTE        170         // GameMon Execute Error
#define NPGAMEMON_ERROR_EVENT          171         // GameMon Event Create Error
#define NPGAMEMON_ERROR_NPGMUP         180         // npgmup.dll Error
#define NPGAMEMON_ERROR_MOVE_INI       191         // Move ini Error
#define NPGAMEMON_ERROR_MOVE_NEWUP     192         // Move npgmup.des.new Error

#define NPGAMEMON_ERROR_ILLEGAL_PRG    200         // Detected a illegal program

#define NPGAMEMON_ERROR_GAMEMON        210         // GameMon Init Error
#define NPGAMEMON_ERROR_SPEEDCHECK     220         // SpeedCheck Init Error
#define NPGAMEMON_ERROR_GAMEGUARD      230         // GameGuard Init Error

// Error Code  310 - 400
// Update Error Code
#define NPGMUP_ERROR_DOWNCFG           340         // Download Error
#define NPGMUP_ERROR_ABORT             350         // Canceled by User
#define NPGMUP_ERROR_AUTH              360         // File Authentication Error
#define NPGMUP_ERROR_AUTH_INI          361         // .ini Authentication Error
#define NPGMUP_ERROR_DECRYPT           370         // .ini Decrypt Error
#define NPGMUP_ERROR_CONNECT           380         // Connect to update server Fail
#define NPGMUP_ERROR_INI               390         // .ini is corrupted

#define NPGAMEMON_SUCCESS              0x755       // GameMon Initialize Success


// gameguard auth data
typedef struct _GG_AUTH_DATA
{
	DWORD dwIndex;
	DWORD dwValue1;
	DWORD dwValue2;
	DWORD dwValue3;
} GG_AUTH_DATA, *PGG_AUTH_DATA;


#ifdef __cplusplus
extern "C" {
#endif

NPGAMEDLL_API DWORD __cdecl CheckNPGameMon();
NPGAMEDLL_API BOOL  __cdecl CloseNPGameMon();
NPGAMEDLL_API DWORD __cdecl InitNPGameMon();
NPGAMEDLL_API void  __cdecl SetHwndToGameMon(HWND hWnd);
NPGAMEDLL_API DWORD __cdecl PreInitNPGameMonA(LPCSTR szGameName);
NPGAMEDLL_API DWORD __cdecl PreInitNPGameMonW(LPCWSTR szGameName);
NPGAMEDLL_API BOOL  __cdecl SendUserIDToGameMonA(LPCSTR szUserID);
NPGAMEDLL_API BOOL  __cdecl SendUserIDToGameMonW(LPCWSTR szUserID);
NPGAMEDLL_API BOOL  __cdecl SendCSAuthToGameMon(DWORD dwAuth);
NPGAMEDLL_API BOOL  __cdecl SendCSAuth2ToGameMon(PGG_AUTH_DATA pAuth);
NPGAMEDLL_API LPSTR __cdecl NPDect(LPSTR lpszString);
NPGAMEDLL_API BOOL  __cdecl NPGuardData(LPVOID lpData, DWORD dwSize);
NPGAMEDLL_API BOOL  __cdecl NPReleaseData(LPVOID lpData, DWORD dwSize);
NPGAMEDLL_API LPCSTR __cdecl GetInfoFromGameMon();

NPGAMEDLL_API DWORD __cdecl InitPacketProtect(LPCTSTR lpszUserKey);
NPGAMEDLL_API DWORD __cdecl EncryptPacket(LPVOID lpData, DWORD dwLength);
NPGAMEDLL_API DWORD __cdecl DecryptPacket(LPVOID lpData, DWORD dwLength);
NPGAMEDLL_API DWORD __cdecl EncryptPeerPacket(LPVOID lpData, DWORD dwLength);
NPGAMEDLL_API DWORD __cdecl DecryptPeerPacket(LPVOID lpData, DWORD dwLength);
NPGAMEDLL_API DWORD __cdecl PPGetLastError();

typedef BOOL (CALLBACK *NPGMCALLBACK)(DWORD dwMsg, DWORD dwArg);
NPGAMEDLL_API void  __cdecl SetCallbackToGameMon(NPGMCALLBACK fnCallback);

#ifdef __cplusplus
}
#endif


#ifdef _UNICODE
#define PreInitNPGameMon      PreInitNPGameMonW
#define SendUserIDToGameMon   SendUserIDToGameMonW
#else
#define PreInitNPGameMon      PreInitNPGameMonA
#define SendUserIDToGameMon   SendUserIDToGameMonA
#endif


#ifndef NPGAMELIB_C

/// CNPGameLib Wrapper Class ///
class CNPGameLib
{
public:
   explicit CNPGameLib(LPCTSTR lpszGameName)
   {
#ifdef NO_GAMEGUARD
      return;
#endif
      PreInitNPGameMon(lpszGameName);
   }
   ~CNPGameLib()
   {
#ifdef NO_GAMEGUARD
      return;
#endif
      CloseNPGameMon();
   }

public:
   DWORD Init()
   {
#ifdef NO_GAMEGUARD
      return NPGAMEMON_SUCCESS;
#endif
      return (InitNPGameMon());
   }

   void SetHwnd(HWND hWnd)
   {
#ifdef NO_GAMEGUARD
      return;
#endif
      SetHwndToGameMon(hWnd);
   }

   DWORD Check()
   {
#ifdef NO_GAMEGUARD
      return NPGAMEMON_SUCCESS;
#endif
      return (CheckNPGameMon());
   }

   DWORD Send(LPCTSTR lpszUserId)
   {
#ifdef NO_GAMEGUARD
      return NPGAMEMON_SUCCESS;
#endif
      return (SendUserIDToGameMon(lpszUserId));
   }

   LPCSTR GetInfo()
   {
#ifdef NO_GAMEGUARD
      return NULL;
#endif
      return (GetInfoFromGameMon());
   }

   DWORD Auth(DWORD dwAuth)
   {
#ifdef NO_GAMEGUARD
      return NPGAMEMON_SUCCESS;
#endif
      return (SendCSAuthToGameMon(dwAuth));
   }

   DWORD Auth2(PGG_AUTH_DATA pAuth)
   {
#ifdef NO_GAMEGUARD
      return NPGAMEMON_SUCCESS;
#endif
      return (SendCSAuth2ToGameMon(pAuth));
   }

private:
   // No copies
   CNPGameLib(const CNPGameLib &rhs);
   CNPGameLib &operator=(const CNPGameLib &rhs);
};


/// 
class CNPDword
{
public:
   CNPDword();
   //CNPDword(DWORD dwSize);
   ~CNPDword();
   DWORD Get();
   void Set(DWORD dwValue);

private:
   void Guard();
   void Release();

public:
   LPDWORD m_pValue;
   DWORD m_dwSize;
};

#endif // NPGAMELIB_C


#else //GAMEGUARD_AUTH25

#ifndef GAMEGUARD_LIB_SELECTED_LANGUAGE
#pragma comment(lib, "NPGameLib.lib")
#endif //GAMEGUARD_LIB_SELECTED_LANGUAGE

/// Definitions

// Callback Message
#define NPGAMEMON_UNDEFINED            1000        // Undefined message
#define NPGAMEMON_COMM_ERROR           1001        // Communication error
#define NPGAMEMON_COMM_CLOSE           1002        // Communication closing

#define NPGAMEMON_SPEEDHACK            1011        // SpeedHack detected
#define NPGAMEMON_GAMEHACK_KILLED      1012        // GameHack killed
#define NPGAMEMON_GAMEHACK_DETECT      1013        // GameHack detected
#define NPGAMEMON_INIT_ERROR           1014        // GameMon Init Error
#define NPGAMEMON_GAMEHACK_DOUBT       1015        // GameHack doubt
#define NPGAMEMON_CHECK_CSAUTH         1016        // CSAuth
#define NPGAMEMON_CHECK_CSAUTH2        1017        // CSAuth2

// Error Code  110 - 300
#define NPGAMEMON_ERROR_EXIST          110         // GameMon Already Exist
#define NPGAMEMON_ERROR_CREATE         111         // GameGuard Directory Create Error
#define NPGAMEMON_ERROR_NPSCAN         112         // npscan.des Error
#define NPGAMEMON_ERROR_THREAD         113         // CreateThread Error
#define NPGAMEMON_ERROR_INIT           114         // GameMon Initialize Error
#define NPGAMEMON_ERROR_GAME_EXIST     115         // Game Instance Already Exist
#define NPGAMEMON_ERROR_AUTH_INI       120         // .ini Authentication Fail
#define NPGAMEMON_ERROR_AUTH_NPGMUP    121         // npgmup.des Authentication Fail
#define NPGAMEMON_ERROR_AUTH_GAMEMON   122         // GameMon.des Authentication Fail
#define NPGAMEMON_ERROR_AUTH_NEWUP     123         // npgmup.des.new Auth Fail
#define NPGAMEMON_ERROR_AUTH_GAMEGUARD 124         // GameGuard.des Authentication Fail
#define NPGAMEMON_ERROR_DECRYPT        130         // .ini File Decryption Fail
#define NPGAMEMON_ERROR_CORRUPT_INI    141         // Corrupt ini file Error
#define NPGAMEMON_ERROR_CORRUPT_INI2   142         // Not match GameName in ini file Error
#define NPGAMEMON_ERROR_NFOUND_INI     150         // ini File not Found
#define NPGAMEMON_ERROR_NFOUND_NPGMUP  151         // npgmup.des not found
#define NPGAMEMON_ERROR_NFOUND_NEWUP   152         // npgmup.des.new not found
#define NPGAMEMON_ERROR_NFOUND_GG      153         // GameGuard.des not found
#define NPGAMEMON_ERROR_NFOUND_GM      154         // GameMon.des not found
#define NPGAMEMON_ERROR_CRYPTOAPI      155         // rsabase.dll is corrupted
#define NPGAMEMON_ERROR_COMM           160         // Communication Init Error
#define NPGAMEMON_ERROR_EXECUTE        170         // GameMon Execute Error
#define NPGAMEMON_ERROR_EVENT          171         // GameMon Event Create Error
#define NPGAMEMON_ERROR_NPGMUP         180         // npgmup.dll Error
#define NPGAMEMON_ERROR_MOVE_INI       191         // Move ini Error
#define NPGAMEMON_ERROR_MOVE_NEWUP     192         // Move npgmup.des.new Error

#define NPGAMEMON_ERROR_ILLEGAL_PRG    200         // Detected a illegal program

#define NPGAMEMON_ERROR_GAMEMON        210         // GameMon Init Error
#define NPGAMEMON_ERROR_SPEEDCHECK     220         // SpeedCheck Init Error
#define NPGAMEMON_ERROR_GAMEGUARD      230         // GameGuard Init Error

// Error Code  310 - 400
// Update Error Code
#define NPGMUP_ERROR_DOWNCFG           340         // Download Error
#define NPGMUP_ERROR_ABORT             350         // Canceled by User
#define NPGMUP_ERROR_AUTH              360         // File Authentication Error
#define NPGMUP_ERROR_AUTH_INI          361         // .ini Authentication Error
#define NPGMUP_ERROR_DECRYPT           370         // .ini Decrypt Error
#define NPGMUP_ERROR_CONNECT           380         // Connect to update server Fail
#define NPGMUP_ERROR_INI               390         // .ini is corrupted


extern const DWORD NPGAMEMON_SUCCESS;              // GameMon Initialize Success


// gameguard auth data
typedef struct _GG_AUTH_DATA
{
	DWORD dwIndex;
	DWORD dwValue1;
	DWORD dwValue2;
	DWORD dwValue3;
} GG_AUTH_DATA, *PGG_AUTH_DATA;


/// Extern Function
DWORD __cdecl CheckNPGameMon();
bool  __cdecl CloseNPGameMon();
DWORD __cdecl InitNPGameMon();
void  __cdecl SetHwndToGameMon(HWND hWnd);
DWORD __cdecl PreInitNPGameMonA(LPCSTR szGameName);
DWORD __cdecl PreInitNPGameMonW(LPCWSTR szGameName);
bool  __cdecl SendUserIDToGameMonA(LPCSTR szUserID);
bool  __cdecl SendUserIDToGameMonW(LPCWSTR szUserID);
bool  __cdecl SendCSAuthToGameMon(DWORD dwAuth);
bool  __cdecl SendCSAuth2ToGameMon(PGG_AUTH_DATA pAuth);
char* __cdecl NPDect(char *lpszString);
BOOL  __cdecl NPGuardData(LPVOID lpData, DWORD dwSize);
BOOL  __cdecl NPReleaseData(LPVOID lpData, DWORD dwSize);
LPCSTR __cdecl GetInfoFromGameMon();


#ifdef _UNICODE
#define PreInitNPGameMon      PreInitNPGameMonW
#define SendUserIDToGameMon   SendUserIDToGameMonW
#else
#define PreInitNPGameMon      PreInitNPGameMonA
#define SendUserIDToGameMon   SendUserIDToGameMonA
#endif


#ifdef __cplusplus
extern "C" {
#endif

DWORD __cdecl InitPacketProtect(LPCTSTR lpszUserKey);
DWORD __cdecl EncryptPacket(LPVOID lpData, DWORD dwLength);
DWORD __cdecl DecryptPacket(LPVOID lpData, DWORD dwLength);
DWORD __cdecl EncryptPeerPacket(LPVOID lpData, DWORD dwLength);
DWORD __cdecl DecryptPeerPacket(LPVOID lpData, DWORD dwLength);
DWORD __cdecl PPGetLastError();


#ifdef __cplusplus
}
#endif

#ifdef GAMEGUARD_AUTH25
BOOL    CALLBACK NPGameMonCallback ( DWORD dwMsg, DWORD dwArg );
#else
bool    CALLBACK NPGameMonCallback ( DWORD dwMsg, DWORD dwArg );
#endif //GAMEGUARD_AUTH25


/// CNPGameLib Wrapper Class ///
class CNPGameLib
{
public:
   explicit CNPGameLib(LPCTSTR lpszGameName)
   {
#ifdef NO_GAMEGUARD
      return;
#endif
      PreInitNPGameMon(lpszGameName);
   }
   ~CNPGameLib()
   {
#ifdef NO_GAMEGUARD
      return;
#endif
      CloseNPGameMon();
   }

public:
   DWORD Init()
   {
#ifdef NO_GAMEGUARD
      return NPGAMEMON_SUCCESS;
#endif
      return (InitNPGameMon());
   }

   void SetHwnd(HWND hWnd)
   {
#ifdef NO_GAMEGUARD
      return;
#endif
      SetHwndToGameMon(hWnd);
   }

   DWORD Check()
   {
#ifdef NO_GAMEGUARD
      return NPGAMEMON_SUCCESS;
#endif
      return (CheckNPGameMon());
   }

   DWORD Send(LPCTSTR lpszUserId)
   {
#ifdef NO_GAMEGUARD
      return NPGAMEMON_SUCCESS;
#endif
      return (SendUserIDToGameMon(lpszUserId));
   }

   LPCSTR GetInfo()
   {
#ifdef NO_GAMEGUARD
      return NULL;
#endif
      return (GetInfoFromGameMon());
   }

   DWORD Auth(DWORD dwAuth)
   {
#ifdef NO_GAMEGUARD
      return NPGAMEMON_SUCCESS;
#endif
      return (SendCSAuthToGameMon(dwAuth));
   }

   DWORD Auth2(PGG_AUTH_DATA pAuth)
   {
#ifdef NO_GAMEGUARD
      return NPGAMEMON_SUCCESS;
#endif
      return (SendCSAuth2ToGameMon(pAuth));
   }

private:
   // No copies
   CNPGameLib(const CNPGameLib &rhs);
   CNPGameLib &operator=(const CNPGameLib &rhs);
};


/// 
class CNPDword
{
public:
   CNPDword();
   //CNPDword(DWORD dwSize);
   ~CNPDword();
   DWORD Get();
   void Set(DWORD dwValue);

private:
   void Guard();
   void Release();

public:
   LPDWORD m_pValue;
   DWORD m_dwSize;
};

#endif //GAMEGUARD_AUTH25


#endif // GAMEGUARD_AUTH25_MULTI



#endif // __NPGAMELIB_H__
