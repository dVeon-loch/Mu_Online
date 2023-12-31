#ifndef __ZZZINTERFACE_H__
#define __ZZZINTERFACE_H__

///////////////////////////////////////////////////////////////////////////////
// Interface
///////////////////////////////////////////////////////////////////////////////
#define TRADELIMITLEVEL		( 6 )

extern bool WhisperEnable;

extern bool LockInputStatus;

//  아이템 space로 자동 먹기.
extern bool g_bAutoGetItem;

extern bool InputEnable;
extern bool TabInputEnable;
extern bool GuildInputEnable;
extern bool GoldInputEnable;
#ifdef SCRATCH_TICKET
extern bool g_bScratchTicket;
#endif

extern int  InputGold;
extern int  InputResidentNumber;
extern int  InputNumber;
extern int  InputIndex;
extern int  InputTextWidth;
extern int  InputTextMax[12];
extern char InputText[12][256];
extern char InputTextIME[12][4];
extern int  InputLength[12];
extern char InputTextHide[12];
extern char MacroText[10][256];
extern int  MacroTime;
extern int  FontHeight;
extern int  ItemHelp;
extern bool DontMove;
extern int  EditFlag;
extern int  SelectMonster;
extern int  SelectModel;
extern int  SelectMapping;
extern bool DebugEnable;
extern bool MouseOnWindow;
extern int  MouseUpdateTime;
extern int  MouseUpdateTimeMax;
extern int  TalkNPC;
extern int  SelectedItem;
extern int  SelectedNpc;
extern int  SelectedCharacter;
extern int  SelectedOperate;
extern int  SelectedHero;
extern int  Attacking;
extern bool	m_pc_wanted;

//  자동 따라가기.
extern int   g_iFollowCharacter;
extern int  HeroTile;
extern int  LoadingWorld;

extern int ItemKey;

#ifdef CSK_ADD_GM_ABILITY
extern bool g_bGMObservation;
#endif // CSK_ADD_GM_ABILITY

#ifdef LEM_FIX_USER_LOGOUT
extern bool g_bExit;
#endif // LEM_FIX_USER_LOGOUT [lem_2010.8.18]

#ifdef LDS_FIX_DISABLE_INPUTJUNKKEY_WHEN_LORENMARKT_EX01
extern BOOL g_bReponsedMoveMapFromServer;
#endif // LDS_FIX_DISABLE_INPUTJUNKKEY_WHEN_LORENMARKT_EX01

void Action(CHARACTER *c, OBJECT *o, bool Now);

bool PressKey(int Key);
void MoveHero();
void EditObjects();

void ClearInput(BOOL bClearWhisperTarget = TRUE);
void CutText(const char* Text,char *Text1,char *Text2,int Length);
void CreateChat(char *ID,const char* Text,CHARACTER *c,int Flag=0, int SetColor = -1);
int  CreateChat(char *ID,const char* Text,OBJECT* Owner,int Flag=0, int SetColor=-1);
void AssignChat(char *ID,const char* Text,int Flag=0);
void MoveChat();
void ClearNotice ( void );
void CreateNotice(char *Text,int Color);
void MoveNotices();
void RenderNotices();
void CreateWhisper(char *ID,const char* Text,int Type);
void MoveWhispers();
void RenderSwichState();
void CheckChatText(char *Text);

#if defined FOR_WORK && defined ENABLE_CHAT_IN_CHAOS
bool IsManagerID(char* szID);
#endif // FOR_WORK && ENABLE_CHAT_IN_CHAOS

//  Whisper
bool CheckWhisperLevel ( int lvl, char* text );
void RegistWhisperID ( int lvl, char* text );
void ClearWhisperID ( void );

void SaveIME_Status ();
void SetIME_Status (bool halfShape);
bool CheckIME_Status (bool change, int mode);
void RenderIME_Status ();

//  HotKey
int  FindHotKey(int Skill);

void RenderInputText(int x,int y,int Index,int Hide=0);
void RenderDebugWindow();
void RenderTipText(int sx, int sy, const char* Text);

// ★
extern int g_iWidthEx;

// For DEBUGING
#ifdef DO_PROCESS_DEBUGCAMERA
void MoveInterface_DebugCamera();
#endif // DO_PROCESS_DEBUGCAMERA

#ifdef DO_PROFILING
void MoveInterface_ForProfiling();	
#endif // DO_PROFILING
// For DEBUGING

void SelectObjects();
void RenderInterface(bool);
void MoveInterface();
void RenderCursor();

// 화살이 있는지 확인 후 없으면 재장전
bool CheckArrow();
// 화살 자동 재장전하는 함수
void ReloadArrow();	
// 인벤토리에서 화살통의 수를 리턴하는 함수
int SearchArrowCount();

int  SelectCharacter();
bool FindText(const char* Text,const char* Token,bool First=false);
bool FindTextABS(const char* Text,const char* Token,bool First=false);
bool CheckAbuseFilter(char *Text, bool bCheckSlash = true);
bool CheckAbuseNameFilter(char *Text);
void SetPlayerColor(BYTE PK);
bool CheckCommand(char *Text,bool bMacroText=false );
void SetActionClass(CHARACTER *c,OBJECT *o,int Action,int ActionType);
void RenderBar(float x,float y,float Width,float Height,float Bar,bool Disabled=false,bool clipping=true);
void RenderOutSides();
void RenderBooleans();
void RenderInventoryInterface();
int  RenderLimitTime( bool arrow );
void RenderTimes ();
void RenderPartyHP();
void SetPositionIME_Wnd( float x, float y );

void SendMove(CHARACTER *c,OBJECT *o);
void SetCharacterPos ( CHARACTER* c, BYTE posX, BYTE posY, vec3_t position );

bool CheckAttack();
bool CheckAttack_Fenrir(CHARACTER* c);
int	 getTargetCharacterKey ( CHARACTER* c, int selected );

void MoveTournamentInterface();
void MoveBattleSoccerEffect(CHARACTER* c);
void RenderTournamentInterface();

#ifdef CSK_LUCKY_SEAL
void GetTime( DWORD time, string& timeText, bool isSecond = true );
#endif //CSK_LUCKY_SEAL

extern int   TargetNpc;



#ifdef PK_ATTACK_TESTSERVER_LOG
void PrintPKLog(CHARACTER* pCha);
#endif // PK_ATTACK_TESTSERVER_LOG

// skill.
bool IsCanBCSkill(int nType);
bool CheckSkillUseCondition( OBJECT* o, int Type );
// 공격시 중간에 장애물이 있는 확인시 사용됨
bool CheckWall(int sx1,int sy1,int sx2,int sy2);
bool CheckTile(CHARACTER *c,OBJECT *o,float Range);
void LetHeroStop( CHARACTER * c = NULL, BOOL bSetMovementFalse = FALSE);
void Attack(CHARACTER *c);
bool SkillElf(CHARACTER *c,ITEM *p);
bool SkillWarrior(CHARACTER *c,ITEM *p);
void UseSkillWarrior(CHARACTER *c, OBJECT *o);
void UseSkillWizard(CHARACTER *c, OBJECT *o);
void UseSkillElf(CHARACTER *c, OBJECT *o);
void UseSkillSummon(CHARACTER* pCha, OBJECT* pObj);
#ifdef PBG_ADD_NEWCHAR_MONK_SKILL
void UseSkillRagefighter(CHARACTER* pCha, OBJECT* pObj);
void AttackRagefighter(CHARACTER *pCha, int nSkill, float fDistance);
bool UseSkillRagePosition(CHARACTER* pCha);
bool CheckTarget(CHARACTER *c);
#endif //PBG_ADD_NEWCHAR_MONK_SKILL
void MouseRButtonReset();
#ifdef CSK_FIX_DUEL_N_PK_SKILL
void AttackKnight(CHARACTER *c, int Skill, float Distance);
#endif // CSK_FIX_DUEL_N_PK_SKILL

#ifdef CSK_ADD_GM_ABILITY
bool IsGMCharacter();
bool IsNonAttackGM();
#endif // CSK_ADD_GM_ABILITY

#ifdef LJH_ADD_LOOK_FOR_MOVE_ILLEGALLY_BY_MSG
bool IsIllegalMovementByUsingMsg(const char *szChatText);
#endif // LJH_ADD_LOOK_FOR_MOVE_ILLEGALLY_BY_MSG

#endif //__ZZZINTERFACE_H__
