
//-------------------------------------------------------------------------------------------------------------------------------
// _LANGUGE_ENG (±Û·Î¹ú)
//-------------------------------------------------------------------------------------------------------------------------------
//
//  << 1. ÇÊµ¶»çÇ× >>
// 1. ÀÛ¾÷ÁßÀÎ µðÆÄÀÎÀº Ç×»ó ÁÖ¼®Ã³¸® ÈÄ Check out. (ÀÛ¾÷ÁßÀÎ µðÆÄÀÎ ÁÖ¼®ÄÑ°í Check in ±ÝÁö)
// 2. ÆÐÄ¡ÇÒ¶§ [ÀÛ¾÷Áß µðÆÄÀÎ]¿¡¼­ ÀÛ¾÷¿Ï·áµÈ µðÆÄÀÎÀ» [ÆÐÄ¡ÀÌÈÄ µðÆÄÀÎ]À¸·Î ¿Å°Ü ÆÐÄ¡ÇÑ´Ù.
// 3. ÆÐÄ¡½Ã, ÀÛ¾÷ÀÚ´Â ±âÈ¹ÆÀ°ú ÇùÀÇÈÄ ÆÐÄ¡´ã´çÀÚ¿¡°Ô µðÆÄÀÎ³»¿ë ÀÎ¼öÀÎ°è.
// 4. ´ã´ç ±¹°¡ ÀÛ¾÷ÈÄ, ´Ù¸¥±¹°¡¿¡ µé¾î°¥ ³»¿ëÀÌ¸é °¢ ±¹°¡ µðÆÄÀÎ ÆÄÀÏÀÇ [´ÙÀ½ÆÐÄ¡¶§ µé¾î°¥ µðÆÄÀÎ]¿¡ º¹»çÇÏ¿© ÁÖ¼®Ã³¸®
// 5. [ÆÐÄ¡ÀÌÈÄ µðÆÄÀÎ]Àº ÆÐÄ¡´ã´çÀÚ ÀÌ¿Ü¿¡´Â °ÇµéÁö ¸¶½Ã¿À.
//
//  << 2. define ±ÔÁ¤ >>
// // - ÀÛ¾÷ÀÚ ÀÌ¸§
// #define ÀÌ¸§_ºÐ·ù_ÀÛ¾÷³»¿ë						// ÆÐÄ¡ ¼³¸í (½ÃÀÛÀÏ) [ÆÐÄ¡µÈ ³¯ÀÚ¿Í ¼­¹ö or ¿¹Á¤]
//
// - ÀÌ¸§ : º»ÀÎ ÀÌ¸§ÀÇ ÀÌ´Ï¼È
// - ºÐ·ù : '_FIX' (¹ö±× ¼öÁ¤), '_MOD' (±âÈ¹»ó ±âÁ¸ ³»¿ë º¯°æ), '_ADD' (ÄÁÅÙÃ÷ Ãß°¡)·Î µðÆÄÀÎ ±¸ºÐ.
// - ÀÛ¾÷³»¿ë : ÀÚÀ²ÀûÀ¸·Î ¿µ¹®È­
//
//  << 3. ÆÐÄ¡½Ã ÁÖ¼®Ã³¸® >>
//   ¿¹ : [2009.01.22 º£Æ®³² 1.03a] - ¾È»ó±Ô
//
//-------------------------------------------------------------------------------------------------------------------------------


#ifdef _LANGUAGE_ENG
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//##  [ÀÛ¾÷Áß µðÆÄÀÎ]
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//## [´ÙÀ½ ÆÐÄ¡¶§ µé¾î°¥ µðÆÄÀÎ]
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//#define KJH_MOD_INGAMESHOP_SELECT_CASHPOINT_SYSYEM_ONLY_GLOBAL		// ÀÎ°ÔÀÓ¼¥ Ä³½Ã Æ÷ÀÎÆ® ¼±ÅÃ ½Ã½ºÅÛ ±â´É ON (10.05.19)
//#define KJH_MOD_RADIOBTN_MOUSE_OVER_IMAGE							// ¶óµð¿À¹öÆ° ¸¶¿ì½º ¿À¹ö ½Ã ÀÌ¹ÌÁö ±â´É º¯°æ (10.05.19)

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#if (SEASON6P3_UP == 1)

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//----------------------------------------------------------------------------------------------
// [2010.11.02 Å×¼·] - ±èÀçÈñ

// - ¹Úº¸±Ù
#define PBG_MOD_NEWCHAR_MONK_WING_2						// ·¹ÀÌÁö/±ºÁÖ¸ÁÅä ¿É¼Çº¯°æ(2010.10.21)

// - ÀÌÀº¹Ì
#define LEM_FIX_ITEMTOOLTIP_POS							// ¾ÆÀÌÅÛ ÅøÆÁ È­¸é¹Ù°°À¸·Î ³ª°¡´Â ¹®Á¦ ¼öÁ¤


/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//----------------------------------------------------------------------------------------------
// [2010.10.27 Å×¼·] - ±èÀçÈñ
// [2010.10.28 º»¼·] - ±èÀçÈñ
// [2010.10.28 ºí·ç] - ±èÀçÈñ

// - ¹Úº¸±Ù
#define PBG_MOD_GM_ABILITY								// ¿µ¾î·Î ¼³Á¤ÇÒ¼ö ÀÖµµ·Ï º¯°æ(10.08.12)
#define PBG_FIX_BUFFSKILLCHAOS							// ¹öÇÁ½ºÅ³ Ä«Ä³ ´ë±â½Ã°£¿¡ »ç¿ë°¡´É ¼öÁ¤/Ç®¼¼Æ®ÀÌÆåÆ®¹ö±×¼öÁ¤(10.10.18)
#define PBG_FIX_EQUIP_TWOHANDSWORD						// ¾ç¼Õ¹«±â ¿ÞÂÊÂø¿ë ¹ö±× ¼öÁ¤(2010.10.27)

// - ÀÌÀº¹Ì
#define LEM_FIX_SELL_LUCKYITEM_BOOTS_POPUP				// ·°Å°¾ÆÀÌÅÛ ÆÇ¸Å½Ã ºÎÃ÷ ÆË¾÷ ¼öÁ¤ (2010.10.21)
#define LEM_FIX_LUCKYITEM_UICLASS_SAFEDELETE			// ·°Å°¾ÆÀÌÅÛ UIÇÒ´ç ÇØÁ¦ (2010.10.20)


/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//----------------------------------------------------------------------------------------------
// [2010.10.15 Å×¼·] - ±èÀçÈñ
// [2010.10.21 º»¼·] - ±èÀçÈñ
// [2010.10.21 ºí·ç] - ±èÀçÈñ

// - ¾È»ó±Ô
#define ASG_ADD_QUEST_REQUEST_NPC_SEARCH					// Äù½ºÆ® ¿ä±¸»çÇ× Ãß°¡ (NPCÃ£±â) (2010.10.14)

// - ±èÀçÈñ
#define KJH_FIX_PERSONALSHOP_BAN_CASHITEM					// Ä³½Ã¾ÆÀÌÅÛÀÌ °³ÀÎ»óÁ¡¿¡ ¿Ã¶ó°¡´Â ¹®Á¦ ¼öÁ¤ (2010.10.13)
#define KJH_FIX_CHANGE_ITEM_PRICE_IN_PERSONAL_SHOP			// °³ÀÎ»óÁ¡¿¡¼­ ¾ÆÀÌÅÛ°¡°Ý º¯°æÀ» ÇÒ¼ö ¾ø´Â ¹®Á¦ ¼öÁ¤ (2010.10.13)
#define KJH_FIX_SELL_LUCKYITEM								// ·°Å°¾ÆÀÌÅÛ »óÁ¡¿¡ ÆÇ¸Å½Ã ÆË¾÷Ã¢¶ß´Â ¿À·ù ¼öÁ¤ (2010.10.13)
#define KJH_MOD_STREAMPACKETENGINE_FILTER					// Stream Packet Engine ÇÊÅÍ º¯°æ (2010.10.14)

// - ÀÌÁÖÈï
#define LJH_FIX_NOT_POP_UP_HIGHVALUE_MSGBOX_FOR_BANNED_TO_TRADE	//NPC¿¡°Ô ÆÇ¸Å ±ÝÁöµÈ ¾ÆÀÌÅÛÀ» ÆÇ¸ÅÇÏ·Á°í ÇÒ¶§ °í°¡ÀÇ ¾ÆÀÌÅÛÀÌ¶ó°í ³ª¿À´Â ¸Þ¼¼Áö Ã¢À» ¾È³ª¿À°Ô ¼öÁ¤(10.02.19)

// - ¹Úº¸±Ù
#define PBG_FIX_NEWCHAR_MONK_UNIANI						// À¯´Ï¸®¾Æ Âø¿ë½Ã ¾Ö´Ï¸ÞÀÌ¼Ç ¼Óµµ ÀÌ»óÇö»ó¼öÁ¤ (2010.10.13)
#define PBG_FIX_NOTSOUNDLOAD_GIANTMAMUD					// ¶óÅ¬¸®¿Â ÀÚÀÌ¾ðÆ®¸Þ¸Óµå »ç¿îµå ·Îµù¾ÈµÇ´Â ¹ö±×¼öÁ¤ (2010.10.13)
#define PBG_MOD_NEWCHAR_MONK_WING						// ·¹ÀÌÁö¸ÁÅä ¿É¼Ç º¯°æ (2010.10.13)

// - ÀÌÀº¹Ì
#define LEM_FIX_LUCKYITEM_SLOTCHECK						// ·°Å°¾ÆÀÌÅÛ ½½·Ô°Ë»ç ¼öÁ¤ (2010.10.13)

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//----------------------------------------------------------------------------------------------
// [2010.10.04 Å×¼·] - ±èÀçÈñ

// - ¹ÚÁ¾ÈÆ
#define PJH_NEW_CHROME								// ·°Å°¾ÆÀÌÅÛ ÀÌÆåÆ® º¸¿©ÁÖ±â.(10.08.30)

// - ÀÌÀº¹Ì	
#define LEM_ADD_LUCKYITEM							// ·°Å°¾ÆÀÌÅÛ 


/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//----------------------------------------------------------------------------------------------
// <½ÃÁð6 - Part 1> ÀÌÈÄ ¹ö±× ¼öÁ¤
//----------------------------------------------------------------------------------------------

// [2010.09.17 Å×¼·] - ÀÌÁÖÈï
// - ¹Úº¸±Ù
#define PBG_MOD_RAGEFIGHTERSOUND						// ½Å±ÔÄ³¸¯ÅÍ »ç¿îµåº¯°æ(10.09.13)

#ifdef _TEST_SERVER
	// - ÀÌµ¿±Ù
	// LDK_ADD_SCALEFORM ¿¡ µû¸¥ ÁÖ¼®Ã³¸®(°°ÀÌ ÁÖ¼®Ã³¸®ÇÏ°Å³ª °°ÀÌ Ç®¾îÁà¾ß ÇÑ´Ù)
	//#define MOD_INGAMESHOP_HEIGHT_MODIFY					// ÀÎ°ÔÀÓ¼¥ height ¼öÁ¤(2010.09.15)
#endif //_TEST_SERVER

#ifdef _VS2008PORTING
#define ASG_FIX_MOVECMD_WIN_SCRBAR						// Îøèáêà, èç-çà êîòîðîé íå ïîÿâëÿëñÿ ôîí âíèçó ïîëîñû ïðîêðóòêè â îêíå êîìàíä ïåðåìåùåíèÿ (10.09.15)
#define LJH_FIX_RUNTIME_ERROR_WHEN_RENDERING_DROPPED_ITEMNAME	// ¹Ù´Ú¿¡ ¶³¾îÁø ¾ÆÀÌÅÛÀÇ ÀÌ¸§À» ·»´õ¸µÇÒ¶§ ·±Å¸ÀÓ¿¡·¯ ¼öÁ¤(10.09.15)
#endif // _VS2008PORTING

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//----------------------------------------------------------------------------------------------
// <½ÃÁð6 - Part 1>
//----------------------------------------------------------------------------------------------
// [2010.09.14 Å×¼·] - ÀÌÁÖÈï
// - ¹Ú±âµ¿
#define PKD_ADD_BINARY_PROTECTION							// ´õ¹Ì´ÙÀÇ VM_START Àû¿ë

// - ¾È»ó±Ô
#define ASG_ADD_TIME_LIMIT_QUEST							// ½Ã°£Á¦ Äù½ºÆ® ÀÛ¾÷(10.06.04)
#define ASG_ADD_MAP_KARUTAN									// Ä®·çÅº ¸Ê Ãß°¡(10.07.06)

// - ±èÀçÈñ
#define KJH_FIX_MINIMAP_NAME								// ¹Ì´Ï¸Ê¿¡¼­ NPC/Portal Name ÀÌ Â©¸®´Â ¹ö±× ¼öÁ¤ (10.05.14) - minimap ½ºÅ©¸³Æ® ¸ðµÎ ÀçÄÁ¹öÆÃ

// - ¹Úº¸±Ù
#define PBG_ADD_NEWCHAR_MONK								// ½Å±ÔÄ³¸¯ÅÍ(10.03.08)

// - ¾È»ó±Ô
#ifdef ASG_ADD_TIME_LIMIT_QUEST
#define ASG_ADD_TIME_LIMIT_QUEST_NPC					// ½Ã°£Á¦ Äù½ºÆ® NPC(10.06.04)
#define ASG_ADD_TIME_LIMIT_QUEST_ITEM					// ½Ã°£Á¦ Äù½ºÆ® ¾ÆÀÌÅÛ(10.06.16)

#endif	// ASG_ADD_TIME_LIMIT_QUEST

#ifdef ASG_ADD_MAP_KARUTAN
#define ASG_ADD_KARUTAN_MONSTERS						// Ä®·çÅº ¸ó½ºÅÍ Ãß°¡(10.07.06)
#define ASG_ADD_KARUTAN_NPC								// Ä®·çÅº NPC Ãß°¡(10.08.12)

// ºí·ç,º»¼·ÆÐÄ¡½Ã »èÁ¦ÇØ¾ßÇÔ	
// 	#ifdef _TEST_SERVER
// 		#define ASG_ADD_AIDA_KARUTAN_GATE_FOR_TESTSERVER	// ¾ÆÀÌ´Ù¸Ê¿¡ Ä®·çÅº ÀÔ±¸ Ãß°¡(º»¼· ÆÐÄ¡½Ã »èÁ¦)(10.09.06)
// 	#endif // _TEST_SERVER
#endif	// ASG_ADD_MAP_KARUTAN

#define ASG_FIX_MONSTER_MAX_COUNT_1024						// #define MAX_MONSTER 512 -> 1204·Î ¼öÁ¤(10.06.29)

// - ¹Úº¸±Ù
#ifdef PBG_ADD_NEWCHAR_MONK
#define PBG_ADD_NEWCHAR_MONK_ITEM						// ¾ÆÀÌÅÛ °ü·Ã(10.04.01)
#define PBG_ADD_NEWCHAR_MONK_SKILL						// ½ºÅ³ °ü·Ã(10.04.01)
#define PBG_ADD_NEWCHAR_MONK_ANI						// ½Å±ÔÄ³¸¯ÅÍ ¾Ö´Ï¸ÞÀÌ¼Ç º¯°æ(10.05.12)
#endif //PBG_ADD_NEWCHAR_MONK

#ifdef _TEST_SERVER
	// - ÀÌµ¿±Ù
	//#define LDK_ADD_SCALEFORM									// ½ºÄÉÀÏÆû ÀÛ¾÷(10.03.10) [º»¼· ½ÃÁð 6-1 Æ÷ÇÔ ¾ÈµÊ]
#ifdef LDK_ADD_SCALEFORM
#define ADD_GFX_REG_OPTION								// ±¸UI¿Í GFxUI ¼±ÅÃ°ª ¸®Áö½ºÆ®¸®¿¡¼­ È®ÀÎ

#define MOD_GFX_MAINUI_ITEM								// item ´ÜÃàÅ° ¼³Á¤
#define MOD_GFX_MAINUI_SKILL							// skill ´ÜÃàÅ° ¼³Á¤
#define MOD_STENCILBUFFER								// stencil buffer¸¦ ¼³Á¤ÇÑ´Ù(¸¶½ºÅ©Ã³¸®½Ã »ç¿ë)
#define MOD_MAINSCENE_HEIGHT							// mainScene ¿¡¼­ height°ª º¯°æ

// ui
#define MOD_SKILLLIST_UPDATEMOUSE_BLOCK					// ½ºÅ³¸®½ºÆ® ¾÷µ¥ÀÌÆ®¸¶¿ì½ºÇÔ¼ö »ç¿ë ºÒ°¡(2010.09.12)
#define MOD_CHATINPOTBOX_POSITION						// Ã¤ÆÃÃ¢ À§Ä¡ ¼öÁ¤
#define MOD_DOPPELGANGERFRAME_POSITION					// µµÇÃ°»¾î ÁøÇà UI À§Ä¡ ¼öÁ¤(2010.09.07)
#define MOD_HERO_POS_INFO_DEPTH							// ÁÂÇ¥ Á¤º¸ µª½º ¼öÁ¤(2010.09.07)
//#define MOD_INTERFACE_CAMERAWORK						// ÀÎÅÍÆäÀÌ½ºÃ¢ ¿­¶§ Ä«¸Þ¶ó ÀÌµ¿¹æÁö(2010.09.03) <-- ÀÎº¥Åä¸® ¹ö±×¹ß»ýÀ¸·Î ÁÖ¼®Ã³¸®Áß

#define MOD_UI_DISABLE_MAINFRAME						// mainframe »ç¿ë¾ÈÇÔ
#ifdef MOD_UI_DISABLE_MAINFRAME
#define MOD_MOUSE_Y_CLICK_AREA						// ÇÏ´Ü ¸¶¿ì½º Å¬¸¯ ¿µ¿ª ¼öÁ¤
#endif //MOD_UI_DISABLE_MAINFRAME
#endif //LDK_ADD_SCALEFORM
#endif //_TEST_SERVER

#ifdef _VS2008PORTING	// VS2008 Æ÷ÆÃ ÀÛ¾÷Áß ¹ö±×¼öÁ¤
#define KJH_FIX_ITEMHOTKEYINFO_CASTING					// ¾ÆÀÌÅÛ ÇÖÅ°Á¤º¸ ÇÏÀ§Ä³½ºÆÃ ¹®Á¦	
#define KJH_FIX_TALK_SANTATOWN_NPC						// »êÅ¸¸¶À»¿¡¼­ NPC¿Í ´ëÈ­ÇÏÁö ¸øÇÏ´Â ¹ö±× ¼öÁ¤
#define KJH_FIX_CONTRIBUTIONPOINT_CASTING				// ±â¿©µµÆ÷ÀÎÆ® ÇÏÀ§Ä³½ºÆÃ 
#define KJH_FIX_SEND_REQUEST_INVENTORY_ITEMINFO_CASTING	// ¾ÆÀÌÅÛÁ¤º¸ Àü¼Û¿äÃ»Áß ¾ÆÀÌÅÛÁ¤º¸ ÇÏÀ§ Ä³½ºÆÃ¹®Á¦
#define LJH_FIX_DEREFERENCE_VECTOR_ITER_FOR_DELETED_UI_OBJ		// º¤ÅÍ CNewUIObj°ªÀ» »èÁ¦ÇÑ ÈÄ iterator¸¦ ¿ªÂüÁ¶ÇÔÀ¸·Î½á »ý±â´Â ¹ö±× ¼öÁ¤(10.09.03)
#endif //_VS2008PORTING

#endif 

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//## [ÆÐÄ¡ÀÌÈÄ µðÆÄÀÎ]
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//----------------------------------------------------------------------------------------------
// << ¹ö±×¼öÁ¤ >>
//----------------------------------------------------------------------------------------------
// [2010.10.28 ±Û·Î¹ú 1.03H+] - ±èÀç¿ì
#define LJH_FIX_RUNTIME_ERROR_WHEN_RENDERING_DROPPED_ITEMNAME	// ¹Ù´Ú¿¡ ¶³¾îÁø ¾ÆÀÌÅÛÀÇ ÀÌ¸§À» ·»´õ¸µÇÒ¶§ ·±Å¸ÀÓ¿¡·¯ ¼öÁ¤(10.09.15)
#define LEM_FIX_MIXREQUIREZEN									// Rtn_MixRequireZen ÇÔ¼ö  [lem.2010.7.29]
#define LEM_FIX_ITEMTOOLTIP_POS									// ÀÎº¥Åä¸® ¾ÆÀÌÅÛ ÅøÆÁ À§Ä¡ ¼öÁ¤ [lem.2010.7.28]
#define PBG_FIX_DROPBAN_GENS									// ¹ö¸®±â ¾ÆÀÌÅÛ ¼öÁ¤

#define KJW_FIX_ITEMNAME_ORB_OF_SUMMONING						// ¾î¶°ÇÑ ¼ÒÈ¯±¸½½ÀÎÁö Ç¥½Ã(2010.10.28)
#define KJW_FIX_ITEMNAME_CRITICAL_SCROLL						// Å©¸®Æ¼ÄÃ ½ºÅ©·Ñ ÀÌ¸§ Ç¥½Ã ¹®Á¦(2010.10.28)
#define KJW_FIX_MYSHOP											// »óÁ¡¸í 16ÀÚ Á¦ÇÑ, °¡°Ý º¯°æ, ±¸¸Å °ü·Ã ¼öÁ¤(2010.10.28)

#define KJW_FIX_CHAOSCASTLE_MESSAGE								// ´Ù±¹¾î(Æ÷¸£ÅõÄ®, ½ºÆäÀÎ) Ä«¿À½ºÄ³½½ ³²Àº½Ã°£ Ç¥½Ã ¹®Á¦ ¼öÁ¤(2010.10.28)
#define KJW_FIX_QUEST_INFO_DUPLICATE							// Æ¯Á¤ Äù½ºÆ®°¡ Áßº¹À¸·Î Ç¥±âµÇ´Â¹®Á¦ ¼öÁ¤(2010.10.28)
#define KJW_FIX_GENS_WINDOW_OPEN								// °Õ½º Á¤º¸Ã¢ ¿­¸é Å¬¶óÀÌ¾ðÆ® Á×´Â¹®Á¦(Æ÷¸£ÅõÄ®, ½ºÆäÀÎ) & 800*600 (2010.10.28)

#define KJW_ADD_NEWUI_SCROLLBAR									// ±âº» ½ºÅ©·Ñ¹Ù UIÃß°¡(2010.10.28)
#define KJW_ADD_NEWUI_TEXTBOX									// ±âº» ÅØ½ºÆ®¹Ú½º UIÃß°¡(2010.10.28)
#define KJW_ADD_NEWUI_GROUP										// ±×·ì UIÃß°¡(2010.10.28)

#define KWAK_ADD_TRACE_FUNC										// Trace ÇÔ¼ö Ãß°¡ -> ±âÁ¸ OutPutDebugString ´ëÃ¼ÇÔ
#ifdef _DEBUG
	#define KWAK_FIX_ALT_KEYDOWN_MENU_BLOCK							// ¾ËÆ®Å° ´©¸£¸é Æ÷Ä¿½Ì ÀÒ´Â ¹®Á¦
#endif // _DEBUG


/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//----------------------------------------------------------------------------------------------
// << ¹ö±×¼öÁ¤ >>
//----------------------------------------------------------------------------------------------
// [2010.10.14 ±Û·Î¹ú 1.03E+] - ±èÀç¿ì

#define KJW_FIX_SLEEPUP_SKILL_INFO						// ¼ÒÈ¯¼ú»ç ¸¶½ºÅÍ·¹º§ ½½¸³ °­È­ Á¤º¸ Ãâ·Â ¼öÁ¤(10.10.01)
#define KJW_FIX_LOGIN_ID_BLACK_SPACE					// ¾ÆÀÌµð ÀÔ·Â ºÎºÐ¿¡ °ËÀº»ö ¹è°æÀÌ ¿¬ÀåµÇ´Â ¹®Á¦ ¼öÁ¤(10.10.01)
#define KJW_FIX_SLIDE_MOVE								// ½½¶óÀÌµå ¿òÁ÷ÀÌ´Â ¹æ½Ä º¯°æ ( ±âÁ¸ÀÇ ¹æ½ÄÀº ¾Õ¿¡ °ø¹éÀ» Áý¾î³Ö´Â ÇüÅÂ·Î ÀÔ·Â ±ÛÀÚ¼ö¿¡µµ Á¦ÇÑÀ» ÁÜ )(10.10.12)

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//----------------------------------------------------------------------------------------------
// << ½ÃÁð 5-4 >>
//----------------------------------------------------------------------------------------------
// [2010.09.30 ±Û·Î¹ú 1.03B+] - ÀÌÁÖÈï

#define SEASON5_4
#ifdef  SEASON5_4

	//-----------------------------------------------------------------------------
	// [ ½ÃÁð 5 - Part 4 ]
	// - ¹ÚÁ¾ÈÆ
	#define PJH_ADD_MASTERSKILL								//¼ÒÈ¯¼ú»ç ¸¶½ºÅÍ·¹º§ Ãß°¡(2010.03.09)
		#ifdef PJH_ADD_MASTERSKILL								
		#undef KJH_FIX_WOPS_K22193_SUMMONER_MASTERSKILL_UI_ABNORMAL_TEXT	//ÇØ¿Ü¿¡ ¼ÒÈ¯¼ú»ç ¸¶½ºÅÍ½ºÅ³ Ãß°¡(10.05.28)
	#endif //PJH_ADD_MASTERSKILL								

	// - ¾È»ó±Ô
	#define ASG_ADD_STRIFE_KANTURU_RUIN_ISLAND				// Ä­Åõ¸£ ÆóÇã3 ºÐÀïÁö¿ªÈ­.(10.04.13)

	// - ±èÀçÈñ
	#define KJH_FIX_POTION_PRICE							// »óÁ¡ ¹°¾à°¡°Ý ¹ö±×¼öÁ¤ (10.04.16)
	#define KJH_FIX_INIT_EVENT_MAP_AT_ABNORMAL_EXIT			// ºñÁ¤»óÀûÀûÀÎ Á¾·á½Ã ÀÌº¥Æ®¸Ê ÃÊ±âÈ­ (10.04.20)

	// - ÀÌµ¿±Ù, ÀÌµ¿¼®
	#define LDK_LDS_EXTENSIONMAP_HUNTERZONE					// »ç³ÉÅÍ È®Àå ¸Ê (±âÁ¸ ¸Ê ¸®´º¾ó ¹× ¸ó½ºÅÍ, º¸½º±Þ ¸ó½ºÅÍ Ãß°¡.). (10.02.18)

	#ifdef LDK_LDS_EXTENSIONMAP_HUNTERZONE						
		// - ÀÌµ¿¼®
		// ÀÏ¹Ý¸÷µé Áö¿ªº°
		#define LDS_EXTENSIONMAP_MONSTERS_RAKLION				// È®Àå ¸Ê³»ÀÇ ÀÏ¹Ý ¸÷µé. ¶óÅ¬¸®¿Â (10.02.18)
		#define LDS_EXTENSIONMAP_MONSTERS_AIDA					// È®Àå ¸Ê³»ÀÇ ÀÏ¹Ý ¸÷µé. ¾ÆÀÌ´Ù (10.02.26)
		#define LDS_EXTENSIONMAP_MONSTERS_KANTUR				// È®Àå ¸Ê³»ÀÇ ÀÏ¹Ý ¸÷µé. Ä­Åõ¸£ (10.03.02)
		#define LDS_EXTENSIONMAP_MONSTERS_SWAMPOFQUIET			// È®Àå ¸Ê³»ÀÇ ÀÏ¹Ý ¸÷µé. Æò¿øÀÇ´Ë (10.03.02)

		// Ãß°¡ ÀÛ¾÷
		#define LDS_MOD_EXTEND_MAXMODELLIMITS_200TO400			// ±âÁ¸ ¸ó½ºÅÍ¸ðµ¨ °¹¼ö Á¦ÇÑ (MAX_MODEL_MONSTER=200)°³¸¦ ÃÊ°úÇÏ¿© ¿À·ù ¹ß»ýÀ¸·Î (MAX_MODEL_MONSTER=400)¼³Á¤. (10.03.15)

		// - ÀÌµ¿±Ù
		// º¸½º¸÷ ¸Þµà»ç
		#define LDK_ADD_EXTENSIONMAP_BOSS_MEDUSA				// Æò¿ÂÀÇ´Ë º¸½º ¸ó½ºÅÍ ¸Þµà»ç (10.02.19)
		#define LDK_ADD_EXTENSIONMAP_BOSS_MEDUSA_EYE_EFFECT		// Æò¿ÂÀÇ´Ë º¸½º ¸ó½ºÅÍ ¸Þµà»ç ´« ÀÜ»ó ÀÌÆåÆ®(10.03.03)
		#define LDK_ADD_EXTENSIONMAP_BOSS_MEDUSA_WAND_EFFECT	// Æò¿ÂÀÇ´Ë º¸½º ¸ó½ºÅÍ ¸Þµà»ç ÁöÆÎÀÌ ÀÌÆåÆ®(10.03.04)
		#define LDK_MOD_EVERY_USE_SKILL_CAOTIC					// Ä«¿ÀÆ½ µð¼¼ÀÌ¾î ¸ó½ºÅÍ »ç¿ë °¡´ÉÇÏµµ·Ï ¼öÁ¤(10.03.08)

		// ¸Ê ÀÛ¾÷
		#define LDK_FIX_AIDA_OBJ41_UV_FIX						// ¾ÆÀÌ´Ù¸Ê 41¹ø obj(ºû) uv °ª °íÁ¤(10.03.16)
		#define LDK_ADD_AIDA_OBJ77_OBJ78						// ¾ÆÀÌ´Ù¸Ê 77,78¹ø obj uvÈå¸§ Ãß°¡(10.03.18)
	#endif // LDK_LDS_EXTENSIONMAP_HUNTERZONE

	// - ÀÌÁÖÈï
	#define LJH_ADD_SUPPORTING_MULTI_LANGUAGE					// ´Ù±¹¾îÁö¿ø (10.05.19)
	#ifdef LJH_ADD_SUPPORTING_MULTI_LANGUAGE
		#define LJH_ADD_RESTRICTION_ON_ID						// ID, ±æµåÀÌ¸§, Ä³¸¯ÅÍ¸íÀº ¿µ¾î, ¼ýÀÚ, Æ¯¼ö±âÈ£¸¸ »ç¿ëÇÒ¼ö ÀÖ°Ô Á¦ÇÑ(10.09.17)
	#endif //LJH_ADD_SUPPORTING_MULTI_LANGUAGE
	#define YDG_ADD_MOVE_COMMAND_PROTOCOL						// ÀÌµ¿¸í·É ÇÁ·ÎÅäÄÝ Ãß°¡(/ÀÌµ¿ Á¦°Å) (2009.04.01) [2009.04.22 Å×¼·]

	//-----------------------------------------------------------------------------
	// [ ½ÃÁð 5 - Part 4 ¹ö±×¼öÁ¤]
	#define LDK_MOD_GUARDIAN_DROP_RESIZE					// µ¥¸ó ¼öÈ£Á¤·É ¹Ù´Ú¿¡ ³õ¿´À»¶§ »çÀÌÁî Á¶Á¤(10.03.04)
	#define PBG_FIX_SATAN_VALUEINCREASE						// »çÅº Âø¿ë½Ã ¼öÄ¡ Áõ°¡ ¹ö±× ¼öÁ¤(10.04.07)
	#define PBG_MOD_GUARDCHARMTEXT							// ¼öÈ£ÀÇºÎÀû¾ÆÅÛ ¹®±¸¼öÁ¤(10.04.14)
	#define LJH_FIX_REARRANGE_INVISIBLE_CLOAK_LEVEL_FOR_CHECKING_REMAINING_TIME	// Åõ¸í¸ÁÅä(lv1~8)°ú ºí·¯µåÄ³½½(lv0~7)ÀÇ Â÷ÀÌ¶§¹®¿¡ 8·¹º§ Åõ¸í¸ÁÅä ¿ìÅ¬¸¯ ÇÒ ¶§ ½Ã°£ÀÌ ÀÌ»óÇÏ°Ô ³ª¿À´Â ¹ö±× ¼öÁ¤(10.07.07) 
	#define ASG_FIX_MONSTER_MAX_COUNT_1024					// #define MAX_MONSTER 512 -> 1024·Î ¼öÁ¤(10.06.29)
	#define LJH_FIX_GETTING_ZEN_WITH_PET_OF_OTHER_PLAYER	// ´Ù¸¥ ÇÃ·¹ÀÌ¾îÀÇ ÆêÀÌ Á¨À» ¸Ô¾îÁÖ´Â ¹ö±× ¼öÁ¤(10.05.10)
	#define LJH_FIX_BUG_DISPLAYING_NULL_TITLED_QUEST_LIST			// ¼­¹ö¿¡¼­ ¹ÞÀº Äù½ºÆ® ÀÎµ¦½º°¡ Á¸ÀçÇÏÁö ¾Ê¾Æ (null)·Î Ç¥½ÃµÇ´Â Ç×¸ñÀº Äù½ºÆ® ¸ñ·ÏÀ» ¸¸µé¶§ ³ÖÁö ¾Êµµ·Ï ¼öÁ¤(10.04.14)
	#define LJH_FIX_BUG_SELLING_ITEM_CAUSING_OVER_LIMIT_OF_ZEN		// ¼ÒÁöÇÑµµ¾×À» ÃÊ°úÇÏ´Â ÆÇ¸Å¾×ÀÇ ¾ÆÀÌÅÛÀ» ÆÈÁö ¸øÇÏ°Ô ¼­¹ö·Î ¸Þ¼¼Áöµµ º¸³»Áö ¾Êµµ·Ï ¼öÁ¤(10.04.15)				
	#define PBG_FIX_CHARACTERSELECTINDEX					// Ä³¸¯ÅÍ ÀÎµ¦½º ¹ö±×¼öÁ¤(10.07.05)
#endif //SEASON5_4
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//----------------------------------------------------------------------------------------------
// << ¹ö±×¼öÁ¤ >>
//----------------------------------------------------------------------------------------------
// [2010.06.24 ±Û·Î¹ú 1.03A+] - ÀÌÁÖÈï

#define KJH_FIX_INGAMESHOP_SENDGIFT_ELIXIROFCONTROL		// ÀÎ°ÔÀÓ¼¥ ¼±¹°ÇÏ±â¿¡¼­ ´ÙÅ©·Îµå°¡ ¾Æ´Ñ Å¬·¡½ºµµ ¼±¹°ÇÏ±â ¹ÞÀ»¼ö ÀÖ´Â¹®Á¦ ¼öÁ¤ (10.06.23)

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//----------------------------------------------------------------------------------------------
// << ¹ö±×¼öÁ¤ >>
//----------------------------------------------------------------------------------------------
// [2010.06.10 ±Û·Î¹ú 1.03z] - ÀÌÁÖÈï

#define KJH_FIX_SELL_EXPIRED_UNICON_PET					// ±â°£Áö³­ À¯´ÏÄÜÆê »óÁ¡ÆÇ¸Å °¡´ÉÇÏ°Ô ¼öÁ¤ (10.06.08)
#define KJH_FIX_SELL_EXPIRED_CRITICAL_WIZARD_RING		// ±â°£Áö³­ Ä¡¸íÀûÀÎ ¸¶¹ý»çÀÇ ¹ÝÁö »óÁ¡ÆÇ¸Å °¡´ÉÇÏ°Ô ¼öÁ¤ (10.06.08)


/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//----------------------------------------------------------------------------------------------
// << ½ÃÁð 5 - Part 1 ~ Part 3, ºÎºÐ À¯·áÈ­ 7, 8Â÷ >>
//----------------------------------------------------------------------------------------------
// [2010.05.27 ±Û·Î¹ú 1.03w] - ±èÀçÈñ


#define UPDATE_100527
#ifdef UPDATE_100527

	//-----------------------------------------------------------------------------
	// [ ½ÃÁð 5 - Part 3 Ãß°¡ ¹ö±×¼öÁ¤]
	#define KJH_FIX_BTS158_TEXT_CUT_ROUTINE							// UI¿¡ ¸Â°Ô Text¸¦ ÀÚ¸¦½Ã ÀÌ»óÇö»ó ¼öÁ¤ (10.05.07)
	#define KJH_MOD_BTS173_INGAMESHOP_ITEM_STORAGE_PAGE_ZERO_PAGE	// ÀÎ°ÔÀÓ¼¥ º¸°üÇÔ ¾ÆÀÌÅÛÀÌ ¾øÀ»½Ã 0ÆäÀÌÁö Ãâ·Â (10.05.13)
	#define KJH_FIX_BTS179_INGAMESHOP_STORAGE_UPDATE_WHEN_ITEM_BUY	// ÀÎ°ÔÀÓ¼¥ ¾ÆÀÌÅÛ ±¸ÀÔ½Ã ¼±¹°ÇÔ ÅÇ¿¡¼­ º¸°üÇÔ ¾ÆÀÌÅÛÀÌ °»½ÅµÇ´Â ¹ö±×¼öÁ¤ (10.05.13)
	#define KJH_FIX_MINIMAP_NAME									// ¹Ì´Ï¸Ê¿¡¼­ NPC/Portal Name ÀÌ Â©¸®´Â ¹ö±× ¼öÁ¤ (10.05.14) - minimap ½ºÅ©¸³Æ® ¸ðµÎ ÀçÄÁ¹öÆÃ
	#define KJH_MOD_BTS184_REQUIRE_STAT_WHEN_SPELL_SKILL			// ½ºÅ³ ½ÃÀü½Ã ½ºÅÝ ¿ä±¸Ä¡¿¡ µû¶ó ½ºÅ³ »ç¿ë º¯°æ (10.05.17)
	#define KJH_FIX_EMPIREGUARDIAN_ENTER_UI_RENDER_TEXT_ONLY_GLOBAL	// Á¦±¹¼öÈ£±º ÀÔÀå UI(Á¦¸°Æ®NPC) Text ¼öÁ¤ (10.05.17) - ±Û·Î¹ú Àü¿ë
	#define KJH_FIX_DOPPELGANGER_ENTER_UI_RENDER_TEXT_ONLY_GLOBAL	// µµÆç°»¾î ÀÔÀå UI(·ç°¡µåNPC) Text ¼öÁ¤ (10.05.19) - ±Û·Î¹ú Àü¿ë
	#define KJH_FIX_BTS167_MOVE_NPC_IN_VIEWPORT						// ºäÆ÷Æ®¾È¿¡ NPC°¡ µé¾î¿À¸é NPC°¡ °©ÀÚ±â ÀÌµ¿ÇÏ´Â ¹ö±×¼öÁ¤ (10.05.17)
	#define KJH_MOD_BTS191_GOLD_FLOATING_NUMBER						// ¾ÆÀÌÅÛÀÌ³ª Ä³½Ã ±Ý¾×À», ¼Ò¼ýÁ¡ÀÚ¸®±îÁö °è»ê (10.05.18)
	#define KJH_FIX_BTS204_INGAMESHOP_ITEM_STORAGE_SELECT_LINE		// ÀÎ°ÔÀÓ¼¥ º¸°üÇÔ¿¡¼­ 1¹øÂ° ¾ÆÀÌÅÛ »ç¿ë½Ã, Æ÷Ä¿½ÌÀÌ 3¹øÂ° ¾ÆÀÌÅÛÀ¸·Î ¼±ÅÃµÇ´Â ¹ö±×¼öÁ¤ (10.05.18)
	#define	KJH_FIX_BTS206_INGAMESHOP_SEND_GIFT_MSGBOX_BLANK_ID		// ÀÎ°ÔÀÓ¼¥ ¼±¹°ÇÏ±â ¸Þ¼¼ÁöÃ¢¿¡¼­ IDÀÔ·ÂÇÏÁö ¾Ê°í È®ÀÎ ¹öÆ° Å¬¸¯½Ã, ¼±¹°È®ÀÎ ¸Þ¼¼ÁöÃ¢ÀÌ ¶ß´Â ¹ö±× (10.05.18)
	#define KJH_MOD_COMMON_MSG_BOX_BTN_DISABLE_TEXT_COLOR			// °øÅë ¸Þ¼¼Áö¹Ú½º ¹öÆ° Disable½Ã ±ÛÀÚ»ö ¼öÁ¤ (10.05.18)
	#define	KJH_MOD_BTS208_CANNOT_MOVE_TO_VULCANUS_IN_NONPVP_SERVER	// nonPVP ¼­¹öÀÏ´ë ºÒÄ«´©½º·Î ÀÌµ¿ºÒ°¡ (10.05.18)
	#define KJH_FIX_BTS207_INGAMESHOP_SEND_GIFT_ERRORMSG_INCORRECT_ID	// ÀÎ°ÔÀÓ¼¥ ¼±¹°ÇÏ±â¿¡¼­ »ó´ë¹æ ¾ÆÀÌµð°¡ Æ²·ÈÀ»¶§ ¿¡·¯ ¸Þ¼¼Áö (10.05.19)
	#define KJH_FIX_BTS251_ELITE_SD_POTION_TOOLTIP					// ¿¤¸®Æ® SD¹°¾à ÅøÆÁÀÌ ¾È³ª¿À´Â ¹ö±× ¼öÁ¤ (10.05.24)
	#define KJH_FIX_BTS260_PERIOD_ITEM_INFO_TOOLTIP					// ±â°£Á¦¾ÆÀÌÅÛ ±â°£Á¦ Á¤º¸ ÅøÆÁ ¹ö±× ¼öÁ¤ (10.05.24)
	#define KJH_FIX_BTS295_DONT_EXPIRED_WIZARD_RING_RENDER_SELL_PRICE	// ±â°£Á¦ ¸¶¹ý»ç¹ÝÁö°¡ ±â°£ÀÌ ¸¸·áµÇÁö ¾Ê¾Ò´Âµ¥ ÆÇ¸Å°¡°ÝÀÌ ³ª¿À´Â ¹ö±× ¼öÁ¤ (10.05.25)
	#define KJH_MOD_INGAMESHOP_GIFT_FLAG							// ÀÎ°ÔÀÓ¼¥ ¼±¹°ÇÏ±â Flag·Î ¼±¹°ÇÏ±â ¹öÆ° On/Off (10.05.25)
	#define ASG_FIX_QUEST_GIVE_UP									// Äù½ºÆ® Æ÷±â ¹ö±× ¼öÁ¤. Äù½ºÆ® »óÅÂ(QS) 0xfe»èÁ¦µÊ.(10.05.26)

	//-----------------------------------------------------------------------------
	// [ ½ÃÁð 5 - Part 3 Ãß°¡ÀÛ¾÷]
	#define KJH_MOD_INGAMESHOP_UNITTTYPE_FILED_OF_PRODUCT_SCRIPT	// Product °ÔÀÓ¼¥ ½ºÅ©¸³Æ®ÀÇ UnitTypeÇÊµå·Î ´ÜÀ§¸í º¯°æ (10.04.22) - 10.03.29ÀÏÀÚ ÀÎ°ÔÀÓ¼¥ ¶óÀÌºê·¯¸® Àû¿ë
	#define KJH_MOD_INGAMESHOP_ITEM_STORAGE_PAGE_UNIT				// ÀÎ°ÔÀÓ¼¥ º¸°üÇÔ ÆäÀÌÁö ´ÜÀ§ ¹æ½ÄÀ¸·Î º¯°æ (10.04.27)
	#define KJH_MOD_INGAMESHOP_DOMAIN_EACH_NATION					// ±¹°¡º° °ÔÀÓ¼¥ µµ¸ÞÀÎ ¼³Á¤ (10.05.04)
	#define KJH_MOD_INGAMESHOP_GLOBAL_CASHPOINT_ONLY_GLOBAL			// Global Ä³½Ã Æ÷ÀÎÆ® ½Ã½ºÅÛ. (10.04.19) - ±Û·Î¹ú Àü¿ë

	//-----------------------------------------------------------------------------
	// [ ½ÃÁð 5 - Part 3 ÀÌÈÄ ¹ö±×¼öÁ¤]
	#define KJH_FIX_INIT_EVENT_MAP_AT_ABNORMAL_EXIT			// ºñÁ¤»óÀûÀûÀÎ Á¾·á½Ã ÀÌº¥Æ®¸Ê ÃÊ±âÈ­ (10.04.20)

	#define LDS_ADD_OUTPUTERRORLOG_WHEN_RECEIVEREFRESHPERSONALSHOPITEM	// ·Î·» ½ÃÀå ¼­¹ö·ÎºÎÅÍ °³ÀÎ»óÁ¡ ±¸¸ÅÀÌÈÄ ReceiveRefreshPersonalShopItem ¹ÞÀ» ¶§ Error Log Á¤º¸¸¦ ´õ ÀÚ¼¼È÷ Ãâ·Â (10.03.30)
	#define LDS_FIX_MEMORYLEAK_WHERE_NEWUI_DEINITIALIZE		// ·Î·»½ÃÀå DEADÇö»ó : NewUI ³» Æó±â Ã³¸® ¸Þ¸ð¸® ¹Ì¹ÝÈ¯À¸·Î ÀÎÇÑ ¸Þ¸ð¸® ´©¼ö ÀÛ¾÷ (10.03.23)
	#define ASG_MOD_GM_VIEW_NAME_IN_GENS_STRIFE_MAP			// °Õ½º ºÐÀïÁö¿ª¿¡¼­ GMÀº Å¸¼¼·Â Ä³¸¯ÅÍ ÀÌ¸§ º¸ÀÌ°Ô(10.02.26)
	//^#define KJH_FIX_MOVE_MAP_GENERATE_KEY				// ¸Ê ÀÌµ¿(&´õ¹Ì½ºÅ³ ÇÁ·ÎÅäÄÝ)½Ã »ý¼ºµÇ´Â Å°°ª ¼öÁ¤

	#define ASG_FIX_GENS_STRIFE_FRIEND_NAME_BLOCK			// °Õ½º ºÐÀïÁö¿ª¿¡¼­ Ä£±¸ ÀÌ¸§ ÀÚµ¿ÀÔ·Â ¸·±â(2010.02.03)
	#define ASG_MOD_GENS_STRIFE_ADD_PARTY_MSG				// °Õ½º ºÐÀïÁö¿ª °ü·Ã ÆÄÆ¼ ¸Þ½ÃÁö Ãß°¡.(2010.02.03)
	#define PBG_MOD_STRIFE_GENSMARKRENDER					// ºÐÀïÁö¿ªÀ¯ÀúÇ¥½Ã º¯°æ(10.02.18)
	#define YDG_FIX_MOVE_ICARUS_EQUIPED_SKELETON_CHANGE_RING	// ½ºÄÌ·¹Åæº¯½Å¹ÝÁö Âø¿ëÈÄ ÀÌÄ«·ç½º·Î ÀÌµ¿ÇÒ ¼ö ¾ø´Â Çö»ó (10.02.16)
	#define ASG_ADD_LEAP_OF_CONTROL_TOOLTIP_TEXT			// Åë¼ÖÀÇ ºñ¾à ÅøÆÁ ÅØ½ºÆ® Ãß°¡(2010.01.28)
	#define PBG_FIX_GAMECENSORSHIP_1215							// 12/15¼¼ ÀÌ¿ë°¡´É ¸¶Å© ÃâÇö ¹ö±×¼öÁ¤(10.02.09)
	#define LDS_FIX_DISABLE_INPUTJUNKKEY_WHEN_LORENMARKT		// ÅëÇÕ½ÃÀå ÀÌµ¿ ½Ã¿¡ »ç¿ëÀÚÀÇ Å° ¹× ¸¶¿ì½º ÀÎÇ² ÀÔ·ÂÀ» ¸·Áö ¾Ê¾Æ »ý±â´Â ¹®Á¦·Î ÀÏ°ý Skip Ã³¸®. (10.02.02) 
	//^#define PBG_MOD_GAMECENSORSHIP_RED						// ·¹µåÀÇ °æ¿ìµµ 18ÀÌ»ó°¡´É°¡·Î Á¶Á¤(09.01.26)[10.02.04º»¼·ÆÐÄ¡½Ã Å×¼·/º»¼· ºí·ç µ¿½Ã Àû¿ë]
	#define LDS_FIX_DISABLEALLKEYEVENT_WHENMAPLOADING			// ¸ÊÀÌµ¿ ¿äÃ»ÀÌÈÄ ¼­¹ö·ÎºÎÅÍ ¸ÊÀÌµ¿ °á°ú°¡ ¿À±âÀü±îÁö ¸ðµç Å°ÀÔ·ÂÀ» ¸·½À´Ï´Ù. (·Î·»½ÃÀå, °ø¼º ¼­¹ö ÀÌµ¿ ¿äÃ»½Ã¿¡ esc·Î ¿É¼ÇÃ¢ "°ÔÀÓÁ¾·á"È£ÃâÀÌÈÄ ¸ðµç Å°ÀÔ·ÂÀÌ ¾ÈµÇ´Â ¹ö±× ). (10.01.28)
	#define PBG_FIX_GENSREWARDNOTREG							// °Õ½º ¹Ì°¡ÀÔÀÚ°¡ º¸»ó¹ÞÀ»½Ã ¹®±¸ ¼öÁ¤(10.01.28)

	#define LJH_ADD_SAVEOPTION_WHILE_MOVING_FROM_OR_TO_DIFF_SERVER	// (JP_622, JP_624)(±¹³»¹ö±×)´Ù¸¥ ¼­¹ö(ÇöÀç °ø¼º¼­¹ö, ·Î·»½ÃÀå)¿¡¼­ºÎÅÍ ¶Ç´Â ´Ù¸¥ ¼­¹ö·Î ÀÌµ¿ÇÒ ¶§ ¿É¼ÇÀÌ ÀúÀå µÇÁö ¾Ê´Â ¹ö±× ¼öÁ¤(10.04.16)
	#define LJH_FIX_DIVIDE_LINE_BY_PIXEL_FOR_GENS_RANK	// °Õ½º¿¡¼­ ·©Å©ÀÌ¸§ÀÌ ³Ê¹« ±æ¾î ÇÑÁÙ¿¡ ´Ù ³ª¿ÀÁö ¾Ê¾Æ nPixelPerLine = 240À¸·Î ¼öÁ¤ _ ÀÏº» ¶§¹®(10.03.10)
	#define LJH_FIX_UNABLE_TO_TRADE_OR_PURCHASE_IN_TROUBLED_AREAS	// ºÐÀïÁö¿ª¿¡¼­ /°Å·¡, /±¸ÀÔ ¸í·É¾î Á¦ÇÑ (10.03.31)
	#define LJH_FIX_NO_EFFECT_ON_WEAPONS_IN_SAFE_ZONE_OF_CURSED_TEMPLE	// È¯¿µ»ç¿øÀÇ ¾ÈÀüÁö¿ª¿¡¼­ 15·¹º§ ¾ÆÀÌÅÛ ÀÌÆåÆ® ³ª¿ÀÁö ¾Ê´Â ¹ö±× ¼öÁ¤(10.04.16)


	//-----------------------------------------------------------------------------
	// [ ½ÃÁð 5 - Part 3] - ½ºÅ³¾ÆÀÌÄÜ ¸®´º¾ó, ¹Ì´Ï¸Ê, ¾ÆÀÌÅÛ ¾÷±×·¹ÀÌµå(14, 15lv), °Õ½º ½Ã½ºÅÛ, ·Î·»½ÃÀå (10.04.27)
	#define SEASON5_PART3
	#ifdef SEASON5_PART3
		//------------------------------------------------
		// 1. ·Î·»½ÃÀå
		// - ÀÌµ¿¼®
		#define LDS_ADD_MAP_UNITEDMARKETPLACE					// ÅëÇÕ ½ÃÀå ¼­¹ö (·Î·» ½ÃÀå) Ãß°¡ (09.12.04)
		#ifdef LDS_ADD_MAP_UNITEDMARKETPLACE
			#define LDS_ADD_NPC_UNITEDMARKETPLACE					// NPC ·Î·»½ÃÀå 1.º¸¼®·ù Á¶ÇÕ ¹× ÇØÃ¼ ¶ó¿ï, 2.½ÃÀå »óÀÎ ÁÙ¸®¾Æ, 3.¹°¾à ¹× ±âÅ¸ ÀâÈ­ ¾ÆÀÌÅÛ »óÀÎ Å©¸®½ºÆ¾ (09.12.15)
			#define LDS_ADD_UI_UNITEDMARKETPLACE					// UI ·Î·»½ÃÀå ¸Þ¼¼Áö Ã³¸® 1.Ä«¿À½ºÄÉ½½ ÀÔÀå ºÒ°¡ 2.°áÅõ½ÅÃ»ºÒ°¡ 3.ÆÄÆ¼½ÅÃ» ºÒ°¡ 4.
			#define LDS_ADD_SERVERPROCESSING_UNITEDMARKETPLACE		// ¼­¹ö¿ÍÀÇ ±³½Å Ã³¸® 1.ÅëÇÕ½ÃÀå¸ÊÀ¸·Î ÀÌµ¿ 2. (09.12.23)
			#define LDS_ADD_SOUND_UNITEDMARKETPLACE					// ÅëÇÕ½ÃÀå È¯°æÀ½, ¹è°æÀ½ Ã³¸®. (10.01.12)
			//#define LDS_ADD_MOVEMAP_UNITEDMARKETPLACE				// ¸ÊÀÌµ¿ À©µµ¿ì¿¡ "ÅëÇÕ ½ÃÀå" Ãß°¡. (10.01.12)
			#define LDS_ADD_EFFECT_UNITEDMARKETPLACE				// ÅëÇÕ½ÃÀå NPC µî¿¡ Ãß°¡ EFFECT. (10.01.14)
		#endif // LDS_ADD_MAP_UNITEDMARKETPLACE

		//------------------------------------------------
		// 2. °Õ½º·©Å· ½Ã½ºÅÛ
		// - ¹Úº¸±Ù
		#define PBG_ADD_GENSRANKING							// °Õ½º ·©Å·(09.12.01)

		//------------------------------------------------
		// 3. ½ºÅ³ ¾ÆÀÌÄÜ ¸®´º¾ó
		#define KJH_ADD_SKILLICON_RENEWAL					// ½ºÅ³¾ÆÀÌÄÜ ¸®´º¾ó(10.01.20)

		//------------------------------------------------
		// 4. ¾ÆÀÌÅÛ ÀÎÃ¦Æ® UP
		#define LDK_ADD_ITEM_UPGRADE_14_15					// ¾ÆÀÌÅÛ 14 15
		#ifdef LDK_ADD_ITEM_UPGRADE_14_15
			#define LDK_ADD_14_15_GRADE_ITEM_HELP_INFO			// ¾ÆÀÌÅÛ 14 15 µµ¿ò¸» Ãß°¡(09.12.2)
			#define LDK_ADD_14_15_GRADE_ITEM_VALUE				// ¾ÆÀÌÅÛ 14 15 ÆÇ¸Å±Ý¾× Ãß°¡(09.12.2)
			#define LDK_ADD_14_15_GRADE_ITEM_RENDERING			// ¾ÆÀÌÅÛ 14 15 ·£´õÈ¿°ú Ãß°¡(10.01.04) ±âÁ¸ÀÇ 13Ã³·³ Å©·Ò,ºí·»µå Ã³¸®
			#define LDK_ADD_14_15_GRADE_ITEM_SET_EFFECT			// ¾ÆÀÌÅÛ 14 15 ¼¼Æ®ÀÌÆåÆ®È¿°ú Ãß°¡(10.01.22)
			#define LDK_ADD_14_15_GRADE_ITEM_TYPE_CHANGE		// ¾ÆÀÌÅÛ 14 15 ·¡º§ Å¸ÀÔ º¯°æ(10.01.27)
			#define LDK_ADD_14_15_GRADE_ITEM_MODEL				// ¾ÆÀÌÅÛ 14 15 ¸ðµ¨¸µ Ãß°¡(10.01.18)
			#define YDG_FIX_ITEM_EFFECT_POSITION_ERROR			// ¾ÆÀÌÅÛ ÀÌÆåÆ® À§Ä¡°¡ ÀÌ»óÇÏ°Ô ³ª¿À´Â ¹®Á¦ (2010.01.27)
		#endif //LDK_ADD_ITEM_UPGRADE_14_15
 
		//------------------------------------------------
		// 4. ¹Ì´Ï¸Ê
		#define PJH_ADD_MINIMAP								// ¹Ì´Ï¸Ê 

		//------------------------------------------------
		// 5. ¹ö±×¼öÁ¤
		#define PBG_MOD_PREMIUMITEM_TRADE_0118						// Ä«¿À½º Ä«µå,ºÎÀû,Çà¿îÀÇºÎÀû ·¹µåºí·ç °Å·¡°¡´ÉÀ¸·Î ±âÈ¹º¯°æ(10.01.18)
		#define KJH_FIX_INGAMESHOP_SCRIPTDOWN_BUG2				// ÀÎ°ÔÀÓ¼¥ ½ºÅ©¸³Æ® ´Ù¿î·Îµå ¹ö±×¼öÁ¤ 2 (10.01.14)
		#define ASG_ADD_QUEST_REQUEST_REWARD_TYPE				// Äù½ºÆ® ¿ä±¸»çÇ×, º¸»ó Ãß°¡(2009.12.15)
		#define YDG_MOD_SKELETON_NOTSELLING						// ½ºÄÌ·¹Åæ Æê ¹ÝÁö ¾ÈÆÈ¸®°Ô ¼³Á¤(2010.01.20)
		#define YDG_FIX_CHANGERING_STATUS_EXPIRE_CHECK			// º¯½Å¹ÝÁö ½ºÅÈ¿Ã¸±¶§ ¸¸·á Ã¼Å© (2010.01.25)
		#define YDG_FIX_SKELETON_PET_CREATE_POSITION			// ½ºÄÌ·¹Åæ Æê »ý¼º À§Ä¡ ¼öÁ¤ (2010.01.26)
	#endif // SEASON5_PART3

	//-----------------------------------------------------------------------------
	// [ ½ÃÁð 5 - Part 2 ÀÌÈÄ ¹ö±×¼öÁ¤]

	#define LJH_MOD_TO_USE_ISBLUEMUSERVER_FUNC					// ºí·ç°¡ Àû¿ëµÇÁö ¾ÊÀº ±¹°¡¿¡¼­ ÇöÀç Á¢¼ÓÇØ ÀÖ´Â ¼­¹ö°¡ ºí·çÀÎÁö ÆÇº°ÇÏ±â À§ÇØ Æ÷ÇÔ(10.03.17)
	#define PBG_MOD_PANDAPETRING_NOTSELLING						// Ææ´õ Æê ¹ÝÁö ¾ÈÆÈ¸®°Ô ¼³Á¤(10.01.11)
	#define LJH_FIX_EXTENDING_OVER_MAX_TIME_4S_To_10S			// ÇØ¿Ü»ç¿ëÀÚµé ÀÏºÎ »ç¿ëÀÚ¿¡°Ô Ä³½Ã¼¥ÀÌ ¿­¸®Áö ¾Ê¾Æ Max TimeÀ» ±âÁ¸ 4ÃÊ¿¡¼­ 10ÃÊ·Î º¯°æ(09.12.17)
	#define KJH_FIX_INGAMESHOP_SCRIPTDOWN_BUG					// ÀÎ°ÔÀÓ¼¥ ½ºÅ©¸³Æ® ´Ù¿î·Îµå ¹ö±× (09.12.28)
	#define PJH_FIX_HELP_LAYER									// ÇïÇÁ ·¹ÀÌ¾î ÃÖ»óÀ§·Î º¯°æ(2009.12.01)
	#define LDK_FIX_EXPIREDPERIOD_ITEM_EQUIP_WARNING			// ¸¸·áµÈ ¾ÆÀÌÅÛ ÀÛ¿ëºÒ°¡ ¹× °æ°í 
	#define LDK_FIX_EQUIPED_EXPIREDPERIOD_RING_EXCEPTION		// Âø¿ëÁßÀÎ ¸¸·áµÈ ¹ÝÁö ´É·ÂÄ¡ °è»ê ¿¹¿ÜÃ³¸®(09.12.11)
	#define LDK_FIX_EQUIPED_EXPIREDPERIOD_AMULET_EXCEPTION		// Âø¿ëÁßÀÎ ¸¸·áµÈ ¸ñ°ÉÀÌ ´É·ÂÄ¡ °è»ê ¿¹¿ÜÃ³¸®(09.12.11)
	#define LDS_FIX_VISUALRENDER_PERIODITEM_EXPIRED_RE			// ÀÎ°ÔÀÓ˜Þ ¾ÆÀÌÅÛµéÁß ¸ñ°ÉÀÌ, ¹ÝÁöµé¿¡ ´ëÇÑ ±â°£Á¦ Á¾·á ÀÌÈÄ »ç¿ë ºÒ´É Ã³¸® (ÀÎº¥Åä¸®»ó¿¡¼­ ºñÁÖ¾ó Ã³¸®¸¸.) (09.12.10)
	#define KJH_FIX_SOURCE_CODE_REPEATED						// °°Àº ¼Ò½ºÄÚµå Áßº¹µÈ°Í ¼öÁ¤ (09.10.12)
	#define ASG_MOD_QUEST_OK_BTN_DISABLE						// Äù½ºÆ® ÁøÇà È®ÀÎ ¹öÆ° ºñÈ°¼ºÈ­ »óÅÂ Ãß°¡(2009.11.23)
	#define KJH_FIX_MOVE_ICARUS_EQUIPED_PANDA_CHANGE_RING		// ÆÒ´õº¯½Å¹ÝÁö Âø¿ëÈÄ ÀÌÄ«·ç½º·Î ÀÌµ¿ÇÒ ¼ö ¾ø´Â Çö»ó (09.11.30)
	#define ASG_MOD_GUILD_RESULT_GENS_MSG						// ±æµå °¡ÀÔ½Ã °Õ½º °ü·Ã ¸Þ½ÃÁö.(2009.11.23)
	#define LDK_MOD_BUFFTIMERTYPE_SCRIPT						// ¹öÇÁÅ¸ÀÌ¸Ó Å¸ÀÔ°ªÀ» buffEffect.txtÀÇ Viewport·Î ¹Þ¾Æ¼­ Àû¿ë(09.11.10) - enum.h : Å¸ÀÌ¸Ó ÇÊ¿äÇÑ ¹ö½º µî·Ï½Ã eBuffTimeType¿¡ µî·Ï¾ÈÇØµµ µÊ
	#define ASG_FIX_GENS_JOINING_ERR_CODE_ADD					// °Õ½º °¡ÀÔ ¿¡·¯ ÄÚµå Ãß°¡.(¿¬ÇÕ±æµåÀå °ü·Ã)(2009.11.12)
	#define KJH_FIX_INGAMESHOP_INIT_BANNER						// ÀÎ°ÔÀÓ¼¥ ¹è³Ê ´Ù¿î·Îµå ÈÄ ÃÊ±âÈ­µÇÁö ¾Ê¾Æ Render°¡ ¾ÈµÅ´Â Çö»ó (09.11.10)
	#define LDK_MOD_PC4_GUARDIAN_EXPIREDPERIOD_NOTPRINT_INFO	// Ä³¸¯ÅÍÁ¤º¸Ã¢¿¡¼­ ¸¸·áµÈ µ¥¸ó, ¼öÈ£Á¤·Â ¼öÄ¡ Ç¥½Ã ¾ÈÇÔ(09.11.12)
	#define LDK_MOD_ITEM_DROP_TRADE_SHOP_EXCEPTION				// Ä«¿À½ººÎÀû,Ä«¿À½ºÄ«µå,µ¥¸ó,¼öÈ£Á¤·É,ÆÒ´õÆê,ÆÒ´õº¯½Å¹ÝÁö,¸¶¹ý»çÀÇ¹ÝÁö ÀÏ¹Ý¾ÆÀÌÅÛ½Ã ¹ö¸®±â,°³ÀÎ»óÁ¡,°³ÀÎ°Å·¡ °¡´ÉÇÏµµ·Ï Ã³¸®(09.11.16)
	#define YDG_ADD_GM_DISCHARGE_STAMINA_DEBUFF					// GMÀÌ °Å´Â ½ºÅÂ¹Ì³Ê ¹æÀü µð¹öÇÁ (2009.11.13)
	#define PBG_FIX_MSGBUFFERSIZE								// ¸Þ½ÃÁö¹Ú½º³» ¹®±¸ Àß¸®´Â ¹ö±×¼öÁ¤(09.11.13)
	#define PBG_FIX_MSGTITLENUM									// ¸Þ½ÃÁö¹Ú½º title¹®±¸ Àß¸ø³ª¿À´Â ¹ö±× ¼öÁ¤(09.11.13)
	#define LDS_MOD_MODIFYTEXT_TOPAZRING_SAPIRERING				// »çÆÄÀÌ¾î¸µ°ú ÅäÆÄÁî ¸µÀÇ ÅØ½ºÆ® º¯°æ (09.11.06)
	#define LDK_MOD_TRADEBAN_ITEMLOCK_AGAIN						// ÀÏºÎ À¯·á ¾ÆÀÌÅÛÁß Æ®·¹ÀÌµå °¡´É ºÒ°¡´É º¯°æ(NOT DEFINE Ã³¸®)(09.10.29) (±âÈ¹¿¡¼­ ¼ö½Ã·Î ¹Ù²ñ ¤Ñ.¤Ñ+)
	#define LDK_FIX_PERIODITEM_SELL_CHECK						// ÆÇ¸Å½Ã ±â°£Á¦ ¾ÆÀÌÅÛ È®ÀÎ Ãß°¡(09.11.09)
	#define KJH_MOD_SHOP_SCRIPT_DOWNLOAD						// ¼¥ ½ºÅ©¸³Æ® ´Ù¿î·Îµå ¹æ½Ä º¯°æ (09.11.09)
	#define KJH_FIX_SHOP_EVENT_CATEGORY_PAGE					// ¼¥ ÀÌº¥Æ® Ä«Å×°í¸® ÆäÀÌÁö ¹ö±× ¼öÁ¤ (09.11.09)
	#define KJH_FIX_EXPIRED_PERIODITEM_TOOLTIP					// ±â°£¸¸·áµÈ ±â°£Á¦ ¾ÆÀÌÅÛÀÇ ÅøÆÁRender°¡ ¾ÈµÅ´Â ¹ö±× ¼öÁ¤ (09.11.09)
	#define LDS_MOD_INGAMESHOPITEM_RING_AMULET_CHARACTERATTR	// ÀÎ°ÔÀÓ˜Þ ¾ÆÀÌÅÛµéÁß ¹ÝÁö, ¸ñ°ÉÀÌ ½Ã¸®ÁîÀÇ STATUS ¼öÄ¡ ¹Ý¿µ.
	#define LDK_FIX_NEWWEALTHSEAL_INFOTIMER_AND_MOVEWINDOW		// Ç³¿äÀÇÀÎÀå ¹öÇÁÁ¤º¸ ½Ã°£Ç¥½Ã Ãß°¡, ¹öÇÁ»ç¿ë½Ã ÀÌµ¿Ã¢ ºñÈ°¼ºÈ­ (09.11.06)
	#define PBG_FIX_TRADECLOSE									// °Å·¡Áß ÀÎº¥À» ´ÝÀ»½Ã¿¡ °Å·¡Ã¢Àº ´ÝÈ÷Áö ¾Ê´Â ¹ö±× ¼öÁ¤(09.11.06)
	#define LDS_FIX_INGAMESHOPITEM_PASSCHAOSCASTLE_REQUEST		// Ä«¿À½ºÄ³½½ ÀÚÀ¯ ÀÔÀå±Ç »ç¿ë½Ã ¼­¹ö·Î »ç¿ë¿¡ ´ëÇÑ ÆÐÅ¶ Á¤º¸¸¦ º¸³»Áö ¾Ê´Â ¹®Á¦ ¼öÁ¤ (09.11.02)
	#define LDS_MOD_INGAMESHOPITEM_POSSIBLETRASH_SILVERGOLDBOX	// ±Ý,Àº »óÀÚ ¹ö¸®±â°¡ °¡´ÉÇÏµµ·Ï.
	#define KJH_FIX_RENDER_PERIODITEM_DURABILITY				// ±â°£Á¦ ¾ÆÀÌÅÛÀÏ¶§ ³»±¸µµÁ¤º¸°¡ Render µÇ´Â ¹®Á¦ (2009.11.03)
	#define KJH_MOD_RENDER_INGAMESHOP_KEEPBOX_ITEM				// °ÔÀÓ¼¥ º¸°üÇÔ ¾ÆÀÌÅÛÀÇ ¼ö·®ÀÌ 1°³ÀÏ¶§ Render ¾ÈÇÔ (2009.11.03)
	#define LDK_MOD_INGAMESHOP_ITEM_CHANGE_VALUE				// È¥ÇÕÀ¯·áÈ­ ¾ÆÀÌÅÛ °¡°Ý º¯°æ(09.10.29)
	#define KJH_MOD_INGAMESHOP_PATCH_091028						// ÀÎ°ÔÀÓ¼¥ ¼öÁ¤ - ÀÌº¥Æ® Ä«Å×°í¸®, ÀÎ°ÔÀÓ¼¥ ¶óÀÌºê·¯¸® ¾÷µ¥ÀÌÆ® (09.10.28)
	#define LDK_FIX_BLUESERVER_UNLIMIT_AREA						// ºí·ç¼· Àü¿ë ÀÌµ¿Ã¢ ÀÌµ¿Á¦ÇÑ ¼³Á¤Áß Ãß°¡Áö¿ª Á¦ÇÑ ÇØÁ¦(09.10.28)

	//-----------------------------------------------------------------------------
	// [ ½ÃÁð 5 - Part 2]

	#define SEASON5_PART2
	#ifdef SEASON5_PART2
		//------------------------------------------------
		// 1. ÀÎ°ÔÀÓ¼¥ ½Ã½ºÅÛ
		// - ±èÀçÈñ,¹Úº¸±Ù
		#define KJH_PBG_ADD_INGAMESHOP_SYSTEM					// ÀÎ°ÔÀÓ¼¥ ½Ã½ºÅÛ
		#ifdef KJH_PBG_ADD_INGAMESHOP_SYSTEM
			#define PBG_ADD_INGAMESHOP_UI_MAINFRAME				// ¸ÞÀÎÇÁ·¹ÀÓ UI(09.04.02)
			#define PBG_ADD_INGAMESHOP_UI_ITEMSHOP				// ÀÎ°ÔÀÓ¼¥ ±¸ÀÔ°ø°£(09.04.03)
			#define PBG_ADD_NAMETOPMSGBOX						// ÀÎ°ÔÀÓ¼¥ ¸Þ½ÃÁö ¹Ú½º Æ² ¸¸µé±â(09.05.26)
			#define KJH_ADD_INGAMESHOP_UI_SYSTEM				// ÀÎ°ÔÀÓ¼¥ ½Ã½ºÅÛ (09.08.17)
			#define KJH_ADD_PERIOD_ITEM_SYSTEM					// ±â°£Á¦ ¾ÆÀÌÅÛ ½Ã½ºÅÛ (09.09.29)
			#define PBG_ADD_INGAMESHOPMSGBOX					// ÀÎ°ÔÀÓ¼¥°ü·Ã ¸Þ½ÃÁö ¹Ú½º(09.06.24)
			#define PBG_ADD_MSGBACKOPACITY						// ÀÎ°ÔÀÓ¼¥ ¸Þ½ÃÁö¹Ú½ºÃ¢ µÞ¹è°æ ¾îµÓ°Ô Ã³¸®(09.07.20)
			#define PBG_ADD_ITEMRESIZE							// ÀÎ°ÔÀÓ¼¥ ¾ÆÀÌÅÛÀÇ »çÀÌÁî º¯°æ(09.09.10)
			#define PBG_FIX_ITEMANGLE							// ¸ðµ¨ ·£´õ½Ã µÚÁýÈù ¾ÆÀÌÅÛ ¼öÁ¤(09.10.05)
			#define PBG_ADD_MU_LOGO								// »õ·Î¿î ·Î°í º¯°æ(09.10.08)
			//^#define PBG_ADD_CHARACTERSLOT						// Ä³¸¯ÅÍ ½½·Ô¾ÆÀÌÅÛ(09.05.06) - ±Û·Î¹ú Á¦¿Ü
			#define KJH_DEL_PC_ROOM_SYSTEM						// ÇÇ¾¾¹æ ½Ã½ºÅÛ »èÁ¦ (09.10.22) - ÇÇ¾¾¹æ Á¢¼Ó¿©ºÎ´Â ³²°ÜµÒ(class CPCRoomPtSys)

			#define PBG_ADD_CHARACTERCARD								// Ä³¸¯ÅÍ Ä«µå (´ÙÅ©·Îµå,¸¶°Ë»ç »ý¼º Ä«µå) (09.05.04) - ¼ÒÈ¯¼ú»çÄ«µå Ãß°¡(09.06.04)
			//^#define LDK_ADD_INGAMESHOP_LIMIT_MOVE_WINDOW		// ±¹³» Àü¿ë ÀÌµ¿Ã¢ ÀÌµ¿Á¦ÇÑ ¼³Á¤, ÀÌµ¿ÀÇ ÀÎÀåÀ¸·Î ÇØÁ¦ (PSW_SEAL_ITEM°ü·Ã) - ±Û·Î¹ú Á¦¿Ü
		#endif //KJH_PBG_ADD_INGAMESHOP_SYSTEM

		//------------------------------------------------
		// 2. °Õ½º½Ã½ºÅÛ
		// - ¾È»ó±Ô
		#define ASG_ADD_GENS_SYSTEM								// °Õ½º ½Ã½ºÅÛ(2009.09.14)	[ÁÖÀÇ] °Õ½º ½Ã½ºÅÛ µðÆÄÀÎÀÌ ÄÑÁö¸é ASG_ADD_UI_NPC_MENU µðÆÄÀÎÀº ²¨Áü. ÇØ¿Ü Ãß°¡½Ã ÁÖÀÇ.
		#ifdef ASG_ADD_GENS_SYSTEM
			#define ASG_ADD_UI_NPC_DIALOGUE						// NPC ´ëÈ­Ã¢(2009.09.14)
			#define ASG_ADD_INFLUENCE_GROUND_EFFECT				// °Õ½º ¼¼·Â ±¸ºÐ ¹Ù´Ú ÀÌÆåÆ®(2009.10.07)
			#define ASG_ADD_GENS_MARK							// °Õ½º ¸¶Å© Ç¥½Ã(2009.10.09)
			#define ASG_ADD_GENS_NPC							// °Õ½º NPC Ãß°¡(2009.10.12)
			#define ASG_ADD_GATE_TEXT_MAX_LEVEL					// Gate.txt ÃÖ´ë ·¹º§ Ãß°¡.(2009.10.16)	[ÁÖÀÇ] ¸®¼Ò½º ÄÁ¹öÅÍ »õ·Î¿î ¼Ò½º·Î ÄÄÆÄÀÏ ÇÒ °Í.
			#define ASG_ADD_MOVEREQ_TEXT_MAX_LEVEL				// Movereq.txt ÃÖ´ë ·¹º§ Ãß°¡.(2009.10.16)	[ÁÖÀÇ] ¸®¼Ò½º ÄÁ¹öÅÍ »õ·Î¿î ¼Ò½º·Î ÄÄÆÄÀÏ ÇÒ °Í.
		#endif	// ASG_ADD_GENS_SYSTEM

		//------------------------------------------------
		// 3. Ãß°¡¾ÆÀÌÅÛ
		#define INGAMESHOP_ITEM01							// ÇØ¿Ü¿¡¸¸ µî·ÏµÇ¾îÀÖ°Å³ª »õ·Î »ý¼ºµÈ ¾ÆÀÌÅÛ µðÆÄÀÎ Ãß°¡(2009.09.08)
		#ifdef	INGAMESHOP_ITEM01
			#define LDK_MOD_PREMIUMITEM_DROP					// ÇÁ¸®¹Ì¾ö¾ÆÀÌÅÛ ¹ö¸®±âÁ¦ÇÑÇØÁ¦(09.09.16)
			#define LDK_MOD_PREMIUMITEM_SELL					// ÇÁ¸®¹Ì¾ö¾ÆÀÌÅÛ ÆÇ¸ÅÁ¦ÇÑÇØÁ¦(09.09.25)
			#define LDK_ADD_INGAMESHOP_GOBLIN_GOLD				// °íºí¸°±ÝÈ­
			#define LDK_ADD_INGAMESHOP_LOCKED_GOLD_CHEST		// ºÀÀÎµÈ ±Ý»ö»óÀÚ
			#define LDK_ADD_INGAMESHOP_LOCKED_SILVER_CHEST		// ºÀÀÎµÈ Àº»ö»óÀÚ
			#define LDK_ADD_INGAMESHOP_GOLD_CHEST				// ±Ý»ö»óÀÚ
			#define LDK_ADD_INGAMESHOP_SILVER_CHEST				// Àº»ö»óÀÚ
			#define LDK_ADD_INGAMESHOP_PACKAGE_BOX				// ÆÐÅ°Áö »óÀÚA-F
			#define LDK_ADD_INGAMESHOP_SMALL_WING				// ±â°£Á¦ ³¯°³ ÀÛÀº(±º¸Á, Àç³¯, ¿ä³¯, Ãµ³¯, »ç³¯)
			#define LDK_ADD_INGAMESHOP_NEW_WEALTH_SEAL			// ½Å±Ô Ç³¿äÀÇ ÀÎÀå

			// - ÀÌµ¿¼®
			#define LDS_ADD_NOTICEBOX_STATECOMMAND_ONLYUSEDARKLORD	// ÀÎ°ÔÀÓ˜Þ ¾ÆÀÌÅÛ // ¸®¼Â¿­¸Å5Á¾ // Åë¼Ö¸®¼Â¿­¸Å´Â ´ÙÅ©·Îµå¸¸ »ç¿ë°¡´ÉÇÑ ¸Þ¼¼Áö Ãâ·Â.
			#define LDS_ADD_INGAMESHOP_ITEM_RINGSAPPHIRE		// ÀÎ°ÔÀÓ˜Þ ¾ÆÀÌÅÛ // ½Å±Ô »çÆÄÀÌ¾î(Çª¸¥»ö)¸µ	// MODEL_HELPER+109
			#define LDS_ADD_INGAMESHOP_ITEM_RINGRUBY			// ÀÎ°ÔÀÓ˜Þ ¾ÆÀÌÅÛ // ½Å±Ô ·çºñ(ºÓÀº»ö)¸µ		// MODEL_HELPER+110
			#define LDS_ADD_INGAMESHOP_ITEM_RINGTOPAZ			// ÀÎ°ÔÀÓ˜Þ ¾ÆÀÌÅÛ // ½Å±Ô ÅäÆÄÁî(ÁÖÈ²)¸µ		// MODEL_HELPER+111
			#define LDS_ADD_INGAMESHOP_ITEM_RINGAMETHYST		// ÀÎ°ÔÀÓ˜Þ ¾ÆÀÌÅÛ // ½Å±Ô ÀÚ¼öÁ¤(º¸¶ó»ö)¸µ		// MODEL_HELPER+112
			#define LDS_ADD_INGAMESHOP_ITEM_AMULETRUBY			// ÀÎ°ÔÀÓ˜Þ ¾ÆÀÌÅÛ // ½Å±Ô ·çºñ(ºÓÀº»ö) ¸ñ°ÉÀÌ	// MODEL_HELPER+113
			#define LDS_ADD_INGAMESHOP_ITEM_AMULETEMERALD		// ÀÎ°ÔÀÓ˜Þ ¾ÆÀÌÅÛ // ½Å±Ô ¿¡¸Þ¶öµå(Çª¸¥) ¸ñ°ÉÀÌ// MODEL_HELPER+114
			#define LDS_ADD_INGAMESHOP_ITEM_AMULETSAPPHIRE		// ÀÎ°ÔÀÓ˜Þ ¾ÆÀÌÅÛ // ½Å±Ô »çÆÄÀÌ¾î(³ì»ö) ¸ñ°ÉÀÌ// MODEL_HELPER+115
			#define LDS_ADD_INGAMESHOP_ITEM_KEYSILVER			// ÀÎ°ÔÀÓ˜Þ ¾ÆÀÌÅÛ // ½Å±Ô Å°(½Ç¹ö)				// MODEL_POTION+112
			#define LDS_ADD_INGAMESHOP_ITEM_KEYGOLD				// ÀÎ°ÔÀÓ˜Þ ¾ÆÀÌÅÛ // ½Å±Ô Å°(°ñµå)				// MODEL_POTION+113
			#define LDS_ADD_INGAMESHOP_ITEM_PASSCHAOSCASTLE		// ÀÎ°ÔÀÓ˜Þ ¾ÆÀÌÅÛ // Ä«¿À½ºÄÉ½½ ÀÚÀ¯ÀÔÀå±Ç		// MODEL_HELPER+121
			#define LDS_ADD_INGAMESHOP_ITEM_PRIMIUMSERVICE6		// ÀÎ°ÔÀÓ˜Þ ¾ÆÀÌÅÛ // ÇÁ¸®¹Ì¾ö¼­ºñ½º6Á¾			// MODEL_POTION+114~119
			#define LDS_ADD_INGAMESHOP_ITEM_COMMUTERTICKET4		// ÀÎ°ÔÀÓ˜Þ ¾ÆÀÌÅÛ // Á¤¾×±Ç4Á¾					// MODEL_POTION+126~129
			#define LDS_ADD_INGAMESHOP_ITEM_SIZECOMMUTERTICKET3	// ÀÎ°ÔÀÓ˜Þ ¾ÆÀÌÅÛ // Á¤·®±Ç3Á¾					// MODEL_POTION+130~132
		#endif	//INGAMESHOP_ITEM01

		//------------------------------------------------
		// 4. ¹ö±×¼öÁ¤
		#define PBG_FIX_RESETFRUIT_CAL							// ¸®¼Â¿­¸Å °æ°íÃ¢ ±âº» ½ºÅÈÃß°¡ °è»ê ¹ö±×¼öÁ¤(09.10.25)
		#define ASG_MOD_QUEST_WORDS_SCRIPTS						// QuestWords.txt ¾Ö´Ï ¹øÈ£¿Í È¸¼ö Á¦°Å (2009.10.22) (QuestWords.txt ÀÏº» Àû¿ë½Ã µðÆÄÀÎ Á¤¸®ÇÒ °Í)
		#define LDK_FIX_GM_WEBZEN_NAME							// GMÆÇº°½Ã id¿¡ webzenÀÌ¶õ ´Ü¾î°¡ µé¾î°¡µµ gmÀÎÁ¤(09.10.13)
	#endif // SEASON5_PART2

	//-----------------------------------------------------------------------------
	// [ ºÎºÐ À¯·áÈ­ 8Â÷]
	#define ADD_TOTAL_CHARGE_8TH
	#ifdef  ADD_TOTAL_CHARGE_8TH
		#define YDG_ADD_HEALING_SCROLL						// Ä¡À¯ÀÇ ½ºÅ©·Ñ (2009.12.03)

		#define LJH_ADD_RARE_ITEM_TICKET_FROM_7_TO_12		// Èñ±Í¾ÆÀÌÅÛ Æ¼ÄÏ 7-12 Ãß°¡ (2010.02.12)
		#define LJH_ADD_FREE_TICKET_FOR_DOPPELGANGGER_BARCA_BARCA_7TH	//µµÇÃ°»¾î, ¹Ù¸£Ä«, ¹Ù¸£Ä« Á¦ 7¸Ê ÀÚÀ¯ÀÔÀå±Ç Ãß°¡(2010.02.17)

		#define YDG_ADD_SKELETON_CHANGE_RING				// ½ºÄÌ·¹Åæ º¯½Å¹ÝÁö (2009.12.03)
		#define ADD_SKELETON_PET							// ½ºÄÌ·¹Åæ Æê (2009.12.03)
		#ifdef  ADD_SKELETON_PET
			#define YDG_ADD_SKELETON_PET					// ½ºÄÌ·¹Åæ Æê 
			#define YDG_FIX_SKELETON_PET_CREATE_POSITION	// ½ºÄÌ·¹Åæ Æê »ý¼º À§Ä¡ ¼öÁ¤ (2010.01.26)
			#ifndef KJH_ADD_PERIOD_ITEM_SYSTEM					// #ifndef
				#define LJH_FIX_IGNORING_EXPIRATION_PERIOD		// ÀÏº»¿¡´Â ¾ÆÁ÷ ±â°£Á¦°¡ Àû¿ëµÇÁö ¾ÊÀ¸¹Ç·Î bExpiredPeriod¸¦ »ç¿ëÇÏÁö ¾Êµµ·Ï ¼öÁ¤(2010.02.11) - ±â°£Á¦ ½Ã½ºÅÛ µµÀÔ ÈÄ »èÁ¦
			#endif // KJH_ADD_PERIOD_ITEM_SYSTEM
			#define YDG_FIX_CHANGERING_STATUS_EXPIRE_CHECK	// º¯½Å¹ÝÁö ½ºÅÈ¿Ã¸±¶§ ¸¸·á Ã¼Å© (2010.01.25)
			#define LDK_FIX_PC4_GUARDIAN_DEMON_INFO			// µ¥¸ó Ä³¸¯ÅÍÁ¤º¸Ã¢¿¡ °ø°Ý·Â,¸¶·Â,ÀúÁÖ·Â Ãß°¡ µ¥¹ÌÁö Àû¿ë(09.10.15) - Ä³¸¯ÅÍÁ¤º¸Ã¢¿¡ Æê Á¾·ù¿¡ ÀÇÇÑ ÀúÁÖ·Â Ãß°¡ µ¥¹ÌÁö¸¦ Àû¿ë ½ÃÅ°±â À§ÇØ Ãß°¡
			#define LJH_FIX_NOT_POP_UP_HIGHVALUE_MSGBOX_FOR_BANNED_TO_TRADE	//NPC¿¡°Ô ÆÇ¸Å ±ÝÁöµÈ ¾ÆÀÌÅÛÀ» ÆÇ¸ÅÇÏ·Á°í ÇÒ¶§ °í°¡ÀÇ ¾ÆÀÌÅÛÀÌ¶ó°í ³ª¿À´Â ¸Þ¼¼Áö Ã¢À» ¾È³ª¿À°Ô ¼öÁ¤(10.02.19)
		#endif  //ADD_SKELETON_PET

		#define YDG_MOD_CHANGE_RING_EQUIPMENT_LIMIT			// º¯½Å¹ÝÁö ÇÑÁ¾·ù¸¸ ÀåºñÇÏµµ·Ï ¼öÁ¤ (2009.12.28)
	#endif  //ADD_TOTAL_CHARGE_8TH

	//-----------------------------------------------------------------------------
	// [ ½ÃÁð 5 - Part 1 ÀÌÈÄ ¹ö±×¼öÁ¤]

	// - ÀÌµ¿¼®
	#define LDS_ADD_SET_BMDMODELSEQUENCE_					// BMD Å¬·¡½ºÀÇ »ç¿ëµÇÁö ¾Ê´Â º¯¼öÀÎ BmdSequenceID¿¡ BMDSequence ¼³Á¤. (09.08.05)
	#define LDS_FIX_MEMORYLEAK_BMDWHICHBONECOUNTZERO		// BoneCount==0 ÀÎ BMDµé¿¡ ´ëÇÑ BMD Destruct ½ÃÁ¡¿¡ ¹ß»ýÇÏ´Â ¸Þ¸ð¸® ¸¯ FIX. (09.08.13)
	#define LDS_FIX_MEMORYLEAK_0908_DUPLICATEITEM			// DuplicateItem() ³»¿¡ Èü ¿µ¿ª¿¡ »ý¼ºµÈ ItemÀÇ ¸Þ¸ð¸® ¹ÝÈ¯ ¹ÌÃ³¸®·Î ¸Þ¸ð¸® ¸¯ FIX. (09.08.13)
	#define LDS_FIX_GLERROR_WRONG_WRAPMODEPARAMETER			// ImageOpen½Ã WrapMode Param °ªÀÌ Àß¸øµÇ¾î, OpenGLERROR°¡ ¶ß¸ç ÀÌ¿¡ ´ëÇÑ FIX. (MR0 Àû¿ë ½Ã Ä¡¸íÀû ¿À·ù°¡ ¹ß»ýÇÏ¹Ç·Î..) (09.08.18)
	#define LDS_ADD_EG_ADDMONSTER_ACTION_GUARDIANDEFENDER	// Á¦±¹ ¼öÈ£±º ¹æÆÐº´ÀÇ ¼­¹ö·ÎºÎÅÍÀÇ ¸ó½ºÅÍ ½ºÅ³==>Action ¿¬°á ÀÛ¾÷. (09.08.18)
	#define LDS_ADD_EG_ADDMONSTER_ACTION_GUARDIANDEFENDER_EX	// ¹æÆÐº´ÀÇ 1¹ø ½ºÅ³(44)µ¿ÀÛÀÇ ±âÁ¸¹æ½Ä°ú ´Ù¸¥ ¹æ½ÄÀÇ ¿¡´Ï¸ÞÀÌ¼Ç È£Ãâ Àç ¼öÁ¤ (09.08.21)
	#define LDS_FIX_EG_COLOR_CHANDELIER							// release ¸ðµå¼­¸¸ Á¦±¹ ¼öÈ£±º ÁÖ¸»¸Ê ¼§µé¸®¿¡ ¿¬±â »ö ´Ù¸¥ ¹ö±× ¼öÁ¤ (09.08.21)
	#define LDS_ADD_EG_ADDMONSTER_ACTION_GUARDIANDEFENDER_EX2	// ¹æÆÐº´ 44¹ø ¹æÆÐ¸·±â ½ºÅ³½Ã °£È¤ ·»´ý¹æÇâ ¹Ù¶óº¸´Â ¹ö±× ¼öÁ¤ (09.08.24)
	#define LDS_FIX_SKILLKEY_DISABLE_WHERE_EG_ALLTELESKILL	// ¹ý»ç ÅÚ·¹°è¿­(ÅÚ·¹Å°³×½Ã½º,¼ø°£ÀÌµ¿) ½ºÅ³µéÀº Á¦±¹¼öÈ£±º ¿µ¿ª¿¡¼­ »ç¿ë ¸øÇÏµµ·Ï ¼³Á¤(09.08.28)
	#define LDS_FIX_EG_JERINT_ATTK1_ATTK2_SPEED				// Á¦±¹¼öÈ£±º Á¦¸°Æ® °ø°Ý1, °ø°Ý2 ¼Óµµ Àß¸øµÈ ¼öÄ¡·Î FIX ÀÛ¾÷ (09.09.04)
	#define LDS_MOD_ANIMATIONTRANSFORM_WITHHIGHMODEL			// AnimationTransformWithAttachHighModelÇÔ¼ö¿¡¼­ ÇöÀç arrayBone¸¸ ÇÊ¿äÇÒ °æ¿ì´Â TransformÀ¸·Î BoneÀÌ Vertices¿¡ °öÇÏÁö ¾Êµµ·Ï º¯°æ. (2009.09.09)
	#define LDS_ADD_ANIMATIONTRANSFORMWITHMODEL_USINGGLOBALTM	// AnimationTransformWithAttachHighModelÇÔ¼ö³» TMArray°¡ LocalÀÎ ÀÌÀ¯·Î ÀÌÈÄ ¿¬»ê¿¡ TMÀÌ Point¸¦ ÀÒ¾î¹ö¸®´Â Çö»óÀ¸·Î TMÀ» Global À¸·Î º¯°æ. (09.09.07)
	#define LDS_FIX_EG_JERINT_ANIMATION_AND_SWORDFORCE_SPEED	// Á¦¸°Æ®ÀÇ °ø°Ý ¼Óµµ ¹× °Ë±â ½Ã°£ ¹üÀ§ ÀçÀÛ¾÷ (09.09.08) 

	// - ¾ç´ë±Ù
	#define YDG_FIX_DOPPELGANGER_BUTTON_COLOR				// µµÇÃ°»¾î UI ¹öÆ° Àá±Û¶§ »ö ÀÌ»óÇÑ ¹®Á¦ (2009.08.14)
	#define YDG_MOD_DOPPELGANGER_END_SOUND					// µµÇÃ°»¾î Á¾·á »ç¿îµå Ãß°¡ (2009.08.20)
	#define YDG_MOD_TOURMODE_MAXSPEED						// Åõ¾î¸ðµå ÃÖ°í¼Óµµ ¿Ã¸² (2009.07.10)

	// - ¾È»ó±Ô
	#define ASG_FIX_QUEST_PROTOCOL_ADD						// ½Å±Ô Äù½ºÆ® ÇÁ·ÎÅäÄÝ Ãß°¡.(2009.09.07)

	// - ¹Úº¸±Ù
	#define PBG_ADD_NEWLOGO_IMAGECHANGE						// ·ÎµùÈ­¸é ÀÌ¹ÌÁö º¯°æ(09.08.12)

	// - ¹ÚÁ¾ÈÆ
	#define PJH_NEW_SERVER_SELECT_MAP						// ¼­¹ö ¼±ÅÃÈ­¸é º¯°æ(09.08.17)


	//-----------------------------------------------------------------------------
	// [ ½ÃÁð 5 - Part 1]  - µµÇÃ°»¾î, Á¦±¹¼öÈ£±º, ½ÅÄù½ºÆ®½Ã½ºÅÛ (09.09.11)
	#define SEASON5										
	#ifdef SEASON5
		//------------------------------------------------
		// 1. µµÇÃ°»¾î
		// - ¾ç´ë±Ù
		#define YDG_ADD_DOPPELGANGER_EVENT						// µµÇÃ°»¾î ÀÌº¥Æ® (2009.04.22)
		#ifdef YDG_ADD_DOPPELGANGER_EVENT
			#define YDG_ADD_MAP_DOPPELGANGER1					// µµÇÃ°»¾î ¸Ê1 (¶óÅ¬¸®¿Âº£ÀÌ½º) (2009.03.22)
			#define YDG_ADD_MAP_DOPPELGANGER2					// µµÇÃ°»¾î ¸Ê2 (ºÒÄ«´©½ºº£ÀÌ½º) (2009.03.22)
			#define YDG_ADD_MAP_DOPPELGANGER3					// µµÇÃ°»¾î ¸Ê3 (¾ÆÆ²¶õ½ºº£ÀÌ½º) (2009.03.22)
			#define YDG_ADD_MAP_DOPPELGANGER4					// µµÇÃ°»¾î ¸Ê4 (Ä­Åõ¸£1Â÷º£ÀÌ½º) (2009.03.22)
			#define YDG_ADD_DOPPELGANGER_MONSTER				// µµÇÃ°»¾î ¸ó½ºÅÍ Ãß°¡ (2009.05.20)
			#define YDG_ADD_DOPPELGANGER_NPC					// µµÇÃ°»¾î NPC ·ç°¡µå Ãß°¡ (2009.05.20)
			#define YDG_ADD_DOPPELGANGER_ITEM					// µµÇÃ°»¾î ¾ÆÀÌÅÛ Ãß°¡ (2009.05.20)
			#define YDG_ADD_DOPPELGANGER_UI						// µµÇÃ°»¾î UI Ãß°¡ (2009.05.20)
			#define YDG_ADD_DOPPELGANGER_PROTOCOLS				// µµÇÃ°»¾î ÇÁ·ÎÅäÄÝ Ãß°¡ (2009.06.23)
			#define YDG_ADD_DOPPELGANGER_PORTAL					// µµÇÃ°»¾î ¸Ê Æ÷Å» Ãß°¡ (2009.07.30)
			#define YDG_ADD_DOPPELGANGER_SOUND					// µµÇÃ°»¾î »ç¿îµå Ãß°¡ (2009.08.04)
		#endif	// YDG_ADD_DOPPELGANGER_EVENT

		//------------------------------------------------
		// 2. Á¦±¹¼öÈ£±º
		// Á¦±¹ ¼öÈ£±º ÆÄÆ¼ - ÀÌµ¿¼®, ÀÌµ¿±Ù
		#define LDS_ADD_EMPIRE_GUARDIAN							// Á¦±¹ ¼öÈ£±º
		#ifdef LDS_ADD_EMPIRE_GUARDIAN
			// - ÀÌµ¿¼®
			#define LDS_ADD_MAP_EMPIREGUARDIAN2					// Á¦±¹ ¼öÈ£±º ¸Ê 2   (È­,  ±Ý)
			#define LDS_ADD_MAP_EMPIREGUARDIAN4					// Á¦±¹ ¼öÈ£±º ¸Ê 2   (ÀÏ	  )
			#define LDS_ADD_EG_4_MONSTER_WORLDBOSS_GAIONKALEIN	// Á¦±¹ ¼öÈ£±º ¸Ê 4   (ÀÏ	  )¸ó½ºÅÍ ¿ùµå º¸½º °¡ÀÌ¿Â Ä«·¹ÀÎ	(504/164)
			#define LDS_ADD_EG_4_MONSTER_JELINT					// Á¦±¹ ¼öÈ£±º ¸Ê 4   (ÀÏ	  )¸ó½ºÅÍ °¡ÀÌ¿Â º¸ÁÂ°ü Á¦¸°Æ®		(505/165)
			#define LDS_ADD_EG_3_4_MONSTER_RAYMOND				// Á¦±¹ ¼öÈ£±º ¸Ê 3,4 (¼öÅä,ÀÏ)¸ó½ºÅÍ ºÎ»ç·É°ü ·¹ÀÌ¸óµå			(506/166)
			#define LDS_ADD_EG_2_4_MONSTER_ERCANNE				// Á¦±¹ ¼öÈ£±º ¸Ê 2,4 (È­±Ý,ÀÏ)¸ó½ºÅÍ ÁöÈÖ°ü ¿¡¸£Ä­´À			(507/167)
			#define LDS_ADD_EG_2_MONSTER_2NDCORP_VERMONT		// Á¦±¹ ¼öÈ£±º ¸Ê 2   (È­,  ±Ý)¸ó½ºÅÍ 2±º´ÜÀå ¹ö¸óÆ®			(509/169)
			#define LDS_ADD_EG_2_MONSTER_ARTICLECAPTAIN			// Á¦±¹ ¼öÈ£±º ¸Ê 2   (È­,  ±Ý)¸ó½ºÅÍ ±â»ç´ÜÀå					(514/174)
			#define LDS_ADD_EG_2_MONSTER_GRANDWIZARD			// Á¦±¹ ¼öÈ£±º ¸Ê 2   (È­,  ±Ý)¸ó½ºÅÍ ´ë¸¶¹ý»ç					(515/176)

			// - ÀÌµ¿±Ù - ¹Ì¸® defineÀâÀºÈÄ Â÷ÈÄ defineÁ¤¸® ÀÛ¾÷ ¿¹Á¤
			#define LDK_ADD_EG_MONSTER_DEASULER					// Á¦±¹ ¼öÈ£±º 1±º´ÜÀå µ¥½½·¯									(508/168)
			#define LDK_ADD_EG_MONSTER_DRILLMASTER				// Á¦±¹ ¼öÈ£±º Á¦±¹¼öÈ£±ºÀüÅõ±³°ü
			#define LDK_ADD_EG_MONSTER_QUARTERMASTER			// Á¦±¹ ¼öÈ£±º º´ÂüÀå±³
			#define LDK_ADD_EG_MONSTER_CATO						// Á¦±¹ ¼öÈ£±º 2±º´ÜÀå Ä«Åä
			#define LDK_ADD_EG_MONSTER_ASSASSINMASTER			// Á¦±¹ ¼öÈ£±º ¾Ï»ìÀå±³
			#define LDK_ADD_EG_MONSTER_RIDERMASTER				// Á¦±¹ ¼öÈ£±º ±â¸¶´ÜÀå
			#define LDK_ADD_EG_MONSTER_GALLIA					// Á¦±¹ ¼öÈ£±º 4±º´ÜÀå °¥¸®¾Æ

			#define LDK_FIX_EG_DOOR_ROTATION_FIXED				// Á¦±¹ ¼öÈ£±º ¼º¹® ¾Ç·É¿¡ ÀÇÇÑ È¸Àü¼öÁ¤(2009.07.21)
			#define LDK_ADD_EG_DOOR_EFFECT						// Á¦±¹ ¼öÈ£±º ¸Ê ¼º¹® ÆÄ±« ÀÌÆåÆ®
			#define LDK_ADD_EG_STATUE_EFFECT					// Á¦±¹ ¼öÈ£±º ¸Ê ¼®»ó ÆÄ±« ÀÌÆåÆ®

			//¸ó½ºÅÍ - °øÅë
			#define	LDK_ADD_EG_MONSTER_RAYMOND					// Á¦±¹ ¼öÈ£±º ºÎ»ç·É°ü ·¹ÀÌ¸óµå (¼ö, ÀÏ)
			#define LDK_ADD_EG_MONSTER_KNIGHTS					// Á¦±¹ ¼öÈ£±º ±â»ç´Ü	Imperial Guardian Knights	520 - 181	
			#define LDK_ADD_EG_MONSTER_GUARD					// Á¦±¹ ¼öÈ£±º È£À§º´	Imperial Guardian guard		521 - 182
			#define ASG_ADD_EG_MONSTER_GUARD_EFFECT				// Á¦±¹ ¼öÈ£±º È£À§º´ (°Ë±â ÀÌÆåÆ®)
			#define LDS_ADD_EG_MONSTER_GUARDIANDEFENDER			// Á¦±¹ ¼öÈ£±º ¸Ê 1234(¸ðµç¿äÀÏ)¸ó½ºÅÍ ¼öÈ£±º ¹æÆÐº´			(518/178)
			#define LDS_ADD_EG_MONSTER_GUARDIANPRIEST			// Á¦±¹ ¼öÈ£±º ¸Ê 1234(¸ðµç¿äÀÏ)¸ó½ºÅÍ ¼öÈ£±º Ä¡À¯º´			(519/179)

			//¸Ê
			#define LDK_ADD_MAPPROCESS_RENDERBASESMOKE_FUNC		// MapProcess¿¡ RenderBaseSmoke Ã³¸® ÇÔ¼ö Ãß°¡(09.07.31)
			#define	LDK_ADD_MAP_EMPIREGUARDIAN1					// Á¦±¹ ¼öÈ£±º ¸Ê 1 (¿ù, ¸ñ)
			#define	LDK_ADD_MAP_EMPIREGUARDIAN3					// Á¦±¹ ¼öÈ£±º ¸Ê 3 (¼ö, Åä)

			#define LDK_ADD_EMPIRE_GUARDIAN_DOOR_ATTACK			// Á¦±¹ ¼öÈ£±º ¼º¹®Àº ¸Ê¼Ó¼º¹«±âÇÏ°í °ø°Ý°¡´ÉÇÏµµ·ÏÇÔ (09.08.06)

			//UI
			#define LDK_ADD_EMPIREGUARDIAN_UI					// Á¦±¹ ¼öÈ£±º ui
			//ÇÁ·ÎÅäÄÝ
			#define LDK_ADD_EMPIREGUARDIAN_PROTOCOLS			// Á¦±¹ ¼öÈ£±º ÇÁ·ÎÅäÄÝ
			//item
			#define LDK_ADD_EMPIREGUARDIAN_ITEM					// Á¦±¹ ¼öÈ£±º ¾ÆÀÌÅÛ(4Á¾:¸í·É¼­, Á¾ÀÌÂÊÁö, ¼¼Å©·Î¹ÌÄÜ, Á¶°¢)

			//±âÅ¸ RESOURCE - °øÅë»çÇ× 
			#define LDS_ADD_RESOURCE_FLARERED					// FLARE_RED.jpg È¿°ú Ãß°¡

			//±âÅ¸ - °øÅë»çÇ×	
			#define LDS_ADD_MODEL_ATTACH_SPECIFIC_NODE_			// Æ¯Á¤ ¸ðµ¨ÀÇ Æ¯Á¤ ³ëµå¿¡ ´Ù¸¥ Æ¯Á¤ ¸ðµ¨À» ATTACH ÇÏ´Â ÇÔ¼ö¸¦ Ãß°¡ÇÕ´Ï´Ù. (09.06.12)
			#define LDS_ADD_INTERPOLATION_VECTOR3				// vec3_tÀÇ º¸°£ ÇÔ¼ö¸¦ zzzmathlib.h¿¡ Ãß°¡. (09.06.24)
			#define LDS_MOD_INCREASE_BITMAPIDXBLURNUMBERS		// BITMAP_BLUR ÀÎµ¦½º ¼ö¸¦ ±âÁ¸4°³ ¿¡¼­ ½Ç»ç¿ë°¹¼öÀÎ 10°³·Î ´Ã¸³´Ï´Ù. (09.07.02)
			#define LDS_ADD_EFFECT_FIRESCREAM_FOR_MONSTER		// ´ÙÅ©·ÎµåÀÇ ÆÄÀÌ¾î½ºÅ©¸² ½ºÅ³¿¡ Æ¯Á¤ ¸ó½ºÅÍ(¿¡¸£Ä­´À)ÀÇ ÆÄÀÌ¾î½ºÅ©¸²À» Ãß°¡ÇÕ´Ï´Ù. (09.07.07)
			#define LDS_MOD_EFFECTBLURSPARK_FORCEOFSWORD		// EffectBlurSpark ÀÇ °Ë±âµéÀÇ °¹¼ö Á¦ÇÑ¿¡ ¹®Á¦·Î °Ë±â°¡ °£È¤ ±úÁö´Â Çö»óÀ¸·Î ºÎºÐ ¼öÁ¤. (09.07.28)
			#define LDS_ADD_MAP_EMPIREGUARDIAN4_MAPEFFECT		// ÁÖ¸»¸ÊÀÇ ¸Ê Effect¿¡ Ãß°¡µÇ´Â ÆÄÆ¼Å¬, EFFECTµé.. 
			#define LDS_FIX_MEMORYLEAK_DESTRUCTORFORBMD			// BMDÀÇ ¼Ò¸êÀÚ·Î ÀÎÇÑ ±âÁ¸ BMD¿¡¼­ ¹ß»ýÇÑ memoryleak FIXED.. (2009.08.13)

			// - ¹Úº¸±Ù
			#define PBG_ADD_RAYMOND_GUARDIANPRIEST_MONSTER_EFFECT	// (·¹ÀÌ¸óµå)(Ä¡À¯º´)¸ó½ºÅÍ ÀÌÆåÆ® ÀÛ¾÷(09.07.02)

			// - ±èÀçÈñ
			#define KJH_ADD_EG_MONSTER_KATO_EFFECT					// 3±º´ÜÀå Ä«Åä ÀÌÆÑÆ® (09.07.20)
			#define KJH_ADD_EG_MONSTER_GUARDIANDEFENDER_EFFECT		// ¼öÈ£±º ¹æÆÐº´ ÀÌÆÑÆ® (09.07.31)
		#endif //LDS_ADD_EMPIRE_GUARDIAN

		//------------------------------------------------
		// 3. ½Å Äù½ºÆ® ½Ã½ºÅÛ
		// - ¾È»ó±Ô
		#define ASG_ADD_NEW_QUEST_SYSTEM						// ´º Äù½ºÆ® ½Ã½ºÅÛ(2009.05.20)
		#ifdef ASG_ADD_NEW_QUEST_SYSTEM
			#define ASG_ADD_UI_QUEST_PROGRESS					// Äù½ºÆ® ÁøÇà Ã¢(NPC¿ë)(2009.05.27)
		#ifndef ASG_ADD_UI_NPC_DIALOGUE								// #ifndef Á¤¸®½Ã ASG_ADD_UI_NPC_MENU µðÆÄÀÎ ¸ðµÎ »èÁ¦.
			#define ASG_ADD_UI_NPC_MENU							// NPC ¸Þ´ºÃ¢(2009.06.17)
		#endif	// ASG_ADD_UI_NPC_DIALOGUE
			#define ASG_ADD_UI_QUEST_PROGRESS_ETC				// Äù½ºÆ® ÁøÇà Ã¢(±âÅ¸¿ë)(2009.06.24)
			#define ASG_MOD_UI_QUEST_INFO						// Äù½ºÆ® Á¤º¸ Ã¢(2009.07.06)
			#define ASG_MOD_3D_CHAR_EXCLUSION_UI				// 3D Ä³¸¯ÅÍ Ç¥ÇöÀÌ ¾ø´Â UI·Î ¹Ù²Þ.(2009.08.03)
			//(!ÁÖÀÇ!) UI¿¡ 3DÄ³¸¯ÅÍ Ç¥ÇöÀÌ Ãß°¡ µÇ¸é ¿ø·¡´ë·Î µÇµ¹·Á¾ß µÇ¹Ç·Î Á¤¸®ÇÏÁö ¸» °Í.
		#endif	// ASG_ADD_NEW_QUEST_SYSTEM

		//------------------------------------------------
		// 4. Ãß°¡	

		// ½ÃÁð 5 ´ÞÅä³¢ ÀÌº¥Æ®							
		#define KJH_PBG_ADD_SEVEN_EVENT_2008					// ±¹³» »ó¿ëÈ­ 7ÁÖ³â ÀÌº¥Æ®	(´ÞÅä³¢)(2008.10.30) 
		#define LJH_MOD_POSITION_OF_REGISTERED_LUCKY_COIN		// Çà¿îÀÇ µ¿Àü µî·Ï Á¦ÇÑ ¼ö°¡ 2^31ÀÌ µÊ¿¡ µû¶ó µ¿ÀüÀÌ¹ÌÁö¿Í °ãÄ¡´Â Çö»ó ¸·±âÀ§ÇØ ¼öÁ¤(2010.02.16)							
		#define YDG_MOD_SEPARATE_EFFECT_SKILLS					// ½ºÅ³ °Ë»çÇÏ´Â ÀÌÆåÆ® ºÐ¸® (ºí·¯µå ¾îÅÃ µî) (2009.08.10)
		#define ASG_ADD_NEW_DIVIDE_STRING						// »õ·Î¿î ¹®Àå ³ª´©±â ±â´É.(2009.06.08)
		#define PBG_ADD_DISABLERENDER_BUFF						// ·£´õ¾ÈÇÒ ¹öÇÁ ÀÌ¹ÌÁö Ã³¸®(09.08.10)

		//------------------------------------------------
		// 5. ÇØ¿Ü³»ºÎÅ×¼· ¹ö±×¼öÁ¤
		#define LDK_FIX_CHARACTER_UNLIVE_MOUSE_LOCK				// ¸ÊÀÌµ¿½Ã Ä³¸¯ÅÍ »èÁ¦ÈÄ ÀÌµ¿ ºÒ°¡(09.10.29)
		#define LDK_FIX_EMPIREGUARDIAN_UI_HOTKEY				// Á¦±¹ ¼öÈ£±ºnpc uiÃ¢ ¿­·ÁÀÖÀ»¶§ Ä³¸¯Ã¢, ÀÎº¥Ã¢ ¾È¿­¸®µµ·ÏÇÑ´Ù(09.10.28)
		#define LDK_FIX_PETPOSITION_MULTIPLY_OWNERSCALE			// Ä³¸¯ÅÍ ¼±ÅÃÃ¢ ¿¡¼­ Ä³¸¯ÅÍ Å©±â¿¡ µû¶ó ÆêÀ§Ä¡ ¼öÁ¤(09.10.28)
		#define YDG_FIX_DOPPELGANGER_NPC_WINDOW_SCREEN_SIZE		// µµÇÃ°»¾î NPCÃ¢ ¿­·ÈÀ»‹š ÆÄÆ¼Ã¢°ú °ãÃÄÁö´Â ¹®Á¦(09.10.28)
		#define YDG_FIX_MASTERLEVEL_PARTY_EXP_BONUS_BLOCK		// ¸¶½ºÅÍ·¹º§ÀÌ ÆÄÆ¼ °æÇèÄ¡ Áõ°¡ ¾ÆÀÌÅÛÀ» »çÁö ¸øÇÏµµ·Ï ¼öÁ¤(09.10.28)
		#define YDG_FIX_SETITEM_REQUIRED_STATUS_SECRET_POTION	// ºñ¾à »ç¿ë½Ã ¼¼Æ® ¾ÆÀÌÅÛ ÀåÂø Á¤º¸ Àß¸ø ³ª¿À´Â ¹ö±× ¼öÁ¤ (09.10.29)
		#define LJH_ADD_LOOK_FOR_MOVE_ILLEGALLY_BY_MSG			// À¯Àú°¡ Ã¤ÆÃ¸Þ¼¼Áö¸¦ ÀÌ¿ë ÀÌµ¿ÇÒ¼ö ¾ø´Â ¸Ê¿¡ ÀÌµ¿ÇÏ·Á ÇÏ´ÂÁö ÆÇÁ¤(2009.10.29)
		#define PBG_FIX_SETOPTION_CALCULATE_SECRET_POTION		// ºñ¾à°ü·Ã ¼¼Æ® ¿É¼Ç Àû¿ë¹ö±×(09.11.04)
				
		// ½ÃÁð 5 3Â÷ º»¼·¹öÁ¯ ¹ö±× ¼öÁ¤
		#define LJH_FIX_BUG_BUYING_AG_AURA_WHEN_USING_SD_AURA	// SDÁõ°¡ ¿À¶ó¸¦ ÇÏ¿ëÇÏ´Â Áß AG¿À¶ó¸¦ ±¸ÀÔÇÒ ¼ö ÀÖ´Â ¹ö±× ¼öÁ¤(09.11.16)
		#define PBG_FIX_JELINTNPC_TEXTWIDTH						// Á¦¸°Æ®npc ui¼³Á¤ ¹ö±× ¼öÁ¤(09.11.10)
		#define PBG_FIX_STOPBGMSOUND							// ·ÎµùÀÌÈÄ bgm»ç¿îµå Á¾·áµÇÁö ¾Ê´Â ¹ö±× ¼öÁ¤(09.11.10)
		#define PBG_FIX_SDELITE_OVERLAY							// sd¿¤¸®Æ® ¹°¾à °ãÃÄÁöÁö ¾Ê´Â ¹ö±× ¼öÁ¤(09.11.17)
		#define YDG_FIX_CURSEDTEMPLE_GAUGEBAR_ERROR				// È¯¿µ»ç¿ø ¼º¹° È¹µæ/µî·Ï °ÔÀÌÁö ¿À·ù ¼öÁ¤ (2009.12.03)
		#define LJH_FIX_ITEM_CANNOT_BE_EQUIPPED_AFTER_LOGOUT	// (JP_575)Àç ·Î±×ÀÎ ½Ã Âø¿ëÇÏ°í ÀÖ´ø ¼¼Æ® ¾ÆÀÌÅÛÀÇ ¿É¼Ç ¹ÌÀû¿ëÀ¸·Î ±× ¾ÆÀÌÅÛÀ» ´õÀÌ»ó Âø¿ëÇÒ¼ö ¾ø´Â ¹ö±× ¼öÁ¤(09.12.10)-> ÇÑ±¹°ú µ¿ÀÏÇÏ°Ô
		#define LJH_FIX_HERO_MOVES_EVEN_NOT_PRESENT				// (±¹³»¹ö±×)(JP_524)À¯ÀúÀÇ Ä³¸¯ÅÍ°¡ È­¸é¿¡ ¾øÀ»¶§µµ ÀÌµ¿ÇÒ ¼ö ÀÖ¾ú´ø ¹ö±× ¼öÁ¤ (¿¹:°ø¼º¼­¹öÀ¸·Î/¿¡¼­ ÀÌµ¿)(09.12.11)
		#define LJH_FIX_NOT_CALCULATED_BUFF						// ¼¼Æ®°è»ê°ú °ü·ÃµÇ¾î ¹öÇÁ°¡ Àû¿ëµÇÁö ¾Ê¾Ò´ø ¹ö±× ¼öÁ¤(2010.01.15)
	#endif	// SEASON5


	//-----------------------------------------------------------------------------
	// [ ºÎºÐ À¯·áÈ­ 7Â÷ ] 
	#define ADD_TOTAL_CHARGE_7TH
	#ifdef ADD_TOTAL_CHARGE_7TH
		// - ¾ç´ë±Ù
		#define YDG_ADD_CS7_CRITICAL_MAGIC_RING		// Ä¡¸í¸¶¹ý¹ÝÁö
		#define YDG_ADD_CS7_MAX_AG_AURA				// AGÁõ°¡ ¿À¶ó
		#define YDG_ADD_CS7_MAX_SD_AURA				// SDÁõ°¡ ¿À¶ó
		#define YDG_ADD_CS7_PARTY_EXP_BONUS_ITEM	// ÆÄÆ¼ °æÇèÄ¡ Áõ°¡ ¾ÆÀÌÅÛ
		#define YDG_ADD_CS7_ELITE_SD_POTION			// ¿¤¸®Æ® SDÈ¸º¹ ¹°¾à
		#define YDG_MOD_AURA_ITEM_EXCLUSIVELY_BUY	// ¿À¶ó Áßº¹ ±¸ÀÔ ¸·±â (09.11.02)

		// - ÀÌµ¿±Ù
		#define LDK_MOD_PETPROCESS_SYSTEM			// ÆêÇÁ·Î¼¼½º ¾÷µ¥ÀÌÆ® ¼ø¼­ º¯°æ(¾Ö´Ï¸ÞÀÌ¼Ç ¼Óµµ ÀÓÀÇ º¯°æ °¡´É)(2009.09.11)
		#define LDK_ADD_CS7_UNICORN_PET				// À¯´ÏÄÜ Æê 
		#define LDK_FIX_CS7_UNICORN_PET_INFO		// À¯´ÏÄÜ Æê Ä³¸¯ÅÍ Á¤º¸Ã¢ ¹æ¾î·Â Ãß°¡

		// - ¹Úº¸±Ù
		#define PBG_ADD_AURA_EFFECT					// AG SD Áõ°¡ ¿À¶ó ÀÌÆåÆ®
	#endif //ADD_TOTAL_CHARGE_7TH

	//-----------------------------------------------------------------------------
	// [ ½ÃÁð 4.5 ÀÌÈÄ ¹ö±×¼öÁ¤ ] 
	// - ±èÀçÈñ
	#define KJH_FIX_MOVE_HERO_MOUSE_CLICK_EFFECT			// Ä³¸¯ÅÍ ÀÌµ¿½Ã ¸¶¿ì½ºÅ¬¸¯ ÀÌÆÑÆ®°¡ ÀÌµ¿ÇÏÁö ¸øÇÏ´Â °÷¿¡ ·»´õµÇ´Â ¹ö±× ¼öÁ¤ (09.03.04) [09.03.19 Å×¼·]
	#define KJH_FIX_GET_ZEN_SYSTEM_TEXT						// °×ºí»óÁ¡¿¡¼­ ¾ÆÀÌÅÛ±¸ÀÔ½Ã Á¨Áõ°¡ ¸Þ¼¼Áö°¡ ³ª¿À´Â ¹®Á¦. (09.03.18) [09.03.19 Å×¼·]
	#define KJH_FIX_WOPS_K33695_EQUIPABLE_DARKLOAD_PET_ITEM	// ´ÙÅ©·Îµå°¡ ÀÎº¥¿¡ ÆêÀ» ¼ÒÀ¯ÇÏ°í ÀÖÀ»¶§, ÅøÆÁ¿¡ Âø¿ëºÒ°¡·Î ³ª¿À´Â ¹ö±×¼öÁ¤ (09.04.27)
	#define KJH_FIX_WOPS_K33479_SELECT_CHARACTER_TO_HEAL	// Ä³¸¯ÅÍ¿¡°Ô µÑ·¯½×¿´À»¶§, ¿äÁ¤ÀÇ Ä¡·á½ºÅ³°­È­ÀÌÈÄ Ä³¸¯ÅÍ ¼±ÅÃÀÌ Àß ¾ÈµÇ¾îÁö´Â ¹ö±×¼öÁ¤ (09.04.27)
	#define KJH_FIX_CHAOTIC_ANIMATION_ON_RIDE_PET			// ÆêÀ»Å¸°í ´ÙÅ©·Îµå Ä«¿ÀÆ½µð¼¼ÀÌ¾î ½ºÅ³½Ã ¾Ö´Ï¸ÞÀÌ¼Ç¼öÁ¤ (08.12.18)

	// - ÃÖ¼®±Ù
	#define CSK_FIX_UI_FUNCTIONNAME							// UI°ü·Ã ÇÔ¼ö¸í º¯°æ(2009.01.22) [2009.03.26 Å×¼·]
	#define CSK_FIX_ANIMATION_BLENDING						// ¾Ö´Ï¸ÞÀÌ¼Ç ºí·»µùÂÊ ºí·»µå ¾ÈµÇ°Ô ¿É¼Ç ÁÖ°Ô ¼öÁ¤(2009.01.29) [2009.03.26 Å×¼·]
	#define CSK_FIX_ADD_EXEPTION							// dmpÆÄÀÏ ºÐ¼®ÇØº¸´Ï getTargetCharacterKey ÇÔ¼ö¿¡¼­ Æ¨±â´Â°É·Î ¿¹ÃøµÇ¼­ ¿¹¿ÜÃ³¸® Ãß°¡(2009.01.29) [2009.03.26 Å×¼·]

	// - ¹Úº¸±Ù
	#define PBG_FIX_PKFIELD_ATTACK							// PKFIELD¿¡¼­ ±æµå¿ø³¢¸® °ø°ÝµÇ´Â Çö»ó(09.04.02) [2009.04.06 Å×¼·]
	#define PBG_FIX_PKFIELD_CAOTIC							// Ä«¿ÀÆ½ µð¼¼ÀÌ¾î Å» °Í¿¡¼­ ¹ö±× ¼öÁ¤(09.04.07) [2009.04.13 Å×¼·]
	#define PBG_FIX_GUILDWAR_PK								// PKFIELD¿¡¼­ ±æµå¿ö Áß¿¡ ÀÏ¹ÝÀÎ °ø°Ý¾È¹Þ´Â ¹ö±× ¼öÁ¤(09.04.07) [2009.04.13 Å×¼·]
	#define PBG_FIX_CHAOTIC_ANIMATION						// Ä«¿ÀÆ½ µð¼¼ÀÌ¾î ¾Ö´Ï¸ÞÀÌ¼Ç ¼öÁ¤(09.06.11)
	#define PBG_FIX_DARK_FIRESCREAM_HACKCHECK				// ´ÙÅ© ÆÄÀÌ¾î½ºÅ©¸² (¼­¹ö)ÇÙÃ¼Å©°ü·Ã ¹ö±× ¼öÁ¤(09.06.22)
	#define PBG_MOD_INVENTORY_REPAIR_COST					// ÀÚµ¿¼ö¸®±Ý¾× ÇÏÇâÁ¶Á¤(09.06.08)
	#define PBG_MOD_LUCKYCOINEVENT							// Çà¿îÀÇµ¿Àü 255°³ ÀÌ»ó µî·ÏµÇÁö ¾Êµµ·Ï ÀÌº¥Æ® ¼öÁ¤(09.07.15)(´Ù¸¥UI¿ÍÀÇ¹ö±×,¿­°íÀÌµ¿¹ö±×)

	// - ÀÌµ¿±Ù
	#define LDK_FIX_INVENTORY_SPEAR_SCALE					// ÀÎº¥Åä¸® ¹«±â-spear Å©±â Ã³¸® if¹® ¼öÁ¤ [09.03.19 Å×¼·]

	// - ¾ç´ë±Ù
	#define YDG_FIX_INVALID_TERRAIN_LIGHT					// ¸Þ¸ð¸® Ä§¹ü ¹ö±× ¼öÁ¤(¸ÊÅø °ü·Ã) (2009.03.30) [2009.04.13 Å×¼·]
	#define YDG_FIX_MEMORY_LEAK_0905						// ¸Þ¸ð¸® ´©¼ö Á¦°Å (2009.05.11)
	#define YDG_FIX_INVALID_SET_DEFENCE_RATE_BONUS			// ¹æ¾î±¸¼¼Æ® Ãß°¡ ¹æ¾î·ÂÇ¥½Ã ¹æ¾î·ÂÀÇ 10%°¡ ¾Æ´Ï¶ó ¹æ¾îÀ²ÀÇ 10%ÀÓ (2009.04.15) [ÆÐÄ¡¾ÈµÊ] wops_32937
	#define YDG_FIX_STAFF_FLAMESTRIKE_IN_CHAOSCASLE			// Ä«¿À½ºÄ³½½¿¡¼­ ¸¶°Ë»ç ÁöÆÎÀÌ Âø¿ë½Ã ÇÃ·¹ÀÓ½ºÆ®¶óÀÌÅ©¿Í ºí·¯µå¾îÅÃ ¾ÆÀÌÄÜ»ö ¹®Á¦ (2009.04.15) [ÆÐÄ¡¾ÈµÊ] wops_34747
	#define YDG_FIX_LEFTHAND_MAGICDAMAGE					// ¸¶°Ë»ç°¡ ÁöÆÎÀÌ³ª ·é¹Ù½ºÅ¸µå¸¦ ¿Þ¼Õ¿¡ Ã¡À»¶§ ¸¶·ÂÀÌ ¿Ã¶ó°¡´Â ¹®Á¦ (2009.04.15) [ÆÐÄ¡¾ÈµÊ] wops_32641
	#define YDG_FIX_BLOCK_STAFF_WHEEL						// ¸¶°Ë»ç ÁöÆÎÀÌ, ¸Ç¼Õ È¸¿À¸®º£±â ¸·±â (2009.05.18)
	#define YDG_FIX_MEMORY_LEAK_0905_2ND					// ¸Þ¸ð¸® ´©¼ö Á¦°Å 2Â÷ (2009.05.19)
	#define YDG_FIX_CLIENT_SKILL_EFFECT_SIZE				// ÀÌÆåÆ® ¸¹À»¶§ ºí·¯µå¾îÅÃµî Å¬¶ó½ºÅ³ ¾È¸Ô´Â ¹ö±× (2009.07.13)

	// - ¾È»ó±Ô
	#define ASG_FIX_PICK_ITEM_FROM_INVEN					// ÀÎº¥Ã¢ Æ¯Á¤ Ä­¿¡¼­ ¾ÆÀÌÅÛÀ» Áý¾îµé¾úÀ» ¶§ Ä³¸¯Á¤º¸Ã¢¿¡¼­ ´É·ÂÄ¡°¡ º¯µ¿µÇ´Â ¹ö±×(2009.04.15) wops_33567
	#define ASG_FIX_MOVE_WIN_MURDERER1_BUG					// ¹«¹ýÀÚ(Ä«¿À) ·¹º§1ÀÏ ¶§ ¸Ê ÀÌµ¿Ã¢ Ç¥½Ã ¹ö±×.(2009.04.20) wops_34498

	// - ¹ÚÁ¾ÈÆ
	#define PJH_FIX_4_BUGFIX_33								// wops_34066

	// - ÀÌµ¿¼®
	#define LDS_FIX_MASTERSKILLKEY_DISABLE_OVER_LIMIT_MAGICIAN		// ¸¶½ºÅÍ ½ºÅ³ °­È­ µÈ ½ºÅ³µé¿¡ ´ëÇØ ¿ä±¸Ä¡ ¹Ì´Þ½Ã¿¡ ÀÌ¿ë ºÒ°¡. (09.04.22) no_wops
	#define LDS_FIX_SETITEM_WRONG_CALCULATION_IMPROVEATTACKVALUE	// ¼¼Æ®¾ÆÀÌÅÛÂø¿ë ÀÌÈÄ »ç¶ûÀÇ ¹¦¾àÀ» ¸ÔÀ¸¸é, ÄÉ¸¯ÅÍ Á¤º¸Ã¢¿¡ ÈûÁõ°¡ ½ºÅÈ¼öÄ¡°¡ ´Ù¸¥Çö»ó. (09.04.23) wops_35131
	#define LDS_FIX_MEMORYLEAK_PHYSICSMANAGER_RELEASE				// ¸Þ¸ð¸® ´©¼ö Á¦°Å, Physicsmanager Èü¿µ¿ª ¸Þ¸ð¸® ¹ÝÈ¯ Ã³¸®. (´ÙÅ©·Îµå ÄÉ¸¯ ·ÎµùÀÌÈÄ Á¾·á ½Ã ¸¯ ¹ß»ý)(09.05.25)
#endif // UPDATE_100527


/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//----------------------------------------------------------------------------------------------
// << ¹ö±×¼öÁ¤ ÆÐÄ¡ >>
//----------------------------------------------------------------------------------------------
// [2010.03.25 ±Û·Î¹ú 1.03v] - ÀÌµ¿¼®

#define LDS_FIX_MEMORYLEAK_0910_LOGINWIN						// ¸Þ¸ð¸®¸¯ FIXED. Logwin.cppÀÇ ¾ÆÀÌµð, ÆÐ½º¿öµå context°¡ Àç·Î±×ÀÎ ÀÌ³ª ¼­¹ö¼±ÅÃµîÀ¸·Î ÀçÈ£Ãâ½Ã¿¡ ¸Þ¸ð¸® ¹Ì¹ÝÈ¯À¸·Î ¸¯¹ß»ý. (09.11.30)
#define LDS_FIX_MEMORYLEAK_DUPLICATEDITEMS_INVENTORY_SAMEPOS	// ¸Þ¸ð¸®¸¯ FIXED. ÀÎº¥Åä¸®»ó¿¡ ¾ÆÀÌÅÛÀ» ÁýÀºÈÄ °°Àº À§Ä¡¿¡ ³õÀ»¶§¸¸ È½¼ö ¸¸Å­ ¸Þ¸ð¸® ¸¯ ¹ß»ý. (09.11.09)
#define LDS_FIX_MEMORYLEAK_WHEN_MATCHEVENT_TERMINATE			// ¸ÅÄ¡ÀÌº¥Æ®(µµÇÃ°»¾î,ºí·¯µåÄ³½½,Ä«¿À½ºÄ³½½,È¯¿µÀÇ»ç¿ø) Á¾·á½Ã¸¶´Ù ¸Þ¸ð¸®¸¯ ¹ß»ý FIX. (10.01.29)
#define LDS_FIX_SETITEM_OUTPUTOPTION_WHICH_LOCATED_INVENTORY	// Âø¿ëµÈ ¼¼Æ®¾ÆÀÌÅÛ°ú µ¿Á¾ÀÇ ¹ÌÀåÂøµÈ ¼¼Æ®¾ÆÀÌÅÛÀÌ ÀÎº¥Åä¸®¿¡ ÀÖ´Â°æ¿ì, ¿É¼Ç È°¼ºÈ­°¡ µÇ´Â ¹®Á¦. (10.02.17)
#define PBG_FIX_RENDEROBJ_MAXINDEX								// ¿ùµå ·Îµù½Ã ÃÖ´ë ¿ÀºêÁ§¿ÜÀÇ °ª È£Ãâ¹ö±× ¼öÁ¤(10.02.10)		


/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//----------------------------------------------------------------------------------------------
// << ¹ö±×¼öÁ¤ ÆÐÄ¡ >>
//----------------------------------------------------------------------------------------------
// [2010.04.08 ±Û·Î¹ú 1.03u] - ÀÌµ¿¼®

#define LJH_FIX_LOADING_INFO_OF_AN_OTHER_CHARACTER_IN_LOGIN	// (JP_607)(±¹³»¹ö±×)Ä³¸¯ÅÍ ¼±ÅÃÈ­¸é¿¡¼­ Ä³¸¯ÅÍ B¸¦ ¼±ÅÃÇÏ°í Ä³¸¯ÅÍ A¸¦ Å¬¸¯ÇÏ¸é¼­ ¿£ÅÍÅ°¸¦ µ¿½Ã¿¡ ´©¸£¸é Ä³¸¯ÅÍ BÀÇ ÀÏºÎÁ¤º¸·Î ·Î±×ÀÎ(10.04.01)



/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//----------------------------------------------------------------------------------------------
// << ¹ö±×¼öÁ¤ ÆÐÄ¡ >>
//----------------------------------------------------------------------------------------------
// [2010.03.25 ±Û·Î¹ú 1.03s] - ÀÌµ¿¼®

#define LDS_MOD_URL_GLOBAL_TO_DOTCOM				// ±Û·Î¹ú ±âÈ¹ ¿äÃ» »çÇ× // ±Û·Î¹ú ¹ÂÀÎÅÍ³Ý ¼­¹ö ÁÖ¼Ò°¡ ±âÁ¸ webzen.net ¿¡¼­ webzen.comÀ¸·Î ÀÏ°ý º¯°æ (10.03.25)
#define LDS_FIX_GLPARAM_SWAPMODE_BITMAP				// System ¾ÈÁ¤È­ (OPENGL ERROR) // Wrong OpenGL Texture Parameter SWAPMode  (10.02.19)
#define LDS_FIX_NONINIT_TEXTBOLDTABLE				// °ÔÀÓ ¹ö±× FIXED // ¸¶½ºÅÍ½ºÅ³Ã¢ÀÇ TOOLTIP ·»´ý º¼µå ¹®Á¦. º¼µå ÅØ½ºÆ®TABLEÀÌ ÃÊ±âÈ­°¡ µÇÁö ¾Ê¾Æ ÀÌÀü TEXT¿¡¼­ »ç¿ëµÇ¾ú´ø Ç×¸ñº° BOLD ¿©ºÎ °ªÀÌ ±×´ë·Î Àû¿ëµÇ´Â ¿À·ù. (10.02.12)



/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//----------------------------------------------------------------------------------------------
// << ¹ö±×¼öÁ¤ ÆÐÄ¡ >>
//----------------------------------------------------------------------------------------------
// [2010.03.11 ±Û·Î¹ú 1.03r] - ÀÌµ¿¼®

#define LDS_MOD_EVENTCHERRYBLOSSOM_FORENG				// º¢²É ÀÌº¥Æ®¸¦ ±Û·Î¹ú¿¡ ¸ÂÃç º¯°æ(10.03.10)



/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//----------------------------------------------------------------------------------------------
// << ¹ö±×¼öÁ¤ ÆÐÄ¡ >>
//----------------------------------------------------------------------------------------------
// [2010.03.03 ±Û·Î¹ú 1.03q] - ÀÌµ¿¼®

#define KJH_ADD_SERVER_LIST_SYSTEM						// ¼­¹ö¸®½ºÆ® ½Ã½ºÅÛ º¯°æ (09.10.19) - ±¹³»ÀÇ ³»¿ëÀ» ¹Ì¸® ´ç°Ü »ç¿ë.
#define ASG_ADD_SERVER_LIST_SCRIPTS						// ServerList.txt ½ºÅ©¸³Æ® Ãß°¡.(2009.10.29) - ±¹³»ÀÇ ³»¿ëÀ» ¹Ì¸® ´ç°Ü »ç¿ë.
#ifdef ASG_ADD_SERVER_LIST_SCRIPTS
	#define ASG_ADD_SERVER_LIST_SCRIPTS_GLOBAL_TEMP		// ¹Ì¸® ASG_ADD_SERVER_LIST_SCRIPTS Ãß°¡·Î ÀÎÇÑ ¹ö±× ¼öÁ¤.(10.03.02) 
															//½ÃÁð5 ÀÌÈÄ »èÁ¦ÇØµµ µÊ.(BuxConvert() ÇÔ¼ö À§Ä¡ ¹®Á¦) // ½ÃÁð5 ¾÷µ¥ÀÌÆ®½Ã¿¡ »èÁ¦ÇØµµ µÇ´Â°ÍÀÎÁö È®ÀÎ ´Ù½Ã ÇÒ°Í.
	#define ASG_MOD_SERVER_LIST_ADD_CHARGED_CHANNEL		// ¼­¹ö¸®½ºÆ®¿¡ À¯·á Ã¤³Î Ãß°¡.(10.02.26) - ÇöÀç ±Û·Î¹ú¸¸ Àû¿ë.
#endif	//ASG_ADD_SERVER_LIST_SCRIPTS
#define ASG_FIX_NOT_EXECUTION_WEBSTARTER_MSG			// À¥½ºÅ¸ÅÍ ¹Ì½ÇÇà ¸Þ½ÃÁö Text.txt ¹øÈ£ ¼öÁ¤(10.03.03)



/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//----------------------------------------------------------------------------------------------
// << ¹ö±×¼öÁ¤ ÆÐÄ¡ >>
//----------------------------------------------------------------------------------------------
// [2010.02.24 ±Û·Î¹ú 1.03p] - ¾È»ó±Ô

#define ASG_MOD_CHARGED_CHANNEL_TICKET_ADD_DESCRIPTION			// À¯·á Ã¤³Î ÀÔÀå±Ç ¼³¸í Ãß°¡.(2010.02.24)
#define ASG_ADD_CASH_SHOP_ALREADY_HAVE_ITEM_MSG					// Ä³½¬¼¥ Áßº¹ ¾ÆÀÌÅÛ ¸Þ½ÃÁö Ãß°¡.(2010.02.24)	
#define LJH_MOD_EXTENDING_NUM_OF_MIX_RECIPES_FROM_100_TO_1000	//ÇÑ Á¶ÇÕ Ã¢¿¡¼­ Á¶ÇÕÇÒ¼ö ÀÖ´Â Á¾·ùÀÇ °³¼ö Á¦ÇÑÀ» 100°³¿¡¼­ 1000°³·Î Áõ°¡(10.02.23)


/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//----------------------------------------------------------------------------------------------
// << ºÎºÐÀ¯·áÈ­ 6Â÷ + ½ÃÁð 4.5 >> 
//----------------------------------------------------------------------------------------------
// [2010.02.22 ±Û·Î¹ú 1.03o] - ¾È»ó±Ô

//-----------------------------------------------------------------------------
// [ ½ÃÁð 4.5 ] 
//		- PKÇÊµå/ºÒÄ«´©½º/°×ºí/ÆÒ´õÆÖ
#define SEASON4_5										
#ifdef SEASON4_5

	//------------------------------------------------
	// ÄÁÅÙÃ÷ Ãß°¡
	//------------------------------------------------
	// - ±èÀçÈñ
	#define KJH_ADD_09SUMMER_EVENT					// 09³â ¿©¸§ÀÌº¥Æ®		(09.06.23)

	// - ¾ç´ë±Ù
	#define YDG_ADD_NEW_DUEL_SYSTEM					// »õ·Î¿î °áÅõ ½Ã½ºÅÛ (2009.01.05) [09.03.19 Å×¼·]
	#ifdef YDG_ADD_NEW_DUEL_SYSTEM
		#define YDG_ADD_NEW_DUEL_UI					// »õ·Î¿î °áÅõ °ü·Ã UI Ãß°¡ (2009.01.05) [09.03.19 Å×¼·]
		#define YDG_ADD_NEW_DUEL_PROTOCOL			// »õ·Î¿î °áÅõ °ü·Ã ÇÁ·ÎÅäÄÝ Ãß°¡ (2009.01.08) [09.03.19 Å×¼·]
		#define YDG_ADD_NEW_DUEL_NPC				// »õ·Î¿î °áÅõ °ü·Ã NPC Å¸ÀÌÅõ½º Ãß°¡ (2009.01.19) [09.03.19 Å×¼·]
		#define YDG_ADD_NEW_DUEL_WATCH_BUFF			// »õ·Î¿î °áÅõ °üÀü ¹öÇÁ Ãß°¡ (2009.01.20) [09.03.19 Å×¼·]
		#define YDG_ADD_MAP_DUEL_ARENA				// »õ·Î¿î °áÅõÀå ¸Ê Ãß°¡ (2009.02.04) [09.03.19 Å×¼·]
	#endif	// YDG_ADD_PVP_SYSTEM

	// - ¹Úº¸±Ù
	#define PBG_ADD_PKFIELD							// PKÇÊµå Ãß°¡(2008.12.29) [09.03.19 Å×¼·]
	#define PBG_ADD_HONOROFGLADIATORBUFFTIME		// °ËÅõ»çÀÇ ¸í¿¹ ¹öÇÁ ½Ã°£ ÅøÆÁ Ãß°¡(2009.03.19) [09.03.19 Å×¼·]

	// - ÀÌµ¿±Ù
	#define LDK_ADD_GAMBLE_SYSTEM					// Á¨¼Ò¸ð ¹«±â »Ì±â »óÁ¡ (09.01.05) [09.03.19 Å×¼·]
	#ifdef LDK_ADD_GAMBLE_SYSTEM
		#define LDK_ADD_GAMBLE_NPC_MOSS				// °×ºí »óÀÎ ¸ð½º [09.03.19 Å×¼·]
		#define LDK_ADD_GAMBLE_RANDOM_ICON			// °×ºí¿ë ·£´ý¹«±â ¾ÆÀÌÄÜ [09.03.19 Å×¼·]
		#define LDK_ADD_GAMBLERS_WEAPONS			// °×ºíÀü¿ë ·¹¾î ¹«±âµé [09.03.19 Å×¼·]
	#endif //LDK_ADD_GAMBLE_SYSTEM

	// - ¹ÚÁ¾ÈÆ
	#define PJH_ADD_PANDA_PET						// Ææ´õ Æê
	#define PJH_ADD_PANDA_CHANGERING				// Ææ´õ º¯½Å¹ÝÁö

	// ½ÃÁð 4.5 ³»ºÎ Å×¼· ¹ö±× ¼öÁ¤
	#define ADD_FIX_AFTER_SEASON4_5_TEST
	#ifdef ADD_FIX_AFTER_SEASON4_5_TEST
		#define YDG_FIX_PANDA_CHANGERING_PANTS_BUG				// ´ÙÅ©·Îµå ¸Ç¸öÀ¸·Î ÆÒ´õ º¯½Å¹ÝÁö Âø¿ë½Ã ¹ÙÁö º¸ÀÌ´Â ¹ö±× (09.07.21)
		#define YDG_FIX_DUEL_SUMMON_CLOAK						// °áÅõ½Ã ¿äÁ¤ ¼ÒÈ¯¼ö ¸ÁÅä ³ª¿À´Â ¹ö±× (09.07.29)

		#define	YDG_FIX_SMALL_ITEM_TOOLTIP_POSITION				// ÀÏº» ¿äÃ»À¸·Î 1Ä­Â¥¸® ¾ÆÀÌÅÛ ÅøÆÁÀ§Ä¡ ³»¸² (09.08.24)
		#define KJH_FIX_WOPS_K32595_DOUBLE_CLICK_PURCHASE_ITEM_EX	// NPC»óÁ¡¿¡¼­ ¾ÆÀÌÅÛÀ» ±¸¸ÅÇÒ¶§, Ã³À½¿¡ µÎ¹øÅ¬¸¯ÇØ¾ß ¾ÆÀÌÅÛÀÌ ±¸ÀÔµÇ´Â Ãß°¡ ¹ö±×¼öÁ¤ (09.08.24)

		#define YDG_FIX_TRADE_BUTTON_LOCK_WHNE_ITEM_MOVED		// °Å·¡Ã¢ »ç±â°ü·Ã Æ®·¹ÀÌµå Àåºñ ¿Å±â¸é °Å·¡¹öÆ° Àá±×±â(º£Æ®³²Á¦º¸) (09.08.25)
		#define YDG_FIX_NPCSHOP_SELLING_LOCK					// NPC»óÁ¡ ÆÇ¸Å½Ã Ã¢ ¸ø´Ý°Ô Àá±Ý(º£Æ®³²Á¦º¸) (09.08.25)

		#define YDG_FIX_CATLE_MONEY_INT64_TYPE_CRASH			// °ø¼º ¼ºÁÖÃ¢ ¼ºÀÇ µ·ÀÌ ¸¹À»¶§ Æ¨±â´Â ¹ö±× (09.09.01)
		#define YDG_FIX_USED_PORTAL_CHARM_STORE_BAN				// ÀÌµ¿ÀÇ ºÎÀû »ç¿ëÇÏ¸é Ã¢°í ÀúÀå ¸øÇÏ°Ô ¼öÁ¤ (09.09.02)

		#define PBG_FIX_CHANGEITEMCOLORSTATE							// ÀÎº¥Åä¸® ¾È¿¡¼­ ³»±¸·Â¿¡ µû¸¥ »ö±ò º¯È­ÇÏµµ·Ï ¼öÁ¤(µ¥¸ó/¼öÈ£Á¤·É/ÆÒ´õÆê)(09.06.16)
		#define PBG_FIX_PETTIP									// ÀÎº¥³»ºÎÀÇ ´ÙÅ©·Îµå °ü·Ã ÆêÀÇ Á¤º¸°¡ Âø¿ëÇÑ ÆêÀÇ Á¤º¸·Î Ãâ·ÂµÇ´Â ¹ö±× ¼öÁ¤(09.09.10)

		#define LJH_FIX_CHANGE_RING_DAMAGE_BUG					// º¯½Å¹ÝÁö º¹¼ö Âø¿ë½Ã ³ôÀº °ªÀ¸·Î µ¥¹ÌÁö,¸¶·Â,ÀúÁÖ·Â Áõ°¡°¡ µÇµµ·Ï ¼öÁ¤ (09.09.11)
		#define YDG_FIX_OVER_5_SETITEM_TOOLTIP_BUG				// ¼¼Æ®¾ÆÀÌÅÛ 5Á¾·ù ÀÌ»ó Â÷¸é °è»ê¾ÈµÇ´Â ¹ö±× ¼öÁ¤(09.09.11)
		#define YDG_FIX_MAGIC_DAMAGE_CALC_ORDER					// ¼¼Æ®¾ÆÀÌÅÛ °ü·Ã ¸¶·Â °è»ê ¼ø¼­ ¼öÁ¤ (09.09.11)
		#define YDG_FIX_SETITEM_REQUIRED_STATUS_BUG				// ¼¼Æ®¾ÆÀÌÅÛ ¿ä±¸´É·ÂÄ¡ ºÎÁ·½Ã ¼¼Æ®°è»ê¿¡¼­ ºüÁö°Ô ¼öÁ¤ (09.09.14)

		#define YDG_FIX_380ITEM_OPTION_TEXT_SD_PERCENT_MISSING	// 380¾ÆÀÌÅÛ ¿É¼Ç¿¡ SDÁõ°¡¿¡ % ºüÁø ¹ö±× ¼öÁ¤ (09.09.23)
		#define YDG_FIX_LUCKY_CHARM_VALUE_TO_0					// Çà¿îÀÇ ºÎÀû °¡°Ý 0À¸·Î ¼³Á¤ (09.09.23)

		#define YDG_FIX_BUFFTIME_OVERFLOW						// ¹öÇÁ½Ã°£ÀÌ 0º¸´Ù ÀÛ¾ÆÁö¸é ³ÑÄ¡´Â ¹ö±× (09.09.28)
		#define LJH_FIX_PET_SHOWN_IN_CHAOS_CASTLE_BUG			// ÆêÀÌ Ä«¿À½ºÄ³½½¿¡¼­ º¸ÀÌ´Â ¹ö±× ¼öÁ¤ (09.09.29)
		#define YDG_FIX_REPAIR_COST_ADJUST_TO_SERVER_SETTING	// ¼ö¸® °¡°Ý °è»ê ¼­¹ö¿¡ ¸ÂÃã (09.10.12)
	#endif //ADD_FIX_AFTER_SEASON4_5_TEST
#endif // SEASON4_5


//-----------------------------------------------------------------------------
// [ ºÎºÐ À¯·áÈ­ 6Â÷ ]

#define ASG_FIX_LENA_REGISTRATION				// ·¹³ª °³¼ö 32,767°³ ÀÌ»ó µî·Ï °¡´ÉÇÏµµ·Ï ¼öÁ¤.

// - ¾È»ó±Ô
// À¯·á Ã¤³Î(°ñµå Ã¤³Î) °ü·Ã µðÆÄÀÎ. 
#define ASG_ADD_CHARGED_CHANNEL_TICKET					// À¯·á Ã¤³Î ÀÔÀå±Ç.(2010.02.05) - ±Û·Î¹úÀü¿ë

#define ADD_TOTAL_CHARGE_6TH
#ifdef ADD_TOTAL_CHARGE_6TH

	// 1. ÄÉ½¬ ˜Þ ¾ÆÀÌÅÛ
	// ---------------------------------------------------------------------------
	#define ADD_CASH_SHOP_6TH
		#ifdef ADD_CASH_SHOP_6TH
		// - ¾È»ó±Ô
		#define ASG_ADD_CS6_GUARD_CHARM				// ¼öÈ£ÀÇºÎÀû(2009.02.09)
		#define ASG_ADD_CS6_ITEM_GUARD_CHARM		// ¾ÆÀÌÅÛº¸È£ºÎÀû(2009.02.09)
		#define ASG_ADD_CS6_ASCENSION_SEAL_MASTER 	// »ó½ÂÀÇÀÎÀå¸¶½ºÅÍ(2009.02.24)
		#define ASG_ADD_CS6_WEALTH_SEAL_MASTER 		// Ç³¿äÀÇÀÎÀå¸¶½ºÅÍ(2009.02.24)

		// - ÀÌµ¿¼®		// ÂüÁ¶ Define : CSK_PCROOM_ITEM
		#define LDS_ADD_CS6_CHARM_MIX_ITEM_WING		// ³¯°³ Á¶ÇÕ 100% ¼º°ø ºÎÀû
	#endif	// ADD_CASH_SHOP_6TH

	// 2. È²±Ý ±º´Ü 
	// ---------------------------------------------------------------------------
	// - ÃÖ¼®±Ù
	#define CSK_ADD_GOLDCORPS_EVENT					// È²±Ý±º´ÜÀÌº¥Æ®(2009.03.13)
	// - ÀÌµ¿¼®
	#define LDS_ADD_GOLDCORPS_EVENT_MOD_GREATDRAGON // È²±Ý ±×·¹ÀÌÆ® µå·¹°ï ºñÁÖ¾ó ÀçÀÛ¾÷. ºñÁÖ¾ó ÀÌÆåÆ® Ãß°¡. ±âÁ¸ µ¿ÀÏÇÑ ¸÷ Á¸Àç. (2009.04.06) (BITMAP_FIRE_HIK3_MONO È¿°ú ÂüÁ¶.)

	// 3. PC ¹æ ½Ã½ºÅÛ ¹× ¾ÆÀÌÅÛ
	// ---------------------------------------------------------------------------
	#define	ADD_PCROOM_POINT_SYSTEM				// ÀÏº» PC¹æ ½Ã½ºÅÛ Àû¿ë. (2009.03.25)

	// 4. QA ÀÌÈÄ Bug Fixed ÀÛ¾÷ »çÇ×
	// ---------------------------------------------------------------------------
	#define ADD_FIX_AFTER_QA_6TH
	#ifdef ADD_FIX_AFTER_QA_6TH
		#define LDS_FIX_APPLY_BUFF_STATEVALUES_WHEN_CALCULATE_CHARACTERSTATE_WITH_SETITEM	// ÄÉ¸¯ÅÍ Á¤º¸Ã¢¿¡ ¼¼Æ® ¾ÆÀÌÅÛ Àû¿ë µÈ ½ºÅÈ ¼öÄ¡ Àû¿ë½Ã¿¡ ÇöÀç ½ºÅÈ °è»ê½Ã Á¡¿¡ ¹öÇÁ ¹× ¼ÒÄÏ¾ÆÀÌÅÛ À¸·Î ÀÎÇÑ Ãß°¡´É·ÂÄ¡°¡  ´©¶ôµÇ¾î Ãß°¡ (2009.04.13)
		#define LDS_FIX_WRONG_QUANTITY_SETITEMOPTION_WHEN_RENDER_SETITEMTOOTIP_IN_INVENTORY	// ÇöÀç ÀåÂøµÈ ¼¼Æ® ¾ÆÀÌÅÛ°ú µ¿ÀÏÇÑ ¼¼Æ®°¡ ÀÎº¥Åä¸®¿¡ ÀÖ´Â°æ¿ì ÇØ´ç ÀÎº¥Åä¸® ¼¼Æ® ¾ÆÀÌÅÛ ¿É¼Ç Ãâ·Â¿¡ °¹¼ö ¿À·ù		(2009.04.13)
	#endif // ADD_FIX_AFTER_QA_6TH

	// 5. 6Â÷ °ú±Ý ³»ºÎ Å×¼· 1Â÷ ¹ö±× ¼öÁ¤
	#define ADD_FIX_AFTER_6TH_TEST
	#ifdef ADD_FIX_AFTER_6TH_TEST
		//	#define PBG_FIX_REPAIRGOLD_DURABILITY0							// ³»±¸·Â 0ÀÏ¶§ ¼ö¸®ºñ ¼­¹ö¿Í ´Ù¸¥ ¹ö±× ¼öÁ¤(09.04.13)
		//	°è»ê°ø½ÄÀ» Å¬¶ó¿¡¼­ ¸ÂÃèÀ¸³ª ¼­¹ö¿¡¼­ ÀçÂ÷ ¼öÁ¤µÊ define ¸·¾Æ¾ß µÊ PBG_FIX_REPAIRGOLD_DURABILITY0
		#define PBG_FIX_SHIELD_MAGICDAMAGE								// ¹æÆÐÂø¿ë½Ã Á¤º¸Ã¢¿¡ ¸¶·ÂÀÌ »ó½ÂÇÏ´Â ¹ö±× ¼öÁ¤(09.04.15)
		#define PBG_FIX_FENRIR_GELENALATTACK							// Ææ¸±À» Å¸°í ÀÏ¹Ý°ø°ÝÀÌ ¾ÈµÇ´Â Çö»ó (09.04.17)
		#define PBG_FIX_SKILL_RECOVER_TOOLTIP							// È¸º¹½ºÅ³ÀÇ ÅøÆÁ»óÀÇ ½ºÅ³ °ø°Ý·ÂÀÌ Ãâ·ÂµÇ°í ÀÖ´Â ¹ö±×(09.04.20)
		#define PBG_FIX_SETITEM_4OVER									// ¼¼Æ® ¾ÆÀÌÅÛÀÇ 4Á¾ ÃÊ°úÇÏ¿© ÀåÂøÇßÀ» °æ¿ì ¹ö±×(09.04.24)
		#define PBG_MOD_MASTERLEVEL_MESSAGEBOX							// »ó½ÂÀÇ ÀÎÀå ¸¶½ºÅÍÄÉ¸¯ÅÍ ±¸ÀÔ¿©ºÎ Ãß°¡(09.04.24)
		#define PBG_FIX_REPAIRGOLD_DARKPAT								// ´ÙÅ©È£½º,½ºÇÇ¸´ ¼ö¸®ºñ ¹ö±× ¼öÁ¤(09.04.14)
		#define KJH_FIX_DARKLOAD_PET_SYSTEM								// °³ÀÎ»óÁ¡±¸ÀÔÃ¢¿¡¼­ ´ÙÅ©·ÎµåÆêÀÇ ÅøÆÁÀÌ Á¤È®ÇÏ°Ô Ãâ·ÂµÇÁö ¾Ê´Â ¹ö±×¼öÁ¤ (09.04.16)	[JP_0226]
		#define KJH_FIX_WOPS_K32595_DOUBLE_CLICK_PURCHASE_ITEM			// NPC»óÁ¡¿¡¼­ ¾ÆÀÌÅÛÀ» ±¸¸ÅÇÒ¶§, Ã³À½¿¡ µÎ¹øÅ¬¸¯ÇØ¾ß ¾ÆÀÌÅÛÀÌ ±¸ÀÔµÇ´Â ¹ö±×¼öÁ¤ (09.04.16)	[JP_0348]
		#define ASG_FIX_ARROW_VIPER_BOW_EQUIP_DIRECTION					// ¸¶À»¿¡¼­ ¿¡·Î¿ì¹ÙÀÌÆÛº¸¿ì Âø¿ë ¹æÇâ ¹ö±× ¼öÁ¤.(2009.04.17)

		//2Â÷ ¹ö±× ¼öÁ¤
		#define KJH_FIX_MOVECOMMAND_WINDOW_SIZE							// ÀÌµ¿¸í·ÉÃ¢ Å©±âº¯°æ½Ã ºó°ø°£ÀÌ »ý±â´Â ¹®Á¦ ¼öÁ¤ (09.03.02)		[JP_0420]
		#define PBG_FIX_CHARM_MIX_ITEM_WING								// ³¯°³ÀÇ ºÎÀû »óÁ¡¿¡ ÆÇ¸ÅÈÄ ´ÙÀ½ ¹°Ç° ÆÇ¸Å ¾ÈµÇ´Â ¹ö±× ¼öÁ¤(09.05.06)
		#define KJH_FIX_JP0457_OPENNING_PARTCHARGE_UI					// È²±Ý±Ã¼ö NPCÃ¢À» ¿¬»óÅÂ·Î ¾ÆÀÌÅÛ¸ô Ã¢À» ¿­¾úÀ»¶§, ÀÌ»óÇö»óÀÌ ¹ß»ýÇÏ´Â ¹ö±×¼öÁ¤ (09.05.06)
		#define PBG_FIX_DARKPET_RENDER									// ´ÙÅ©·Îµå ÆêÀÇ ½ºÇÇ¸´°ú È£½ºÀÇ °ªÀÌ º¯°æµÇ´Â Çö»ó(09.05.08)
		#define KJH_FIX_JP0459_CAN_MIX_JEWEL_OF_HARMONY					// Á¶È­ÀÇº¸¼®À¸·Î ¾÷±×·¹ÀÌµå ÇÒ¼ö ÀÖ´Â ¾ÆÀÌÅÛÀÎµ¥µµ »¡°²°Ô ³ª¿À´Â ¹ö±×¼öÁ¤ (09.05.08)
		#define LDS_FIX_NONINITPROGLEM_SKILLHOTKEY						// °£È¤ ½Å±ÔÄÉ¸¯ÅÍ ÀÌÈÄ ¹Ù·ÎÀÌÀü ·Î±×ÀÎÇß´ø ÄÉ¸¯½ºÅ³´ÜÃàÅ°°¡ ¿µÇâÁÖ´Â ¿À·ù. MainSceneÈ£Ãâ¸¶´Ù SkillKey Å×ÀÌºí ÃÊ±âÈ­. (2009.01.20)
		#define KJH_FIX_JP0450_EQUIPITEM_ENABLE_MOVECOMMAND				// ÀÌµ¿¸í·ÉÃ¢À» ´©¸¥ÈÄ ÀÌµ¿ÇÒ¼ö ¾ø´Â Á¶°ÇÀÇ ¾ÆÀÌÅÛÀ» ¸¶¿ì½ºÇÈ¾÷ÈÄ °­Á¦ ÀÌµ¿ÇÏ´Â ¹ö±× ¼öÁ¤ (09.05.08)
		//#define PBG_FIX_SKILLHOTKEY										// ¹«±â ½ºÅ³ÀÇ ÇÖÅ° ¹øÈ£ ±â¾ïÇÏ´Â°Í ¹«±â Á¦°Å½Ã¿¡ ¸®¼Â(09.05.11)
		#define PBG_FIX_CHARM_MIX_ITEM_WING_TOOLTIP						// ³¯°³ÀÇ ºÎÀû ÅøÆÁ Àß¸ø Ãâ·ÂµÇ´Â ¹ö±×(09.05.11)
		#define LDS_FIX_SYNCRO_HEROATTACK_ACTION_WITH_SERVER			// wops 33863 - Èæ±â»ç ½ºÅ³ ½ÃÀü½Ã ¼­¹ö¿¡¼­ ½ºÅ³ ¹Þ±âÀü¿¡ ¹Ì¸® ½ºÅ³¹ßµ¿ÀÌ °É·Á ÀÌÀü ½ºÅ³ ¿¡´Ï¸ÞÀÌ¼ÇÀÌ Àß¸ø Ãâ·Â. (09.04.22)
		#define LDK_FIX_MOTION_INTI_AT_THE_LOADINGWORLD					// wops 34113 - ¿ùµå·Îµù½Ã ¸ð¼Ç ÃÊ±âÈ­(09.04.14)

		#define PBG_FIX_DARKPET_TIPUPDATE								// ´ÙÅ©ÆêÀÇ °æÇèÄ¡ÀÇ Ç¥½Ã°¡ °»½ÅµÇÁö ¾Ê´Â´Ù.Àç ÀåÂø½Ã¿¡¸¸ °»½ÅµÇ´Â ¹ö±×¼öÁ¤(09.05.29)
		#define PBG_FIX_MOVECOMMAND_WINDOW_SCROLL						// ½ºÅ©·Ñ ¸¶¿ì½º ¿ÞÂÊ Å¬¸¯À¸·Î ¿òÁ÷ÀÏ ¼ö ¾ø´Â ¹ö±× ¼öÁ¤(09.05.29)
		#define PBG_FIX_DARKPET_DURABILITY								// ´ÙÅ©·Îµå Æê ³»±¸·Â °ü·Ã ¹ö±× ¼öÁ¤(09.05.29)
		#define PBG_FIX_DARKSPIRIT_ACTION								// ´ÙÅ©·Îµå ½ºÇÇ¸´ÀÇ ¸Ê·Îµù½Ã ¼ÕÀÌ ³»·Á°£ ¸ð¼ÇÀÌ ÃëÇØÁ® ÀÖ´Â ¹ö±× ¼öÁ¤(09.05.29)
		#define PBG_FIX_LODING_ACTION									// ·Îµù½Ã¿¡ ¹ßÀÌ ¿òÁ÷ÀÌÁö ¾Ê´Â(¸ð¼Ç) ¹ö±×(09.05.25)
		#define KJH_FIX_JP0467_RENDER_DARKLOAD_PET_OTHER_CHARATER		// ´Ù¸¥ÄÉ¸¯ÅÍÀÇ ´ÙÅ©·ÎµåÆêÀÌ ÀåÂøµÇ°Å³ª ÇØÁ¦ÇÒ¶§, È­¸é»ó º¯È­µÇÁö ¾Ê´Â ¹ö±× ¼öÁ¤ (09.06.03)
		#define KJH_FIX_GOLD_RABBIT_INDEX								// È²±ÝÅä³¢ ÀÎµ¦½º ¼öÁ¤ (09.06.08)

		#define LDK_FIX_PCROOM_INFOMATION								// ÇÇ½Ã¹æ Æ÷ÀÎÆ® »óÁ¡ Á¤º¸Ãâ·Â ¹®±¸ ¿¹¿ÜÃ³¸®(09.07.14)
		#define LDK_FIX_CHARM_MIX_ITEM_WING_TOOLTIP						// ³¯°³ÀÇ ºÎÀû ÅøÆÁ Àß¸ø Ãâ·Â ¹× ³»¿ë ´©¶ôµÇ´Â ¹ö±×(09.07.20)

		#define YDG_FIX_DARKSPIRIT_CHAOSCASTLE_CRASH					// ´ÙÅ©½ºÇÇ¸´ Ä«¿À½ºÄ³½½¿¡¼­ ÀåºñÇØÁ¦ÇØ¼­ ¼Õ¿¡µé°í ÀåºñÃ¢ ´ÝÀ¸¸é Æ¨±â´Â ¹ö±× (09.07.17)
		#define YDG_FIX_SOCKETITEM_SELLPRICE_BUG						// ¼ÒÄÏ¾ÆÀÌÅÛ ÆÇ¸Å°¡°Ý ¹ö±× (09.09.03)
	#endif //ADD_FIX_AFTER_6TH_TEST
#endif // ADD_TOTAL_CHARGE_6TH


/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//----------------------------------------------------------------------------------------------
// << ¹ö±×¼öÁ¤ ÆÐÄ¡ >>
//----------------------------------------------------------------------------------------------
// [2010.01.14 ±Û·Î¹ú 1.03l] - ¾È»ó±Ô

#define LJH_FIX_BUG_CASTING_SKILLS_W_CURSOR_OUT_OF_VIEWPORT	// (±¹³»¹ö±×)¸¶¿ì½º ¿À¸¥ÂÊ ¹öÆ° Å¬¸¯ Áß Ä¿¼­°¡ °ÔÀÓºäÆ÷Æ®¸¦ ¹þ¾î³ª ÀÎº¥Ã¢µî¿¡ ÀÖÀ»¶§µµ ±â¼úÀ» °è¼Ó ¾µ¼ö ÀÖ´Â ¹ö±× ¼öÁ¤(09.12.02)
#define PBG_MOD_VIEMAPMOVE									// º£Æ®³² ÀÌµ¿Ã¢ ÀÌµ¿ÀÇ ÀÎÀå ¾øÀÌ ÀÌµ¿ °¡´ÉÇÏ°Ô ¼öÁ¤(09.12.07) 
#define LJH_FIX_NO_MSG_FOR_FORCED_MOVEOUT_FROM_BATTLESOCCER	//ÀüÅõÃà±¸Áß ±æµå¸¶½ºÅÍ°¡ ¾Æ´Ñ ÀÚ½ÅÀÌ °­Á¦·Î °æ±âÁß °æ±âÀå ¹ÛÀ¸·Î ³ª°¬À» ¶§ °á°ú ¸Þ¼¼Áö Ãâ·ÂÇÏÁö ¾ÊÀ½(09.12.28) 



/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//----------------------------------------------------------------------------------------------
// << ¹ö±×¼öÁ¤ ÆÐÄ¡ >>
//----------------------------------------------------------------------------------------------
// [2009.12.10 ±Û·Î¹ú 1.03k] - ¾È»ó±Ô

#define PBG_FIX_CURSEDTEMPLE_SYSTEMMSG				// È¯¿µÀÇ»ç¿ø ¸Þ½ÃÁö Ã³¸® ¹ö±× ¼öÁ¤(09.10.22)
#define PBG_MOD_NONPVPSERVER						// 4¹øÂ° ¼­¹öµµ nonpvp¼­¹ö·Î º¯°æ(09.11.26)



/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//----------------------------------------------------------------------------------------------
// << ¹ö±×¼öÁ¤ ÆÐÄ¡ >>
//----------------------------------------------------------------------------------------------
// [2009.10.22 ±Û·Î¹ú 1.03g] - ¹Úº¸±Ù

#define YDG_DARK_SPIRIT_CRASH_BECAUSEOF_FIX_MEMORY_LEAK			// ¸Þ¸ð¸® ´©¼ö ¼öÁ¤¶§¹®¿¡ ¹ß»ýÇÑ ´ÙÅ©½ºÇÇ¸´ Æ¨±â´Â Çö»ó ÀÓ½Ã ¼öÁ¤ (2009.09.02)
#define LDS_FIX_PETDESTRUCTOR_TERMINATE_EFFECTOWNER_ADD_TYPE	// LDS_FIX_AFTER_PETDESTRUCTOR_ATTHESAMETIME_TERMINATE_EFFECTOWNERÀÌÈÄ Ãß°¡ÀÛ¾÷. ´ÙÅ©½ºÇÇ¸´ °ø°Ý:µ¹°Ý(MODEL_AIR_FORCE) Effect»ç¿ë µµÁß Æê::´ÙÅ©½ºÇÇ¸´ ¸Þ¸ð¸® ¹ÝÈ¯½Ã »¶³ª´Â ¹®Á¦ FIXED. (09.10.15)
#define LDS_FIX_AFTER_PETDESTRUCTOR_ATTHESAMETIME_TERMINATE_EFFECTOWNER	// Æê ¸Þ´ÏÀúÀÇ Æê Á¾·á µÉ ¶§¸¶´Ù Æê´ç ¹ß»ýÇÏ´ø ¸Þ¸ð¸®¸¯ FIXED. (YDG_FIX_MEMORY_LEAK_0905) defineÀÛ¾÷ ÀÌÈÄ ¹ß»ý ¹®Á¦·Î ¸Þ¸ð¸® ¹ÝÈ¯µÈ PetÀÌ Effect ÁßÀÏ¶§ ¹ß»ý(Owner·Î ÀÚ½ÅÀ» ³Ñ±ä°æ¿ì¸¸)À¸·Î EffectÀÇ µéÀÇ NULL Ã³¸® ÀÛ¾÷. (09.09.17)



/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//----------------------------------------------------------------------------------------------
// << ¹ö±×¼öÁ¤ ÆÐÄ¡ >>
//----------------------------------------------------------------------------------------------
// [2009.10.01 ±Û·Î¹ú 1.03f] - ¹Úº¸±Ù

#define PBG_FIX_SEALTOOLTIP_BUG_ENG					// »ó½ÂÀÇÀÎÀå ÅøÆÁº¯°æ (09.09.30) - ±Û·Î¹ú Àü¿ë



/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//----------------------------------------------------------------------------------------------
// << ±Û·Î¹ú ¿ÀÇÂ >>
//----------------------------------------------------------------------------------------------
// [2009.06.25 ±Û·Î¹ú 1.03a] - ÀÌµ¿±Ù

// - ¹Úº¸±Ù
//#define PBG_ENGLISHLOGO_CHANGE						//±Û·Î¹ú ·Î°í º¯°æ(2008.12.22)[2Â÷ Å×¼·½Ã¿¡ Àû¿ë¿¹Á¤][¸®¼Ò½º º¯°æµÊ,Å×½ºÆ®Áß]

// - ÀÌµ¿±Ù (±Û·Î¹ú Æ÷Å»¿ë 2009.04.23)
#define PJH_CHARACTER_RENAME						// Ä³¸¯ÅÍ¸í Áßº¹½Ã Ä³¸¯ÅÍ ÀÌ¸§ º¯°æ.
#define LDK_MOD_GLOBAL_PORTAL_LOGO					// ±Û·Î¹ú Æ÷ÅÐ ·Î±× Àç¼öÁ¤.(09.04.16) - ±âº» À¥Á¨ ·Î°í
#define LDK_ADD_GLOBAL_PORTAL_SYSTEM				// ±Û·Î¹ú Æ÷ÅÐ Å¬·¡½º Ãß°¡.(09.03.18)

#ifndef FOR_WORK			// #ifndef
	// ½ÇÁ¦ ¾÷µ¥ÀÌÆ®¸¸ Àû¿ë
	#define LDK_ADD_GLOBAL_PORTAL_WEBLOGIN_CHECK		// ±Û·Î¹ú Æ÷ÅÐ À¥·Î±×ÀÎ È®ÀÎ - °øÀ¯Á¤º¸ ¾øÀ¸¸é Å¬¶óÀÌ¾ðÆ® Á¾·á.(09.04.06)
	#define LDK_MOD_GLOBAL_PORTAL_LOGIN_ID_INPUT_DENY	// ±Û·Î¹ú Æ÷ÅÐ id ÀÔ·Â °ÅºÎ - °øÀ¯Á¤º¸ id¸¸ »ç¿ëÇÔ.(09.04.06)
	#define LDK_MOD_GLOBAL_PORTAL_ID_HIDE				// ±Û·Î¹ú Æ÷ÅÐ id -> ½Ã¸®¾óÈ­ *Ç¥ Ç¥½Ã(2009.04.24)
#endif //FOR_WORK

//#define LDK_MOD_GLOBAL_PORTAL_CASHSHOP_BUTTON_DENY	// ±Û·Î¹ú Æ÷ÅÐ ÀÏºÎ¼· À¯·á¼¥ ¹öÆ° ºñÈ°¼ºÈ­.(09.04.07)
#define LDK_FIX_MOVEWINDOW_SCROLL_BUG				// ÀÌµ¿Ã¢ ½ºÅ©·Ñ¹ö±×(2009.04.22)
#define LDK_MOD_PASSWORD_LENGTH_20					// ÆÐ½º¿öµå ±æÀÌ 20ÀÚ·Î ¼öÁ¤(2009.04.24)
#define LDK_MOD_GLOBAL_STORAGELOCK_CHANGE			// ±Û·Î¹ú Æ÷ÅÐ Ã¢°í ÁÖ¹Î¹øÈ£ ÀÔ·Â º¯°æ(2009.04.27)
#define LDK_FIX_TICKET_INFO							// ¾Ç¸¶ÀÇ±¤ÀåÀÔÀå±Ç, ºí·¯µåÄ³½½ÀÔÀå±Ç ·¹º§ ÀÚµ¿Àû¿ë ¹®±¸ Ãß°¡. (09.06.23)
#define LDK_FIX_PC4_SEALITEM_TOOLTIP_BUG_ENG		// Ä¡À¯ÀÇÀÎÀå ÅøÆÁ º¯°æ (09.06.23) - ±Û·Î¹úÀü¿ë


//-----------------------------------------------------------------------------
// [ ºÎºÐ À¯·áÈ­ 5Â÷ ]

#define ADD_CASH_SHOP_5TH

#ifdef ADD_CASH_SHOP_5TH
	#define LDK_FIX_CS5_HIDE_SEEDLEVEL	// »óÁ¡ ½Ãµå·¹º§ Ç¥½Ã ¾ÈÇÔ
	#define YDG_ADD_CS5_REVIVAL_CHARM	// ºÎÈ°ÀÇ ºÎÀû
	#define YDG_ADD_CS5_PORTAL_CHARM	// ÀÌµ¿ÀÇ ºÎÀû
#endif	// YDG_ADD_CASH_SHOP_5TH

// - ¹Úº¸±Ù
#define PBG_WOPS_TEXT_MONMARK						// »ó½ÂÀÇ ÀÎÀå ÅØ½ºÆ® °ü·Ã(08.12.05)
#define PBG_WOPS_CURSEDTEMPLEBASKET_MOVING			//¼º¹°º¸°üÇÔÀÌ ¿òÁ÷ÀÌ´Â ¹ö±× ¼öÁ¤(2008.12.18)


//-----------------------------------------------------------------------------
// [ ºÎºÐ À¯·áÈ­ 4Â÷ ]

#define PSW_PARTCHARGE_ITEM4

#ifdef PSW_PARTCHARGE_ITEM4
	#define PSW_ADD_PC4_SEALITEM       //  Ä¡À¯, ½Å¼º( Ã¼Á¨, ¸¶Á¨ ) ÀÎÀå
	#define PSW_ADD_PC4_SCROLLITEM     //  ÀüÅõ, °­È­( Å©¸®, ¾×¼³ µ¥¹ÌÁö Áõ°¡ ) ½ºÅ©·Ñ
	#define PSW_ADD_PC4_CHAOSCHARMITEM //  Ä«¿À½º Á¶ÇÕ ºÎÀû
	#define LDK_ADD_PC4_GUARDIAN		// ¼öÈ£Ãµ»ç, »çÅº
	#define	LDK_FIX_GUARDIAN_CHANGE_LIFEWORD			// 1Â÷ ÇÁ¸®¹Ì¾ö ¾ÆÀÌÅÛ (³»±¸·Â Ç¥±â -> »ý¸íÀ¸·Î ¼öÁ¤)(2009.01.14)
	#define LDK_ADD_PC4_GUARDIAN_EFFECT_IMAGE // lightmarks.jpg, effect #define ADD_SOCKET_ITEM ¿Í Áßº¹ µÇ´Â°Í ÀÖÀ½... 
#endif //PSW_PARTCHARGE_ITEM4


//-----------------------------------------------------------------------------
// [ ¹ö±×¼öÁ¤ ÆÐÄ¡ ]

#define PSW_ADD_FOREIGN_HELPWINDOW                  // f1 key¸¦ ´­·¶À»¶§ µµ¿ò¸»Áß¿¡ ÀÌº¥Æ®¸Ê ÀÏÁ¤Ç¥ ÇØ¿Ü Àû¿ë ¾ÈÇÏ±â( 2008.07.08 ) - ÇØ¿Ü¸¸ Àû¿ë


//-----------------------------------------------------------------------------
// [ ºÎºÐ À¯·áÈ­ 3Â÷ ]

#define PSW_PARTCHARGE_ITEM3

#ifdef PSW_PARTCHARGE_ITEM3
#ifndef KJH_ADD_INGAMESHOP_UI_SYSTEM		// #ifndef
	#define PSW_CHARACTER_CARD						// ¼ÒÈ¯¼ú»ç Ä³¸¯ÅÍ Ä«µå
#endif // KJH_ADD_INGAMESHOP_UI_SYSTEM
	#define PSW_NEW_CHAOS_CARD						// ½Å±Ô Ä«¿À½º Ä«µå
	#define PSW_NEW_ELITE_ITEM						// Áß°£ ¿¤¸®Æ® ¹°¾à
#endif //PSW_PARTCHARGE_ITEM3


//-----------------------------------------------------------------------------
// [ ºÎºÐ À¯·áÈ­ 2Â÷ ]

#define PSW_PARTCHARGE_ITEM2

#ifdef PSW_PARTCHARGE_ITEM2
	#define PSW_ELITE_ITEM						// ¿¤¸®Æ® ¹°¾à
	#define PSW_SCROLL_ITEM						// ¿¤¸®Æ® ½ºÅ©·Ñ
	#define PSW_SEAL_ITEM						// ÀÌµ¿ ÀÎÀå
	#define PSW_FRUIT_ITEM						// ¸®¼Â ¿­¸Å
	#define PSW_SECRET_ITEM						// °­È­ÀÇ ºñ¾à
	#define PSW_INDULGENCE_ITEM					// ¸éÁËºÎ
	#define PSW_RARE_ITEM						// Èñ±Í ¾ÆÀÌÅÛ Æ¼ÄÏ
	#define PSW_CURSEDTEMPLE_FREE_TICKET		// È¯¿µÀÇ »ç¿ø ÀÚÀ¯ ÀÔÀå±Ç
#endif //PSW_PARTCHARGE_ITEM2


//-----------------------------------------------------------------------------
// [ ºÎºÐ À¯·áÈ­ 1Â÷ ]

#define PSW_PARTCHARGE_ITEM1
				
#ifdef PSW_PARTCHARGE_ITEM1
	#define CSK_FREE_TICKET						// ÀÚÀ¯ÀÔÀå±Ç - µ¥ºô½ºÄù¾î, ºí·¯µåÄ³½½, Ä®¸®¸¶ (2007.02.06)
	#define CSK_CHAOS_CARD						// Ä«¿À½ºÄ«µå - º¹±Ç (2007.02.07)
	#define CSK_RARE_ITEM						// Èñ±Í¾ÆÀÌÅÛ(2006.02.15)
	#define CSK_LUCKY_CHARM						// Çà¿îÀÇ ºÎÀû( 2007.02.22 )
	#define CSK_LUCKY_SEAL						// Çà¿îÀÇ ÀÎÀå( 2007.02.22 )	
#endif //PSW_PARTCHARGE_ITEM1


//-----------------------------------------------------------------------------
// [ UI or Font ]

#ifndef KJH_PBG_ADD_INGAMESHOP_SYSTEM					// #ifndef
	#define NEW_USER_INTERFACE	
#endif // KJH_PBG_ADD_INGAMESHOP_SYSTEM

#ifdef NEW_USER_INTERFACE
	#define NEW_COMMANDS
	#define NEW_STRUCTS
	#define NEW_USER_INTERFACE_UTIL
	#define NEW_USER_INTERFACE_UISYSTEM
	#define NEW_USER_INTERFACE_INPUTSYSTEM
	#define NEW_USER_INTERFACE_SHELL
	#define NEW_USER_INTERFACE_FUNCTIONS
	#define NEW_USER_INTERFACE_PROXY
	#define NEW_USER_INTERFACE_FONT
	#define NEW_USER_INTERFACE_IMAGE
	#define NEW_USER_INTERFACE_CLIENTSYSTEM
	#define NEW_USER_INTERFACE_BUILDER
	#define NEW_USER_INTERFACE_RESOURCEFILE
	#define NEW_USER_INTERFACE_SERVERMESSAGE
	#define NEW_USER_INTERFACE_MAINFRAME_BUTTON  // ½Å±Ô UI¿¡ »óÁ¡ ¹öÆ° Ãß°¡		

	// ÆùÆ® Å©±â
	#define FONTSIZE_KOREAN			12	// ÇÑ±¹¾î
	#define FONTSIZE_ENGLISH		12	// ±Û·Î¹ú
	#define FONTSIZE_TAIWANESE		12	// ´ë¸¸¾î
	#define FONTSIZE_CHINESE		12	// Áß±¹¾î
	#define FONTSIZE_JAPANESE		15	// ÀÏº»¾î
	#define FONTSIZE_THAILAND		12	// ÅÂ±¹¾î
	#define FONTSIZE_PHILIPPINES	12	// ÇÊ¸®ÇÉ
	#define FONTSIZE_VIETNAMESE		12	// º£Æ®³²

	#if SELECTED_LANGUAGE == LANGUAGE_KOREAN
		#define FONTSIZE_LANGUAGE	( FONTSIZE_KOREAN )
	#elif SELECTED_LANGUAGE == LANGUAGE_TAIWANESE
		#define FONTSIZE_LANGUAGE	( FONTSIZE_TAIWANESE )
	#elif SELECTED_LANGUAGE == LANGUAGE_JAPANESE
		#define FONTSIZE_LANGUAGE	( FONTSIZE_JAPANESE )
	#elif SELECTED_LANGUAGE == LANGUAGE_THAILAND
		#define FONTSIZE_LANGUAGE	( FONTSIZE_THAILAND )
	#elif SELECTED_LANGUAGE == LANGUAGE_PHILIPPINES
		#define FONTSIZE_LANGUAGE	( FONTSIZE_PHILIPPINES )
	#elif SELECTED_LANGUAGE == LANGUAGE_CHINESE
		#define FONTSIZE_LANGUAGE	( FONTSIZE_CHINESE )
	#elif SELECTED_LANGUAGE == LANGUAGE_ENGLISH
		#define FONTSIZE_LANGUAGE	( FONTSIZE_ENGLISH )
	#elif SELECTED_LANGUAGE == LANGUAGE_VIETNAMESE
		#define FONTSIZE_LANGUAGE	( FONTSIZE_VIETNAMESE )
	#endif //SELECTED_LANGUAGE == LANGUAGE_TAIWANESE

	#ifdef _DEBUG
		#define _SHOPDEBUGMODE
	#endif //_DEBUG

#endif //NEW_USER_INTERFACE


#endif // _LANGUAGE_ENG