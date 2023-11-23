
#ifndef _HSHIELD_H_INC
#define _HSHIELD_H_INC

typedef int (__stdcall* PFN_AhnHS_Callback)(
	long lCode,
	long lParamSize,
	void* pParam 
);

int __stdcall _AhnHS_Initialize(
	const char* szFileName,
	PFN_AhnHS_Callback pfn_Callback, //Callback Function Pointer
	int nGameCode,                   //Game Code
	const char* szLicenseKey,        //License Code
	DWORD dwOption                   //Init Option
);

// Init Option
#define AHNHS_CHKOPT_SPEEDHACK					0x2
#define AHNHS_CHKOPT_READWRITEPROCESSMEMORY 	0x4

#define AHNHS_CHKOPT_KDTARCER					0x8
#define AHNHS_CHKOPT_OPENPROCESS				0x10
#define AHNHS_CHKOPT_AUTOMOUSE					0x20
#define AHNHS_CHKOPT_MESSAGEHOOK                0x40

#define AHNHS_CHKOPT_PROCESSSCAN                0x80

#define AHNHS_CHKOPT_ALL AHNHS_CHKOPT_SPEEDHACK \
						| AHNHS_CHKOPT_READWRITEPROCESSMEMORY \
						| AHNHS_CHKOPT_KDTARCER \
						| AHNHS_CHKOPT_OPENPROCESS \
						| AHNHS_CHKOPT_AUTOMOUSE \
						| AHNHS_CHKOPT_MESSAGEHOOK \
						| AHNHS_CHKOPT_PROCESSSCAN

#define AHNHS_USE_LOG_FILE                      0x100
#define AHNHS_CHECK_UPDATE_STATE                0x200
#define AHNHS_ALLOW_SVCHOST_OPENPROCESS         0x400
#define AHNHS_ALLOW_LSASS_OPENPROCESS           0x800
#define AHNHS_ALLOW_CSRSS_OPENPROCESS           0x1000
#define AHNHS_DONOT_TERMINATE_PROCESS           0x2000

int __stdcall _AhnHS_StartService();

int __stdcall _AhnHS_StopService();

int __stdcall _AhnHS_PauseService( DWORD dwPauseOption );

int __stdcall _AhnHS_ResumeService( DWORD dwResumeOption );

int __stdcall _AhnHS_Uninitialize();

int __stdcall _AhnHS_CheckFileHeader();

//ERROR CODE
#define HS_ERR_OK                                0x000
#define HS_ERR_UNKNOWN                           0x001
#define HS_ERR_INVALID_PARAM                     0x002
#define HS_ERR_NOT_INITIALIZED                   0x003

#define HS_ERR_INVALID_LICENSE                   0x100
#define HS_ERR_INVALID_FILES                     0x101
#define HS_ERR_INIT_DRV_FAILED                   0x102
#define HS_ERR_ANOTHER_SERVICE_RUNNING           0x103
#define HS_ERR_ALREADY_INITIALIZED               0x104
#define HS_ERR_SOFTICE_DETECT                    0x105

#define HS_ERR_START_ENGINE_FAILED               0x200
#define HS_ERR_ALREADY_SERVICE_RUNNING           0x201
#define HS_ERR_DRV_FILE_CREATE_FAILED            0x202
#define HS_ERR_REG_DRV_FILE_FAILED               0x203
#define HS_ERR_START_DRV_FAILED                  0x204

#define HS_ERR_SERVICE_NOT_RUNNING               0x301
#define HS_ERR_SERVICE_STILL_RUNNING             0x302

#define HS_ERR_NEED_UPDATE                       0x401

//CallBack Code
#define AHNHS_ACTAPC_DETECT_ALREADYHOOKED		0x0101
#define AHNHS_ACTAPC_DETECT_AUTOMOUSE			0x0102
#define AHNHS_ACTAPC_DETECT_HOOKFUNCTION		0x0301
#define AHNHS_ACTAPC_DETECT_DRIVERFAILED		0x0302
#define AHNHS_ACTAPC_DETECT_SPEEDHACK			0x0303			//���ǵ��ٷ��� ���α׷��� ���� �ý��� �ð��� ����Ǿ�����.
#define AHNHS_ACTAPC_DETECT_SPEEDHACK_APP		0x0304			//���ǵ��ٷ��� ���α׷��� ���� �ý��� �ð��� ����Ǿ�����.
#define AHNHS_ACTAPC_DETECT_MESSAGEHOOK			0x0306		
#define AHNHS_ACTAPC_DETECT_KDTRACE				0x0307			//����� Ʈ���̽��� �߻��ߴ�.(Ŀ�� ����� Ȱ��ȭ, ���� �극��ũ ������ ó��)
#define AHNHS_ACTAPC_DETECT_KDTRACE_CHANGED		0x0308			//[����͸�] ��ġ�� ����� Ʈ���̽��� ����Ǿ���.
#define AHNHS_ENGINE_DETECT_GAME_HACK           0x0501
#define AHNHS_ENGINE_DETECT_GENERAL_HACK        0x0502

#pragma pack(1)

typedef struct _ACTAPCPARAM_DETECT_HOOKFUNCTION
{	
	char szFunctionName[128];		// file path
	char szModuleName[128];
	
} ACTAPCPARAM_DETECT_HOOKFUNCTION, *PACTAPCPARAM_DETECT_HOOKFUNCTION;


// ���丶�콺 ���� APC Structure
typedef struct
{
	BYTE	byDetectType;		// AutoMouse ���� API ȣ�� 1, AutoMouse ���� API ���� 2
	DWORD	dwPID;				// AutoMouse ���μ��� �Ǵ� API �� ������ ���μ���
	CHAR	szProcessName[16+1]; // ���μ�����
	CHAR	szAPIName[128];		 // ȣ��� API �� �Ǵ� ������ API ��
}ACTAPCPARAM_DETECT_AUTOMOUSE, *PACTAPCPARAM_DETECT_AUTOMOUSE;


#define	EAGLE_AUTOMOUSE_APCTYPE_API_CALLED			1
#define	EAGLE_AUTOMOUSE_APCTYPE_API_ALTERATION		2
#define	EAGLE_AUTOMOUSE_APCTYPE_SHAREDMEMORY_ALTERATION	3

#pragma pack()


#endif _HSHIELD_H_INC