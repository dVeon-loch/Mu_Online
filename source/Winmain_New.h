#ifndef __WINMAIN_NEW_H__
#define __WINMAIN_NEW_H__


//-------------------------------------------------------------------------------------------------------------------------------
// _LANGUGE_KOR (±¹³»)
//-------------------------------------------------------------------------------------------------------------------------------
//
//  << 1. ÇÊµ¶»çÇ× >>
// 1. ÀÛ¾÷ÁßÀÎ µðÆÄÀÎÀº Ç×»ó ÁÖ¼®Ã³¸® ÈÄ Check out. (ÀÛ¾÷ÁßÀÎ µðÆÄÀÎ ÁÖ¼®ÄÑ°í Check in ±ÝÁö)
// 2. ÆÐÄ¡ÇÒ¶§ [ÀÛ¾÷Áß µðÆÄÀÎ]¿¡¼­ ÀÛ¾÷¿Ï·áµÈ µðÆÄÀÎÀ» [ÆÐÄ¡ÀÌÈÄ µðÆÄÀÎ]À¸·Î ¿Å°Ü ÆÐÄ¡ÇÑ´Ù.
// 3. ÆÐÄ¡½Ã, ÀÛ¾÷ÀÚ´Â ±âÈ¹ÆÀ°ú ÇùÀÇÈÄ ÆÐÄ¡´ã´çÀÚ¿¡°Ô µðÆÄÀÎ³»¿ë ÀÎ¼öÀÎ°è.
// 4. ´ã´ç ±¹°¡ ÀÛ¾÷ÈÄ, ´Ù¸¥±¹°¡¿¡ µé¾î°¥ ³»¿ëÀÌ¸é °¢ ±¹°¡ µðÆÄÀÎ ÆÄÀÏÀÇ [´ÙÀ½ÆÐÄ¡¶§ µé¾î°¥ µðÆÄÀÎ]¿¡ º¹»çÇÏ¿© ÁÖ¼®Ã³¸®
// 5. ÆÐÄ¡ µðÆÄÀÎÀº À§¿¡¼­ ºÎÅÍ ¾Æ·¡·Î ÁøÇà (ÃÖ±Ù ÆÐÄ¡´Â ¸Ç¾Æ·¡)
// 6. [ÆÐÄ¡ÀÌÈÄ µðÆÄÀÎ]Àº ÆÐÄ¡´ã´çÀÚ ÀÌ¿Ü¿¡´Â °ÇµéÁö ¸¶½Ã¿À.
//
//  << 2. define ±ÔÁ¤ >>
//	ex)
//	// - ÀÛ¾÷ÀÚ ÀÌ¸§
//	#define ÀÌ¸§_ºÐ·ù_ÀÛ¾÷³»¿ë						// ÆÐÄ¡ ¼³¸í (½ÃÀÛÀÏ) [ÆÐÄ¡µÈ ³¯ÀÚ¿Í ¼­¹ö or ¿¹Á¤]
//
// - ÀÌ¸§ : ÀÛ¾÷ÀÚ ÀÌ¸§ÀÇ ÀÌ´Ï¼È
// - ºÐ·ù : '_FIX' (¹ö±× ¼öÁ¤), '_MOD' (±âÈ¹»ó ±âÁ¸ ³»¿ë º¯°æ), '_ADD' (ÄÁÅÙÃ÷ Ãß°¡)·Î µðÆÄÀÎ ±¸ºÐ.
// - ÀÛ¾÷³»¿ë : ÀÚÀ²ÀûÀ¸·Î ¿µ¹®È­
//
//  << 3. ÆÐÄ¡½Ã ÁÖ¼®Ã³¸® >>
//	ex)
//	//----------------------------------------------------------------------------------------------
//	// <½ÃÁð5 - Part 4>
//	//----------------------------------------------------------------------------------------------
//  // [2009.01.22 º£Æ®³² 1.03] - ¾È»ó±Ô
//
//-------------------------------------------------------------------------------------------------------------------------------


//#if SELECTED_LANGUAGE == LANGUAGE_KOREAN		// ±¹³»			
#ifdef _LANGUAGE_KOR							// ±¹³»


/*--------- ÇöÀç ÀÛ¾÷ ÁßÀÌ¸ç º»¼·,Å×¼·¿¡ ¾Èµé¾î°£ Define ------------------------------------*/


/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//##  [ÀÛ¾÷Áß µðÆÄÀÎ]
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// - ¹Ú±âµ¿

// - ¾È»ó±Ô
//#define ASG_ADD_ETERNALWING_STICK_EFFECT				// ÀÌÅÍ³ÎÀ® ½ºÆ½ ÀÌÆåÆ® Ãß°¡ ¹× »ö»ó º¯°æ(08.12.02)

// - ÃÖ¼®±Ù 
//#define CSK_FIX_HACK									// ÇÙ ¼öÁ¤ °ü·Ã ÀÛ¾÷(2008.11.27)
#ifdef CSK_FIX_HACK
	#define CSK_FIX_GAMEGUARD_CHECK						// °ÔÀÓ°¡µå°´Ã¼°¡ Á×¾úÀ»½Ã °ÔÀÓÀÌ Á¾·áµÇ°Ô ¼öÁ¤(2008.11.27)
	#define CSK_FIX_NORMALATTACK_CHECK					// ÀÏ¹Ý°ø°Ý ÇÙÅø ´ëÀÀ(2008.12.02)
#endif // CSK_FIX_HACK

// - ¾ç´ë±Ù
//#define YDG_ADD_SKILL_RIDING_ANIMATIONS				// ½ÃÁð4 ½Å±Ô½ºÅ³ ¾Ö´Ï¸ÞÀÌ¼Ç Ãß°¡ (2008.08.22) [Å×½ºÆ®Áß]
//#define YDG_MOD_CHECK_PROTECT_AUTO_FLAG					// ¾ÆÀÌ·Îº¿ ¿ÀÅä ¸·±â ÇÃ·¡±× °Ë»ç ·çÆ¾ (2009.03.11) [$new ON/OFF¿ë-º»¼·½Ã ÁÖ¼®]
//#define YDG_MOD_PROTECT_AUTO_TEST						// ¾ÆÀÌ·Îº¿ ¿ÀÅä ¸·±â Å×½ºÆ®ÀÛ¾÷ [Å×½ºÆ®Áß]
//#define YDG_MOD_PROTECT_AUTO_V4_R4						// ¾ÆÀÌ·Îº¿ ¿ÀÅä ¸·±â ½Ã¸®Áî4 4Â÷º¸¿Ï - fastcall (2009.04.30) [ÆÐÄ¡¾ÈµÊ]
//#define YDG_MOD_PROTECT_AUTO_V4_R5						// ¾ÆÀÌ·Îº¿ ¿ÀÅä ¸·±â ½Ã¸®Áî4 4Â÷º¸¿Ï - ¾ÏÈ£È­ ±¸¸Û¸·±â (2009.04.24) [ÆÐÄ¡¾ÈµÊ]
//#define YDG_FIX_SOCKET_MISSING_MAGIC_POWER_BONUS		// ¼ÒÄÏ¾ÆÀÌÅÛ ÃÖ´ë/ÃÖ¼Ò °ø°Ý·Â/¸¶·Â Áõ°¡ ¿É¼Ç¿¡ ¸¶·Â Áõ°¡ ¾ÈµÇ´ø°Í ¼öÁ¤ (2009.06.01) [Å×½ºÆ®Áß]
//#define YDG_FIX_CURSEDTEMPLE_GAUGEBAR_ERROR				// È¯¿µ»ç¿ø ¼º¹° È¹µæ/µî·Ï °ÔÀÌÁö ¿À·ù ¼öÁ¤ (2009.12.03)

// - ¹ÚÁ¾ÈÆ
//#define PJH_DEBUG										// ¸Ê ÀÌµ¿ ½Ã°£Ã¼Å© (2010.10.08)
//#define PJH_FIX_SPRIT									// ´ÙÅ©·Îµå Æê ½ºÇÇ¸´ ¼öÁ¤(2009.01.28)
//#define PJH_FIX_4_BUGFIX_7							// wops_32859 ´ÙÅ©½ºÅ©¸² °ü·Ã ¹ö±× ¼öÁ¤Áß [ÆÐÄ¡ ¾ÈµÊ]


// 4. °ÔÀÓÃò À¥½ºÅ¸ÅÍ/ Season5-5 ¹Ì´Ï¾÷µ¥ÀÌÆ®, º¸¼®Á¶ÇÕ
// - ÀÌÀº¹Ì
//#define LEM_ADD_SEASON5_PART5_MINIUPDATE_JEWELMIX
// #define LEM_DEBUG_TEST

// - ±èÀçÈñ
//#define KJH_FIX_SOURCE_ARRANGEMENT_MOVECOMMAND_WINDOW			// ÀÌµ¿¸í·ÉÃ¢ ¼Ò½ºÄÚµå Á¤¸® (09.03.04)
//#define KJH_FIX_JP0467_RENDER_DARKLOAD_PET_OTHER_CHARATER		// ´Ù¸¥ÄÉ¸¯ÅÍÀÇ ´ÙÅ©·ÎµåÆêÀÌ ÀåÂøµÇ°Å³ª ÇØÁ¦ÇÒ¶§, È­¸é»ó º¯È­µÇÁö ¾Ê´Â ¹ö±× ¼öÁ¤ (09.06.03)
//#define KJH_ADD_INGAMESHOP_ITEM_TOOLTIP							// ÀÎ°ÔÀÓ¼¥ ¾ÆÀÌÅÛ ÅøÆÁ (09.11.11)
//#define KJH_MOD_NATION_LANGUAGE_REDEFINE					// ±¹°¡º° ¾ð¾î Define ÀçÁ¤ÀÇ (10.04.26)

// - ÀÌµ¿¼® 
//#define LDS_MOD_BLOODWITCHQUEEN_EFFECT_ATTACK2			// È®Àå ¸ó½ºÅÍ¸Ê ¾ÆÀÌ´ÙÀÇ ºí·¯µð À§Ä¡ÄýÀÇ 2¹ø°ø°Ý È¿°ú¸¦ ±â°£Æ½¿¡¼­ ºñ±¤¿ª Ã³¸® ÇÏ¸ç È¿°ú º¯°æ. (10.04.28)
//#define LDS_FIX_ACCESS_INDEXNUMBER_ALREADY_LOADTEXTURE	// Bitmap::LoadTexture½Ã¿¡ ºñÆ®¸Ê ÀÎµ¦½º ÁßÃ¸À¸·Î ±âÁ¸¿¡ ÀÌ¹Ì ÀÐÀº ºñÆ®¸ÊÀÌ Á¦°ÅµÇ¹ö¸®´Â ¹®Á¦ FIX. (10.03.30)
//#define LDS_ADD_TEST_UNITEDMARKETPLACE					// ÅëÇÕ½ÃÀå ¼­¹ö Å×½ºÆ®¿ë Á¤ÀÇ. (09.12.24)
//#define LDS_FIX_SETNULLALLOCVALUE_WHEN_BMDRELEASE			// BMD±¸Á¶Ã¼ Release·Î º¯¼ö NULLÃ³¸® ½Ã¿¡, ÃÊ±âÈ­¿©ºÎ º¯¼öµµ NULLÃ³¸® (09.12.01)
//#define LDS_FIX_DISABLE_INPUTJUNKKEY_WHEN_LORENMARKT_EX01	// LDS_FIX_DISABLE_INPUTJUNKKEY_WHEN_LORENMARKT	// ÅëÇÕ½ÃÀå, °ø¼ºÀü¸Ê ¸ÊÀÌµ¿½Ã °£È¤ Å°ÀÔ·ÂÀÌ ¾ÈµÇ´Â °æ¿ì. ¸Å¿ì °£È¤ LoadingWorld ¼öÄ¡¸¦ ReceiveTeleportÇÔ¼ö³ª ReceiveJoinMapServerÇÔ¼ö¿¡¼­ º¯°æÀ» ÇØÁÖÁö ¾Ê¾Æ ¹ß»ý, ¸Ê º¯°æ½Ã È£ÃâµÇ´Â ReceiveChangeMapServerResult ÇÔ¼ö¿¡µµ LoadingWorld º¯°æ.(10.02.16)
//#define LDS_ADD_MULTISAMPLEANTIALIASING					// Anti Aliasing (MSAA) Ãß°¡ (10.03.22)

// - ÀÌµ¿±Ù 
//#define LDK_MOD_NUMBERING_PETCREATE						// Å×½ºÆ® (09.08.27)
//#define LDK_FIX_MOTION_INTI_AT_THE_LOADINGWORLD				// wops 34113 - ¿ùµå·Îµù½Ã ¸ð¼Ç ÃÊ±âÈ­(09.04.14)
//#define PBG_FIX_LODING_ACTION								// ·Îµù½Ã¿¡ ¹ßÀÌ ¿òÁ÷ÀÌÁö ¾Ê´Â(¸ð¼Ç) ¹ö±×(09.05.25)
//#define LDK_ADD_SCALEFORM									// ½ºÄÉÀÏÆû ÀÛ¾÷(10.03.10)
#ifdef LDK_ADD_SCALEFORM
	// 6-2ÀÛ¾÷
	#define ADD_SELETED_LANGUAGE_FONT						// ±¹°¡º° ÆùÆ® ¼³Á¤(2010.09.14)
	#define MOD_RESOLUTION_BY_UI_RENDER_ITEM_RESIZING		// ÇØ»óµµº° ¾ÆÀÌÅÛ Å©±â º¯°æ(2010.10.19)

	//#define GFX_UI_TEST_CODE								// ÀÛ¾÷Áß Å×½ºÆ®ÄÚµå ¹­À½
#endif //LDK_ADD_SCALEFORM

// - ¹Úº¸±Ù
//#define PBG_FIX_ITEMNAMEINDEX								// ¾ÆÀÌÅÛ ÀÌ¸§ ÀÎµ¦½º ¹ö±×¼öÁ¤(10.06.16)
//#define PBG_MOD_SUPPLEMENTATION							// ¼ÒÈ¯¼ú»çÀý´ë¹«±â,°Å·¡Ã¢,Ã¤ÆÃÃ¢ º¸¿ÏÀÛ¾÷(10.10.18)
//#define PBG_FIX_SETITEMTOOLTIP							// ¼¼Æ® ¾ÆÀÌÅÛ ÅøÆÁ ¹ö±×¼öÁ¤(2010.10.26)
//#define PBG_FIX_CHAOSMAPMOVE								// Ä«Ä³¿¡¼­ Ä³¸¯¼±ÅÃÃ¢ ÀÌµ¿½Ã ¸ÊÀÎµ¦½º ¹ö±× ¼öÁ¤(2010.10.27)

// - ÀÌÁÖÈï
//#define LJH_FIX_REARRANGE_INVISIBLE_CLOAK_LEVEL_FOR_CHECKING_REMAINING_TIME	// Åõ¸í¸ÁÅä(lv1~8)°ú ºí·¯µåÄ³½½(lv0~7)ÀÇ Â÷ÀÌ¶§¹®¿¡ 8·¹º§ Åõ¸í¸ÁÅä ¿ìÅ¬¸¯ ÇÒ ¶§ ½Ã°£ÀÌ ÀÌ»óÇÏ°Ô ³ª¿À´Â ¹ö±× ¼öÁ¤(10.07.07) 

// - ±èÀç¿ì
//#define KJW_FIX_SOCKET_INFORMATION						// º¯¼ö ÃÊ±âÈ­ ½ÃÁ¡ÀÇ ¹®Á¦·Î ¼ÒÄÏÁ¤º¸°¡ ¹Í½ºÀÎº¥Åä¸®¿¡ Ç¥½ÃµÇÁö ¾Ê´Â ¹®Á¦Á¡ ¼öÁ¤ (10.9.16)
//#define KJW_ADD_NEWUI_SCROLLBAR							// ±âº» ½ºÅ©·Ñ¹Ù UIÃß°¡(2010.10.28)
//#define KJW_ADD_NEWUI_TEXTBOX								// ±âº» ÅØ½ºÆ®¹Ú½º UIÃß°¡(2010.10.28)
//#define KJW_ADD_NEWUI_GROUP								// ±×·ì UIÃß°¡(2010.10.28)
//#define KJW_ADD_LOG_WHEN_FAIL_LODING_MODEL			// ¸ðµ¨·Îµù ½ÇÆÐ½Ã¿¡ ÇØ´ç ¸ðµ¨¿¡´ëÇÑ Á¤º¸ ·Î±×³²±â±â

// - ¸í¼¼Á¾
// #define MSZ_ADD_CRASH_DUMP_UPLOAD							// Crash dump upload ±â´É Ãß°¡
// #ifdef FOR_WORK
// 	#define MSZ_ADD_EXCEPTION_TEST							// Crash dump test ±â´É Ãß°¡ (Num Lock ÄÑÁø »óÅÂ¿¡¼­ Ctrl+¼ýÀÚÆÐµåÅ°)
// #endif // FOR_WORK


// - °ûÁØ¿ø
//#define KWAK_ADD_TRACE_FUNC								// Trace ÇÔ¼ö Ãß°¡ -> ±âÁ¸ OutPutDebugString ´ëÃ¼ÇÔ
#ifdef _DEBUG
	//#define KWAK_FIX_ALT_KEYDOWN_MENU_BLOCK					// ¾ËÆ®Å° ´©¸£¸é Æ÷Ä¿½Ì ÀÒ´Â ¹®Á¦
#endif // _DEBUG
//#define KWAK_ADD_TYPE_TEMPLATE_INBOUNDS					// InBounds ÅÛÇÃ¸´ Ãß°¡
//#define KWAK_ADD_DEFINE_UTIL							// ºñÆ® ¿¬»ê ¿Ü µðÆÄÀÎ Ãß°¡

#ifdef _VS2008PORTING
	//#define	KWAK_FIX_KEY_STATE_RUNTIME_ERR					// Èñïðàâëåíèå îøèáîê âðåìåíè âûïîëíåíèÿ êëþ÷åâîãî ââîäà vs2008 (2010.10.29)
	//#define KWAK_FIX_CHARACTER_SKILL_RUNTIME_ERR			// Ä³¸¯ÅÍ ½ºÅ³ ¾ÆÀÌÄÜ Rendering ·±Å¸ÀÓ ¿¡·¯ ¼öÁ¤(2010.10.29)
	//#define KWAK_FIX_COMPILE_LEVEL4_WARNING					// vs2008 ÄÄÆÄÀÏ ¿É¼Ç Lv4ÀÇ ¿ö´× ¼öÁ¤(2010.11.1)
	//#define KWAK_FIX_COMPILE_LEVEL4_WARNING_EX				// vs2008 ÄÄÆÄÀÏ ¿É¼Ç Lv4ÀÇ ¿ö´× ¼öÁ¤(2010.11.4)
	//#define KWAK_FIX_COMPILE_SIGN_UNSIGN_DISCORD			// vs2008 ÄÄÆÄÀÏ signed ¶Ç´Â unsigned ºÒÀÏÄ¡ ¼öÁ¤(2010.11.8)

	// - ±èÀç¿ì
	//#define KJW_FIX_SOCKET_BONUS_BIT_OPERATION				// VS2008·Î .ºôµå½Ã ¹ß»ýÇÏ´Â ºñÆ®¿¬»ê ¿À·ù¼öÁ¤( int -> __int64 ) (10.9.16)
#endif

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//## [´ÙÀ½ ÆÐÄ¡¶§ µé¾î°¥ µðÆÄÀÎ]
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// - ±èÀçÈñ
//#define KJH_FIX_INGAMESHOP_SENDGIFT_ELIXIROFCONTROL		// ÀÎ°ÔÀÓ¼¥ ¼±¹°ÇÏ±â¿¡¼­ ´ÙÅ©·Îµå°¡ ¾Æ´Ñ Å¬·¡½ºµµ ¼±¹°ÇÏ±â ¹ÞÀ»¼ö ÀÖ´Â¹®Á¦ ¼öÁ¤ (10.06.23)
//#define KJH_MOD_BTS184_REQUIRE_STAT_WHEN_SPELL_SKILL		// ½ºÅ³ ½ÃÀü½Ã ½ºÅÝ ¿ä±¸Ä¡¿¡ µû¶ó ½ºÅ³ »ç¿ë º¯°æ (10.05.17)

// - ¹Ú±âµ¿
//#define PKD_ADD_ENHANCED_ENCRYPTION					// ¾ÏÈ£È­ º¯°æ ¹× ¼Ò½º »ì¸®±â. ¸ðµç ÆÐÅ¶ ¾ÏÈ£È­ 

// - ÀÌÁÖÈï
//#define LJH_FIX_NO_MSG_FOR_FORCED_MOVEOUT_FROM_BATTLESOCCER		// ÀüÅõÃà±¸Áß ±æµå¸¶½ºÅÍ°¡ ¾Æ´Ñ ÀÚ½ÅÀÌ °­Á¦·Î °æ±âÁß °æ±âÀå ¹ÛÀ¸·Î ³ª°¬À» ¶§ °á°ú ¸Þ¼¼Áö Ãâ·ÂÇÏÁö ¾ÊÀ½(09.12.28) 
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//## [ÆÐÄ¡ÀÌÈÄ µðÆÄÀÎ]
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

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

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//----------------------------------------------------------------------------------------------
// [2010.09.09 º»¼· 1.07Q+] - ÀÌÁÖÈï
// [2010.09.09 ºí·ç 1.00K+] - ÀÌÁÖÈï
// - ±èÀçÈñ
#ifdef _ORIGINAL_SERVER
	#define KJH_ADD_EVENT_LOADING_SCENE			//!! ÀÌº¥Æ®°ü·Ã ·Îµù¾À Ãß°¡(10.09.09) - ·¹µå ÀÌº¥Æ® ³¡³ª´Â ÀÌÈÄ ÁÖ¼®Ã³¸®¿Í ¿ø·¡ ¸®¼Ò½º Àû¿ë (10.09.09 ~ 10.09.30)
#endif // _ORIGINAL_SERVER

#ifdef _BLUE_SERVER
	#define KJH_ADD_EVENT_LOADING_SCENE			//!! ÀÌº¥Æ®°ü·Ã ·Îµù¾À Ãß°¡(10.09.09) - ºí·ç ÀÌº¥Æ® ³¡³ª´Â ÀÌÈÄ ÁÖ¼®Ã³¸®¿Í ¿ø·¡ ¸®¼Ò½º Àû¿ë (10.09.09 ~ 10.09.30)
#endif // _BLUE_SERVER

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//----------------------------------------------------------------------------------------------
// [2010.08.23 Å×¼· 1.07O+] - ÀÌÁÖÈï
// [2010.08.26 º»¼· 1.07P+] - ÀÌÁÖÈï
// [2010.08.26 ºí·ç 1.00J+] - ÀÌÁÖÈï
// - ÀÌÁÖÈï
#ifndef _BLUE_SERVER		// ifndef
	#define LJH_MOD_CANNOT_USE_CHARMITEM_AND_CHAOSCHARMITEM_SIMULTANEOUSLY	// (·¹µå¸¸)Çà¿îÀÇºÎÀû°ú Ä«¿À½ºÁ¶ÇÕºÎÀû µ¿½Ã¿¡ »ç¿ë ¸øÇÏµµ·Ï ±âÈ¹º¯°æ(10.08.19)
#endif //_BLUE_SERVER

// ·¹µå, ºí·ç ÀÌº¥Æ® Á¾·á ¾Æ·¡ define ÁÖ¼®Ã³¸®(10.08.23)
//		LDK_MOD_GAMBLE_SUMMER_SALE_EVENT 
//		KJH_ADD_EVENT_LOADING_SCENE

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//----------------------------------------------------------------------------------------------
// [2010.08.12 º»¼· 1.07N+] - ÀÌÁÖÈï
// [2010.08.12 ºí·ç 1.00I+] - ÀÌÁÖÈï

// - ÀÌµ¿±Ù
// #ifdef _BLUE_SERVER									
// 	#define LDK_MOD_GAMBLE_SUMMER_SALE_EVENT		// ºí·ç¸¸ - °×ºí ¿©¸§ ÀÌº¥Æ® 50% ¼¼ÀÏ (10.08.11) - ÀÌº¥Æ®°¡ ³¡³ª ÁÖ¼®Ã³¸®ÇÔ(10.08.23)
// #endif //_BLUE_SERVER	

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//----------------------------------------------------------------------------------------------
// < ¹ö±× ¼öÁ¤ >
//----------------------------------------------------------------------------------------------
// [2010.07.06 Å×¼· 1.07I+] - ¹Úº¸±Ù
// [2010.07.08 º»¼· 1.07J+] - ±èÀçÈñ
// [2010.07.08 ºí·ç 1.00F+] - ±èÀçÈñ

// - ¹Úº¸±Ù
#define PBG_FIX_CHARACTERSELECTINDEX					// Ä³¸¯ÅÍ ÀÎµ¦½º ¹ö±×¼öÁ¤(10.07.05)

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//----------------------------------------------------------------------------------------------
// < ¹ö±× ¼öÁ¤ >
//----------------------------------------------------------------------------------------------
// [2010.07.01 Å×¼· 1.07H+] - ±èÀçÈñ
// [2010.07.08 º»¼· 1.07J+] - ±èÀçÈñ
// [2010.07.08 ºí·ç 1.00F+] - ±èÀçÈñ

// - ¹Úº¸±Ù
#define PBG_FIX_DROPBAN_GENS							// ¹ö¸®±â ¾ÆÀÌÅÛ ¼öÁ¤

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//----------------------------------------------------------------------------------------------
// < ¹ö±× ¼öÁ¤ >
//----------------------------------------------------------------------------------------------
// [2010.06.30 Å×¼· 1.07F+] - ±èÀçÈñ
// [2010.07.01 º»¼· 1.07G+] - ±èÀçÈñ
// [2010.07.01 ºí·ç 1.00E+] - ±èÀçÈñ

// - ±èÀçÈñ
#define KJH_MOD_INGAMESHOP_DOMAIN_EACH_NATION					// ±¹°¡º° °ÔÀÓ¼¥ µµ¸ÞÀÎ ¼³Á¤ (10.05.04)
#define KJH_FIX_BTS158_TEXT_CUT_ROUTINE							// UI¿¡ ¸Â°Ô Text¸¦ ÀÚ¸¦½Ã ÀÌ»óÇö»ó ¼öÁ¤ (10.05.07)
#define KJH_MOD_BTS173_INGAMESHOP_ITEM_STORAGE_PAGE_ZERO_PAGE	// ÀÎ°ÔÀÓ¼¥ º¸°üÇÔ ¾ÆÀÌÅÛÀÌ ¾øÀ»½Ã 0ÆäÀÌÁö Ãâ·Â (10.05.13)
#define KJH_FIX_BTS179_INGAMESHOP_STORAGE_UPDATE_WHEN_ITEM_BUY	// ÀÎ°ÔÀÓ¼¥ ¾ÆÀÌÅÛ ±¸ÀÔ½Ã ¼±¹°ÇÔ ÅÇ¿¡¼­ º¸°üÇÔ ¾ÆÀÌÅÛÀÌ °»½ÅµÇ´Â ¹ö±×¼öÁ¤ (10.05.13)
#define KJH_FIX_BTS167_MOVE_NPC_IN_VIEWPORT						// ºäÆ÷Æ®¾È¿¡ NPC°¡ µé¾î¿À¸é NPC°¡ °©ÀÚ±â ÀÌµ¿ÇÏ´Â ¹ö±×¼öÁ¤ (10.05.17)
#define KJH_MOD_BTS191_GOLD_FLOATING_NUMBER						// ¾ÆÀÌÅÛÀÌ³ª Ä³½Ã ±Ý¾×À», ¼Ò¼ýÁ¡ÀÚ¸®±îÁö °è»ê (10.05.18)
#define KJH_FIX_BTS204_INGAMESHOP_ITEM_STORAGE_SELECT_LINE		// ÀÎ°ÔÀÓ¼¥ º¸°üÇÔ¿¡¼­ 1¹øÂ° ¾ÆÀÌÅÛ »ç¿ë½Ã, Æ÷Ä¿½ÌÀÌ 3¹øÂ° ¾ÆÀÌÅÛÀ¸·Î ¼±ÅÃµÇ´Â ¹ö±×¼öÁ¤ (10.05.18)
#define KJH_FIX_BTS206_INGAMESHOP_SEND_GIFT_MSGBOX_BLANK_ID		// ÀÎ°ÔÀÓ¼¥ ¼±¹°ÇÏ±â ¸Þ¼¼ÁöÃ¢¿¡¼­ IDÀÔ·ÂÇÏÁö ¾Ê°í È®ÀÎ ¹öÆ° Å¬¸¯½Ã, ¼±¹°È®ÀÎ ¸Þ¼¼ÁöÃ¢ÀÌ ¶ß´Â ¹ö±× (10.05.18)
#define KJH_MOD_COMMON_MSG_BOX_BTN_DISABLE_TEXT_COLOR			// °øÅë ¸Þ¼¼Áö¹Ú½º ¹öÆ° Disable½Ã ±ÛÀÚ»ö ¼öÁ¤ (10.05.18)
#define KJH_MOD_BTS208_CANNOT_MOVE_TO_VULCANUS_IN_NONPVP_SERVER	// nonPVP ¼­¹öÀÏ´ë ºÒÄ«´©½º·Î ÀÌµ¿ºÒ°¡ (10.05.18) - ¼­¹öµ¿½Ã¼öÁ¤
#define KJH_FIX_BTS207_INGAMESHOP_SEND_GIFT_ERRORMSG_INCORRECT_ID	// ÀÎ°ÔÀÓ¼¥ ¼±¹°ÇÏ±â¿¡¼­ »ó´ë¹æ ¾ÆÀÌµð°¡ Æ²·ÈÀ»¶§ ¿¡·¯ ¸Þ¼¼Áö (10.05.19) - ¼­¹öµ¿½Ã¼öÁ¤
#define KJH_FIX_BTS251_ELITE_SD_POTION_TOOLTIP					// ¿¤¸®Æ® SD¹°¾à ÅøÆÁÀÌ ¾È³ª¿À´Â ¹ö±× ¼öÁ¤ (10.05.24)
#define KJH_FIX_BTS260_PERIOD_ITEM_INFO_TOOLTIP					// ±â°£Á¦¾ÆÀÌÅÛ ±â°£Á¦ Á¤º¸ ÅøÆÁ ¹ö±× ¼öÁ¤ (10.05.24) - Text.txt ¼öÁ¤¿ä¸Á
#define KJH_FIX_BTS295_DONT_EXPIRED_WIZARD_RING_RENDER_SELL_PRICE	// ±â°£Á¦ ¸¶¹ý»ç¹ÝÁö°¡ ±â°£ÀÌ ¸¸·áµÇÁö ¾Ê¾Ò´Âµ¥ ÆÇ¸Å°¡°ÝÀÌ ³ª¿À´Â ¹ö±× ¼öÁ¤ (10.05.25)
#define KJH_MOD_INGAMESHOP_GIFT_FLAG							// ÀÎ°ÔÀÓ¼¥ ¼±¹°ÇÏ±â Flag·Î ¼±¹°ÇÏ±â ¹öÆ° On/Off (10.05.25)

// - ¾È»ó±Ô
#define ASG_FIX_QUEST_GIVE_UP									// Äù½ºÆ® Æ÷±â ¹ö±× ¼öÁ¤. Äù½ºÆ® »óÅÂ(QS) 0xfe»èÁ¦µÊ.(10.05.26)

// - ÀÌÁÖÈï
#define LJH_MOD_EXTENDING_NUM_OF_MIX_RECIPES_FROM_100_TO_1000	// ÇÑ Á¶ÇÕ Ã¢¿¡¼­ Á¶ÇÕÇÒ¼ö ÀÖ´Â Á¾·ùÀÇ °³¼ö Á¦ÇÑÀ» 100°³¿¡¼­ 1000°³·Î Áõ°¡(10.02.23)
#define LJH_FIX_LOADING_INFO_OF_AN_OTHER_CHARACTER_IN_LOGIN		// Ä³¸¯ÅÍ ¼±ÅÃÈ­¸é¿¡¼­ Ä³¸¯ÅÍ B¸¦ ¼±ÅÃÇÏ°í Ä³¸¯ÅÍ A¸¦ Å¬¸¯ÇÏ¸é¼­ ¿£ÅÍÅ°¸¦ µ¿½Ã¿¡ ´©¸£¸é Ä³¸¯ÅÍ BÀÇ ÀÏºÎÁ¤º¸·Î ·Î±×ÀÎ(10.04.01)
#define LJH_FIX_BUG_DISPLAYING_NULL_TITLED_QUEST_LIST			// ¼­¹ö¿¡¼­ ¹ÞÀº Äù½ºÆ® ÀÎµ¦½º°¡ Á¸ÀçÇÏÁö ¾Ê¾Æ (null)·Î Ç¥½ÃµÇ´Â Ç×¸ñÀº Äù½ºÆ® ¸ñ·ÏÀ» ¸¸µé¶§ ³ÖÁö ¾Êµµ·Ï ¼öÁ¤(10.04.14)
#define LJH_FIX_BUG_SELLING_ITEM_CAUSING_OVER_LIMIT_OF_ZEN		// ¼ÒÁöÇÑµµ¾×À» ÃÊ°úÇÏ´Â ÆÇ¸Å¾×ÀÇ ¾ÆÀÌÅÛÀ» ÆÈÁö ¸øÇÏ°Ô ¼­¹ö·Î ¸Þ¼¼Áöµµ º¸³»Áö ¾Êµµ·Ï ¼öÁ¤(10.04.15)				
#define LJH_ADD_SAVEOPTION_WHILE_MOVING_FROM_OR_TO_DIFF_SERVER	// ´Ù¸¥ ¼­¹ö(ÇöÀç °ø¼º¼­¹ö, ·Î·»½ÃÀå)¿¡¼­ºÎÅÍ ¶Ç´Â ´Ù¸¥ ¼­¹ö·Î ÀÌµ¿ÇÒ ¶§ ¿É¼ÇÀÌ ÀúÀå µÇÁö ¾Ê´Â ¹ö±× ¼öÁ¤(10.04.16)
#define LJH_FIX_NO_EFFECT_ON_WEAPONS_IN_SAFE_ZONE_OF_CURSED_TEMPLE	// È¯¿µ»ç¿øÀÇ ¾ÈÀüÁö¿ª¿¡¼­ 15·¹º§ ¾ÆÀÌÅÛ ÀÌÆåÆ® ³ª¿ÀÁö ¾Ê´Â ¹ö±× ¼öÁ¤(10.04.16)

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//----------------------------------------------------------------------------------------------
// < ¹ö±× ¼öÁ¤ >
//----------------------------------------------------------------------------------------------
// [2010.06.09 Å×¼· 1.07D+] - ±èÀçÈñ
// [2010.06.10 º»¼· 1.07E+] - ±èÀçÈñ
// [2010.06.10 ºí·ç 1.00D+] - ±èÀçÈñ

#define KJH_ADD_NPC_ROURKE_PCROOM_EVENT_MESSAGEBOX					// PC¹æ ÀÌº¥Æ®(µµ¿ì¹Ì·çÅ©) ¸Þ¼¼Áö¹Ú½º Ãâ·Â (10.06.08)


/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//----------------------------------------------------------------------------------------------
// [2010.05.12 Å×¼· 1.07A+] - ¾È»ó±Ô
// [2010.05.13 º»¼· 1.07B+] - ¾È»ó±Ô
// [2010.05.13 ºí·ç 1.00A+] - ¾È»ó±Ô

// - ÀÌÁÖÈï
#define LJH_MOD_CHANGED_GOLDEN_OAK_CHARM_STAT			// °ñµç¿ÀÅ©Âü Âø¿ëÈ¿°ú¼öÄ¡ ±âÈ¹ º¯°æ(HP +100, SD+500) (10.05.06)
#define LJH_FIX_GETTING_ZEN_WITH_PET_OF_OTHER_PLAYER	// ´Ù¸¥ ÇÃ·¹ÀÌ¾îÀÇ ÆêÀÌ Á¨À» ¸Ô¾îÁÖ´Â ¹ö±× ¼öÁ¤(10.05.10)

// - ¹Úº¸±Ù
#define PBG_FIX_CURSEDTEMPLE_SYSTEMMSG					//È¯¿µÀÇ»ç¿ø ¸Þ½ÃÁö Ã³¸® ¹ö±× ¼öÁ¤(09.10.22)


/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//----------------------------------------------------------------------------------------------
// [2010.05.03 Å×¼· 1.07y] - ¾È»ó±Ô
// [2010.05.06 º»¼· 1.07z] - ¾È»ó±Ô
// [2010.05.06 ºí·ç 1.00z] - ¾È»ó±Ô

// - ±èÀçÈñ
#ifdef _BLUE_SERVER								// #ifndef	·¹µå º»¼·¸¸ Á¦¿Ü	(Â÷ÈÄ¿¡ ºí·ç¿ë¸¸ µé¾î°¨)
	#define KJH_ADD_CREATE_SERIAL_NUM_AT_ATTACK_SKILL			// °ø°Ý½Ã ½Ã¸®¾ó³Ñ¹ö »ý¼º (10.04.19)
#endif // _BLUE_SERVER

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//----------------------------------------------------------------------------------------------
// [2010.04.29 º»¼· 1.07x] - ±èÀçÈñ
// [2010.04.29 ºí·ç 1.00y] - ±èÀçÈñ

// - ±èÀçÈñ
#define KJH_MOD_INGAMESHOP_UNITTTYPE_FILED_OF_PRODUCT_SCRIPT	// Product °ÔÀÓ¼¥ ½ºÅ©¸³Æ®ÀÇ UnitTypeÇÊµå·Î ´ÜÀ§¸í º¯°æ (10.04.22) - ÀÎ°ÔÀÓ¼¥ ¶óÀÌºê·¯¸® Àû¿ë(10.03.29ÀÏÀÚ)
#define KJH_MOD_INGAMESHOP_ITEM_STORAGE_PAGE_UNIT				// ÀÎ°ÔÀÓ¼¥ º¸°üÇÔ ÆäÀÌÁö ´ÜÀ§ ¹æ½ÄÀ¸·Î º¯°æ (10.04.27)

// - ÀÌÁÖÈï
#define LJH_FIX_APP_SHUTDOWN_WEQUIPPING_INVENITEM_WITH_CLICKING_MOUSELBTN // ¸¶¿ì½º ¿ÞÂÊ¹öÆ°À» ´©¸¥Ã¤·Î ÀÎº¥¾ÆÀÌÅÛÀ» ÀåÂøÇÏ·Á°í ÇÒ¶§ ÇÁ·Î±×·¥ Æ¨±â´Â ¹ö±× ¼öÁ¤(10.04.29)


/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//----------------------------------------------------------------------------------------------
// [2010.04.27 Å×¼·] - ±èÀçÈñ
// [2010.04.29 º»¼·] - ±èÀçÈñ
// [2010.04.29 ºí·ç] - ±èÀçÈñ

// #ifdef _TEST_SERVER
// 	#define KJH_FIX_ICARUS_MAP_ATTRIBUTE_FOR_TESTSERVER			// ÀÌÄ«·ç½º ¸Ê ¼Ó¼º º¯°æ(10.04.27) - º»¼­¹ö Àû¿ë½Ã ÁÖ¼®Ã³¸®
// #endif // _TEST_SERVER

#ifdef _BLUE_SERVER
	#define KJH_MOD_ENTER_EVENTMAP_ERROR_MSG					// ÀÌº¥Æ®¸Ê ÀÔÀå ¿¡·¯¸Þ¼¼Áö Ãß°¡ (10.04.26)
#endif // _BLUE_SERVER


/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//----------------------------------------------------------------------------------------------
// <½ÃÁð5 - Part 4>
//----------------------------------------------------------------------------------------------
// [2010.04.21 Å×¼·] - ±èÀçÈñ
// [2010.04.29 º»¼·] - ±èÀçÈñ
// [2010.04.29 ºí·ç] - ±èÀçÈñ

// - ¹ÚÁ¾ÈÆ
#define PJH_ADD_MASTERSKILL								//¼ÒÈ¯¼ú»ç ¸¶½ºÅÍ·¹º§ Ãß°¡(2010.03.09)

// - ¾È»ó±Ô
#define ASG_ADD_STRIFE_KANTURU_RUIN_ISLAND				// Ä­Åõ¸£ ÆóÇã3 ºÐÀïÁö¿ªÈ­.(10.04.13)

// - ±èÀçÈñ
#define KJH_FIX_POTION_PRICE							// »óÁ¡ ¹°¾à°¡°Ý ¹ö±×¼öÁ¤ (10.04.16)
#define KJH_FIX_INIT_EVENT_MAP_AT_ABNORMAL_EXIT			// ºñÁ¤»óÀûÀûÀÎ Á¾·á½Ã ÀÌº¥Æ®¸Ê ÃÊ±âÈ­ (10.04.20)
// #ifdef _TEST_SERVER
// 	#define KJH_EXTENSIONMAP_FOR_TESTSERVER				// È®Àå¸Ê Å×¼·¿ë(º»¼·¶§´Â »©¾ßÇÔ) (10.04.20)
// #endif // _TEST_SERVER

// - ¹Úº¸±Ù
#define PBG_FIX_SATAN_VALUEINCREASE						// »çÅº Âø¿ë½Ã ¼öÄ¡ Áõ°¡ ¹ö±× ¼öÁ¤(10.04.07)
#define PBG_MOD_GUARDCHARMTEXT							// ¼öÈ£ÀÇºÎÀû¾ÆÅÛ ¹®±¸¼öÁ¤(10.04.14)

// - ÀÌµ¿±Ù, ÀÌµ¿¼®
#define LDK_LDS_EXTENSIONMAP_HUNTERZONE					// »ç³ÉÅÍ È®Àå ¸Ê (±âÁ¸ ¸Ê ¸®´º¾ó ¹× ¸ó½ºÅÍ, º¸½º±Þ ¸ó½ºÅÍ Ãß°¡.). (10.02.18)

// - ÀÌµ¿±Ù
#define LDK_MOD_GUARDIAN_DROP_RESIZE					// µ¥¸ó ¼öÈ£Á¤·É ¹Ù´Ú¿¡ ³õ¿´À»¶§ »çÀÌÁî Á¶Á¤(10.03.04)

// - ÀÌµ¿¼®
#ifdef _BLUE_SERVER
	#define LDS_MOD_PKSYSTEM_INGAMESHOP_ATTACK_PKLEVEL1		// ºí·ç ¼­¹ö¿¡¼­¸¸ ¹«¹ýÀÚ "°æ°í" ÄÉ¸¯ÅÍµé ´ë»ó crtl¾øÀÌ °ø°Ý°¡´ÉÇß´ø°ÍÀ» ±âÈ¹ÀûÀ¸·Î ·¹µå¿Í µ¿ÀÏÇÏ°Ô º¯°æÇÏ¿© ¹«¹ýÀÚ "°æ°í"µµ ÀÏ¹ÝÄÉ¸¯°ú µ¿ÀÏ °ø°Ý µÇ°Ô.  (10.04.14)
#endif // _BLUE_SERVER

// - ÀÌÁÖÈï
#define LJH_ADD_SYSTEM_OF_EQUIPPING_ITEM_FROM_INVENTORY		// ÀÎº¥ÀåÂø ¾ÆÀÌÅÛÀ» À§ÇÑ ½Ã½ºÅÛ Ãß°¡(10.02.22) 
#define CSK_ADD_GOLDCORPS_EVENT								// È²±Ý±º´ÜÀÌº¥Æ® Ãß°¡(ÀÏº»:2009.03.13, ±¹³»:10.04.15)	
#ifdef _BLUE_SERVER
	#define LJH_ADD_MORE_ZEN_FOR_ONE_HAVING_A_PARTY_WITH_MURDERER	// ¹«¹ýÀÚ(Ä«¿À) ÇÃ·¹ÀÌ¾î¿Í ÆÄÆ¼¸¦ ¸ÎÀº ÇÃ·¹ÀÌ¾î¿¡°Ôµµ ¸Ê ÀÌµ¿½Ã ¿ä±¸ Á¨ 10¹è·Î Áõ°¡(10.04.13)
#endif // _BLUE_SERVER

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
	#define LDK_FIX_AIDA_OBJ41_UV_FIX							// ¾ÆÀÌ´Ù¸Ê 41¹ø obj(ºû) uv °ª °íÁ¤(10.03.16)
	#define LDK_ADD_AIDA_OBJ77_OBJ78							// ¾ÆÀÌ´Ù¸Ê 77,78¹ø obj uvÈå¸§ Ãß°¡(10.03.18)
#endif // LDK_LDS_EXTENSIONMAP_HUNTERZONE

#ifdef LJH_ADD_SYSTEM_OF_EQUIPPING_ITEM_FROM_INVENTORY	
	#define LJH_ADD_ITEMS_EQUIPPED_FROM_INVENTORY_SYSTEM		// ÀÎº¥ÀåÂø ¾ÆÀÌÅÛ Ãß°¡-¸ÅÁ¶°¢»ó, ¾çÁ¶°¢»ó, ÆíÀÚ (10.02.26)
	#define LJH_ADD_ITEMS_EQUIPPED_FROM_INVENTORY_SYSTEM_PART_2	// Ãß°¡ÀÎº¥ÀåÂø ¾ÆÀÌÅÛ Ãß°¡-¿ÀÅ©Âü, °ñµç¿ÀÅ©Âü, ¸ÞÀÌÇÃÂü, °ñµå¸ÞÀÌÇÃÂü (10.03.24)
#endif //LJH_ADD_SYSTEM_OF_EQUIPPING_ITEM_FROM_INVENTORY

#ifdef CSK_ADD_GOLDCORPS_EVENT					
	#define LDS_ADD_GOLDCORPS_EVENT_MOD_GREATDRAGON				// È²±Ý ±×·¹ÀÌÆ® µå·¹°ï ºñÁÖ¾ó ÀçÀÛ¾÷. ºñÁÖ¾ó ÀÌÆåÆ® Ãß°¡. ±âÁ¸ µ¿ÀÏÇÑ ¸÷ Á¸Àç. (2009.04.06) (BITMAP_FIRE_HIK3_MONO È¿°ú ÂüÁ¶.)
	#define KJH_FIX_GOLD_RABBIT_INDEX							// È²±ÝÅä³¢ ÀÎµ¦½º ¼öÁ¤ (09.06.08)
#endif //CSK_ADD_GOLDCORPS_EVENT

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//----------------------------------------------------------------------------------------------
//[2010.03.31 Å×¼·] - ±èÀçÈñ
//[2010.04.01 º»¼·] - ±èÀçÈñ
//[2010.04.01 ºí·ç] - ±èÀçÈñ

// - ÀÌµ¿¼®
#define LDS_ADD_OUTPUTERRORLOG_WHEN_RECEIVEREFRESHPERSONALSHOPITEM	// ·Î·» ½ÃÀå ¼­¹ö·ÎºÎÅÍ °³ÀÎ»óÁ¡ ±¸¸ÅÀÌÈÄ ReceiveRefreshPersonalShopItem ¹ÞÀ» ¶§ Error Log Á¤º¸¸¦ ´õ ÀÚ¼¼È÷ Ãâ·Â (10.03.30)
#define LDS_FIX_MEMORYLEAK_WHERE_NEWUI_DEINITIALIZE		// ·Î·»½ÃÀå DEADÇö»ó : NewUI ³» Æó±â Ã³¸® ¸Þ¸ð¸® ¹Ì¹ÝÈ¯À¸·Î ÀÎÇÑ ¸Þ¸ð¸® ´©¼ö ÀÛ¾÷ (10.03.23)


/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//----------------------------------------------------------------------------------------------
//[2010.03.23 Å×¼·] - ±èÀçÈñ
//[2010.03.25 º»¼·] - ±èÀçÈñ
//[2010.03.25 ºí·ç] - ±èÀçÈñ

// - ¾È»ó±Ô
#define ASG_MOD_GM_VIEW_NAME_IN_GENS_STRIFE_MAP			// °Õ½º ºÐÀïÁö¿ª¿¡¼­ GMÀº Å¸¼¼·Â Ä³¸¯ÅÍ ÀÌ¸§ º¸ÀÌ°Ô(10.02.26)

// - ±èÀçÈñ
#ifdef _BLUE_SERVER						// #ifndef	·¹µå º»¼·¸¸ Á¦¿Ü	(Â÷ÈÄ¿¡ ºí·ç¿ë¸¸ µé¾î°¨)
	#define KJH_FIX_DUMMY_SKILL_PROTOCOL_BUG				// ´õ¹Ì ½ºÅ³ ÇÁ·ÎÅäÄÝ ¹ö±×¼öÁ¤ (10.03.18)
#endif // _BLUE_SERVER

#define KJH_FIX_MOVE_MAP_GENERATE_KEY				// ¸Ê ÀÌµ¿(&´õ¹Ì½ºÅ³ ÇÁ·ÎÅäÄÝ)½Ã »ý¼ºµÇ´Â Å°°ª ¼öÁ¤


/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//----------------------------------------------------------------------------------------------
//[2010.03.17 Å×¼·] - ¾È»ó±Ô
//[2010.03.18 ºí·ç] - ¾È»ó±Ô
//[2010.03.25 º»¼·] - ±èÀçÈñ


// - ¾ç´ë±Ù
#ifdef _TEST_SERVER
	//#define CHAOSCASTLE_MAP_FOR_TESTSERVER			// Å×¼· Ä«¿À½ºÄ³½½ ¸Ê ¹ö±× ¼öÁ¤À» À§ÇØ testºÙÀÎ ¸Ê ·ÎµùÇÏµµ·Ï ÇÔ(º»¼·¶§´Â »©¾ßµÊ)(2010.3.2)
#endif // _TEST_SERVER

// - ±èÀçÈñ
#ifdef _BLUE_SERVER						// #ifndef	·¹µå º»¼·¸¸ Á¦¿Ü	(Â÷ÈÄ¿¡ ºí·ç¿ë¸¸ µé¾î°¨)
	#define KJH_ADD_DUMMY_SKILL_PROTOCOL				// ´õ¹Ì ½ºÅ³ ÇÁ·ÎÅäÄÝ(10.02.26)
#endif // _BLUE_SERVER

// - ¹Úº¸±Ù
#ifdef _BLUE_SERVER
	#define PBG_MOD_SECRETITEM								// (È°·ÂÀÇºñ¾à)ÀÎº¥»ç¿ë °¡´É ¾ÆÀÌÅÛÀ¸·Î º¯°æÀ§ÇÔ(10.03.09)
#endif //_BLUE_SERVER

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//----------------------------------------------------------------------------------------------
//[2010.02.25 ºí·ç]- ÀÌµ¿±Ù
//[2010.02.25 º»¼·]- ÀÌµ¿±Ù

// ¾÷µ¥ÀÌÆ® ·±Ã³ ±¤°í url º¯°æ

//[2010.02.23 Å×¼·]- ÀÌµ¿±Ù

// mix.txt ¼öÁ¤ - ¹Í½º ½ºÅ©¸³Æ® 2Â÷³¯°³ °è»ê½Ã 1% ¿ÀÂ÷»ý±è

// - ¾È»ó±Ô
#define ASG_FIX_GENS_STRIFE_FRIEND_NAME_BLOCK			// °Õ½º ºÐÀïÁö¿ª¿¡¼­ Ä£±¸ ÀÌ¸§ ÀÚµ¿ÀÔ·Â ¸·±â(2010.02.03)
#define ASG_MOD_GENS_STRIFE_ADD_PARTY_MSG				// °Õ½º ºÐÀïÁö¿ª °ü·Ã ÆÄÆ¼ ¸Þ½ÃÁö Ãß°¡.(2010.02.03)

// - ¹Úº¸±Ù
#define PBG_FIX_RENDEROBJ_MAXINDEX						// ¿ùµå ·Îµù½Ã ÃÖ´ë ¿ÀºêÁ§¿ÜÀÇ °ª È£Ãâ¹ö±× ¼öÁ¤(10.02.10)
#define PBG_MOD_STRIFE_GENSMARKRENDER					// ºÐÀïÁö¿ªÀ¯ÀúÇ¥½Ã º¯°æ(10.02.18)

// - ÀÌµ¿¼®
#define LDS_FIX_MEMORYLEAK_0910_LOGINWIN						// ¸Þ¸ð¸®¸¯ FIXED. Logwin.cppÀÇ ¾ÆÀÌµð, ÆÐ½º¿öµå context°¡ Àç·Î±×ÀÎ ÀÌ³ª ¼­¹ö¼±ÅÃµîÀ¸·Î ÀçÈ£Ãâ½Ã¿¡ ¸Þ¸ð¸® ¹Ì¹ÝÈ¯À¸·Î ¸¯¹ß»ý. (09.11.30)
#define LDS_FIX_MEMORYLEAK_DUPLICATEDITEMS_INVENTORY_SAMEPOS	// ¸Þ¸ð¸®¸¯ FIXED. ÀÎº¥Åä¸®»ó¿¡ ¾ÆÀÌÅÛÀ» ÁýÀºÈÄ °°Àº À§Ä¡¿¡ ³õÀ»¶§¸¸ È½¼ö ¸¸Å­ ¸Þ¸ð¸® ¸¯ ¹ß»ý. (09.11.09)
#define LDS_FIX_MEMORYLEAK_WHEN_MATCHEVENT_TERMINATE			// ¸ÅÄ¡ÀÌº¥Æ®(µµÇÃ°»¾î,ºí·¯µåÄ³½½,Ä«¿À½ºÄ³½½,È¯¿µÀÇ»ç¿ø) Á¾·á½Ã¸¶´Ù ¸Þ¸ð¸®¸¯ ¹ß»ý FIX. (10.01.29)
#define LDS_FIX_SETITEM_OUTPUTOPTION_WHICH_LOCATED_INVENTORY	// Âø¿ëµÈ ¼¼Æ®¾ÆÀÌÅÛ°ú µ¿Á¾ÀÇ ¹ÌÀåÂøµÈ ¼¼Æ®¾ÆÀÌÅÛÀÌ ÀÎº¥Åä¸®¿¡ ÀÖ´Â°æ¿ì, ¿É¼Ç È°¼ºÈ­°¡ µÇ´Â ¹®Á¦. (10.02.17)

// - ¾ç´ë±Ù
#define YDG_MOD_PROTECT_AUTO_FIND_USB						// ¾ÆÀÌ·Îº¿ ¿ÀÅä ¸·±â USB °Ë»ç·Î Ã£±â (2009.04.07)
#define YDG_FIX_MOVE_ICARUS_EQUIPED_SKELETON_CHANGE_RING	// ½ºÄÌ·¹Åæº¯½Å¹ÝÁö Âø¿ëÈÄ ÀÌÄ«·ç½º·Î ÀÌµ¿ÇÒ ¼ö ¾ø´Â Çö»ó (10.02.16)

// - ±èÀçÈñ
// world19 Ä«¿À½º Ä³½½ ¸Ê ¼öÁ¤ : gamedata\@104
#define KJH_MOD_ATTACK_PROTOCOL_FOR_PROTECT_HACK			// ÇÙÀ» ¸·±âÀ§ÇÑ °ø°Ý ÇÁ·ÎÅäÄÝ º¯°æ(10.02.11)
#ifdef YDG_MOD_PROTECT_AUTO_FIND_USB
	#define KJH_MOD_PROTECT_AUTO_FIND_USB					// ¿ÀÅä¸·±â - USB°Ë»ç·Î ·Î±×³²±â±â (10.01.15)
#endif // YDG_MOD_PROTECT_AUTO_FIND_USB

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//----------------------------------------------------------------------------------------------
//[2010.02.11 ºí·ç]- ÀÌµ¿±Ù
//[2010.02.11 º»¼·]- ÀÌµ¿±Ù
//[2010.02.09 Å×¼·]- ÀÌµ¿±Ù

// - ¾È»ó±Ô
#define ASG_ADD_LEAP_OF_CONTROL_TOOLTIP_TEXT			// Åë¼ÖÀÇ ºñ¾à ÅøÆÁ ÅØ½ºÆ® Ãß°¡(2010.01.28)

// - ¹Úº¸±Ù
#define PBG_FIX_GAMECENSORSHIP_1215						// 12/15¼¼ ÀÌ¿ë°¡´É ¸¶Å© ÃâÇö ¹ö±×¼öÁ¤(10.02.09)

// - ÀÌµ¿¼®
#define LDS_FIX_DISABLE_INPUTJUNKKEY_WHEN_LORENMARKT	// ÅëÇÕ½ÃÀå ÀÌµ¿ ½Ã¿¡ »ç¿ëÀÚÀÇ Å° ¹× ¸¶¿ì½º ÀÎÇ² ÀÔ·ÂÀ» ¸·Áö ¾Ê¾Æ »ý±â´Â ¹®Á¦·Î ÀÏ°ý Skip Ã³¸®. (10.02.02) 

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//----------------------------------------------------------------------------------------------
//[2010.02.05 Å×¼·]- ¹Úº¸±Ù

// mix/text ½ºÅ©¸³Æ® º¯°æÆÐÄ¡

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//----------------------------------------------------------------------------------------------
//[2010.02.04 º»¼·]- ¹Úº¸±Ù
//[2010.02.04 ºí·ç]- ¹Úº¸±Ù

// - ¹Úº¸±Ù
#define PBG_MOD_GAMECENSORSHIP_RED							// ·¹µåÀÇ °æ¿ìµµ 18ÀÌ»ó°¡´É°¡·Î Á¶Á¤(09.01.26)[10.02.04º»¼·ÆÐÄ¡½Ã Å×¼·/º»¼· ºí·ç µ¿½Ã Àû¿ë]

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//----------------------------------------------------------------------------------------------
//[2010.02.02 Å×¼·]- ¹Úº¸±Ù

// - ÀÌµ¿¼®
#define LDS_FIX_DISABLEALLKEYEVENT_WHENMAPLOADING			// ¸ÊÀÌµ¿ ¿äÃ»ÀÌÈÄ ¼­¹ö·ÎºÎÅÍ ¸ÊÀÌµ¿ °á°ú°¡ ¿À±âÀü±îÁö ¸ðµç Å°ÀÔ·ÂÀ» ¸·½À´Ï´Ù. (·Î·»½ÃÀå, °ø¼º ¼­¹ö ÀÌµ¿ ¿äÃ»½Ã¿¡ esc·Î ¿É¼ÇÃ¢ "°ÔÀÓÁ¾·á"È£ÃâÀÌÈÄ ¸ðµç Å°ÀÔ·ÂÀÌ ¾ÈµÇ´Â ¹ö±× ). (10.01.28)

// - ¹Úº¸±Ù
#define PBG_FIX_GENSREWARDNOTREG							// °Õ½º ¹Ì°¡ÀÔÀÚ°¡ º¸»ó¹ÞÀ»½Ã ¹®±¸ ¼öÁ¤(10.01.28)


/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//----------------------------------------------------------------------------------------------
//[2010.01.28 Å×¼·]- ¹Úº¸±Ù

// - ¾È»ó±Ô
#define ASG_ADD_QUEST_REQUEST_REWARD_TYPE				// Äù½ºÆ® ¿ä±¸»çÇ×, º¸»ó Ãß°¡(2009.12.15)

// - ÀÌµ¿±Ù
#define LDK_ADD_ITEM_UPGRADE_14_15
#ifdef LDK_ADD_ITEM_UPGRADE_14_15
	#define LDK_ADD_14_15_GRADE_ITEM_HELP_INFO				// ¾ÆÀÌÅÛ 14 15 µµ¿ò¸» Ãß°¡(09.12.2)
	#define LDK_ADD_14_15_GRADE_ITEM_VALUE					// ¾ÆÀÌÅÛ 14 15 ÆÇ¸Å±Ý¾× Ãß°¡(09.12.2)
	#define LDK_ADD_14_15_GRADE_ITEM_RENDERING				// ¾ÆÀÌÅÛ 14 15 ·£´õÈ¿°ú Ãß°¡(10.01.04) ±âÁ¸ÀÇ 13Ã³·³ Å©·Ò,ºí·»µå Ã³¸®
	#define LDK_ADD_14_15_GRADE_ITEM_SET_EFFECT				// ¾ÆÀÌÅÛ 14 15 ¼¼Æ®ÀÌÆåÆ®È¿°ú Ãß°¡(10.01.22)
	#define LDK_ADD_14_15_GRADE_ITEM_TYPE_CHANGE			// ¾ÆÀÌÅÛ 14 15 ·¡º§ Å¸ÀÔ º¯°æ(10.01.27)
	#define LDK_ADD_14_15_GRADE_ITEM_MODEL					// ¾ÆÀÌÅÛ 14 15 ¸ðµ¨¸µ Ãß°¡(10.01.18)
	#define YDG_FIX_ITEM_EFFECT_POSITION_ERROR				// ¾ÆÀÌÅÛ ÀÌÆåÆ® À§Ä¡°¡ ÀÌ»óÇÏ°Ô ³ª¿À´Â ¹®Á¦ (2010.01.27)
#endif //LDK_ADD_ITEM_UPGRADE_14_15

// - ÀÌµ¿¼®
#define LDS_ADD_MAP_UNITEDMARKETPLACE					// ÅëÇÕ ½ÃÀå ¼­¹ö (·Î·» ½ÃÀå) Ãß°¡ (09.12.04)
#ifdef LDS_ADD_MAP_UNITEDMARKETPLACE
	#define LDS_ADD_NPC_UNITEDMARKETPLACE					// NPC ·Î·»½ÃÀå 1.º¸¼®·ù Á¶ÇÕ ¹× ÇØÃ¼ ¶ó¿ï, 2.½ÃÀå »óÀÎ ÁÙ¸®¾Æ, 3.¹°¾à ¹× ±âÅ¸ ÀâÈ­ ¾ÆÀÌÅÛ »óÀÎ Å©¸®½ºÆ¾ (09.12.15)
	#define LDS_ADD_UI_UNITEDMARKETPLACE					// UI ·Î·»½ÃÀå ¸Þ¼¼Áö Ã³¸® 1.Ä«¿À½ºÄÉ½½ ÀÔÀå ºÒ°¡ 2.°áÅõ½ÅÃ»ºÒ°¡ 3.ÆÄÆ¼½ÅÃ» ºÒ°¡ 4.
	#define LDS_ADD_SERVERPROCESSING_UNITEDMARKETPLACE		// ¼­¹ö¿ÍÀÇ ±³½Å Ã³¸® 1.ÅëÇÕ½ÃÀå¸ÊÀ¸·Î ÀÌµ¿ 2. (09.12.23)
	#define LDS_ADD_SOUND_UNITEDMARKETPLACE					// ÅëÇÕ½ÃÀå È¯°æÀ½, ¹è°æÀ½ Ã³¸®. (10.01.12)
	#define LDS_ADD_MOVEMAP_UNITEDMARKETPLACE				// ¸ÊÀÌµ¿ À©µµ¿ì¿¡ "ÅëÇÕ ½ÃÀå" Ãß°¡. (10.01.12)
	#define LDS_ADD_EFFECT_UNITEDMARKETPLACE				// ÅëÇÕ½ÃÀå NPC µî¿¡ Ãß°¡ EFFECT. (10.01.14)
	#define LDK_FIX_CHARACTER_UNLIVE_MOUSE_LOCK				// ¸ÊÀÌµ¿½Ã Ä³¸¯ÅÍ »èÁ¦ÈÄ ÀÌµ¿ ºÒ°¡(09.10.29)
#endif // LDS_ADD_MAP_UNITEDMARKETPLACE

// - ¹Úº¸±Ù
#define PBG_ADD_GENSRANKING								// °Õ½º ·©Å·(09.12.01)

// - ¾ç´ë±Ù
#define YDG_MOD_SKELETON_NOTSELLING						// ½ºÄÌ·¹Åæ Æê ¹ÝÁö ¾ÈÆÈ¸®°Ô ¼³Á¤(2010.01.20)
#define YDG_FIX_CHANGERING_STATUS_EXPIRE_CHECK			// º¯½Å¹ÝÁö ½ºÅÈ¿Ã¸±¶§ ¸¸·á Ã¼Å© (2010.01.25)
#define YDG_FIX_SKELETON_PET_CREATE_POSITION			// ½ºÄÌ·¹Åæ Æê »ý¼º À§Ä¡ ¼öÁ¤ (2010.01.26)

// - ±èÀçÈñ
#define KJH_FIX_INGAMESHOP_SCRIPTDOWN_BUG2				// ÀÎ°ÔÀÓ¼¥ ½ºÅ©¸³Æ® ´Ù¿î·Îµå ¹ö±×¼öÁ¤ 2 (10.01.14)
#define KJH_ADD_SKILLICON_RENEWAL						// ½ºÅ³¾ÆÀÌÄÜ ¸®´º¾ó(10.01.20)


/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//----------------------------------------------------------------------------------------------
//[2010.01.20 Å×¼·]- ¹Úº¸±Ù
//[2010.01.21 º»¼·]- ¹Úº¸±Ù
//[2010.01.21 ºí·ç]- ¹Úº¸±Ù

// - ¾ç´ë±Ù
#define YDG_ADD_CASHITEM_201001						// 2010³â 1¿ù À¯·áÈ­ ¾ÆÀÌÅÛ (2009.12.03)
#ifdef YDG_ADD_CASHITEM_201001
	#define YDG_ADD_CS5_PORTAL_CHARM					// ÀÌµ¿ÀÇ ºÎÀû
	#define YDG_FIX_USED_PORTAL_CHARM_STORE_BAN			// ÀÌµ¿ÀÇ ºÎÀû »ç¿ëÇÏ¸é Ã¢°í ÀúÀå ¸øÇÏ°Ô ¼öÁ¤ (09.09.02)
	#define ASG_ADD_CS6_ITEM_GUARD_CHARM				// ¾ÆÀÌÅÛº¸È£ºÎÀû(2009.02.09)
	#define YDG_ADD_HEALING_SCROLL						// Ä¡À¯ÀÇ ½ºÅ©·Ñ (2009.12.03)
	#define YDG_ADD_SKELETON_CHANGE_RING				// ½ºÄÌ·¹Åæ º¯½Å¹ÝÁö (2009.12.03)
	#define YDG_ADD_SKELETON_PET						// ½ºÄÌ·¹Åæ Æê (2009.12.03)
	#define YDG_MOD_CHANGE_RING_EQUIPMENT_LIMIT			// º¯½Å¹ÝÁö ÇÑÁ¾·ù¸¸ ÀåºñÇÏµµ·Ï ¼öÁ¤ (2009.12.28)
#endif	// YDG_ADD_CASHITEM_201001

// - ¹Úº¸±Ù
#define PBG_MOD_PREMIUMITEM_TRADE_0118						// Ä«¿À½º Ä«µå,ºÎÀû,Çà¿îÀÇºÎÀû ·¹µåºí·ç °Å·¡°¡´ÉÀ¸·Î ±âÈ¹º¯°æ(10.01.18)


/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//----------------------------------------------------------------------------------------------
//[2010.01.12 Å×¼·]- ¹Úº¸±Ù
//[2010.01.14 º»¼·]- ¹Úº¸±Ù
//[2010.01.14 ºí·ç]- ¹Úº¸±Ù

// - ¹Úº¸±Ù
#define PBG_MOD_PREMIUMITEM_TRADE_ENDURANCE					// ÇÁ¸®¹Ì¾ö¾ÆÅÛÁß ±â°£Á¦¿Í³»±¸·Â¿¡ µû¸¥ ±âÈ¹º¯°æ ·¹µå Àû¿ë(09.12.16)
#define PBG_MOD_PANDAPETRING_NOTSELLING						// Ææ´õ Æê ¹ÝÁö ¾ÈÆÈ¸®°Ô ¼³Á¤(10.01.11)

// - ÀÌµ¿±Ù 
#define LDK_MOD_BUFF_END_LOG								// ¹öÇÁ Á¾·á½Ã ·Î±× Ãß°¡(09.12.15)

// - ÀÌÁÖÈï
#ifdef _BLUE_SERVER
	#define LJH_FIX_EXTENDING_OVER_MAX_TIME_4S_To_10S			// ÇØ¿Ü»ç¿ëÀÚµé ÀÏºÎ »ç¿ëÀÚ¿¡°Ô Ä³½Ã¼¥ÀÌ ¿­¸®Áö ¾Ê¾Æ Max TimeÀ» ±âÁ¸ 4ÃÊ¿¡¼­ 10ÃÊ·Î º¯°æ(09.12.17)
#endif// _BLUE_SERVER

// - ±èÀçÈñ
#define KJH_MOD_SHOPSCRIPT_DOWNLOAD_DOMAIN					// ¼¥ ½ºÅ©¸³Æ® µµ¸ÞÀÎ º¯°æ (10.01.10)


/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//----------------------------------------------------------------------------------------------
//[2010.01.06 Å×¼·]- ¹Úº¸±Ù
//[2010.01.07 º»¼·]- ¹Úº¸±Ù
//[2010.01.07 ºí·ç]- ¹Úº¸±Ù

// - ±èÀçÈñ
#define KJH_FIX_INGAMESHOP_SCRIPTDOWN_BUG						// ÀÎ°ÔÀÓ¼¥ ½ºÅ©¸³Æ® ´Ù¿î·Îµå ¹ö±× (09.12.28)

// - ¹ÚÁ¾ÈÆ
#define PJH_FIX_HELP_LAYER										// ÇïÇÁ ·¹ÀÌ¾î ÃÖ»óÀ§·Î º¯°æ(2009.12.01)


/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//----------------------------------------------------------------------------------------------
//[2009.12.15 Å×¼·]- ±èÀçÈñ
//[2009.12.17 º»¼·]- ±èÀçÈñ
//[2009.12.17 ºí·ç]- ±èÀçÈñ

// - ÀÌµ¿±Ù
#define LDK_FIX_EXPIREDPERIOD_ITEM_EQUIP_WARNING			// ¸¸·áµÈ ¾ÆÀÌÅÛ ÀÛ¿ëºÒ°¡ ¹× °æ°í 
#define LDK_FIX_EQUIPED_EXPIREDPERIOD_RING_EXCEPTION		// Âø¿ëÁßÀÎ ¸¸·áµÈ ¹ÝÁö ´É·ÂÄ¡ °è»ê ¿¹¿ÜÃ³¸®(09.12.11)
#define LDK_FIX_EQUIPED_EXPIREDPERIOD_AMULET_EXCEPTION		// Âø¿ëÁßÀÎ ¸¸·áµÈ ¸ñ°ÉÀÌ ´É·ÂÄ¡ °è»ê ¿¹¿ÜÃ³¸®(09.12.11)

// - ÀÌµ¿¼®
#define LDS_FIX_VISUALRENDER_PERIODITEM_EXPIRED_RE			// ÀÎ°ÔÀÓ˜Þ ¾ÆÀÌÅÛµéÁß ¸ñ°ÉÀÌ, ¹ÝÁöµé¿¡ ´ëÇÑ ±â°£Á¦ Á¾·á ÀÌÈÄ »ç¿ë ºÒ´É Ã³¸® (ÀÎº¥Åä¸®»ó¿¡¼­ ºñÁÖ¾ó Ã³¸®¸¸.) (09.12.10)


/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//----------------------------------------------------------------------------------------------
//[2009.12.08 Å×¼·]- ±èÀçÈñ
//[2009.12.10 º»¼·]- ±èÀçÈñ
//[2009.12.10 ºí·ç]- ±èÀçÈñ

// - ¾ç´ë±Ù
//#ifdef _TEST_SERVER
// 	#define DEVIAS_XMAS_END_LOADFIX_FOR_TESTSERVER			// Å×¼· µ¥ºñ¾Æ½º Å©¸®½º¸¶½º ¸Ê ³¡³»±â À§ÇØ testºÙÀÎ ¸Ê ·ÎµùÇÏµµ·Ï ÇÔ(º»¼·¶§´Â »©¾ßµÊ)(2008.1.3)
//#endif // _TEST_SERVER

// - ±èÀçÈñ
#define KJH_FIX_SOURCE_CODE_REPEATED						// °°Àº ¼Ò½ºÄÚµå Áßº¹µÈ°Í ¼öÁ¤ (09.10.12)

// - ÀÌÁÖÈï
#define LJH_FIX_BUG_CASTING_SKILLS_W_CURSOR_OUT_OF_VIEWPORT	// ¸¶¿ì½º ¿À¸¥ÂÊ ¹öÆ° Å¬¸¯ Áß Ä¿¼­°¡ °ÔÀÓºäÆ÷Æ®¸¦ ¹þ¾î³ª ÀÎº¥Ã¢µî¿¡ ÀÖÀ»¶§µµ ±â¼úÀ» °è¼Ó ¾µ¼ö ÀÖ´Â ¹ö±× ¼öÁ¤(09.12.02)  


/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//----------------------------------------------------------------------------------------------
//[2009.12.01 Å×¼·]- ±èÀçÈñ
//[2009.12.03 º»¼·]- ±èÀçÈñ
//[2009.12.03 ºí·ç]- ±èÀçÈñ

// - ¾È»ó±Ô
#define ASG_MOD_QUEST_OK_BTN_DISABLE					// Äù½ºÆ® ÁøÇà È®ÀÎ ¹öÆ° ºñÈ°¼ºÈ­ »óÅÂ Ãß°¡(2009.11.23)

// - ¹Úº¸±Ù
#define PBG_FIX_PCROOMFONT								// pc¹æui»ç¿ëÈÄ ÆùÆ®¹ö±× ¼öÁ¤(09.11.26)

// - ±èÀçÈñ
#define KJH_FIX_MOVE_ICARUS_EQUIPED_PANDA_CHANGE_RING			// ÆÒ´õº¯½Å¹ÝÁö Âø¿ëÈÄ ÀÌÄ«·ç½º·Î ÀÌµ¿ÇÒ ¼ö ¾ø´Â Çö»ó (09.11.30)

// - ¾ç´ë±Ù
#define YDG_MOD_PROTECT_AUTO_V6							// ¾ÆÀÌ·Îº¿ ¿ÀÅä ¸·±â ½Ã¸®Áî6 - ¸¶¿ì½º ÈÙ ·£´ýÀ¸·Î 2Ä­¾¿ ÀÌµ¿ (2009.11.30)

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//----------------------------------------------------------------------------------------------
//[2009.11.24 Å×¼·]- ¾ç´ë±Ù
//[2009.11.26 º»¼·]- ¾ç´ë±Ù
//[2009.11.26 ºí·ç]- ¾ç´ë±Ù

// - ¹Úº¸±Ù
#define PBG_ADD_PCROOM_NEWUI								// »õ·Î¿î PC¹æ UI(09.11.19)

// - ¾È»ó±Ô
#define ASG_MOD_SERVER_LIST_CHANGE_MSG					// ¼­¹ö¸®½ºÆ® º¯°æ µÇ¾úÀ» ¶§ ¸Þ½ÃÁö.(2009.11.18)
#define ASG_MOD_GUILD_RESULT_GENS_MSG					// ±æµå °¡ÀÔ½Ã °Õ½º °ü·Ã ¸Þ½ÃÁö.(2009.11.23)

// - ÀÌµ¿±Ù 
#define LDK_MOD_BUFFTIMERTYPE_SCRIPT							// ¹öÇÁÅ¸ÀÌ¸Ó Å¸ÀÔ°ªÀ» buffEffect.txtÀÇ Viewport·Î ¹Þ¾Æ¼­ Àû¿ë(09.11.10) - enum.h : Å¸ÀÌ¸Ó ÇÊ¿äÇÑ ¹ö½º µî·Ï½Ã eBuffTimeType¿¡ µî·Ï¾ÈÇØµµ µÊ

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//----------------------------------------------------------------------------------------------
//[2009.11.17 Å×¼·]- ¾ç´ë±Ù
//[2009.11.19 º»¼·]- ¾ç´ë±Ù
//[2009.11.19 ºí·ç]- ¾ç´ë±Ù

// - ¾È»ó±Ô
#define ASG_FIX_GENS_JOINING_ERR_CODE_ADD				// °Õ½º °¡ÀÔ ¿¡·¯ ÄÚµå Ãß°¡.(¿¬ÇÕ±æµåÀå °ü·Ã)(2009.11.12)

// - ±èÀçÈñ
#define KJH_FIX_INGAMESHOP_INIT_BANNER						// ÀÎ°ÔÀÓ¼¥ ¹è³Ê ´Ù¿î·Îµå ÈÄ ÃÊ±âÈ­µÇÁö ¾Ê¾Æ Render°¡ ¾ÈµÅ´Â Çö»ó (09.11.10)

// - ÀÌµ¿±Ù 
#ifdef _BLUE_SERVER
	#define LDK_MOD_PC4_GUARDIAN_EXPIREDPERIOD_NOTPRINT_INFO	// Ä³¸¯ÅÍÁ¤º¸Ã¢¿¡¼­ ¸¸·áµÈ µ¥¸ó, ¼öÈ£Á¤·Â ¼öÄ¡ Ç¥½Ã ¾ÈÇÔ(09.11.12)
	#define LDK_MOD_INGAMESHOP_WIZARD_RING_PERSONALSHOPBAN		// ºí·ç¼· À¯·á ¸¶¹ý»çÀÇ¹ÝÁö °³ÀÎ»óÁ¡ °Å·¡ ±ÝÁö(09.11.12)
	#define LDK_MOD_ITEM_DROP_TRADE_SHOP_EXCEPTION				// Ä«¿À½ººÎÀû,Ä«¿À½ºÄ«µå,µ¥¸ó,¼öÈ£Á¤·É,ÆÒ´õÆê,ÆÒ´õº¯½Å¹ÝÁö,¸¶¹ý»çÀÇ¹ÝÁö ÀÏ¹Ý¾ÆÀÌÅÛ½Ã ¹ö¸®±â,°³ÀÎ»óÁ¡,°³ÀÎ°Å·¡ °¡´ÉÇÏµµ·Ï Ã³¸®(09.11.16)
#endif //_BLUE_SERVER

// - ¾ç´ë±Ù
#define YDG_ADD_GM_DISCHARGE_STAMINA_DEBUFF					// GMÀÌ °Å´Â ½ºÅÂ¹Ì³Ê ¹æÀü µð¹öÇÁ (2009.11.13)

// - ¹Úº¸±Ù
#define PBG_FIX_MSGBUFFERSIZE								// ¸Þ½ÃÁö¹Ú½º³» ¹®±¸ Àß¸®´Â ¹ö±×¼öÁ¤(09.11.13)
#define PBG_FIX_MSGTITLENUM									// ¸Þ½ÃÁö¹Ú½º title¹®±¸ Àß¸ø³ª¿À´Â ¹ö±× ¼öÁ¤(09.11.13)
#ifdef _BLUE_SERVER
	#define PBG_MOD_GAMEGUARD_HANDLE							// °ÔÀÓ°¡µå °´Ã¼ ¼Ò¸ê½Ã¿¡ ·Î±äÀÌÈÄ¿¡ Å¬¶óÀÌ¾ðÆ® Á¾·á¼³Á¤(09.10.23)
#endif// _BLUE_SERVER

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//----------------------------------------------------------------------------------------------
//[2009.11.10 ºí·ç]- ¾ç´ë±Ù
//[2009.11.12 º»¼·]- ¾ç´ë±Ù

// - ÀÌµ¿¼®
#define LDS_MOD_MODIFYTEXT_TOPAZRING_SAPIRERING				// »çÆÄÀÌ¾î¸µ°ú ÅäÆÄÁî ¸µÀÇ ÅØ½ºÆ® º¯°æ (09.11.06)
#define LDS_FIX_VISUALRENDER_PERIODITEM_EXPIRED				// ±â°£Á¦ ¾ÆÀÌÅÛÁß ±â°£ÀÌ ¸¸·áµÈ ¾ÆÀÌÅÛµé¿¡ ´ëÇÑ Ã³¸® (09.11.08)

// - ÀÌµ¿±Ù 
#define LDK_MOD_TRADEBAN_ITEMLOCK_AGAIN						// ÀÏºÎ À¯·á ¾ÆÀÌÅÛÁß Æ®·¹ÀÌµå °¡´É ºÒ°¡´É º¯°æ(NOT DEFINE Ã³¸®)(09.10.29) (±âÈ¹¿¡¼­ ¼ö½Ã·Î ¹Ù²ñ ¤Ñ.¤Ñ+)
#define LDK_FIX_PERIODITEM_SELL_CHECK						// ÆÇ¸Å½Ã ±â°£Á¦ ¾ÆÀÌÅÛ È®ÀÎ Ãß°¡(09.11.09)

// - ±èÀçÈñ
#define KJH_MOD_SHOP_SCRIPT_DOWNLOAD						// ¼¥ ½ºÅ©¸³Æ® ´Ù¿î·Îµå ¹æ½Ä º¯°æ (09.11.09)
#define KJH_FIX_SHOP_EVENT_CATEGORY_PAGE					// ¼¥ ÀÌº¥Æ® Ä«Å×°í¸® ÆäÀÌÁö ¹ö±× ¼öÁ¤ (09.11.09)
#define KJH_FIX_EXPIRED_PERIODITEM_TOOLTIP					// ±â°£¸¸·áµÈ ±â°£Á¦ ¾ÆÀÌÅÛÀÇ ÅøÆÁRender°¡ ¾ÈµÅ´Â ¹ö±× ¼öÁ¤ (09.11.09)
#define KJH_ADD_PCROOM_MOVECOMMAND							// PC¹æ¿¡¼­ ÀÌµ¿Ç®±â(ÀÌµ¿ÀÇ ÀÎÀå±â´É) (09.11.09)

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//----------------------------------------------------------------------------------------------
//[2009.11.10 º»¼·]- ¾ç´ë±Ù
//[2009.11.06 ºí·ç]- ¾ç´ë±Ù

// - ÀÌµ¿¼®
#define LDS_MOD_INGAMESHOPITEM_RING_AMULET_CHARACTERATTR	// ÀÎ°ÔÀÓ˜Þ ¾ÆÀÌÅÛµéÁß ¹ÝÁö, ¸ñ°ÉÀÌ ½Ã¸®ÁîÀÇ STATUS ¼öÄ¡ ¹Ý¿µ.

// - ÀÌµ¿±Ù 
#define LDK_FIX_NEWWEALTHSEAL_INFOTIMER_AND_MOVEWINDOW		// Ç³¿äÀÇÀÎÀå ¹öÇÁÁ¤º¸ ½Ã°£Ç¥½Ã Ãß°¡, ¹öÇÁ»ç¿ë½Ã ÀÌµ¿Ã¢ ºñÈ°¼ºÈ­ (09.11.06)

// - ¹Úº¸±Ù
#define PBG_FIX_TRADECLOSE									// °Å·¡Áß ÀÎº¥À» ´ÝÀ»½Ã¿¡ °Å·¡Ã¢Àº ´ÝÈ÷Áö ¾Ê´Â ¹ö±× ¼öÁ¤(09.11.06)

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//----------------------------------------------------------------------------------------------
//[2009.11.05 Å×¼·]- ¾ç´ë±Ù
//[2009.11.05 ºí·ç]- ¾ç´ë±Ù

// - ¹ÚÁ¾ÈÆ
#define PJH_ADD_MINIMAP

// - ÀÌµ¿¼®
#define LDS_FIX_INGAMESHOPITEM_PASSCHAOSCASTLE_REQUEST	// Ä«¿À½ºÄ³½½ ÀÚÀ¯ ÀÔÀå±Ç »ç¿ë½Ã ¼­¹ö·Î »ç¿ë¿¡ ´ëÇÑ ÆÐÅ¶ Á¤º¸¸¦ º¸³»Áö ¾Ê´Â ¹®Á¦ ¼öÁ¤ (09.11.02)
#define LDS_MOD_INGAMESHOPITEM_POSSIBLETRASH_SILVERGOLDBOX	// ±Ý,Àº »óÀÚ ¹ö¸®±â°¡ °¡´ÉÇÏµµ·Ï.

// - ¾È»ó±Ô
#define ASG_ADD_SERVER_LIST_SCRIPTS					// ServerList.txt ½ºÅ©¸³Æ® Ãß°¡.(2009.10.29)

#ifdef _BLUE_SERVER
// - ¹Úº¸±Ù
#define PBG_MOD_STAMINA_UI								// ½ºÅ×¹Ì³Ê °ü·Ã °ÔÀÌÁö Ãß°¡(09.11.2)
#define PBG_MOD_BLUE_SUMMONER_ENABLE					// ºí·çÂÊ ¼ÒÈ¯¼ú»ç Ä³¸¯ »ý¼º È°¼ºÈ­ »óÅÂ·Î ±âÈ¹º¯°æ(09.11.3)
#endif //_BLUE_SERVER

// - ±èÀçÈñ
#define KJH_FIX_RENDER_PERIODITEM_DURABILITY			// ±â°£Á¦ ¾ÆÀÌÅÛÀÏ¶§ ³»±¸µµÁ¤º¸°¡ Render µÇ´Â ¹®Á¦ (2009.11.03)
#define KJH_MOD_RENDER_INGAMESHOP_KEEPBOX_ITEM			// °ÔÀÓ¼¥ º¸°üÇÔ ¾ÆÀÌÅÛÀÇ ¼ö·®ÀÌ 1°³ÀÏ¶§ Render ¾ÈÇÔ (2009.11.03)

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//----------------------------------------------------------------------------------------------
//[2009.10.29 ºí·ç] - ÀÌµ¿¼®
#ifdef _BLUE_SERVER
	#define PBG_MOD_BLUEVERLOGO									// ¼­¹ö¼±ÅÃÈ­¸é¿¡¼­ ¹öÁ¯ ºí·ç ¹öÁ¯ ´Ù¸£°Ô Ç¥½ÃÇÏ´Â°Í(09.10.28)
	#define YDG_MOD_BLUE_NEWSERVER_ORDER						// ºí·ç ½Å¼­¹ö À§Ä¡ ¼öÁ¤(09.10.30)
#endif //_BLUE_SERVER

#define LDK_MOD_INGAMESHOP_ITEM_CHANGE_VALUE				// È¥ÇÕÀ¯·áÈ­ ¾ÆÀÌÅÛ °¡°Ý º¯°æ(09.10.29)

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//----------------------------------------------------------------------------------------------
//[2009.10.29 Å×¼·] - ÀÌµ¿¼®
//[2009.10.29 ºí·ç] - ÀÌµ¿¼®

// - ¹Úº¸±Ù
#ifdef _BLUE_SERVER
	#define PBG_FIX_BLUEHOMEPAGE_LINK						// f11´©¸¦½Ã ¹Âºí·ç È¨ÆäÀÌÁö·Î µé¾î°¡°Ô ¸µÅ©(09.10.27) Å¸ÀÌÆ²ÀÌ¸§ MUBLUE·Î º¯°æ(09.10.28)
#endif //_BLUE_SERVER

// - ±èÀçÈñ
#define KJH_MOD_INGAMESHOP_PATCH_091028						// ÀÎ°ÔÀÓ¼¥ ¼öÁ¤ - ÀÌº¥Æ® Ä«Å×°í¸®, ÀÎ°ÔÀÓ¼¥ ¶óÀÌºê·¯¸® ¾÷µ¥ÀÌÆ® (09.10.28)

// - ÀÌµ¿±Ù 
#define LDK_FIX_EMPIREGUARDIAN_UI_HOTKEY					// Á¦±¹ ¼öÈ£±ºnpc uiÃ¢ ¿­·ÁÀÖÀ»¶§ Ä³¸¯Ã¢, ÀÎº¥Ã¢ ¾È¿­¸®µµ·ÏÇÑ´Ù(09.10.28)
#define LDK_FIX_BLUESERVER_UNLIMIT_AREA						// ºí·ç¼· Àü¿ë ÀÌµ¿Ã¢ ÀÌµ¿Á¦ÇÑ ¼³Á¤Áß Ãß°¡Áö¿ª Á¦ÇÑ ÇØÁ¦(09.10.28)
#define LDK_FIX_PETPOSITION_MULTIPLY_OWNERSCALE				// Ä³¸¯ÅÍ ¼±ÅÃÃ¢ ¿¡¼­ Ä³¸¯ÅÍ Å©±â¿¡ µû¶ó ÆêÀ§Ä¡ ¼öÁ¤(09.10.28)

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//----------------------------------------------------------------------------------------------
//[2009.10.27 Å×¼·] - ±èÀçÈñ
//[2009.10.27 ºí·ç] - ¹Úº¸±Ù

#define PBG_FIX_RESETFRUIT_CAL							// ¸®¼Â¿­¸Å °æ°íÃ¢ ±âº» ½ºÅÈÃß°¡ °è»ê ¹ö±×¼öÁ¤(09.10.25)

// ±èÀçÈñ
#define KJH_ADD_SERVER_LIST_SYSTEM						// ¼­¹ö¸®½ºÆ® ½Ã½ºÅÛ º¯°æ (09.10.19) - ÇØ¿Ü ¸ðµÎ µé¾î°£ µÚ¿¡ µðÆÄÀÎÁ¤¸®ÇØ¾ß ÇÔ
														// (ÀÌÈÄ¿¡ ½ºÅ©¸³Æ® Ãß°¡ÀÛ¾÷ ¿¹Á¤- ½ºÅ©¸³Æ® ÀÛ¾÷Àº ÀÌ µðÆÄÀÎ¿¡ Á¾¼ÓµÇ¾î¾ß ÇÔ)

// ¾È»ó±Ô	
#define ASG_MOD_QUEST_WORDS_SCRIPTS						// QuestWords.txt ¾Ö´Ï ¹øÈ£¿Í È¸¼ö Á¦°Å (2009.10.22) (QuestWords.txt ÀÏº» Àû¿ë½Ã µðÆÄÀÎ Á¤¸®ÇÒ °Í)

#define ASG_ADD_GENS_SYSTEM								// °Õ½º ½Ã½ºÅÛ(2009.09.14)	[ÁÖÀÇ] °Õ½º ½Ã½ºÅÛ µðÆÄÀÎÀÌ ÄÑÁö¸é ASG_ADD_UI_NPC_MENU µðÆÄÀÎÀº ²¨Áü. ÇØ¿Ü Ãß°¡½Ã ÁÖÀÇ.
#ifdef ASG_ADD_GENS_SYSTEM
	#define ASG_ADD_UI_NPC_DIALOGUE						// NPC ´ëÈ­Ã¢(2009.09.14)
	#define ASG_ADD_INFLUENCE_GROUND_EFFECT				// °Õ½º ¼¼·Â ±¸ºÐ ¹Ù´Ú ÀÌÆåÆ®(2009.10.07)
	#define ASG_ADD_GENS_MARK							// °Õ½º ¸¶Å© Ç¥½Ã(2009.10.09)
	#define ASG_ADD_GENS_NPC							// °Õ½º NPC Ãß°¡(2009.10.12)
	#define ASG_ADD_GATE_TEXT_MAX_LEVEL					// Gate.txt ÃÖ´ë ·¹º§ Ãß°¡.(2009.10.16)	[ÁÖÀÇ] ¸®¼Ò½º ÄÁ¹öÅÍ »õ·Î¿î ¼Ò½º·Î ÄÄÆÄÀÏ ÇÒ °Í.
	#define ASG_ADD_MOVEREQ_TEXT_MAX_LEVEL				// Movereq.txt ÃÖ´ë ·¹º§ Ãß°¡.(2009.10.16)	[ÁÖÀÇ] ¸®¼Ò½º ÄÁ¹öÅÍ »õ·Î¿î ¼Ò½º·Î ÄÄÆÄÀÏ ÇÒ °Í.
#endif	// ASG_ADD_GENS_SYSTEM

// ±èÀçÈñ,¹Úº¸±Ù - ÀÎ°ÔÀÓ˜Þ ½Ã½ºÅÛ
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
	#define PBG_ADD_CHARACTERSLOT						// Ä³¸¯ÅÍ ½½·Ô¾ÆÀÌÅÛ(09.05.06)
	#define KJH_DEL_PC_ROOM_SYSTEM						// ÇÇ¾¾¹æ ½Ã½ºÅÛ »èÁ¦ (09.10.22) - ÇÇ¾¾¹æ Á¢¼Ó¿©ºÎ´Â ³²°ÜµÒ(class CPCRoomPtSys)

	#ifdef _BLUE_SERVER		//  ºí·ç¼­¹ö¿¡¸¸ Àû¿ë
		// µðÆÄÀÎ Á¤¸®½Ã¿£ _BLUE_SERVER·Î °¨½Î¾ß ÇÔ	ºí·ç Àû¿ë¿ÜÀÏ°æ¿ì¸¸ _BLUE_SERVER¹ÛÀ¸·Î Á¦°Å ÇØ¾ßÇÔ
		#define PBG_ADD_CHARACTERCARD						// Ä³¸¯ÅÍ Ä«µå ´ÙÅ©·Îµå ¸¶°Ë»ç »ý¼º Ä«µå(09.05.04)¼ÒÈ¯¼ú»çÄ«µå Ãß°¡(09.06.04)
		#define PBG_ADD_SECRETITEM							// È¥ÇÕÀ¯·áÈ­ ¼­¹ö¿¡¼­ÀÇ ÇÇ·Îµµ °ü·Ã ITEMÃß°¡(09.06.05) =>> blue
		#define PBG_ADD_SECRETBUFF							// È¥ÇÕÀ¯·áÈ­ ¼­¹ö¿¡¼­ÀÇ ÇÇ·Îµµ °ü·Ã BUFFÃß°¡(09.06.08)/ÇÇ·Îµµ ½Ã½ºÅÛ(09.06.15) =>> blue
		#define PBG_ADD_PKSYSTEM_INGAMESHOP					// È¥ÇÕÀ¯·áÈ­ ¼­¹ö¿¡¼­ÀÇ pk½Ã½ºÅÛ ¸®´º¾ó(09.06.05) =>> blue
		#define PBG_ADD_MUBLUE_LOGO							// ºí·ç ¹Â ·Î°í Àû¿ë(09.10.08) =>> blue
		#define	PBG_ADD_LAUNCHER_BLUE						// ºí·ç ·±ÃÄ Àû¿ë(09.10.19)
		#define PBG_MOD_GAMECENSORSHIP						// ºí·ç¹Â´Â 18¼¼ ÀÌ»ó °¡´ÉÀ¸·Î º¯°æ(09.10.22)
		#define LDK_ADD_INGAMESHOP_LIMIT_MOVE_WINDOW		// ±¹³» Àü¿ë ÀÌµ¿Ã¢ ÀÌµ¿Á¦ÇÑ ¼³Á¤, ÀÌµ¿ÀÇ ÀÎÀåÀ¸·Î ÇØÁ¦ (PSW_SEAL_ITEM°ü·Ã)
	#endif // _BLUE_SERVER

	#define	PSW_PARTCHARGE_ITEM1					// ÇÊ¼ö - ÇØ¿Ü À¯·áÈ­ ¾ÆÀÌÅÛ Ãß°¡½Ã define LDK_ADD_CASHSHOP_FUNC »ç¿ë ¸øÇÏµµ·Ï ÇÑ´Ù. (2009.09.15)
	#define ASG_ADD_CS6_ASCENSION_SEAL_MASTER 		// »ó½ÂÀÇÀÎÀå¸¶½ºÅÍ(2009.02.24)
	#define ASG_ADD_CS6_WEALTH_SEAL_MASTER 			// Ç³¿äÀÇÀÎÀå¸¶½ºÅÍ(2009.02.24)
	#define PBG_MOD_MASTERLEVEL_MESSAGEBOX			// »ó½ÂÀÇ ÀÎÀå ¸¶½ºÅÍÄÉ¸¯ÅÍ ±¸ÀÔ¿©ºÎ Ãß°¡(09.4.24)
	#define PSW_ADD_PC4_SEALITEM					// Ä¡À¯, ½Å¼º( Ã¼Á¨, ¸¶Á¨ ) ÀÎÀå
	#define CSK_LUCKY_CHARM							// Çà¿îÀÇ ºÎÀû( 2007.02.22 )
	#define YDG_ADD_CS5_REVIVAL_CHARM				// ºÎÈ°ÀÇ ºÎÀû
	#define YDG_ADD_CS5_PORTAL_CHARM				// ÀÌµ¿ÀÇ ºÎÀû
	#define ASG_ADD_CS6_GUARD_CHARM					// ¼öÈ£ÀÇºÎÀû(2009.02.09)
	#define ASG_ADD_CS6_ITEM_GUARD_CHARM			// ¾ÆÀÌÅÛº¸È£ºÎÀû(2009.02.09)
	#define LDS_ADD_CS6_CHARM_MIX_ITEM_WING			// ³¯°³ Á¶ÇÕ 100% ¼º°ø ºÎÀû
	#define PBG_FIX_CHARM_MIX_ITEM_WING_TOOLTIP		// ³¯°³ÀÇ ºÎÀû ÅøÆÁ Àß¸ø Ãâ·ÂµÇ´Â ¹ö±×(09.05.11)
	#define PBG_FIX_CHARM_MIX_ITEM_WING				// ³¯°³ÀÇ ºÎÀû »óÁ¡¿¡ ÆÇ¸ÅÈÄ ´ÙÀ½ ¹°Ç° ÆÇ¸Å ¾ÈµÇ´Â ¹ö±× ¼öÁ¤(09.05.06)
	#define CSK_FREE_TICKET							// ÀÚÀ¯ÀÔÀå±Ç - µ¥ºô½ºÄù¾î, ºí·¯µåÄ³½½, Ä®¸®¸¶ (2007.02.06)
	#define PSW_CURSEDTEMPLE_FREE_TICKET			// È¯¿µÀÇ »ç¿ø ÀÚÀ¯ ÀÔÀå±Ç
	#define PSW_SCROLL_ITEM							// ¿¤¸®Æ® ½ºÅ©·Ñ
	#define PSW_ADD_PC4_SCROLLITEM				    // ÀüÅõ, °­È­( Å©¸®, ¾×¼³ µ¥¹ÌÁö Áõ°¡ ) ½ºÅ©·Ñ
	#define PSW_SECRET_ITEM							// °­È­ÀÇ ºñ¾à
	#define PSW_SEAL_ITEM							// ÀÌµ¿ ÀÎÀå

	// ÀÎ°ÔÀÓ˜· Àû¿ë ¾ÆÀÌÅÛ 1Â÷
	#define INGAMESHOP_ITEM01							// ÇØ¿Ü¿¡¸¸ µî·ÏµÇ¾îÀÖ°Å³ª »õ·Î »ý¼ºµÈ ¾ÆÀÌÅÛ µðÆÄÀÎ Ãß°¡(2009.09.08)
	#ifdef	INGAMESHOP_ITEM01
		// - ¹ö±×¼öÁ¤
		#define LDK_FIX_TICKET_INFO							// ¾Ç¸¶ÀÇ±¤ÀåÀÔÀå±Ç, ºí·¯µåÄ³½½ÀÔÀå±Ç ·¹º§ ÀÚµ¿Àû¿ë ¹®±¸ Ãß°¡.
		#define LDK_FIX_PC4_GUARDIAN_DEMON_INFO				// µ¥¸ó Ä³¸¯ÅÍÁ¤º¸Ã¢¿¡ °ø°Ý·Â,¸¶·Â,ÀúÁÖ·Â Ãß°¡ µ¥¹ÌÁö Àû¿ë(09.10.15)
		#define LDS_MOD_CHAOSCHARMITEM_DONOT_TRADE			// ±âÈ¹ ¿äÃ»À¸·Î Ä«¿À½ºÁ¶ÇÕ ºÎÀûÀÇ °Å·¡°¡ ÀÌ·ç¾î ÁöÁö ¾Êµµ·Ï Àû¿ë. (09.10.15)

		// - ÀÌµ¿±Ù
		#define LDK_MOD_PREMIUMITEM_DROP					// ÇÁ¸®¹Ì¾ö¾ÆÀÌÅÛ ¹ö¸®±âÁ¦ÇÑÇØÁ¦(09.09.16)±¹³»¸¸ Àû¿ë
		#define LDK_MOD_PREMIUMITEM_SELL					// ÇÁ¸®¹Ì¾ö¾ÆÀÌÅÛ ÆÇ¸ÅÁ¦ÇÑÇØÁ¦(09.09.25)±¹³»¸¸ Àû¿ë
		#define LDK_ADD_INGAMESHOP_GOBLIN_GOLD				// °íºí¸°±ÝÈ­
		#define LDK_ADD_INGAMESHOP_LOCKED_GOLD_CHEST		// ºÀÀÎµÈ ±Ý»ö»óÀÚ
		#define LDK_ADD_INGAMESHOP_LOCKED_SILVER_CHEST		// ºÀÀÎµÈ Àº»ö»óÀÚ
		#define LDK_ADD_INGAMESHOP_GOLD_CHEST				// ±Ý»ö»óÀÚ
		#define LDK_ADD_INGAMESHOP_SILVER_CHEST				// Àº»ö»óÀÚ
		#define LDK_ADD_INGAMESHOP_PACKAGE_BOX				// ÆÐÅ°Áö »óÀÚA-F
		#define LDK_ADD_INGAMESHOP_SMALL_WING				// ±â°£Á¦ ³¯°³ ÀÛÀº(±º¸Á, Àç³¯, ¿ä³¯, Ãµ³¯, »ç³¯)
		#define LDK_ADD_INGAMESHOP_NEW_WEALTH_SEAL			// ½Å±Ô Ç³¿äÀÇ ÀÎÀå

		// - ÀÌµ¿¼®
		#define PSW_INDULGENCE_ITEM							// ÀÎ°ÔÀÓ˜Þ ¾ÆÀÌÅÛ // ¸éÁËºÎ2Á¾ Ãß°¡
		#define PSW_ELITE_ITEM								// ÀÎ°ÔÀÓ˜Þ ¾ÆÀÌÅÛ // ¿¤¸®Æ®¹°¾à2Á¾(Ä¡·á¹°¾à,¸¶³ª¹°¾à) Ãß°¡
		#define PSW_FRUIT_ITEM								// ÀÎ°ÔÀÓ˜Þ ¾ÆÀÌÅÛ // ¸®¼Â¿­¸Å5Á¾

		#ifdef PSW_FRUIT_ITEM
			#define LDS_ADD_NOTICEBOX_STATECOMMAND_ONLYUSEDARKLORD	// ÀÎ°ÔÀÓ˜Þ ¾ÆÀÌÅÛ // ¸®¼Â¿­¸Å5Á¾ // Åë¼Ö¸®¼Â¿­¸Å´Â ´ÙÅ©·Îµå¸¸ »ç¿ë°¡´ÉÇÑ ¸Þ¼¼Áö Ãâ·Â.
		#endif // PSW_FRUIT_ITEM

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
#endif //KJH_PBG_ADD_INGAMESHOP_SYSTEM

// ÀÌµ¿±Ù
#define LDK_FIX_GM_WEBZEN_NAME								// GMÆÇº°½Ã id¿¡ webzenÀÌ¶õ ´Ü¾î°¡ µé¾î°¡µµ gmÀÎÁ¤(09.10.13)

// ÀÌµ¿¼®
#define LDS_FIX_PETDESTRUCTOR_TERMINATE_EFFECTOWNER_ADD_TYPE// LDS_FIX_AFTER_PETDESTRUCTOR_ATTHESAMETIME_TERMINATE_EFFECTOWNERÀÌÈÄ Ãß°¡ÀÛ¾÷. ´ÙÅ©½ºÇÇ¸´ °ø°Ý:µ¹°Ý(MODEL_AIR_FORCE) Effect»ç¿ë µµÁß Æê::´ÙÅ©½ºÇÇ¸´ ¸Þ¸ð¸® ¹ÝÈ¯½Ã »¶³ª´Â ¹®Á¦ FIXED. (09.10.15)

// ¾ç´ë±Ù
#define YDG_FIX_REPAIR_COST_ADJUST_TO_SERVER_SETTING	// ¼ö¸® °¡°Ý °è»ê ¼­¹ö¿¡ ¸ÂÃã (09.10.12)


/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//----------------------------------------------------------------------------------------------
//[2009.10.06 º»¼·] - ÀÌµ¿¼®
//[2009.10.08 Å×¼·] - ÀÌµ¿¼®

// - ÀÌµ¿¼®
#define LDS_MOD_ANIMATIONTRANSFORM_WITHHIGHMODEL			// AnimationTransformWithAttachHighModelÇÔ¼ö¿¡¼­ ÇöÀç arrayBone¸¸ ÇÊ¿äÇÒ °æ¿ì´Â TransformÀ¸·Î BoneÀÌ Vertices¿¡ °öÇÏÁö ¾Êµµ·Ï º¯°æ. (2009.09.09)
#define LDS_ADD_ANIMATIONTRANSFORMWITHMODEL_USINGGLOBALTM	// AnimationTransformWithAttachHighModelÇÔ¼ö³» TMArray°¡ LocalÀÎ ÀÌÀ¯·Î ÀÌÈÄ ¿¬»ê¿¡ TMÀÌ Point¸¦ ÀÒ¾î¹ö¸®´Â Çö»óÀ¸·Î TMÀ» Global À¸·Î º¯°æ. (09.09.07)
#define LDS_FIX_EG_JERINT_ANIMATION_AND_SWORDFORCE_SPEED	// Á¦¸°Æ®ÀÇ °ø°Ý ¼Óµµ ¹× °Ë±â ½Ã°£ ¹üÀ§ ÀçÀÛ¾÷ (09.09.08) 
#define LDS_FIX_AFTER_PETDESTRUCTOR_ATTHESAMETIME_TERMINATE_EFFECTOWNER	// Æê ¸Þ´ÏÀúÀÇ Æê Á¾·á µÉ ¶§¸¶´Ù Æê´ç ¹ß»ýÇÏ´ø ¸Þ¸ð¸®¸¯ FIXED. (YDG_FIX_MEMORY_LEAK_0905) defineÀÛ¾÷ ÀÌÈÄ ¹ß»ý ¹®Á¦·Î ¸Þ¸ð¸® ¹ÝÈ¯µÈ PetÀÌ Effect ÁßÀÏ¶§ ¹ß»ý(Owner·Î ÀÚ½ÅÀ» ³Ñ±ä°æ¿ì¸¸)À¸·Î EffectÀÇ µéÀÇ NULL Ã³¸® ÀÛ¾÷. (09.09.17)

// - ÇØ¿Ü¹ö±× °ü·Ã ¼öÁ¤»çÇ×
#define YDG_FIX_PANDA_CHANGERING_PANTS_BUG				// ´ÙÅ©·Îµå ¸Ç¸öÀ¸·Î ÆÒ´õ º¯½Å¹ÝÁö Âø¿ë½Ã ¹ÙÁö ¹öÀÌ´Â ¹ö±× (09.07.21)
#define YDG_FIX_DUEL_SUMMON_CLOAK						// °áÅõ½Ã ¿äÁ¤ ¼ÒÈ¯¼ö ¸ÁÅä ³ª¿À´Â ¹ö±× (09.07.29)
#define PBG_FIX_PETTIP									// ÀÎº¥³»ºÎÀÇ ´ÙÅ©·Îµå °ü·Ã ÆêÀÇ Á¤º¸°¡ Âø¿ëÇÑ ÆêÀÇ Á¤º¸·Î Ãâ·ÂµÇ´Â ¹ö±× ¼öÁ¤(09.09.10)
#define LJH_FIX_CHANGE_RING_DAMAGE_BUG					// º¯½Å¹ÝÁö º¹¼ö Âø¿ë½Ã ³ôÀº °ªÀ¸·Î µ¥¹ÌÁö,¸¶·Â,ÀúÁÖ·Â Áõ°¡°¡ µÇµµ·Ï ¼öÁ¤ (09.09.11)
#define YDG_FIX_OVER_5_SETITEM_TOOLTIP_BUG				// ¼¼Æ®¾ÆÀÌÅÛ 5Á¾·ù ÀÌ»ó Â÷¸é °è»ê¾ÈµÇ´Â ¹ö±× ¼öÁ¤(09.09.11)
#define YDG_FIX_MAGIC_DAMAGE_CALC_ORDER					// ¼¼Æ®¾ÆÀÌÅÛ °ü·Ã ¸¶·Â °è»ê ¼ø¼­ ¼öÁ¤ (09.09.11)
#define YDG_FIX_380ITEM_OPTION_TEXT_SD_PERCENT_MISSING	// 380¾ÆÀÌÅÛ ¿É¼Ç¿¡ SDÁõ°¡¿¡ % ºüÁø ¹ö±× ¼öÁ¤ (09.09.23)
#define YDG_FIX_BUFFTIME_OVERFLOW						// ¹öÇÁ½Ã°£ÀÌ 0º¸´Ù ÀÛ¾ÆÁö¸é ³ÑÄ¡´Â ¹ö±× (09.09.28)
#define LJH_FIX_PET_SHOWN_IN_CHAOS_CASTLE_BUG			// ÆêÀÌ Ä«¿À½ºÄ³½½¿¡¼­ º¸ÀÌ´Â ¹ö±× ¼öÁ¤(09.09.29)

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//----------------------------------------------------------------------------------------------
//[2009.09.10 º»¼·] - ÀÌµ¿±Ù
//[2009.09.07 Å×¼·] - ÀÌµ¿±Ù

// - ¾ç´ë±Ù
#define YDG_DARK_SPIRIT_CRASH_BECAUSEOF_FIX_MEMORY_LEAK	// ¸Þ¸ð¸® ´©¼ö ¼öÁ¤¶§¹®¿¡ ¹ß»ýÇÑ ´ÙÅ©½ºÇÇ¸´ Æ¨±â´Â Çö»ó ÀÓ½Ã ¼öÁ¤ (2009.09.02)
#define YDG_FIX_SOCKETITEM_SELLPRICE_BUG				// ¼ÒÄÏ¾ÆÀÌÅÛ ÆÇ¸Å°¡°Ý ¹ö±× (09.09.03)
#define YDG_FIX_TRADE_BUTTON_LOCK_WHNE_ITEM_MOVED		// °Å·¡Ã¢ »ç±â°ü·Ã Æ®·¹ÀÌµå Àåºñ ¿Å±â¸é °Å·¡¹öÆ° Àá±×±â(2009.08.25)
#define YDG_FIX_NPCSHOP_SELLING_LOCK					// NPC»óÁ¡ ÆÇ¸Å½Ã Ã¢ ¸ø´Ý°Ô Àá±Ý (2009.08.25)
#define YDG_FIX_CATLE_MONEY_INT64_TYPE_CRASH			// °ø¼º ¼ºÁÖÃ¢ ¼ºÀÇ µ·ÀÌ ¸¹À»¶§ Æ¨±â´Â ¹ö±× (2009.09.01)

// - ÀÌµ¿¼®
#define LDS_FIX_SKILLKEY_DISABLE_WHERE_EG_ALLTELESKILL	// ¹ý»ç ÅÚ·¹°è¿­(ÅÚ·¹Å°³×½Ã½º,¼ø°£ÀÌµ¿) ½ºÅ³µéÀº Á¦±¹¼öÈ£±º ¿µ¿ª¿¡¼­ »ç¿ë ¸øÇÏµµ·Ï ¼³Á¤(09.08.28)
#define LDS_FIX_EG_JERINT_ATTK1_ATTK2_SPEED				// Á¦±¹¼öÈ£±º Á¦¸°Æ® °ø°Ý1, °ø°Ý2 ¼Óµµ Àß¸øµÈ ¼öÄ¡·Î FIX ÀÛ¾÷ (09.09.04)

// - ¾È»ó±Ô
#define ASG_FIX_QUEST_PROTOCOL_ADD					// ½Å±Ô Äù½ºÆ® ÇÁ·ÎÅäÄÝ Ãß°¡.(2009.09.07)

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//----------------------------------------------------------------------------------------------
// [2009.08.31 Å×¼·] - ±èÀçÈñ

// - ¹Úº¸±Ù
#define PBG_FIX_CHANGEITEMCOLORSTATE							// ÀÎº¥Åä¸® ¾È¿¡¼­ ³»±¸·Â¿¡ µû¸¥ »ö±ò º¯È­ÇÏµµ·Ï ¼öÁ¤(µ¥¸ó/¼öÈ£Á¤·É/ÆÒ´õÆê)(09.06.16)

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//----------------------------------------------------------------------------------------------
// [2009.08.27 º»¼·] - ±èÀçÈñ
// [2009.08.26 Å×¼·] - ±èÀçÈñ

// UIMng.cpp ·ÎµùÈ­¸é ÀÌ¹ÌÁö ±³Ã¼
// GMNewTown.cpp ¿¤º£¶õµå Àýº®È­¸é ¹ö±× ¼öÁ¤ - define ¾øÀ½

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//----------------------------------------------------------------------------------------------
// [2009.08.27 º»¼·] - ±èÀçÈñ
// [2009.08.25 Å×¼·] - ±èÀçÈñ

// - ±èÀçÈñ
#define KJH_FIX_WOPS_K32595_DOUBLE_CLICK_PURCHASE_ITEM_EX	// NPC»óÁ¡¿¡¼­ ¾ÆÀÌÅÛÀ» ±¸¸ÅÇÒ¶§, Ã³À½¿¡ µÎ¹øÅ¬¸¯ÇØ¾ß ¾ÆÀÌÅÛÀÌ ±¸ÀÔµÇ´Â Çö»ó Ãß°¡ ¹ö±×¼öÁ¤ (09.08.24)

// - ÀÌµ¿¼®
#define LDS_FIX_EG_COLOR_CHANDELIER							// release ¸ðµå¼­¸¸ Á¦±¹ ¼öÈ£±º ÁÖ¸»¸Ê ¼§µé¸®¿¡ ¿¬±â »ö ´Ù¸¥ ¹ö±× ¼öÁ¤ (09.08.21)
#define LDS_ADD_EG_ADDMONSTER_ACTION_GUARDIANDEFENDER_EX2	// ¹æÆÐº´ 44¹ø ¹æÆÐ¸·±â ½ºÅ³½Ã °£È¤ ·»´ý¹æÇâ ¹Ù¶óº¸´Â ¹ö±× ¼öÁ¤ (09.08.24)

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//----------------------------------------------------------------------------------------------
// [2009.08.27 º»¼·] - ±èÀçÈñ
// [2009.08.21 Å×¼·] - ±èÀçÈñ

// - ÀÌµ¿¼®
#define LDS_ADD_SET_BMDMODELSEQUENCE_					// BMD Å¬·¡½ºÀÇ »ç¿ëµÇÁö ¾Ê´Â º¯¼öÀÎ BmdSequenceID¿¡ BMDSequence ¼³Á¤. (09.08.05)
#define LDS_FIX_MEMORYLEAK_BMDWHICHBONECOUNTZERO		// BoneCount==0 ÀÎ BMDµé¿¡ ´ëÇÑ BMD Destruct ½ÃÁ¡¿¡ ¹ß»ýÇÏ´Â ¸Þ¸ð¸® ¸¯ FIX. (09.08.13)
#define LDS_FIX_MEMORYLEAK_0908_DUPLICATEITEM			// DuplicateItem() ³»¿¡ Èü ¿µ¿ª¿¡ »ý¼ºµÈ ItemÀÇ ¸Þ¸ð¸® ¹ÝÈ¯ ¹ÌÃ³¸®·Î ¸Þ¸ð¸® ¸¯ FIX. (09.08.13)
#define LDS_FIX_GLERROR_WRONG_WRAPMODEPARAMETER			// ImageOpen½Ã WrapMode Param °ªÀÌ Àß¸øµÇ¾î, OpenGLERROR°¡ ¶ß¸ç ÀÌ¿¡ ´ëÇÑ FIX. (MR0 Àû¿ë ½Ã Ä¡¸íÀû ¿À·ù°¡ ¹ß»ýÇÏ¹Ç·Î..) (09.08.18)
#define LDS_ADD_EG_ADDMONSTER_ACTION_GUARDIANDEFENDER	// Á¦±¹ ¼öÈ£±º ¹æÆÐº´ÀÇ ¼­¹ö·ÎºÎÅÍÀÇ ¸ó½ºÅÍ ½ºÅ³==>Action ¿¬°á ÀÛ¾÷. (09.08.18)
#define LDS_ADD_EG_ADDMONSTER_ACTION_GUARDIANDEFENDER_EX	// ¹æÆÐº´ÀÇ 1¹ø ½ºÅ³(44)µ¿ÀÛÀÇ ±âÁ¸¹æ½Ä°ú ´Ù¸¥ ¹æ½ÄÀÇ ¿¡´Ï¸ÞÀÌ¼Ç È£Ãâ Àç ¼öÁ¤ (09.08.21)

// - ¹Úº¸±Ù
#define PBG_ADD_NEWLOGO_IMAGECHANGE						// ·ÎµùÈ­¸é ÀÌ¹ÌÁö º¯°æ(09.08.12)
#define PJH_NEW_SERVER_SELECT_MAP						// ¼­¹ö ¼±ÅÃÈ­¸é º¯°æ(09.08.17)
#define YDG_MOD_TOURMODE_MAXSPEED						// Åõ¾î¸ðµå ÃÖ°í¼Óµµ ¿Ã¸² (2009.07.10)

// - ¾ç´ë±Ù
#define YDG_FIX_DOPPELGANGER_BUTTON_COLOR				// µµÇÃ°»¾î UI ¹öÆ° Àá±Û¶§ »ö ÀÌ»óÇÑ ¹®Á¦ (2009.08.14)
#define YDG_MOD_DOPPELGANGER_END_SOUND					// µµÇÃ°»¾î Á¾·á »ç¿îµå Ãß°¡ (2009.08.20)


/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//----------------------------------------------------------------------------------------------
// [2009.08.27 º»¼·] - ±èÀçÈñ
// [2009.08.13 Å×¼·] - ±èÀçÈñ

// - ¾ç´ë±Ù
#define YDG_ADD_DOPPELGANGER_EVENT				// µµÇÃ°»¾î ÀÌº¥Æ® (2009.04.22) [ÆÐÄ¡¾ÈµÊ]
#define YDG_MOD_SEPARATE_EFFECT_SKILLS					// ½ºÅ³ °Ë»çÇÏ´Â ÀÌÆåÆ® ºÐ¸® (ºí·¯µå ¾îÅÃ µî) (2009.08.10) [ÆÐÄ¡¾ÈµÊ]

// - ¾È»ó±Ô
#define ASG_ADD_NEW_DIVIDE_STRING						// »õ·Î¿î ¹®Àå ³ª´©±â ±â´É.(2009.06.08)
#define ASG_ADD_NEW_QUEST_SYSTEM						// ´º Äù½ºÆ® ½Ã½ºÅÛ(2009.05.20)

// Á¦±¹ ¼öÈ£±º ÆÄÆ¼ - ÀÌµ¿¼®, ÀÌµ¿±Ù
#define LDS_ADD_EMPIRE_GUARDIAN					// Á¦±¹ ¼öÈ£±º

// - ¹Úº¸±Ù
#define PBG_ADD_DISABLERENDER_BUFF						// ·£´õ¾ÈÇÒ ¹öÇÁ ÀÌ¹ÌÁö Ã³¸®(09.08.10)

//------------------------------------------------
#ifdef YDG_ADD_DOPPELGANGER_EVENT
	#define YDG_ADD_MAP_DOPPELGANGER1					// µµÇÃ°»¾î ¸Ê1 (¶óÅ¬¸®¿Âº£ÀÌ½º) (2009.03.22) [ÆÐÄ¡¾ÈµÊ]
	#define YDG_ADD_MAP_DOPPELGANGER2					// µµÇÃ°»¾î ¸Ê2 (ºÒÄ«´©½ºº£ÀÌ½º) (2009.03.22) [ÆÐÄ¡¾ÈµÊ]
	#define YDG_ADD_MAP_DOPPELGANGER3					// µµÇÃ°»¾î ¸Ê3 (¾ÆÆ²¶õ½ºº£ÀÌ½º) (2009.03.22) [ÆÐÄ¡¾ÈµÊ]
	#define YDG_ADD_MAP_DOPPELGANGER4					// µµÇÃ°»¾î ¸Ê4 (Ä­Åõ¸£1Â÷º£ÀÌ½º) (2009.03.22) [ÆÐÄ¡¾ÈµÊ]
	#define YDG_ADD_DOPPELGANGER_MONSTER				// µµÇÃ°»¾î ¸ó½ºÅÍ Ãß°¡ (2009.05.20) [ÆÐÄ¡¾ÈµÊ]
	#define YDG_ADD_DOPPELGANGER_NPC					// µµÇÃ°»¾î NPC ·ç°¡µå Ãß°¡ (2009.05.20) [ÆÐÄ¡¾ÈµÊ]
	#define YDG_ADD_DOPPELGANGER_ITEM					// µµÇÃ°»¾î ¾ÆÀÌÅÛ Ãß°¡ (2009.05.20) [ÆÐÄ¡¾ÈµÊ]
	#define YDG_ADD_DOPPELGANGER_UI						// µµÇÃ°»¾î UI Ãß°¡ (2009.05.20) [ÆÐÄ¡¾ÈµÊ]
	#define YDG_ADD_DOPPELGANGER_PROTOCOLS				// µµÇÃ°»¾î ÇÁ·ÎÅäÄÝ Ãß°¡ (2009.06.23) [ÆÐÄ¡¾ÈµÊ]
	#define YDG_ADD_DOPPELGANGER_PORTAL					// µµÇÃ°»¾î ¸Ê Æ÷Å» Ãß°¡ (2009.07.30) [ÆÐÄ¡¾ÈµÊ]
	#define YDG_ADD_DOPPELGANGER_SOUND					// µµÇÃ°»¾î »ç¿îµå Ãß°¡ (2009.08.04) [ÆÐÄ¡¾ÈµÊ]
#endif	// YDG_ADD_DOPPELGANGER_EVENT

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
	#define LDK_ADD_EG_MONSTER_KNIGHTS					//Á¦±¹ ¼öÈ£±º ±â»ç´Ü	Imperial Guardian Knights	520 - 181	
	#define LDK_ADD_EG_MONSTER_GUARD					//Á¦±¹ ¼öÈ£±º È£À§º´	Imperial Guardian guard		521 - 182
	#define ASG_ADD_EG_MONSTER_GUARD_EFFECT				// Á¦±¹ ¼öÈ£±º È£À§º´ (°Ë±â ÀÌÆåÆ®)
	#define LDS_ADD_EG_MONSTER_GUARDIANDEFENDER			// Á¦±¹ ¼öÈ£±º ¸Ê 1234(¸ðµç¿äÀÏ)¸ó½ºÅÍ ¼öÈ£±º ¹æÆÐº´			(518/178)
	#define LDS_ADD_EG_MONSTER_GUARDIANPRIEST			// Á¦±¹ ¼öÈ£±º ¸Ê 1234(¸ðµç¿äÀÏ)¸ó½ºÅÍ ¼öÈ£±º Ä¡À¯º´			(519/179)

	//¸Ê
	#define LDK_ADD_MAPPROCESS_RENDERBASESMOKE_FUNC		//MapProcess¿¡ RenderBaseSmoke Ã³¸® ÇÔ¼ö Ãß°¡(09.07.31)
	#define	LDK_ADD_MAP_EMPIREGUARDIAN1					// Á¦±¹ ¼öÈ£±º ¸Ê 1 (¿ù, ¸ñ)
	#define	LDK_ADD_MAP_EMPIREGUARDIAN3					// Á¦±¹ ¼öÈ£±º ¸Ê 3 (¼ö, Åä)

	#define LDK_ADD_EMPIRE_GUARDIAN_DOOR_ATTACK			// Á¦±¹ ¼öÈ£±º ¼º¹®Àº ¸Ê¼Ó¼º¹«±âÇÏ°í °ø°Ý°¡´ÉÇÏµµ·ÏÇÔ (09.08.06)

	//UI
	#define LDK_ADD_EMPIREGUARDIAN_UI					// Á¦±¹ ¼öÈ£±º ui
	//ÇÁ·ÎÅäÄÝ
	#define LDK_ADD_EMPIREGUARDIAN_PROTOCOLS			// Á¦±¹ ¼öÈ£±º ÇÁ·ÎÅäÄÝ
	//item
	#define LDK_ADD_EMPIREGUARDIAN_ITEM					// Á¦±¹ ¼öÈ£±º ¾ÆÀÌÅÛ(4Á¾:¸í·É¼­, Á¾ÀÌÂÊÁö, ¼¼Å©·Î¹ÌÄÜ, Á¶°¢)

	//Å×½ºÆ®¿ë DEFINITION
	//	#define LDK_TEST_MAP_EMPIREGUARDIAN				// Á¦±¹ ¼öÈ£±º Å×½ººz¿ë ÀÓ½Ã µðÆÄÀÎ
	//	#define LDS_TEST_MAP_EMPIREGUARDIAN__				// Á¦±¹ ¼öÈ£±º ÀÓ½Ã µðÆÄÀÎ È­/±Ý, ÀÏ

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

#ifdef ASG_ADD_NEW_QUEST_SYSTEM
	#define ASG_ADD_UI_QUEST_PROGRESS					// Äù½ºÆ® ÁøÇà Ã¢(NPC¿ë)(2009.05.27)
#ifndef ASG_ADD_GENS_SYSTEM		// Á¤¸®½Ã ASG_ADD_UI_NPC_MENU µðÆÄÀÎ ¸ðµÎ »èÁ¦.
	#define ASG_ADD_UI_NPC_MENU							// NPC ¸Þ´ºÃ¢(2009.06.17)
#endif	// ASG_ADD_GENS_SYSTEM
	#define ASG_ADD_UI_QUEST_PROGRESS_ETC				// Äù½ºÆ® ÁøÇà Ã¢(±âÅ¸¿ë)(2009.06.24)
	#define ASG_MOD_UI_QUEST_INFO						// Äù½ºÆ® Á¤º¸ Ã¢(2009.07.06)
	#define ASG_MOD_3D_CHAR_EXCLUSION_UI				// 3D Ä³¸¯ÅÍ Ç¥ÇöÀÌ ¾ø´Â UI·Î ¹Ù²Þ.(2009.08.03)
	//(!ÁÖÀÇ!) UI¿¡ 3DÄ³¸¯ÅÍ Ç¥ÇöÀÌ Ãß°¡ µÇ¸é ¿ø·¡´ë·Î µÇµ¹·Á¾ß µÇ¹Ç·Î Á¤¸®ÇÏÁö ¸» °Í.
#endif	// ASG_ADD_NEW_QUEST_SYSTEM

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//----------------------------------------------------------------------------------------------
// [2009.08.13 º»¼·] - ±èÀçÈñ
// [2009.08.11 Å×¼·] - ±èÀçÈñ

// ¾Æ·¡[2009.07.23 º»¼·]ÀÏÀÚ °×ºí¿©¸§ÀÌº¥Æ® ÇØÁ¦. (ÁÖ¼®Ã³¸® : #define LDK_MOD_GAMBLE_SUMMER_SALE_EVENT)


/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//----------------------------------------------------------------------------------------------
// [2009.07.23 º»¼·] - ¾È»ó±Ô
// [2009.07.17 Å×¼·] - ¾È»ó±Ô
// - ¹Úº¸±Ù
#define PBG_MOD_LUCKYCOINEVENT					// Çà¿îÀÇµ¿Àü 255°³ ÀÌ»ó µî·ÏµÇÁö ¾Êµµ·Ï ÀÌº¥Æ® ¼öÁ¤(09.07.15)(´Ù¸¥UI¿ÍÀÇ¹ö±×,¿­°íÀÌµ¿¹ö±×)

// - ¾ç´ë±Ù
#define YDG_FIX_CLIENT_SKILL_EFFECT_SIZE		// ÀÌÆåÆ® ¸¹À»¶§ ºí·¯µå¾îÅÃµî Å¬¶ó½ºÅ³ ¾È¸Ô´Â ¹ö±× (2009.07.13)

// - ÀÌµ¿±Ù
//#define LDK_MOD_GAMBLE_SUMMER_SALE_EVENT		// °×ºí ¿©¸§ ÀÌº¥Æ® 50% ¼¼ÀÏ (09.07.16)


/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//----------------------------------------------------------------------------------------------
// [2009.07.09 º»¼·] - ¾È»ó±Ô(½Å¹öÀü °ÔÀÓ°¡µå ¶óÀÌºê·¯¸®¸¸ Àû¿ë)
// [2009.07.02 Å×¼·] - ¾È»ó±Ô(½Å¹öÀü °ÔÀÓ°¡µå ¶óÀÌºê·¯¸®¸¸ Àû¿ë)
// [2009.06.25 º»¼·] - ¹Úº¸±Ù
// [2009.06.23 Å×¼·] - ¹Úº¸±Ù
// - ¹Úº¸±Ù
#define PBG_FIX_DARK_FIRESCREAM_HACKCHECK		// ´ÙÅ© ÆÄÀÌ¾î½ºÅ©¸² (¼­¹ö)ÇÙÃ¼Å©°ü·Ã ¹ö±× ¼öÁ¤(09.06.22)


/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//----------------------------------------------------------------------------------------------
// [2009.06.18 º»¼·] - ¹Úº¸±Ù
// [2009.06.15 Å×¼·] - ¹Úº¸±Ù
// - ¹Úº¸±Ù
#define PBG_FIX_CHAOTIC_ANIMATION				// Ä«¿ÀÆ½ µð¼¼ÀÌ¾î ¾Ö´Ï¸ÞÀÌ¼Ç ¼öÁ¤(09.06.11)
//#if SELECTED_LANGUAGE == LANGUAGE_KOREAN
#ifdef _LANGUAGE_KOR					// ±¹³»¸¸ Àû¿ë
	#define PBG_MOD_PREMIUMITEM_TRADE				// ÇÁ¸®¹Ì¾ö¾ÆÀÌÅÛ°Å·¡Á¦ÇÑÇØÁ¦(09.06.11) ±¹³»¸¸ Àû¿ë
//#endif //SELECTED_LANGUAGE == LANGUAGE_KOREAN
#endif // _LANGUAGE_KOR					// ±¹³»¸¸ Àû¿ë


/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//----------------------------------------------------------------------------------------------
// [2009.06.11 º»¼·] - ¹Úº¸±Ù
// [2009.06.09 Å×¼·] - ¹Úº¸±Ù
// - ¹Úº¸±Ù
#define PBG_MOD_INVENTORY_REPAIR_COST			// ÀÚµ¿¼ö¸®±Ý¾× ÇÏÇâÁ¶Á¤(09.06.08)


/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//----------------------------------------------------------------------------------------------
// [2009.06.04 º»¼·] - ¹Úº¸±Ù
// [2009.06.02 Å×¼·] - ¹Úº¸±Ù
//	ÆÒ´õº¯½Å¹ÝÁö ¹ö±× ¼öÁ¤ ÆÐÄ¡
// [2009.06.01 Å×¼·] - ¹Úº¸±Ù
// - ¾È»ó±Ô
//#if SELECTED_LANGUAGE == LANGUAGE_KOREAN
#ifdef _LANGUAGE_KOR					// ±¹³»¸¸ Àû¿ë
	#define ASG_ADD_MULTI_CLIENT				// ¸ÖÆ¼ Å¬¶óÀÌ¾ðÆ® (2009.03.17).
//#endif //SELECTED_LANGUAGE == LANGUAGE_KOREAN
#endif // _LANGUAGE_KOR					// ±¹³»¸¸ Àû¿ë

// - ¹ÚÁ¾ÈÆ
#define PJH_ADD_PANDA_CHANGERING			// Ææ´õ º¯½Å¹ÝÁö




// [2009.05.28 Å×¼·] - ÀÌµ¿¼®			
// - ¾È»ó±Ô
#define ASG_FIX_ACTIVATE_APP_INPUT				// ¹Â°¡ ¾×Æ¼ºê »óÅÂ°¡ ¾Æ´Ò¶§ UIµî¿¡¼­ Å° ÀÔ·ÂµÇ´Â ¹ö±×.(¸ÖÆ¼Å¬¶óÀÌ¾ðÆ® µðÆÄÀÎ 2/3.) (2009.03.20)
// ¸ÖÆ¼ Å¬¶óÀÌ¾ðÆ® ºÎºÐ - °ÔÀÓ ÇÁ·ÎÅØÆ® ¶óÀÌºê·¯¸® Àû¿ë ÀÌÈÄ ÁÖ¼® Ç®¾î¾ß ÇÕ´Ï´Ù.

// - ÀÌµ¿¼®
#define LDS_FIX_MEMORYLEAK_PHYSICSMANAGER_RELEASE		// ¸Þ¸ð¸® ´©¼ö Á¦°Å, Physicsmanager Èü¿µ¿ª ¸Þ¸ð¸® ¹ÝÈ¯ Ã³¸®. (´ÙÅ©·Îµå ÄÉ¸¯ ·ÎµùÀÌÈÄ Á¾·á ½Ã ¸¯ ¹ß»ý)(09.05.25)

// - ¾ç´ë±Ù
#define YDG_FIX_MEMORY_LEAK_0905_2ND					// ¸Þ¸ð¸® ´©¼ö Á¦°Å 2Â÷ (2009.05.19)

// - ±èÀçÈñ
#define KJH_FIX_CHAOTIC_ANIMATION_ON_RIDE_PET			// ÆêÀ»Å¸°í ´ÙÅ©·Îµå Ä«¿ÀÆ½µð¼¼ÀÌ¾î ½ºÅ³½Ã ¾Ö´Ï¸ÞÀÌ¼Ç¼öÁ¤ (08.12.18)

// - ÇØ¿Ü¿¡¼­ ±¹³»¿¡ Àû¿ëµÇ¾î¾ß ÇÒ°Íµé
#define KJH_FIX_JP0459_CAN_MIX_JEWEL_OF_HARMONY		// Á¶È­ÀÇº¸¼®À¸·Î ¾÷±×·¹ÀÌµå ÇÒ¼ö ÀÖ´Â ¾ÆÀÌÅÛÀÎµ¥µµ »¡°²°Ô ³ª¿À´Â ¹ö±×¼öÁ¤ (09.05.08)
#define PBG_FIX_FENRIR_GELENALATTACK					// Ææ¸±À» Å¸°í ÀÏ¹Ý°ø°ÝÀÌ ¾ÈµÇ´Â Çö»ó (09.04.17)
#define PBG_FIX_SKILL_RECOVER_TOOLTIP					// È¸º¹½ºÅ³ÀÇ ÅøÆÁ»óÀÇ ½ºÅ³ °ø°Ý·ÂÀÌ Ãâ·ÂµÇ°í ÀÖ´Â ¹ö±×(09.04.20)
#define PBG_FIX_SETITEM_4OVER							// ¼¼Æ® ¾ÆÀÌÅÛÀÇ 4Á¾ ÃÊ°úÇÏ¿© ÀåÂøÇßÀ» °æ¿ì ¹ö±×(09.04.24)



/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//----------------------------------------------------------------------------------------------
// [2009.05.19 Å×¼·/2009.05.21 º»¼·] - ÀÌµ¿¼®

// - ¾È»ó±Ô
#define ASG_FIX_PICK_ITEM_FROM_INVEN					// ÀÎº¥Ã¢ Æ¯Á¤ Ä­¿¡¼­ ¾ÆÀÌÅÛÀ» Áý¾îµé¾úÀ» ¶§ Ä³¸¯Á¤º¸Ã¢¿¡¼­ ´É·ÂÄ¡°¡ º¯µ¿µÇ´Â ¹ö±×(2009.04.15) wops_33567
#define ASG_FIX_ARROW_VIPER_BOW_EQUIP_DIRECTION			// ¸¶À»¿¡¼­ ¿¡·Î¿ì¹ÙÀÌÆÛº¸¿ì Âø¿ë ¹æÇâ ¹ö±× ¼öÁ¤.(2009.04.17) wops_33718
#define ASG_FIX_MOVE_WIN_MURDERER1_BUG					// ¹«¹ýÀÚ(Ä«¿À) ·¹º§1ÀÏ ¶§ ¸Ê ÀÌµ¿Ã¢ Ç¥½Ã ¹ö±×.(2009.04.20) wops_34498

// - ¹ÚÁ¾ÈÆ
#define PJH_FIX_4_BUGFIX_33							// wops_34066
#define PJH_ADD_PANDA_PET							// Ææ´õ Æê

// - ±èÀçÈñ
#define KJH_FIX_WOPS_K32595_DOUBLE_CLICK_PURCHASE_ITEM	// NPC»óÁ¡¿¡¼­ ¾ÆÀÌÅÛÀ» ±¸¸ÅÇÒ¶§, Ã³À½¿¡ µÎ¹øÅ¬¸¯ÇØ¾ß ¾ÆÀÌÅÛÀÌ ±¸ÀÔµÇ´Â ¹ö±×¼öÁ¤ (09.04.16)
#define KJH_FIX_WOPS_K33695_EQUIPABLE_DARKLOAD_PET_ITEM	// ´ÙÅ©·Îµå°¡ ÀÎº¥¿¡ ÆêÀ» ¼ÒÀ¯ÇÏ°í ÀÖÀ»¶§, ÅøÆÁ¿¡ Âø¿ëºÒ°¡·Î ³ª¿À´Â ¹ö±×¼öÁ¤ (09.04.27)
#define KJH_FIX_WOPS_K33479_SELECT_CHARACTER_TO_HEAL		// Ä³¸¯ÅÍ¿¡°Ô µÑ·¯½×¿´À»¶§, ¿äÁ¤ÀÇ Ä¡·á½ºÅ³°­È­ÀÌÈÄ Ä³¸¯ÅÍ ¼±ÅÃÀÌ Àß ¾ÈµÇ¾îÁö´Â ¹ö±×¼öÁ¤ (09.04.27)
#define KJH_FIX_DARKLOAD_PET_SYSTEM					// °³ÀÎ»óÁ¡±¸ÀÔÃ¢¿¡¼­ ´ÙÅ©·ÎµåÆêÀÇ ÅøÆÁÀÌ Á¤È®ÇÏ°Ô Ãâ·ÂµÇÁö ¾Ê´Â ¹ö±×¼öÁ¤ (09.04.16)
													// Æê½Ã½ºÅÛ ¼öÁ¤ - ÀåÂøÇÏ°íÀÖ´Â Æê°ú, ÇöÀç º¸À¯ÇÏ°íÀÖ´Â ÆêÀ» ±¸ºÐ (09.04.16)

// - ¹Úº¸±Ù
#define PBG_FIX_REPAIRGOLD_DARKPAT					// ´ÙÅ©È£½º,½ºÇÇ¸´ ¼ö¸®ºñ ¹ö±× ¼öÁ¤(09.04.14) - wops_34069
#define PBG_FIX_SHIELD_MAGICDAMAGE					// ¹æÆÐÂø¿ë½Ã Á¤º¸Ã¢¿¡ ¸¶·ÂÀÌ »ó½ÂÇÏ´Â ¹ö±× ¼öÁ¤(09.04.15) - wops_34618

// - ÀÌµ¿¼®
#define LDS_FIX_SYNCRO_HEROATTACK_ACTION_WITH_SERVER		// Èæ±â»ç ½ºÅ³ ½ÃÀü½Ã ¼­¹ö¿¡¼­ ½ºÅ³ ¹Þ±âÀü¿¡ ¹Ì¸® ½ºÅ³¹ßµ¿ÀÌ °É·Á ÀÌÀü ½ºÅ³ ¿¡´Ï¸ÞÀÌ¼ÇÀÌ Àß¸ø Ãâ·Â. (09.04.22) wops_33863
#define LDS_FIX_MASTERSKILLKEY_DISABLE_OVER_LIMIT_MAGICIAN	// ¸¶½ºÅÍ ½ºÅ³ °­È­ µÈ ½ºÅ³µé¿¡ ´ëÇØ ¿ä±¸Ä¡ ¹Ì´Þ½Ã¿¡ ÀÌ¿ë ºÒ°¡. (09.04.22) no_wops
#define LDS_FIX_SETITEM_WRONG_CALCULATION_IMPROVEATTACKVALUE// ¼¼Æ®¾ÆÀÌÅÛÂø¿ë ÀÌÈÄ »ç¶ûÀÇ ¹¦¾àÀ» ¸ÔÀ¸¸é, ÄÉ¸¯ÅÍ Á¤º¸Ã¢¿¡ ÈûÁõ°¡ ½ºÅÈ¼öÄ¡°¡ ´Ù¸¥Çö»ó. (09.04.23) wops_35131

// - ¾ç´ë±Ù
#define YDG_FIX_MEMORY_LEAK_0905						// ¸Þ¸ð¸® ´©¼ö Á¦°Å (2009.05.11)
#define YDG_MOD_PROTECT_AUTO_V5_KEYCHECK_OFF			// ¾ÆÀÌ·Îº¿ ¿ÀÅä ¸·±â ½Ã¸®Áî5 Å° Ã¼Å© ºÎºÐ Á¦°Å (2009.05.11)
#define YDG_FIX_INVALID_SET_DEFENCE_RATE_BONUS			// ¹æ¾î±¸¼¼Æ® Ãß°¡ ¹æ¾î·ÂÇ¥½Ã ¹æ¾î·ÂÀÇ 10%°¡ ¾Æ´Ï¶ó ¹æ¾îÀ²ÀÇ 10%ÀÓ (2009.04.15) wops_32937
#define YDG_FIX_STAFF_FLAMESTRIKE_IN_CHAOSCASLE			// Ä«¿À½ºÄ³½½¿¡¼­ ¸¶°Ë»ç ÁöÆÎÀÌ Âø¿ë½Ã ÇÃ·¹ÀÓ½ºÆ®¶óÀÌÅ©¿Í ºí·¯µå¾îÅÃ ¾ÆÀÌÄÜ»ö ¹®Á¦ (2009.04.15) wops_34747
#define YDG_FIX_LEFTHAND_MAGICDAMAGE					// ¸¶°Ë»ç°¡ ÁöÆÎÀÌ³ª ·é¹Ù½ºÅ¸µå¸¦ ¿Þ¼Õ¿¡ Ã¡À»¶§ ¸¶·ÂÀÌ ¿Ã¶ó°¡´Â ¹®Á¦ (2009.04.15) wops_32641
#define YDG_FIX_BLOCK_STAFF_WHEEL						// ¸¶°Ë»ç ÁöÆÎÀÌ, ¸Ç¼Õ È¸¿À¸®º£±â ¸·±â (2009.05.18)



/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//----------------------------------------------------------------------------------------------
// [2009.05.07 º»¼·] - ÀÌµ¿¼®
// [2009.04.30 Å×¼·] - ¾È»ó±Ô
// - ¾ç´ë±Ù
#define YDG_FIX_NONAUTO_MOVE_DEVIAS2			// ¿ÀÅä ¾Æ´Ñ À¯Àúµµ Home/Ins´©¸£¸é µ¥ºñ2·Î ÀÌµ¿ÇÏ´Â ¹ö±× (2009.04.29) [2009.04.30 Å×¼·]


/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//----------------------------------------------------------------------------------------------
// [2009.04.23 º»¼·] - ¾È»ó±Ô
// - ¾ç´ë±Ù
#define YDG_MOD_PROTECT_AUTO_V4_R3				// ¾ÆÀÌ·Îº¿ ¿ÀÅä ¸·±â ½Ã¸®Áî4 - ¾ÏÈ£È­ ¾Ë°í¸®Áò º¹ÀâÇÏ°Ô (2009.04.16) [2009.04.23 º»¼·]
// [2009.04.22 Å×¼·] - ¾È»ó±Ô
// - ¾ç´ë±Ù
#define YDG_MOD_PROTECT_AUTO_V5					// ¾ÆÀÌ·Îº¿ ¿ÀÅä ¸·±â ½Ã¸®Áî5 - ¿ÀÅäÅø ½ÇÇà¿©ºÎ Ã¼Å© - ¼­¹ö¿¬µ¿ (2009.03.25) [2009.04.22 Å×¼·]
#define YDG_ADD_MOVE_COMMAND_PROTOCOL			// ÀÌµ¿¸í·É ÇÁ·ÎÅäÄÝ Ãß°¡(/ÀÌµ¿ Á¦°Å) (2009.04.01) [2009.04.22 Å×¼·]


/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//----------------------------------------------------------------------------------------------
// [2009.04.16 º»¼·] - ¾È»ó±Ô
// [2009.04.14 Å×¼·] - ¾È»ó±Ô
// - ¹Úº¸±Ù
#define PBG_FIX_PKFIELD_CAOTIC					// Ä«¿ÀÆ½ µð¼¼ÀÌ¾î Å» °Í¿¡¼­ ¹ö±× ¼öÁ¤(09.04.07) [2009.04.13 Å×¼·]
#define PBG_FIX_GUILDWAR_PK						// PKFIELD¿¡¼­ ±æµå¿ö Áß¿¡ ÀÏ¹ÝÀÎ °ø°Ý¾È¹Þ´Â ¹ö±× ¼öÁ¤(09.04.07) [2009.04.13 Å×¼·]

// - ¾ç´ë±Ù
#define YDG_MOD_PROTECT_AUTO_V4_R2				// ¾ÆÀÌ·Îº¿ ¿ÀÅä ¸·±â ½Ã¸®Áî4 - ¾ÏÈ£È­ Á¤±³È­ (2009.04.09) [2009.04.13 Å×¼·]
#define YDG_ADD_ENC_MOVE_COMMAND_WINDOW			// ¾ÏÈ£È­ ³»Àå ÀÌµ¿Ã¢ Ãß°¡ (2009.04.13) [2009.04.13 Å×¼·]
#define YDG_FIX_INVALID_TERRAIN_LIGHT			// ¸Þ¸ð¸® Ä§¹ü ¹ö±× ¼öÁ¤(¸ÊÅø °ü·Ã) (2009.03.30) [2009.04.13 Å×¼·]

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//----------------------------------------------------------------------------------------------
// [2009.04.09 º»¼·] - ¾È»ó±Ô
// [2009.04.06 Å×¼·] - ¾È»ó±Ô
// - ¹Úº¸±Ù
#define PBG_FIX_PKFIELD_ATTACK						// PKFIELD¿¡¼­ ±æµå¿ø³¢¸® °ø°ÝµÇ´Â Çö»ó(09.04.02) [2009.04.06 Å×¼·]


/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//----------------------------------------------------------------------------------------------
// [2009.04.02 º»¼·] - ¹Úº¸±Ù
// [2009.04.01 Å×¼·] - ¹Úº¸±Ù
// [2009.03.31 Å×¼·] - ¹Úº¸±Ù	// ¹ö±× ¼öÁ¤
// [2009.03.26 Å×¼·] - ¹Úº¸±Ù
// - ÃÖ¼®±Ù
#define CSK_FIX_UI_FUNCTIONNAME							// UI°ü·Ã ÇÔ¼ö¸í º¯°æ(2009.01.22) [2009.03.26 Å×¼·]
#define CSK_FIX_ANIMATION_BLENDING						// ¾Ö´Ï¸ÞÀÌ¼Ç ºí·»µùÂÊ ºí·»µå ¾ÈµÇ°Ô ¿É¼Ç ÁÖ°Ô ¼öÁ¤(2009.01.29) [2009.03.26 Å×¼·]
#define CSK_FIX_ADD_EXEPTION							// dmpÆÄÀÏ ºÐ¼®ÇØº¸´Ï getTargetCharacterKey ÇÔ¼ö¿¡¼­ Æ¨±â´Â°É·Î ¿¹ÃøµÇ¼­ ¿¹¿ÜÃ³¸® Ãß°¡(2009.01.29) [2009.03.26 Å×¼·]

// [2009.03.19 Å×¼·] - ¹Úº¸±Ù
// - ¾ç´ë±Ù
#define YDG_MOD_PROTECT_AUTO_V4							// ¾ÆÀÌ·Îº¿ ¿ÀÅä ¸·±â ½Ã¸®Áî4 - ÀÌµ¿Ã¢ ¸Þ¸ð¸® ¾ÏÈ£È­ (2009.03.18) [2009.03.19 Å×¼·]
//#define YDG_MOD_PROTECT_AUTO_FLAG_CHECK_V4			// ¾ÆÀÌ·Îº¿ ¿ÀÅä ¸·±â ½Ã¸®Áî4 ÇÃ·¡±× °Ë»ç (2009.03.18) [2009.03.19 Å×¼·-º»¼·½Ã ÁÖ¼®]
#define CSK_MOD_PROTECT_AUTO_V2							// ¾ÆÀÌ·Îº¿ ¿ÀÅä ¸·±â ½Ã¸®Áî2 - ÇÁ·Î¼¼½º °ËÃâÇØ¼­ ¸ÔÅë(2009.03.02) [2009.03.19 Å×¼·]
//#define YDG_MOD_PROTECT_AUTO_FLAG_CHECK_V2			// ¾ÆÀÌ·Îº¿ ¿ÀÅä ¸·±â ½Ã¸®Áî2 ÇÃ·¡±× °Ë»ç (2009.03.18) [2009.03.19 Å×¼·-º»¼·½Ã ÁÖ¼®]

#define YDG_ADD_NEW_DUEL_SYSTEM						// »õ·Î¿î °áÅõ ½Ã½ºÅÛ (2009.01.05) [09.03.19 Å×¼·]
#ifdef YDG_ADD_NEW_DUEL_SYSTEM
	#define YDG_ADD_NEW_DUEL_UI							// »õ·Î¿î °áÅõ °ü·Ã UI Ãß°¡ (2009.01.05) [09.03.19 Å×¼·]
	#define YDG_ADD_NEW_DUEL_PROTOCOL					// »õ·Î¿î °áÅõ °ü·Ã ÇÁ·ÎÅäÄÝ Ãß°¡ (2009.01.08) [09.03.19 Å×¼·]
	#define YDG_ADD_NEW_DUEL_NPC						// »õ·Î¿î °áÅõ °ü·Ã NPC Å¸ÀÌÅõ½º Ãß°¡ (2009.01.19) [09.03.19 Å×¼·]
	#define YDG_ADD_NEW_DUEL_WATCH_BUFF					// »õ·Î¿î °áÅõ °üÀü ¹öÇÁ Ãß°¡ (2009.01.20) [09.03.19 Å×¼·]
	#define YDG_ADD_MAP_DUEL_ARENA						// »õ·Î¿î °áÅõÀå ¸Ê Ãß°¡ (2009.02.04) [09.03.19 Å×¼·]
#endif	// YDG_ADD_PVP_SYSTEM

// - ÀÌµ¿±Ù
#define LDK_FIX_INVENTORY_SPEAR_SCALE					// ÀÎº¥Åä¸® ¹«±â-spear Å©±â Ã³¸® if¹® ¼öÁ¤ [09.03.19 Å×¼·]
#define LDK_ADD_GAMBLE_SYSTEM							// Á¨¼Ò¸ð ¹«±â »Ì±â »óÁ¡ (09.01.05) [09.03.19 Å×¼·]
#ifdef LDK_ADD_GAMBLE_SYSTEM
	#define LDK_ADD_GAMBLE_NPC_MOSS						// °×ºí »óÀÎ ¸ð½º [09.03.19 Å×¼·]
	#define LDK_ADD_GAMBLE_RANDOM_ICON					// °×ºí¿ë ·£´ý¹«±â ¾ÆÀÌÄÜ [09.03.19 Å×¼·]
	#define LDK_ADD_GAMBLERS_WEAPONS					// °×ºíÀü¿ë ·¹¾î ¹«±âµé [09.03.19 Å×¼·]
#endif //LDK_ADD_GAMBLE_SYSTEM

// - ±èÀçÈñ
#define KJH_FIX_MOVE_HERO_MOUSE_CLICK_EFFECT			// Ä³¸¯ÅÍ ÀÌµ¿½Ã ¸¶¿ì½ºÅ¬¸¯ ÀÌÆÑÆ®°¡ ÀÌµ¿ÇÏÁö ¸øÇÏ´Â °÷¿¡ ·»´õµÇ´Â ¹ö±× ¼öÁ¤ (09.03.04) [09.03.19 Å×¼·]
#define KJH_FIX_GET_ZEN_SYSTEM_TEXT						// °×ºí»óÁ¡¿¡¼­ ¾ÆÀÌÅÛ±¸ÀÔ½Ã Á¨Áõ°¡ ¸Þ¼¼Áö°¡ ³ª¿À´Â ¹®Á¦. (09.03.18) [09.03.19 Å×¼·]

// - ¹Úº¸±Ù
#define PBG_ADD_PKFIELD									// PKÇÊµå Ãß°¡(2008.12.29) [09.03.19 Å×¼·]
#define PBG_ADD_HONOROFGLADIATORBUFFTIME				// °ËÅõ»çÀÇ ¸í¿¹ ¹öÇÁ ½Ã°£ ÅøÆÁ Ãß°¡(2009.03.19) [09.03.19 Å×¼·]



/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//----------------------------------------------------------------------------------------------
// [2009.03.17 º»¼·] - ¹Úº¸±Ù
// [2009.03.12 Å×¼·] - ¹Úº¸±Ù
// - ¹Úº¸±Ù
#define PBG_FIX_CHAOSCARD								// Ä«¿À½º Ä«µå Ã¢´Ý´Â ÆÐÅ¶ ¾Èº¸³»´Â ¹®Á¦ ¼öÁ¤/ÇÁ¸®¹Ì¾ö ¾ÆÀÌÅÛ °Å·¡,±âÅ¸µî ºÒ°¡ÇÏ°Ô Ã³¸®
#define CSK_CHAOS_CARD									// ±¹³» ÇÁ¸®¹Ì¾ö ¾ÆÀÌÅÛÆÇ¸Å 3Â÷(Ä«¿À½ºÄ«µå - º¹±Ç)

// - ¾ç´ë±Ù
#define YDG_MOD_PROTECT_AUTO_V3							// ¾ÆÀÌ·Îº¿ ¿ÀÅä ¸·±â ½Ã¸®Áî3 - ·£´ý ÈÙ ¸ÔÅë+½ºÅ©·Ñ Åõ¸í (2009.03.11) [09.03.11 Å×¼·]
//#define YDG_MOD_PROTECT_AUTO_FLAG_CHECK_V3			// ¾ÆÀÌ·Îº¿ ¿ÀÅä ¸·±â ½Ã¸®Áî3 ÇÃ·¡±× °Ë»ç (2009.03.11) [09.03.11 Å×¼·-º»¼·½Ã ÁÖ¼®]

// - ÀÌµ¿¼®
#define LDS_FIX_NONINITPROGLEM_SKILLHOTKEY				// °£È¤ ½Å±ÔÄÉ¸¯ÅÍ ÀÌÈÄ ¹Ù·ÎÀÌÀü ·Î±×ÀÎÇß´ø ÄÉ¸¯½ºÅ³´ÜÃàÅ°°¡ ¿µÇâÁÖ´Â ¿À·ù. MainSceneÈ£Ãâ¸¶´Ù SkillKey Å×ÀÌºí ÃÊ±âÈ­. (2009.01.20)
#define LDS_FIX_NONINIT_TEXTBOLDTABLE					// ¸¶½ºÅÍ½ºÅ³Ã¢ÀÇ TOOLTIP ·»´ý º¼µå ¹®Á¦. º¼µå ÅØ½ºÆ®TABLEÀÌ ÃÊ±âÈ­°¡ µÇÁö ¾Ê¾Æ ÀÌÀü TEXT¿¡¼­ »ç¿ëµÇ¾ú´ø Ç×¸ñº° BOLD ¿©ºÎ °ªÀÌ ±×´ë·Î Àû¿ëµÇ´Â ¿À·ù. (2009.02.12)
#define LDS_FIX_GLPARAM_SWAPMODE_BITMAP					// Wrong OpenGL Texture Parameter SWAPMode  (2009.02.19)



/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//----------------------------------------------------------------------------------------------
// [2009.03.10 º»¼·] - ¹Úº¸±Ù
// [2009.03.05 Å×¼·] - ¹Úº¸±Ù
// - ÃÖ¼®±Ù
#define CSK_MOD_PROTECT_AUTO_V1						// ¾ÆÀÌ·Îº¿ ¿ÀÅä ¸·±â ½Ã¸®Áî1 - ¸ÊÃ¢ »ó´Ü¿©¹é, ¾ËÆÄ, Ã¢Å©±â·£´ý(2009.02.24)
#define CSK_FIX_BLUELUCKYBAG_MOVECOMMAND			// ÆÄ¶õº¹ÁÖ¸Ó´Ï »ç¿ëÇÏ¸é 10ºÐ°£ Ä®¸®¸¶ ÀÌ¿ë°¡´ÉÇÏ°Ô ¸ÊÃ¢¼öÁ¤(2009.02.27)
#define CSK_FIX_MACRO_MOVEMAP						// ¸ÅÅ©·Î·Î /ÀÌµ¿ ¸Ê ÇØ¼­ ÀÌµ¿ÇÏ´Â ³»¿ë ¼öÁ¤(2009.02.27)

// - ±èÀçÈñ
#define KJH_FIX_MOVECOMMAND_WINDOW_SIZE				// ÀÌµ¿¸í·ÉÃ¢ Å©±âº¯°æ½Ã ºó°ø°£ÀÌ »ý±â´Â ¹®Á¦ ¼öÁ¤ (09.03.02)

// º»¼· ÆÐÄ¡½Ã¿¡ Ãß°¡µÈ ³»¿ë - ¹Úº¸±Ù
#define CSK_MOD_REMOVE_AUTO_V1_FLAG					// ¿ÀÅä ¸·±â ½Ã¸®Áî1 ÇÃ·¡±× ¸·´Â Ã³¸®(2009.03.09)


/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//----------------------------------------------------------------------------------------------
// [2009.02.24 º»¼·] - ¾ç´ë±Ù
// [2009.02.19 Å×¼·][2009.02.20 Å×¼·] - ¾ç´ë±Ù
#define CSK_MOD_MOVE_COMMAND_WINDOW					// ¸ÊÀÌµ¿Ã¢ ¿ÀÅä¸¶¿ì½º ¸·±â À§ÇØ ¼öÁ¤(2009.02.13) [09.02.19 Å×¼·]
#ifdef CSK_MOD_MOVE_COMMAND_WINDOW
	#define CSK_FIX_GM_MOVE								// GM¸í·É¾î´Â ¸Ô°Ô ¼öÁ¤(2009.02.20) [09.02.20 Å×¼·]
	#define CSK_FIX_GM_FORTV							// GMÆÇº°¿¡¼­ FORTV¿ëÀÌ ºüÁø ¹ö±×(2009.02.20) [09.02.24 º»¼·]
	#define CSK_FIX_GM_WEBZEN_ID						// GMÆÇº°¿¡¼­ webzen id¾²´Â Ä³¸¯ÅÍ°¡ ºüÁø ¹ö±×(2009.02.23) [09.02.24 º»¼·]
	#define CSK_FIX_PCROOM_POINT_ZEN_BUG				// PC¹æ Æ÷ÀÎÆ® »óÁ¡¿¡¼­ PC¹æ ¾Æ´Ò¶§ Æ÷ÀÎÆ®°¡ Á¨À¸·Î Ç¥½ÃµÇ´Â ¹®Á¦(2009.02.23) [09.02.24 º»¼·]
#endif // CSK_MOD_MOVE_COMMAND_WINDOW

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//----------------------------------------------------------------------------------------------
// [2009.01.20 º»¼·] - ÀÌµ¿±Ù
// [2009.01.15 Å×¼·] - ÀÌµ¿±Ù

// - ÀÌµ¿±Ù
//#if SELECTED_LANGUAGE == LANGUAGE_KOREAN
#ifdef _LANGUAGE_KOR					// ±¹³»¸¸ Àû¿ë
	#define LDK_ADD_CASHSHOP_FUNC						// ÇØ¿Ü ºÎºÐ À¯·á Ã³¸® ÇÔ¼ö °ü¸®¹× ÇÔ¼ö ±¸Á¶ º¯°æ (#define PSW_PARTCHARGE_ITEM1)
	#define PSW_GOLDBOWMAN								// 1Â÷ ÇÁ¸®¹Ì¾ö ¾ÆÀÌÅÛ ÆÇ¸Å npc(ÀÏº» Àü¿ë È²±Ý ±Ã¼ö º¹±Ç ÀÌº¥Æ®)
	#define YDG_ADD_GOLDBOWMAN_INVENTORY_SPACE_CHECK	// 1Â÷ ÇÁ¸®¹Ì¾ö ¾ÆÀÌÅÛ ÆÇ¸Å npc ÀÎº¥Åä¸® °Ë»ç(ÀÏº» Àü¿ë È²±Ý ±Ã¼ö ÀÎº¥Åä¸® °Ë»ç (2*4) (2008.12.02))
	#define LDK_ADD_PC4_GUARDIAN						// 1Â÷ ÇÁ¸®¹Ì¾ö ¾ÆÀÌÅÛ (µ¥¸ó¸¸ »ç¿ë, ¼öÈ£Ãµ»ç »ç¿ë¾ÈÇÔ)
	#define	LDK_FIX_GUARDIAN_CHANGE_LIFEWORD			// 1Â÷ ÇÁ¸®¹Ì¾ö ¾ÆÀÌÅÛ (³»±¸·Â Ç¥±â -> »ý¸íÀ¸·Î ¼öÁ¤)(2009.01.14)
	#define LDK_ADD_PC4_GUARDIAN_EFFECT_IMAGE			// 1Â÷ ÇÁ¸®¹Ì¾ö ¾ÆÀÌÅÛ¿ë ÀÌÆåÆ®(lightmarks.jpg, effect #define ADD_SOCKET_ITEM ¿Í Áßº¹ µÇ´Â°Í ÀÖÀ½... )
	#define PSW_ADD_PC4_CHAOSCHARMITEM					// 1Â÷ ÇÁ¸®¹Ì¾ö ¾ÆÀÌÅÛ (Ä«¿À½º Á¶ÇÕ ºÎÀû)
//#endif //SELECTED_LANGUAGE == LANGUAGE_KOREAN
#endif // _LANGUAGE_KOR					// ±¹³»¸¸ Àû¿ë

// #endif //SELECTED_LANGUAGE == LANGUAGE_KOREAN
#endif // _LANGUAGE_KOR								// ±¹³»




/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//## [Îïðåäåëèòü ïîñëå ïàò÷à âñåõ ñòðàí (çàìîðñêèõ)]
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#define LDS_ADD_MULTISAMPLEANTIALIASING				// Äîáàâèòü ñãëàæèâàíèå (MSAA) (10.03.22)
//#define	KWAK_FIX_KEY_STATE_RUNTIME_ERR
// ----
// - ÀÌÁÖÈï
	#define LJH_ADD_SUPPORTING_MULTI_LANGUAGE2					// ´Ù±¹¾îÁö¿ø (10.05.19)
	//#ifdef LJH_ADD_SUPPORTING_MULTI_LANGUAGE
	//	#define LJH_ADD_RESTRICTION_ON_ID						// ID, ±æµåÀÌ¸§, Ä³¸¯ÅÍ¸íÀº ¿µ¾î, ¼ýÀÚ, Æ¯¼ö±âÈ£¸¸ »ç¿ëÇÒ¼ö ÀÖ°Ô Á¦ÇÑ(10.09.17)
	//#endif //LJH_ADD_SUPPORTING_MULTI_LANGUAGE
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//----------------------------------------------------------------------------------------------
// [2009.04.13 ßïîíèÿ 1.03.06] -Ïàðê Áî-ãûí [6-å îáíîâëåíèå áèëëèíãà â ßïîíèè, âíóòðåííåå Teseob]

// [2009.01.20 Bonseop] -Ëè Äîíãûí
// [2009.01.15 Òåñåîá] -Ëè Äîíãûí
// - Êèì Äæý Õè
#define KJH_ADD_INVENTORY_REPAIR_DARKLOAD_PET		// ´ÙÅ©·ÎÆ® Æê ÀÎº¥Åä¸®¿¡¼­ ¼ö¸® (09.01.09)

// - ¹ÚÁ¾ÈÆ
#define PJH_FIX_CAOTIC								// Ä«¿ÀÆ½ µð¼¼ÀÌ¾î ¼öÁ¤(2008.12.02 ~)

// - ¾È»ó±Ô
#define ASG_ADD_STORMBLITZ_380ITEM					// ½ºÅèºí¸®Ã÷ ¼¼Æ® 380 ¾ÆÀÌÅÛÈ­(+10 ÀÌ»ó È¿°ú Ãß°¡)(2008.12.3)

// - ÀÌµ¿¼®
#define LDS_FIX_MEMORYLEAK_BMDOPEN2_DUMPMODEL		// MemoryLeak¹ß»ý ¼öÁ¤.(BMD::Open2, OpenPlayers) (2008.12.17)
#define LDS_FIX_OPENGL_STACKOVERFLOW_STACKUNDERFLOW	// glPushMatrix-glPopMatrix »ó¿¡ ¿À·ù·Î glGetError ·Î ½ºÅÃ ¿À¹öÇÃ·Î¿ì ½ºÅÃ ¾ð´õÇÃ·Î¿ì ¹ß»ý ¼öÁ¤ (2008.12.23)
#define LDS_ADD_CHARISMAVALUE_TOITEMOPTION			// Åë¼Ö¼öÄ¡ ¼¼Æ®¾ÆÀÌÅÛ ¿¬»ê¿¡ ¹Ì¹Ý¿µµÇ¾î Ãâ·ÂµÇ¾î Ãß°¡(ex>´ÙÅ©ÄÉ¸¯ÀÇ ºê·ÎÀÌÀÇ ¼¼Æ® Ç®¼Â½Ã Åë¼Ö ¹ÌÀû¿ë Çö»ó) (2009.01.08)

// - ÃÖ¼®±Ù
#define CSK_ADD_GM_ABILITY							// GM±â´É °­È­(2008.11.26)

// [2009.02.17 º»¼·] - ¾ç´ë±Ù
// [2009.02.12 Å×¼·] - ¾ç´ë±Ù
#define YDG_MOD_GOLDEN_ARCHER_ANGEL_TEXT				// È²±Ý ±Ã¼ö °ü·Ã ¼öÈ£Á¤·É ÅØ½ºÆ® Ãß°¡ (09.02.11) [09.02.12 Å×¼·]
#define YDG_FIX_LOCK_MIX_BUTTON_WHILE_MIXING			// Á¶ÇÕÀÎº¥Åä¸® Á¶ÇÕÁß Á¶ÇÕ¹öÆ° ´Ù½Ã ¸ø´©¸£°Ô Àá±Ý (09.02.11) [09.02.12 Å×¼·]
#define YDG_FIX_TRAINER_MIX_DISPLAY_REQUIRED_ZEN		// Á¶·Ã»ç Á¶ÇÕ½Ã Á¨Ç¥½Ã µÇµµ·Ï ¼öÁ¤ (09.02.11) [09.02.12 Å×¼·]

// [2009.02.03 º»¼·] - ¾ç´ë±Ù
// [2009.01.29 Å×¼·] - ÀÌµ¿±Ù
#define LDK_FIX_CHAOSCHARMITEM_TOOLTIP			// Ä«¿À½º Á¶ÇÕ ºÎÀû ÅøÆÁ Ãß°¡ (09.01.29)

// [2009.02.24 º»¼·] - ¾ç´ë±Ù
// [2009.02.19 Å×¼·][2009.02.20 Å×¼·] - ¾ç´ë±Ù
#define KJH_FIX_REPAIR_DARKLOAD_PET_DURABILITY_ZERO	// ´ÙÅ©·Îµå ÆêÀÌ ³»±¸µµ 0ÀÏ¶§ °¡°Ý¼öÁ¤ (09.02.11) [09.02.19 Å×¼·]


/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//----------------------------------------------------------------------------------------------
// [2008.12.18 ÀÏº» 1.03.04]	
// [2008.12.30 º»¼·]			- ÃÖ¼®±Ù
// [2009.01.22 º£Æ®³² 1.03.00]	- ¾È»ó±Ô
// [2009.03.04 ´ë¸¸ 1.03.00]	- ÃÖ¼®±Ù
// [2009.03.06 ÀÏº» 1.03.06]	- ÃÖ¼®±Ù
// [2009.03.10 Áß±¹ 1.03.00]	- ÀÌµ¿¼®

// - ¾È»ó±Ô
#define ASG_FIX_TEXT_SCRIPT_PERCENT_TREATMENT	// Text.txt¿¡¼­ %¸¦ %%·Î ÀÏ°ý Ã³¸®·Î ÀÎÇÑ ¼öÁ¤.(2008.12.12)

// - ÃÖ¼®±Ù
#define CSK_REF_BACK_RENDERITEM					// µî¿¡ ´Þ¶óºÙ´Â ¾ÆÀÌÅÛ °ü·Ã ¸®ÆÑÅä¸µ(2008.11.06)
#define CSK_FIX_SYNCHRONIZATION					// µ¿±âÈ­ ¹®Á¦(2008.09.24)
#define CSK_FIX_FENRIR_RUN						// Ææ¸± ´Ù¸¥ À¯Àú°¡ ÀÖÀ» °æ¿ì ´Þ¸®´Ù°¡ °È´Â ¹ö±× (2008.11.24)
#define CSK_FIX_AIDAMONSTER_DIESPEED			// ¾ÆÀÌ´Ù ¸ó½ºÅÍ 2Á¾ Á×´Â ¼Óµµ Á¶Àý(2008.12.03)
#define CSK_FIX_BACKUPITEM_DAMAGE				// ¸ó½ºÅÍÇÑÅ× °ø°Ý´çÇÏ¸é µé°í ÀÖ´Â ¾ÆÀÌÅÛ ¿ø·¡ÀÚ¸®·Î µ¹¾Æ°¡´Â ¹ö±×(2008.12.12)
#define CSK_FIX_MAGICALPOWER_INCREASE			// "/¸¶·ÂÁõ´ë¹ý¼­" ¼³¸í ÀÌ»óÇÏ°Ô ³ª¿À´Â ¹ö±×(2008.12.02)
#define CSK_FIX_DUEL_N_PK_SKILL					// °áÅõÁßÀÌ³ª °­Á¦PK½Ã ½ºÅ³°ü·Ã ¹ö±×µé(2008.10.07)

// - ±èÀçÈñ
#define KJH_FIX_SWELLOFMAGIC_EFFECT				// ¸¶·ÂÁõ´ë ÀÌÆÑÆ®°¡ ¾È³ª¿À´Â ¹®Á¦ (08.11.25)
#define KJH_FIX_BOW_ANIMATION_ON_RIDE_PET		// ÆêÀ»Å¸°í È°À»½ò¶§ ¾Ö´Ï¸ÞÀÌ¼Ç¼öÁ¤ (08.11.19)
#define KJH_FIX_DOUBLECLICK_BUY_ITEM			// ¾ÆÀÌÅÛ±¸¸Å½Ã¿¡ ´õºíÅ¬¸¯ÇØ¾ß ¾ÆÀÌÅÛÀ» ±¸¸ÅÇÒ¼öÀÖ´Â¹®Á¦ (08.11.24)

// - ÀÌµ¿¼®
#define LDS_FIX_OUTPUT_WRONG_EQUIPPEDSETITEMOPTION_BY_WRONG_SLOTINDEX	// Æ¯Á¤ SetItemÀÇ Ãâ·Â ¼¼Æ® ¿É¼Ç °¹¼ö°¡ Æ²¸° Çö»ó. (2008.12.19)
#define LDS_OPTIMIZE_FORLOADING_UNNECESSARY_SHADOWVOLUME				// ·Îµù½Ã ½¦µµ¿ì º¼·ýÀ» À§ÇÑ Edge°è»ê ÇÏ´Â ºÎºÐÀ» ÇöÀç ½¦µµ¿ì º¼·ý ¹Ì»ç¿ë ÁßÀ¸·Î ºÒÇÊ¿äÇÔ. (08.11.27)

// - ¾ç´ë±Ù
#define YDG_FIX_MACE_FLAMESTRIKE					// µÐ±â »ç¿ë½Ã ÇÃ·¹ÀÓ½ºÆ®¶óÀÌÅ© »ç¿ë ¸øÇÏ´Â ¹®Á¦ (2008.10.23) [ÆÐÄ¡¾ÈµÊ]
#define YDG_FIX_SOCKETSPHERE_MIXRATE				// ½Ãµå½ºÇÇ¾î ÇÕ¼º Á¶ÇÕ È®·ü Àß¸ø ³ª¿À´Â ¹®Á¦ (2008.10.24) [ÆÐÄ¡¾ÈµÊ]
#define YDG_FIX_MASTERLEVEL_ELF_ATTACK_TOOLTIP		// ¿äÁ¤ ¸¶½ºÅÍ·¹º§ °ø¹æ Çâ»ó ÅøÆÁ¿¡ Àß¸ø ³ª¿À´Â ¹®Á¦ (2008.10.29) [ÆÐÄ¡¾ÈµÊ]
#define YDG_FIX_DOUBLE_SOCKETITEM_BONUS				// ºñ¾àdefine »ç¿ë½Ã ¼ÒÄÏ ¾ÆÀÌÅÛ º¸³Ê½º°¡ µÎ¹ø ´õÇØÁö´Â ¹®Á¦ (2008.11.06) [ÆÐÄ¡¾ÈµÊ]
#define YDG_FIX_HELLBUST_SET_ENERGY_BONUS_BUG		// ¼¼Æ®·Î ¿¡³ÊÁö ¿Ã¸®°í Çï¹ö½ºÆ® ¹è¿ì°í ¼¼Æ® ¹þÀ¸¸é Çï¹ö½ºÆ® ¹ß»çÇÏ´Ù ¸ØÃß´Â ¹®Á¦ (2008.11.06) [ÆÐÄ¡¾ÈµÊ]
#define YDG_FIX_CAOTIC_SOUND_MISSING				// Ä«¿ÀÆ½µð¼¼ÀÌ¾î ½ºÅ³ »ç¿îµå ºüÁø°Í ¼öÁ¤ (2008.12.02) [ÆÐÄ¡¾ÈµÊ]
#define YDG_FIX_LEAN_AGAINST_WALL_WITHOUT_ARROWS	// È­»ì¾øÀÌ ±â´ë±â ¾ÈµÇ´Â ¹ö±× (2008.12.02) [ÆÐÄ¡¾ÈµÊ]
#define YDG_FIX_DARKLORD_SET_EFFECT_WITH_DARKSPIRIT	// ´ÙÅ©·Îµå ´ÙÅ©½ºÇÇ¸´ µé°í ÀÖÀ»¶§  ¼¼Æ® ÀÌÆåÆ® ¾È³ª¿À´Â ¹ö±× (2008.12.02) [ÆÐÄ¡¾ÈµÊ]
#define YDG_FIX_SANTA_INVITAION_REPAIR				// »êÅ¸ ÃÊ´ëÀå ¼ö¸®µÇ´Â ¹ö±× (2008.12.18) [ÆÐÄ¡¾ÈµÊ]
#define YDG_FIX_SOCKET_BONUS_MAGIC_POWER_BONUS		// ¼ÒÄÏ¾ÆÀÌÅÛ ¼¼Æ®¿É¼Ç ¸¶·Â»ó½Â->°ø°Ý·Â/¸¶·Â»ó½ÂÀ¸·Î ¼öÁ¤µÊ (2008.12.18) [ÆÐÄ¡¾ÈµÊ]

// - ¹Úº¸±Ù
#define PBG_WOPS_REPAIRKEY							// Á¶·Ã»çL¹öÆ° Å¬¸¯½Ã ¼ö¸®°¡ µÇ´Â Çö»ó(08.11.19)
#define PBG_WOPS_HELBUST							// Çï¹ö½ºÆ® ½ÃÀüÁß¿¡ ¿ä±¸Ä¡ÇÏ¶ô°ü·Ã¹®Á¦(08.11.21)
#define PBG_WOPS_INVENCHECK							// Ã¢°í Ã¼Å©½Ã¿¡ ¾ÆÀÌÅÛxÅ©±â¸¦ ´ÙÀ½ÁÙÃ¼Å©·Î Å©±â°¡ ³ª¿Ã°æ¿ì °Ë»çÁß´ÜµÇ´Â Çö»ó(2008.12.3)
#define PBG_WOPS_DARKHOSE_ATTACK					// ´ÙÅ©È£½ºÅ¸°í ÀÏ¹Ý°ø°ÝÀ» ÇÒ°æ¿ì ¾ÈµÈ´Â Çö»ó(08.12.05)

// - ÀÌµ¿¼®
#define LDS_FIX_SETITEMEFFECT_WHENFULLSET_SOMEMISSEDEFFECT		// ½Å±Ô·Î Ãß°¡µÈ Action ¸î°¡Áö¿¡¼­ Ç®¼¼Æ® ÀÌÆåÆ®°¡ ¹ÌÃâ·ÂµÇ´Â ¹®Á¦. (2008.04.25)
#define LDS_FIX_WRONG_CALCULATEEQUIPEDITEMOPTIONVALUE			// ÄÉ¸¯ÅÍ Á¤º¸Ã¢¿¡ ¾ÆÀÌÅÛ ±âº» ¿É¼Ç ¼öÄ¡°¡ Æ²¸° ¿À·ù ¼öÁ¤. (ÀåÂø ¾ÆÀÌÅÛ±âº»¿É¼Ç ¼öÄ¡°¡ ÄÉ¸¯ÅÍ¼öÄ¡¿¡ »ó°ü¾øÀÌ ¸ðµÎ ´õÇØÁ®¼­ ¿¬»êµÇ´Â ¹®Á¦) (2008.11.21)
#define LDS_FIX_OUTPUT_EQUIPMENTSETITEMOPTIONVALUE				// Âø¿ëÁßÀÎ ¼¼Æ® ¾ÆÀÌÅÛµéÀÇ Ãß°¡ ¿É¼Ç Ãâ·Â»ó ´©¶ôµÇ´Â ¼¼Æ® ¹ß»ýÀ¸·Î ¼öÁ¤. (2008.11.28)
#define LDS_FIX_OUTPUT_WRONG_COUNT_EQUIPPEDSETITEMOPTIONVALUE	// Âø¿ëÁßÀÎ ¼¼Æ® ¾ÆÀÌÅÛÀÌ Ãß°¡ ¿É¼Ç ¸®½ºÆ® ¼öÀÇ Á¦ÇÑ ¿À·ù ¼öÁ¤. (2008.12.04)
#define LDS_FIX_MODULE_POSTMOVECHARACTER_SKILL_WHEEL			// POSTMOVECHARACTER ¸ðµâ Àû¿ë. È¸¿À¸®º£±â »ç¿ëÈÄ ÀÏ¹Ý°ø°Ý½Ã È¸¿À¸®ÀÜ¿µ ³²´Â ¹®Á¦[´Ù¸¥ÄÉ¸¯¹öÀü](2008.12.04) [LDS_FIX_WHENBLOODATTACK_DISSAPEARRIGHTSWORD ÀÛ¾÷¿¡ Ãß°¡]

// - ÀÌµ¿±Ù 
#define LDK_FIX_USING_ISREPAIRBAN_FUNCTION		// ÀÖ´Â ÇÔ¼ö¸¦ È°¿ëÇÕ½Ã´Ù.. (¸®Æä¾î Á¦¿Ü Á¤º¸ È®ÀÎÇÏ´Â ÇÔ¼ö(isRepairBan) ) (08.12.02)	// ¸®Æä¾î ºÒ°¡´Éµî·Ï½Ã ÀÌÇÔ¼ö¿¡¸¸ Àû¿ëÇÏ¸éµÊ.. (ºÎºÐ À¯·á ÀÏ°æ¿ì ºÎºÐ À¯·á ÇÔ¼ö(IsPartChargeItem)¿¡¸¸ Àû¿ë½ÃÅ°¸é µÊ)
#define LDK_FIX_BUFFSKILL_AUTOATTACK_CANCLE		// ¼ÒÈ¯¼ú»ç ¹öÇÁ½ºÅ³ ÀÚµ¿°ø°Ý Ãë¼Ò.(08.12.02)	// µ¥¹ÌÁö¹Ý»ç, ¹ö¼­Ä¿, ½½¸³,ºí¶óÀÎµå, ¿þÀÌÅ©´Ï½º, ÀÌ³Êº£ÀÌ¼Ç ½ºÅ³°ü·Ã
#define LDK_FIX_MODIFY_BUFFTIME_CHECK			// ¹öÇÁ ½Ã°£ °è»ê ¹æ½ÄÀ» tickCount·Î º¯°æ Å¬¶óÀÌ¾ðÆ® ºñÈ°¼ºÈ­½Ãµµ ¹öÇÁ ½Ã°£ °è»êÇÏµµ·Ï ÇÑ´Ù.(08.12.02)
#define LDK_FIX_USE_RECOVER_TARGET_MONSTER		// È¸º¹ ½ºÅ³ Å¸¼Â Á¶°Ç ¼öÁ¤ : ¸ó½ºÅÍ¿¡°Ô´Â »ç¿ë ¸øÇÔ(08.12.05)
#define LDK_FIX_STORAGE_CHARGE					// 380·¹º§ Ã¢°í »ç¿ë·á °è»ê°ø½ÄÀ» ¼­¹ö¿Í °°µµ·Ï ¼öÁ¤.(08.12.05)


/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//----------------------------------------------------------------------------------------------
// [2008.12.16 º»¼·] - ÃÖ¼®±Ù

// - ÀÌµ¿±Ù
#define LDK_ADD_NEW_PETPROCESS					// Æê, ¼ÒÈ¯¹° °ü¸® ÇÁ·Î¼¼¼­.
#define LDK_ADD_NEW_PETPROCESS_ADD_SOUND		// Æê »ç¿îµå °ü·Ã ÇÔ¼ö Ãß°¡(2008.11.5)
#define	LDK_FIX_NOT_CREATE_NEW_PET				// ºäÆ÷Æ®ÀÇ Æê »ý¼º°ü·Ã Á¶°Ç º¯°æ(¼öÈ£Á¤·É, »çÅº Àº ÀÚ½Å¸¸ º¸ÀÓ.) (2008.11.18)
#define LDK_FIX_HIDE_PET_TO_NOT_MODEL_PLAYER	// model_player°¡ ¾Æ´Ò¶§ ÆêÀ» ¾È±×¸². ¼öÁ¤(2008.11.18)

// Å©¸®½º¸¶½º ÀÌº¥Æ® ////////////////////////////////////////////////////////////////
#define ADD_CHRISTMAS_EVENT_2008			// Å©¸®½º¸¶½º ÀÌº¥Æ® (2008.11.28) [2008.12.16 º»¼·]

#ifdef ADD_CHRISTMAS_EVENT_2008
	#define YDG_ADD_FIRECRACKER_ITEM		// ÆøÁ×¾ÆÀÌÅÛ Ãß°¡ (2008.09.23)
	#define YDG_ADD_MAP_SANTA_TOWN			// »êÅ¸¸¶À» Ãß°¡ (2008.10.13)
	#define YDG_ADD_SANTA_MONSTER			// ´ÙÅ©»êÅ¸ ¸ó½ºÅÍ Ãß°¡ (2008.10.13)
	
	#define LDK_ADD_RUDOLPH_PET				// ·çµ¹ÇÁ Æê (2008.09.30)
	#define LDK_ADD_SNOWMAN_NPC				// ´«»ç¶÷ NPC(2008.10.27)
	#define LDK_ADD_SNOWMAN_CHANGERING		// ´«»ç¶÷ º¯½Å ¹ÝÁö(2008.10.20)
	#define LDK_ADD_SANTA_NPC				//»êÅ¸¸¶À»ÀÇ ÂøÇÑ »êÅ¸ (2008.10.27)

	#define PBG_ADD_SANTABUFF				// »êÅ¸¹öÇÁ°ü·Ã(2008.10.22)
	#define PBG_ADD_SANTAINVITATION			// »êÅ¸¸¶À»ÃÊ´ëÀå(2008.10.22)
	#define PBG_ADD_LITTLESANTA_NPC			// ¸®Æ²»êÅ¸ NPC1~8(2008.10.22)

	#define YDG_ADD_SANTABUFF_MAGIC_DAMAGE	// »êÅ¸¹öÇÁ °ø°Ý·Â Áõ°¡->¸¶·Â,ÀúÁÖ·Âµµ Áõ°¡·Î ¹Ù²ñ(2008.12.18)
#endif	// ADD_CHRISTMAS_EVENT_2008

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//----------------------------------------------------------------------------------------------
// [2008.11.20 Å×¼·] - ±èÀçÈñ

// - ¾È»ó±Ô
#define ASG_ADD_ELF_ARROW_PLUS3					// ¿äÁ¤ È­»ì+3, ¼®±Ã¿ë+3 Ãß°¡					(2008.11.13)

// - ÃÖ¼®±Ù 
#define CSK_FIX_DEVIAS_REDCARPET				// µ¥ºñ¾Æ½º ·¹µåÄ«Æê¿¡¼­ ÆÄÆ¼½ÅÃ» ºÒ°¡´É Çö»ó	(2008.11.10)
#define CSK_FIX_ITEMTOOLTIP_POS					// ÀÎº¥Åä¸® ¾ÆÀÌÅÛ ÅøÆÁ À§Ä¡ ¼öÁ¤				(2008.11.06)

// - ±èÀçÈñ
#define KJH_FIX_SKILL_REQUIRE_ENERGY			// º£±â½ºÅ³ ¿¡³ÊÁö ¿ä±¸Ä¡ ¼öÁ¤					(2008.11.19)

// - ÀÌµ¿±Ù
#define LDK_FIX_REPAIR_CURSOR_FREEZE			// ÀÎº¥Åä¸®Ã¢ ´ÝÀ»½Ã ¼ö¸®¸ÁÄ¡ Ä¿¼­·Î °íÁ¤µÇ´Â ¹ö±×	(2008.11.12)

// - ¹Úº¸±Ù
#define PBG_WOPS_DARKLOAD						// Ææ¸± ¶¥Å¬¸¯½Ã ÄðÅ¸ÀÓÀº µ¹¾Æ°¡´Â Çö»ó			(2008.11.11)

// - ÀÌµ¿¼®
#define LDS_FIX_RECALL_CREATEEQUIPPINGEFFECT		// ¼¼Æ® ¾ÆÀÌÅÛ Æ¯Á¤ Àåºñ¸¦ µé¾ú´Ù ³õ±â¸¦ ¿©·¯¹ø ¹Ýº¹½Ã ¼öÄ¡°¡ ÇÑ¹ø´õ ¿¬»êµÇ´Â ¹®Á¦ (2008.11.17) [LDK_FIX_RECALL_CREATEEQUIPPINGEFFECT ÀÛ¾÷°ú µ¿ÀÏ] (33059)


/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//----------------------------------------------------------------------------------------------
// [2008.11.18 º»¼·] - ±èÀçÈñ

// - ¹ÚÁ¾ÈÆ
//#if SELECTED_LANGUAGE == LANGUAGE_KOREAN
#ifdef _LANGUAGE_KOR					// ±¹³»¸¸ Àû¿ë
	#define PJH_NEW_SERVER_ADD					//»õ·Î¿î¼­¹ö ÀÛ¾÷(·Î·»¼·)			(2008.11.11)
//#endif //SELECTED_LANGUAGE == LANGUAGE_KOREAN
#endif // _LANGUAGE_KOR					// ±¹³»¸¸ Àû¿ë


/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//----------------------------------------------------------------------------------------------
// [2008.11.14 Å×¼·] - ±èÀçÈñ

// - ÃÖ¼®±Ù
#define CSK_ADD_ITEM_CROSSSHIELD					// ´ÙÅ©·Îµå ¹æÆÐ Å©·Î½º½Çµå Ãß°¡	(2008.11.03)


/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//----------------------------------------------------------------------------------------------
// [2008.11.13 Å×¼·] - ±èÀçÈñ

// - ±èÀçÈñ, ¹Úº¸±Ù
#define KJH_PBG_ADD_SEVEN_EVENT_2008				//»ó¿ëÈ­ 7ÁÖ³â ÀÌº¥Æ®				(2008.10.30)

// - ±èÀçÈñ
#define KJH_FIX_INVENTORY_REPAIR_COST				// ÀÎº¥Åä¸® ÀÚµ¿¼ö¸®±Ý¾× °ø½Ä ¼öÁ¤	(2008.11.13)

// - ÀÌµ¿¼®
#define LDS_FIX_WHENAFTERSKILL_WHEEL_STILLVISUAL_EFFECT	// È¸¿À¸® º£±â »ç¿ëÀÌÈÄ ÀÏ¹Ý °ø°Ý½Ã ¿©ÀüÈ÷ È¸¿À¸® º£±â ÀÜ¿µÀÌ ³²´Â ¹®Á¦ (2008.10.29) [LDS_FIX_WHENBLOODATTACK_DISSAPEARRIGHTSWORD ÀÛ¾÷¿¡ °ü·Ã ÀÖÀ½]



/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//----------------------------------------------------------------------------------------------
// [2008.10.24 Å×¼·]

// - ¹Úº¸±Ù
#define PBG_FIX_DEFENSEVALUE_DARK						//¸¶°Ë»ç 10¼ÂÀÌ»ó ¼¼Æ®¹æ¾î·ÂÀÌ Ç¥Çö¾ÈµÇ°Í°ú ¿À·Î¶ó ¾Èº¸ÀÌ´Â ¹ö±× ¼öÁ¤(08.10.16)
#define PBG_FIX_CHAOS_GOLDSWORD							//Ä«¿À½ºÄ³½½ Á¤º¸Ã¢ ¿­°í´ÝÀ¸¸é ÆÄ±«ÀÇ°ËÀÌ È²±Ý»öÀ¸·Î º¯ÇÏ´Â ¹ö±× ¼öÁ¤(08.10.17)
#define PBG_FIX_SKILL_DEMENDCONDITION					//½ºÅ³ÀÇ ½ºÅÝ¿ä±¸Ä¡¿Í Ä³¸¯ÀÇ ½ºÅÝ·® Àåºñ(¹Ì)Âø¿ë ½Ç½Ã°£ Ã¼Å©ÈÄ »ç¿ë¿©ºÎ°áÁ¤.
														//skillÀÇ Resource¸¦ Çüº¯°æÀ¸·Î ÀÎÇØ mu_tools¸¦ »õ ÄÄÆÄÀÏ ÇØ¾ßÇÔ.skilltest.bmd¸¦ ¸¸µé°í »ç¿ëÇØ¾ßÇÔ.(QAÀü´Þ08.9.30)

// - ÀÌµ¿¼® 
// (ºí·ç 1.00.38 ¿¡¼­ ¹®Á¦°¡ »ý°Ü ÁÖ¼®Ã³¸®)
// #define LDS_OPTIMIZE_FORLOADING						// Optimize For Loading(2008.10.9) [DO_PROFILING_FOR_LOADING Define Å°¸é È®ÀÎ °¡´É]
#define LDS_FIX_WHENBLOODATTACK_DISSAPEARRIGHTSWORD	// ºí·¯µå ¾îÅÃ ¿À¸¥¼Õ Âø¿ë °ËÀÌ º¸ÀÌÁö ¾Ê´ø ¹ö±× ¼öÁ¤ (2008.10.14) [CSK_FIX_WHEELSKILL_ITEM_RENDERÀÛ¾÷¿¡ °ü·Ã ÀÖÀ½]

// - ¹ÚÁ¾ÈÆ
#define PJH_FIX_BLOOD_ATTCK							// ºí·¯µå ¾îÅÃ ¹ö±×¼öÁ¤ (2008. 09. 23)
#define PJH_SEASON4_FIX_MULTI_SHOT	

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//----------------------------------------------------------------------------------------------
// [2008.09.18 Å×¼·]

// - ¹ÚÁ¾ÈÆ
//#if SELECTED_LANGUAGE == LANGUAGE_KOREAN
#ifdef _LANGUAGE_KOR					// ±¹³»¸¸ Àû¿ë
	#ifndef PJH_NEW_SERVER_ADD 
		#define PJH_FINAL_VIEW_SERVER_LIST2				//¼­¹öÅëÇÕ2Â÷ ÀÛ¾÷(2008. 09. 23) [2008.10.08 º»¼·]
	#endif //PJH_NEW_SERVER_ADD
//#endif //SELECTED_LANGUAGE == LANGUAGE_KOREAN
#endif // _LANGUAGE_KOR					// ±¹³»¸¸ Àû¿ë

// - ÃÖ¼®±Ù
#define CSK_FIX_QWER								// QWER ÇÖÅ°¿¡ Å¸ÀÔÀÌ¶û ·¹º§ °ªÀÌ ±úÁö´Â°Å ¼öÁ¤(2008.09.18)
#define CSK_FIX_WHEELSKILL_ITEM_RENDER				// È¸È£¸®º£±â ½ºÅ³À» »ç¿ëÇÒ ¶§ ¿À¸¥¼Õ ¹«±â ¾Èº¸ÀÌ°Ô ¼öÁ¤(2008.09.11)
#define CSK_FIX_JACK_PARTICLE						// Àè¿À·£ÅÏº¯½Å¹ÝÁö Â÷°í "/ÀÌ¸¶"Ä¡¸é Æ¨±â´Â ¹ö±×(2008.09.10)
#define CSK_FIX_EPSOLUTESEPTER						// ¾Û¼Ö·çÆ®¼ÁÅÍ Æê °ø°Ý·Â Àß¸øÇ¥½ÃµÇ´Â ¹ö±×(2008.09.11)

// - ±èÀçÈñ
#define KJH_FIX_20080910_SPELL_MAGIC_IN_CHAOSCASTLE	// Ä«¿À½ºÄ³½½¿¡¼­ ¸¶·ÂÁõ´ë½ºÅ³ »ç¿ë¾ÈµÇ´Â ¹®Á¦ (2008.09.10)
#define KJH_FIX_20080910_NPCSHOP_PRICE				// »ç¿øÀç·á ÆÇ¸Å°¡°ÝÀÌ ½ÇÁ¦¶û Æ²¸°¹®Á¦ (2008.09.10)	

// - ¾ç´ë±Ù
#define YDG_FIX_SOCKET_SHIELD_BONUS						// ¼ÒÄÏ ½Ãµå ¹æÆÐ ¹æ¾î·Â Áõ°¡ % Àû¿ë ¾ÈµÇ´Â ¹®Á¦ (2008.09.09) [2008.09.18 Å×¼·]
#define YDG_FIX_GIGANTIC_STORM_OPTIMIZE					// ±â°£Æ½½ºÅè ÀÌÆåÆ® ÁÙÀÓ (2008.09.09) [2008.09.18 Å×¼·]
#define YDG_FIX_WING_MIX_RATE							// ³¯°³ Á¶ÇÕ½Ã ¿¢ÅÛÀ¸·Î ÀÎ½ÄµÇ´Â ¹®Á¦ (2008.09.11) [2008.09.18 Å×¼·]
#define YDG_FIX_ELSEIF_BLOCK_BREAK_AT_RENDER_PART_OBJECT_BODY_FUNC	// zzzObject.cppÀÇ RenderPartObjectBody() if/else if ³Ê¹« ¸¹¾Æ ÂÉ°· (2008.09.16) [2008.09.18 Å×¼·]

//----------------------------------------------------------------------------------------------
// [2008.09.11 Å×¼·]

// - ±èÀçÈñ
#define KJH_FIX_20080904_INVENTORY_ITEM_RENDER		// ÀÎº¥Åä¸®¿¡¼­ ¾ÆÀÌÅÛ ·»´õÀ§Ä¡ ¼öÁ¤ (2008.09.04)	[2008.09.11 Å×¼·]

// - ¾ç´ë±Ù
#define YDG_FIX_GIGANTIC_STORM_CRASH					// ±â°£Æ½ ½ºÅè Æ¨±â´Â Çö»ó ¹æÁö¿ë ¾ÈÀüÀåÄ¡ Ãß°¡ (2008.08.26) [2008.09.04 º»¼·]
#define YDG_FIX_SOCKETITEM_ISNOT_380ITEM				// ¼ÒÄÏ ¾ÆÀÌÅÛÀº 380·¹º§ ÀÌ»óÀÌ¾îµµ Á¶ÇÕ½Ã 380 Ã³¸® ¾ÈÇÔ (2008.09.05) [2008.09.05 Å×¼·]

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//## ½ÃÁð 4.0 ÆÐÄ¡
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// ½ÃÁð 4.0 Å×¼· ÆÐÄ¡ ÀÌÈÄ ÆÐÄ¡ 
// - ±èÀçÈñ 
#define KJH_FIX_SOCKET_ITEM_ADD_DEFENCE_BONUS		// ¸¶°Ë»ç ¼ÒÄÏ¾ÆÀÌÅÛ Ç®¼ÂÂø¿ë½Ã Ãß°¡ ¹æ¿©·Â Àû¿ë	(2008.08.13) [2008.08.14 Å×¼·]

// - ¾ç´ë±Ù
#define YDG_FIX_SOCKET_BALANCE_PATCH				// ¼ÒÄÏ ¹ë·±½º °ü·Ã ¿É¼Ç º¯°æ ÀÛ¾÷ (2008.08.14) [2008.08.14 Å×¼·]

// ½ÃÁð 4.0 Å×¼· ÆÐÄ¡ ÀÌÈÄ ÆÐÄ¡ (2008.08.12 ÆÐÄ¡)

// - ÃÖ¼®±Ù
#define CSK_FIX_POTION_VALUE						// Å«Ä¡·á¹°¾à°ú Å«¸¶³ª¹°¾à ÆÇ¸Å°¡°Ý 1500µÇ°Ô ¼öÁ¤(2008.08.08) [2008.08.12 Å×¼·]

// - ¾ç´ë±Ù
#define YDG_FIX_SOCKET_ITEM_DEFENCE_RATE_BONUS		// ¼ÒÄÏ ¹æ¾î¼º°øÀ²Áõ°¡ %°è»ê ¼öÁ¤(2008.08.08) [2008.08.12 Å×¼·]

// ½ÃÁð 4.0 Ã¼Çè¼­¹ö ÆÐÄ¡ ÀÌÈÄ ÆÐÄ¡ (8¿ù 6ÀÏ ÆÐÄ¡)

// - ÃÖ¼®±Ù
#define CSK_FIX_SKILLHOTKEY_PACKET					// ½ºÅ³ ÇÖÅ°ÀÇ 10¹ÙÀÌÆ®¿¡¼­ 20¹ÙÀÌÆ®·Î È®ÀåÇÑ´Ù.(2008.08.05) [2008.08.06 Ã¼ÇèÅ×¼·]
#define CSK_FIX_HIGHVALUE_MESSAGEBOX				// °í°¡ÀÇ ¾ÆÀÌÅÛ ÆÇ¸Å ÇÏ°Ú³Ä°í ¹¯´Â ¸Þ¼¼Áö ¹Ú½º ok ¹öÆ° ºü¸£°Ô ´©¸£¸é 2¹ø ¶ß°í
													// 2¹øÂ° ok ¹öÆ°À» ´©¸£¸é ÀåºñÃ¢¿¡¼­ ¿À¸¥ÂÊ ¼Õ ¹«±â¸¦ ÀÚµ¿À¸·Î ÆÈ¾Æ¹ö¸®´Â ¹ö±×(2008.07.31) [2008.08.06 Ã¼ÇèÅ×¼·]
// - ¾ç´ë±Ù
#define YDG_FIX_BLOWOFDESTRUCTION_EFFECT_BUG		// ÆÄ±«ÀÇÀÏ°Ý µ¥½º¼¾Ãò¸®¿Â ¹öÇÁ»ö ¹ö±×					(2008.07.29) [2008.08.06 Ã¼ÇèÅ×¼·]

// - ±èÀçÈñ
#define KJH_FIX_ABSOLUTE_CEPTER_TOOLTIP				// ¿¦¼Ö·çÆ®¼ÁÅÍ Æê°ø°Ý·Â»ó½Â ÅøÆÁ ¾È³ª¿À´Â Çö»ó			(2008.08.04) [2008.08.06 Ã¼ÇèÅ×¼·]
#define KJH_FIX_MULTISHOT_RELOAD_ARROW				// ¸ÖÆ¼¼¦ »ç¿ëÈÄ È­»ìÅëÀÌ ÀÚµ¿À¸·Î ±³Ã¼µÇÁö ¾Ê´Â Çö»ó	(2008.08.04) [2008.08.06 Ã¼ÇèÅ×¼·]


// ½ÃÁð 4.0 Ã¼Çè¼­¹ö ÆÐÄ¡ ÀÌÈÄ ÆÐÄ¡ (7¿ù 31ÀÏ ÆÐÄ¡)
// - ¾ç´ë±Ù
#define YDG_FIX_SPLIT_ATTACK_FUNC					// zzzInterface.cpp Attack()ÇÔ¼ö Å¬·¡½ºº° ÂÉ°³±â		(2008.07.29) [2008.07.31 Ã¼ÇèÅ×¼·]
// - ±èÀçÈñ
#define KJH_FIX_ARRAY_DELETE						// new arrayÀâ¾Æ³õ°í delete array ¾ÈÇÑ ¹®Á¦				(2008.07.29) [2008.07.31 Ã¼ÇèÅ×¼·]
#define KJH_MODIFY_SOCKET_ITEM_COLOR				// SocketItem Ä®¶ó º¯°æ									(2008.07.29) [2008.07.31 Ã¼ÇèÅ×¼·]
#define KJH_FIX_THUNDER_EFFECT_IN_IKARUS			// ÀÌÄ«·ç½º¿¡¼­ ÃµµÕÄ¥¶§ VectorRotate()¿¡¼­ in,outÀÎÀÚ¸¦ °°Àºº¯¼ö¸¦ ³Ñ±ä ¹®Á¦ (2008.07.30) [2008.07.31 Ã¼ÇèÅ×¼·]


// ½ÃÁð 4.0 Ã¼Çè¼­¹ö ÆÐÄ¡ ÀÌÈÄ ÆÐÄ¡ (7¿ù 29ÀÏ ÆÐÄ¡)
// - ¾ç´ë±Ù
#define YDG_FIX_SCRIPT_LEVEL_VALUE					// ¼ÒÄÏ ½ºÅ©¸³Æ® ½ºÇÇ¾î·¹º§º° ¼öÄ¡°ª Ãß°¡ È®Àå			(2008.07.25) [2008.07.29 Ã¼ÇèÅ×¼·]
#define YDG_FIX_SOCKET_ATTACH_CONDITION				// ¼ÒÄÏ ÀåÂø ½Ãµå Á¾·ùº° Á¦ÇÑ Ãß°¡						(2008.07.25) [2008.07.29 Ã¼ÇèÅ×¼·]


// ½ÃÁð 4.0 Ã¼Çè¼­¹ö ÆÐÄ¡ ÀÌÈÄ ÆÐÄ¡ (7¿ù 25ÀÏ ÆÐÄ¡)
// - ¾ç´ë±Ù
#define YDG_FIX_RARGLE_CRASH						// ¼ÒÈ¯¼ú»ç ¶ó±Û ÆÞ·ç¼Ç ½ºÅ³ »ç¿ë½Ã Æ¨±â´Â ¹ö±× ¼öÁ¤	(2008.07.17) [2008.07.25 Ã¼ÇèÅ×¼·]
#define YDG_ADD_SKILL_FLAME_STRIKE_SOUND			// ¸¶°Ë»ç ½Å±Ô ½ºÅ³ ÇÃ·¹ÀÓ ½ºÆ®¶óÀÌÆ® »ç¿îµå			(2008.07.18) [2008.07.25 Ã¼ÇèÅ×¼·]
#define YDG_ADD_SKILL_GIGANTIC_STORM_SOUND			// ¸¶°Ë»ç ½Å±Ô ½ºÅ³ ±â°£Æ½ ½ºÅè »ç¿îµå					(2008.07.18) [2008.07.25 Ã¼ÇèÅ×¼·]
#define YDG_ADD_SKILL_LIGHTNING_SHOCK_SOUND			// ¼ÒÈ¯¼ú»ç ½ºÅ³ ¶óÀÌÆ®´× ¼îÅ©(»õ¹öÀü) Ãß°¡ »ç¿îµå		(2008.07.18) [2008.07.25 Ã¼ÇèÅ×¼·]
#define YDG_FIX_BLOCK_SKILL_MOVE					// ½Å±Ô½ºÅ³ »ç¿ëÁß ÀÌµ¿¸øÇÏ°Ô ¼öÁ¤						(2008.07.22) [2008.07.25 Ã¼ÇèÅ×¼·]
// - ÃÖ¼®±Ù
#define CSK_ADD_SKILL_BLOWOFDESTRUCTION_SOUND		// Èæ±â»ç ÆÄ±«ÀÇ ÀÏ°Ý »ç¿îµå							(2008.07.22) [2008.07.25 Ã¼ÇèÅ×¼·]
#define CSK_FIX_SKILL_BLOWOFDESTRUCTION_COMBO		// Èæ±â»ç ÆÄ±«ÀÇ ÀÏ°Ý ÄÞº¸ ½ºÅ³ ¼öÁ¤					(2008.07.22) [2008.07.25 Ã¼ÇèÅ×¼·]
#define CSK_FIX_SKILL_ITEM							// ½Å±Ô ½ºÅ³ ¼öÁ¤(ÀüÁ÷½Ã¿¡¸¸ ¹è¿ï¼ö ÀÖ°Ô ¼öÁ¤)			(2008.07.24) [2008.07.25 Ã¼ÇèÅ×¼·]
// - ¾È»ó±Ô
#define ASG_ADD_SKILL_BERSERKER_SOUND				// ¼ÒÈ¯¼ú»ç ½ºÅ³ ¹ö¼­Ä¿ »ç¿îµå							(2008.07.18) [2008.07.25 Ã¼ÇèÅ×¼·]
#define ASG_ADD_SUMMON_RARGLE_SOUND					// ¼ÒÈ¯¼ö ¶ó±Û ½ºÅ³ ÆÞ·ç¼Ç »ç¿îµå.						(2008.07.18) [2008.07.25 Ã¼ÇèÅ×¼·]

// - ±èÀçÈñ
#define KJH_ADD_SKILL_SWELL_OF_MAGICPOWER_SOUND		// ¸¶¹ý»ç ¸¶·ÂÁõ´ë½ºÅ³ »ç¿îµå.							(2008.07.22) [2008.07.25 Ã¼ÇèÅ×¼·]
#define KJH_FIX_RELOAD_ARROW_TO_CROSSBOW			// ¼®±ÃÈ­»ìÀÌ ÀÚµ¿ÀåÂø ¾ÈµÅ´Â ¹®Á¦.						(2008.07.23) [2008.07.25 Ã¼ÇèÅ×¼·]
#define KJH_FIX_EQUIPED_FULL_SOCKETITEM_APPLY_TO_STAT	// ¸¶°Ë»ç°¡ ½Å±Ô ¼ÒÄÏ ¾ÆÀÌÅÛÀ» Ç®Àåºñ ÇÏ¿´À»¶§ ¹æ¾îÀ² ¾È¿À¸£´Â ¹®Á¦ (2008.07.23) [2008.07.25 Ã¼ÇèÅ×¼·]
#define KJH_FIX_RUNE_BASTARD_SWORD_TOOLTIP			// ¸¶°Ë»ç ·é¹Ù½ºÅ¸µå¼Òµå ÅøÆÁ(¸¶·Â) ¼öÁ¤				(2008.07.23) [2008.07.25 Ã¼ÇèÅ×¼·]
#define KJH_FIX_DARKSTINGER_MULTISHOT_SKILL			// ´ÙÅ©½ºÆÃ°Å ´Ù¹ß½ºÅ³ 3¿¡¼­ 4·Î ¼öÁ¤					(2008.07.23) [2008.07.25 Ã¼ÇèÅ×¼·]




/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//## ½ÃÁð 4.0 Ã¼Çè¼­¹ö ÆÐÄ¡µÈ ³»¿ë
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//## ¸¶½ºÅÍ ·¹º§
	// - ¹ÚÁ¾ÈÆ
	#define PJH_SEASON4_MASTER_RANK4			// ¸¶½ºÅÍ·¹º§ 4·©Å© ÀÛ¾÷(2008.05.26) [2008.07.17 Ã¼ÇèÅ×¼·]
#ifdef EXP_SERVER_PATCH		// Ã¼Çè¼­¹ö¿ë. ÇÁ·ÎÁ§Æ® ¼¼ÆÃ¿¡ Á¤ÀÇµÇ¾î ÀÖÀ½.
	#define PJH_USER_VERSION_SERVER_LIST		// [2008.07.17 Ã¼ÇèÅ×¼·]
#endif	// EXP_SERVER_PATCH

//## ¼ÒÄÏ ½Ã½ºÅÛ
	#define SOCKET_SYSTEM						// ¼ÒÄÏ ½Ã½ºÅÛ (2008.02.27) [2008.07.17 Ã¼ÇèÅ×¼·]
	#ifdef SOCKET_SYSTEM
		// - ¾ç´ë±Ù
		#define MODIFY_SOCKET_PROTOCOL				// ¼ÒÄÏ°ü·Ã ¼­¹ö ÇÁ·ÎÅäÄÝ ¼öÁ¤ (2008.06.02) [2008.07.17 Ã¼ÇèÅ×¼·]
		#define ADD_SOCKET_MIX						// ¼ÒÄÏ ¾ÆÀÌÅÛ °ü·Ã Á¶ÇÕ Ãß°¡ (2008.03.10) [2008.07.17 Ã¼ÇèÅ×¼·]
		#define ADD_SEED_SPHERE_ITEM				// ½Ãµå, ½ºÇÇ¾î ¾ÆÀÌÅÛ Ãß°¡ (2008.03.31) [2008.07.17 Ã¼ÇèÅ×¼·]
		#define ADD_SOCKET_STATUS_BONUS				// ¼ÒÄÏ°ü·Ã Ä³¸¯ÅÍ ½ºÅÈ ¼öÄ¡ Áõ°¡ (2008.07.04) [2008.07.17 Ã¼ÇèÅ×¼·]
		// - ±èÀçÈñ
		#define ADD_SOCKET_ITEM						// ¼ÒÄÏ ¾ÆÀÌÅÛ Ãß°¡ (2008.03.27) [2008.07.17 Ã¼ÇèÅ×¼·]
	#endif	// SOCKET_SYSTEM

//## ¶óÅ¬¸®¿Â
	#define CSK_ADD_MAP_ICECITY					// ¶óÅ¬¸®¿Â(¾óÀ½µµ½Ã) Ãß°¡ ÀÛ¾÷(2008.04.10) [2008.07.17 Ã¼ÇèÅ×¼·]
	#ifdef CSK_ADD_MAP_ICECITY
		// - ÃÖ¼®±Ù
		#define CSK_RAKLION_BOSS					// ¶óÅ¬¸®¿Â ¸Ê º¸½ºÀÛ¾÷(2008.04.16)[2008.07.17 Ã¼ÇèÅ×¼·]
		#define CSK_REPAIR_MAP_DEVIAS				// µ¥ºñ¾Æ½º¿¡¼­ ¶óÅ¬¸®¿ÂÀ¸·Î ÀÌµ¿ °¡´ÉÇÏ°Ô ¼öÁ¤(2008.04.24)[2008.07.17 Ã¼ÇèÅ×¼·]
		#define CSK_FIX_MONSTERSKILL				// MonsterSkill.txt È®Àå ¼öÁ¤(2008.05.22)[2008.07.17 Ã¼ÇèÅ×¼·]
		// - ¹ÚÁ¾ÈÆ
		#define PJH_GIANT_MAMUD						// ¶óÅ¬¸®¿Â ¸ó½ºÅÍ ÀÚÀÌ¾ðÆ® ¸Þ¸Óµå Ãß°¡ÀÛ¾÷ (2008.04.17) [2008.07.17 Ã¼ÇèÅ×¼·]
		// - ¾È»ó±Ô
		#define ADD_RAKLION_MOB_ICEGIANT			// ¸ó½ºÅÍ ¾ÆÀÌ½º ÀÚÀÌ¾ðÆ® Ãß°¡(2008.04.16)[2008.07.17 Ã¼ÇèÅ×¼·]
		// - ¾ç´ë±Ù
		#define ADD_RAKLION_IRON_KNIGHT				// ¶óÅ¬¸®¿Â ¸ó½ºÅÍ ¾ÆÀÌ¾ð ³ªÀÌÆ® Ãß°¡ (2008.04.23) [2008.07.17 Ã¼ÇèÅ×¼·]
		// - ÀÌµ¿¼®
		#define LDS_RAKLION_ADDMONSTER_ICEWALKER	// ¶óÅ¬¸®¿Â ¸ó½ºÅÍ ¾ÆÀÌ½º¿öÄ¿ Ãß°¡ ÀÛ¾÷ (2008.05.26) [2008.07.17 Ã¼ÇèÅ×¼·]
		#define LDS_RAKLION_ADDMONSTER_COOLERTIN	// ¶óÅ¬¸®¿Â ¸ó½ºÅÍ Äð·¯Æ¾ Ãß°¡ ÀÛ¾÷ (2008.05.26) [2008.07.17 Ã¼ÇèÅ×¼·]
		// - ¹Ú»ó¿Ï
		#define PSW_ADD_MAPSYSTEM					// ¸Ê °ü¸®ÀÚ( 2008. 05. 22 )[2008.07.17 Ã¼ÇèÅ×¼·]
	#endif // CSK_ADD_MAP_ICECITY

//## ½Å±Ô ½ºÅ³
	#define ADD_NEW_SKILL_SEASON4				// »õ·Î Ãß°¡µÇ´Â ½ºÅ³µéÀº ÀÌ°÷¿¡ µðÆÄÀÎ Ãß°¡ÇØ ÁÖ¼¼¿ä.(2008.04.10) [2008.07.17 Ã¼ÇèÅ×¼·]
	#ifdef ADD_NEW_SKILL_SEASON4
		// - ¹ÚÁ¾ÈÆ
		#define PJH_FIX_SKILL
		#define PJH_SEASON4_SPRITE_NEW_SKILL_MULTI_SHOT		//¿äÁ¤»õ·Î¿î½ºÅ³ ¸ÖÆ¼¼¦(2008.05.26) [2008.07.17 Ã¼ÇèÅ×¼·]
		#define PJH_SEASON4_SPRITE_NEW_SKILL_RECOVER		//¿äÁ¤»õ·Î¿î½ºÅ³ È¸º¹(2008.06.09) [2008.07.17 Ã¼ÇèÅ×¼·]
		#define PJH_SEASON4_DARK_NEW_SKILL_CAOTIC			//´ÙÅ©·Îµå »õ·Î¿î½ºÅ³ Ä«¿ÀÆ½µð¼¼ÀÌ¾î (2008.06.13) [2008.07.17 Ã¼ÇèÅ×¼·]
		// - ¾È»ó±Ô
		#define ASG_ADD_SKILL_BERSERKER						// ¼ÒÈ¯¼ú»ç ½ºÅ³ ¹ö¼­Ä¿ Ãß°¡ (2008.05.15) [2008.07.17 Ã¼ÇèÅ×¼·]
		// - ÃÖ¼®±Ù
		#define CSK_ADD_SKILL_BLOWOFDESTRUCTION				// Èæ±â»ç ½Å±Ô ½ºÅ³ ÆÄ±«ÀÇ ÀÏ°Ý(2008.05.19) [2008.07.17 Ã¼ÇèÅ×¼·]
		// - ¾ç´ë±Ù
		#define YDG_ADD_SKILL_FLAME_STRIKE					// ¸¶°Ë»ç ½Å±Ô ½ºÅ³ ÇÃ·¹ÀÓ ½ºÆ®¶óÀÌÆ® (2008.05.15) [2008.07.17 Ã¼ÇèÅ×¼·]
		#define YDG_ADD_SKILL_GIGANTIC_STORM				// ¸¶°Ë»ç ½Å±Ô ½ºÅ³ ±â°£Æ½ ½ºÅè (2008.05.15) [2008.07.17 Ã¼ÇèÅ×¼·]
		#define YDG_ADD_SKILL_LIGHTNING_SHOCK				// ¼ÒÈ¯¼ú»ç ½ºÅ³ ¶óÀÌÆ®´× ¼îÅ©(»õ¹öÀü) Ãß°¡ (2008.06.10) [2008.07.17 Ã¼ÇèÅ×¼·]
		#define YDG_FIX_ALICE_ANIMATIONS					// ¼ÒÈ¯¼ú»ç ¾Ö´Ï¸ÞÀÌ¼Ç ÇÁ·¹ÀÓ ½ºÅµ ¼öÁ¤(player.bmd) (2008.06.16) [2008.07.17 Ã¼ÇèÅ×¼·]
		// - ±èÀçÈñ
		#define KJH_ADD_SKILL_SWELL_OF_MAGICPOWER			// Èæ¸¶¹ý»ç ¸¶·ÂÁõ´ë ½ºÅ³ (2008.06.11) [2008.07.17 Ã¼ÇèÅ×¼·]
		#define	KJH_FIX_LEARN_SKILL_ITEM_REQUIRE_STAT_CALC	// ¹ý¼­·Î ½ºÅ³ ¹è¿ï¶§ ¿ä±¸Ä¡ ¹ö±× ¼öÁ¤ (2008.07.11) [2008.07.17 Ã¼ÇèÅ×¼·] [±¹³»] 
															// - item.txt ¼öÁ¤¿ä¸Á (½ºÅ©¸³Æ®´ã´çÀÚ:ÀÌ¹ÎÁ¤)
	#endif // ADD_NEW_SKILL_SEASON4

//## ±âÅ¸
	// - ¾È»ó±Ô
	#define ASG_ADD_SUMMON_RARGLE				// ¼ÒÈ¯¼ö ¶ó±Û Ãß°¡.(2008.05.27) [2008.07.17 Ã¼ÇèÅ×¼·]
	// ¾Æ·¡ 'PC¹æ Æ÷ÀÎÆ® ½Ã½ºÅÛ ¼öÁ¤'Àº ³ªÁß¿¡ ´Ù½Ã µÇµ¹¸±Áö ¸ð¸£´Ï ´çºÐ°£ »èÁ¦ ¸»°Í.
	#define ASG_PCROOM_POINT_SYSTEM_MODIFY		// PC¹æ Æ÷ÀÎÆ® ½Ã½ºÅÛ ¼öÁ¤.(2008.06.13) [2008.07.17 Ã¼ÇèÅ×¼·]

	// - ¾ç´ë±Ù
	#define YDG_FIX_STONE_FLY					// µ¹°ñ·½µî Á×À»¶§ µ¹ ¸Ö¸® ³¯¾Æ°¡´Â ÀÌÆåÆ® ¹ö±× ¼öÁ¤ (2008.06.04) [2008.07.17 Ã¼ÇèÅ×¼·]
	#define YDG_FIX_VIEWPORT_HAND_CHECK			// ºäÆ÷Æ® Ä³¸¯ÅÍ ºó¼ÕÀÏ¶§ ÃÊ±âÈ­ ¾ÈµÇ´Â ¹ö±× ¼öÁ¤ (2008.06.30) [2008.07.17 Ã¼ÇèÅ×¼·]

	// - ¹Ú»ó¿Ï
	#define PSW_ADD_RESET_CHARACTER_POINT		//Ä³¸¯ÅÍ ½ºÅÝ ÃÊ±âÈ­(2008.07.11) [2008.07.17 Ã¼ÇèÅ×¼·]

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////




/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//## ½ÃÁð 4.0 ÀÌÀü ÆÐÄ¡µÉ ³»¿ë
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// ±¹³»¿¡¸¸ Àû¿ëµÇ¾ß ÇÒ µðÆÄÀÎ
//#if SELECTED_LANGUAGE == LANGUAGE_KOREAN
#ifdef _LANGUAGE_KOR					// ±¹³»¸¸ Àû¿ë

//## ¼­¹öÅëÇÕ	

	// - ¹ÚÁ¾ÈÆ
//	#define PJH_FINAL_VIEW_SERVER_LIST				// ¼­¹öÅëÇÕ½Ã º¸¿©Áú ¼­¹ö¸®½ºÆ®¿¡´ëÇÑ µðÆÄÀÎ(PJH_SEMI_FINAL_VIEW_SERVER_LIST°ú °°ÀÌ ¾µ¼ö¾øÀ½) (2008.04.07) [2008.07.17 Ã¼ÇèÅ×¼·]
//	#ifdef PJH_FINAL_VIEW_SERVER_LIST
//	#define PJH_SEMI_FINAL_VIEW_SERVER_LIST	// ¼­¹öÅëÇÕÀÛ¾÷½Ã 2~3ÀÏ Á¤µµ º¸¿©Áú ¼­¹ö¸®½ºÆ®¿¡´ëÇÑ µðÆÄÀÎ(PJH_FINAL_VIEW_SERVER_LIST °°ÀÌ ¾µ¼ö¾øÀ½) (2008.04.07) [2008.07.17 Ã¼ÇèÅ×¼·]
	#define PJH_DEBUG_SERVER_ADD				// ¼­¹öÅëÇÕ ¸ÞÀÎ µðÆÄÀÎ
//	#endif // PJH_FINAL_VIEW_SERVER_LIST

	#define PJH_CHARACTER_RENAME				// Ä³¸¯ÅÍ¸í Áßº¹½Ã Ä³¸¯ÅÍ ÀÌ¸§ º¯°æ.

//## ÆÐ½º¿öµå È®Àå
	
	// - ÀÌµ¿¼®
	#define LDS_MODIFY_CHAR_LENGTH_USERPASSWORD		// ¼­¹ö ÅëÇÕ ÀÛ¾÷°ú °ü·ÃÇÏ¿© »ç¿ëÀÚ ºñ¹Ð¹øÈ£ ±æÀÌ°ªÀÌ ±âÁ¸ 6-10 ¿¡¼­ 8-12·Î º¯°æ (2008.06.18)

//#endif //SELECTED_LANGUAGE == LANGUAGE_KOREAN
#endif // _LANGUAGE_KOR					// ±¹³»¸¸ Àû¿ë

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////













/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//## ¹ÌÁ¤¸® µðÆÄÀÎ
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//#define CSK_EVIL_SKILL				// ¾Ç·É ½ºÅ³ ¼­¹ö¿¡¼­ ÆÇº°ÇÏ°Ô ¼öÁ¤(2007.01.29)

// ÇÑ±¹¿¡¸¸ Àû¿ëµÇ¾ß ÇÒ ÀÛ¾÷µé
// ÇØ¿Ü ÆÐÄ¡ ÇÒ¶§ ÁÖÀÇ ÇÒ°Í ( SELECTED_LANGUAGE == LANGUAGE_KOREAN µÇ¾î ÀÖ¾î¾ß ÇÑ´Ù. )
//#if SELECTED_LANGUAGE == LANGUAGE_KOREAN
#ifdef _LANGUAGE_KOR					// ±¹³»¸¸ Àû¿ë
	#define	ADD_PCROOM_POINT_SYSTEM					//	PC¹æ Æ÷ÀÎÆ® ½Ã½ºÅÛ Ãß°¡(2007.03.07)
	#ifdef ADD_PCROOM_POINT_SYSTEM
		#define CSK_PCROOM_ITEM						//	PC¹æ Æ÷ÀÎÆ® ¾ÆÀÌÅÛ(È¥µ·ÀÇ »óÀÚ 3Á¾) ÀÛ¾÷(2007.03.16)
		#define CSK_LUCKY_SEAL						//	Çà¿îÀÇ ÀÎÀå(2007.03.14) - »ó½Â, Ç³¿ä, À¯ÁöÀÎÀå(ADD_PCROOM_POINT_SYSTEM °ü·Ã)
	#endif	// ADD_PCROOM_POINT_SYSTEM

	// - ¾È»ó±Ô
	//#define NP_LOG								// °ÔÀÓ°¡µå ·Î±× ³²±â±â.(°ÔÀÓ°¡µå ÆÐÅ¶ Å×½ºÆ® ½Ã¿¡¸¸ ÄÓ °Í.) [³»ºÎÅ×½ºÆ®¿ë, ÆÐÄ¡ ¾Æ´Ô]
	//#define ADD_EVENT_PCROOM_POINT_HALF			// PC¹æ Æ÷ÀÎÆ® Àý¹Ý ÀÌº¥Æ®. (2008.04.01) [08.04.04 Å×¼·]

	#define TEENAGER_REGULATION						//  Ã»¼Ò³âÀÚÀ²±¸±ÔÁ¦

	// - ÀÌÇõÀç
	#define ADD_MU_HOMEPAGE							//  Ã¢¸ðµå ÀÏ¶§¸¸ ´ÜÃàÅ°·Î ¹Â È¨ÆäÀÌÁö ¶ç¿ì±â
//#endif //SELECTED_LANGUAGE == LANGUAGE_KOREAN
#endif // _LANGUAGE_KOR					// ±¹³»¸¸ Àû¿ë

// - ¹Ú»ó¿Ï
#define PSW_ADD_MIX_CHAOSCHARM					// Mix file¿¡ Ä«¿À½º ºÎÀû ÅÜ Ãß°¡..( 2008.06,30 )

// - ¹ÚÁ¾ÈÆ
#define PJH_ADD_SET_NEWJOB						// Á÷¾÷º° ¼¼Æ® ¾ÆÀÌÅÛÃß°¡ & ¼¼Æ® ¾ÆÀÌÅÛ¿¡ ´ÙÅ©·Îµå, ¼ÒÈ¯¼ú»ç ½Å±Ô Ãß°¡(2008.03.21) [08.04.04 Å×¼·]


// - ¾ç´ë±Ù
//#define DEVIAS_XMAS_END_LOADFIX_FOR_TESTSERVER	// Å×¼· µ¥ºñ¾Æ½º Å©¸®½º¸¶½º ¸Ê ³¡³»±â À§ÇØ testºÙÀÎ ¸Ê ·ÎµùÇÏµµ·Ï ÇÔ(º»¼·¶§´Â »©¾ßµÊ)(2008.1.3)
//#define DEVIAS_XMAS_EVENT2007						// µ¥ºñ¾Æ½º Å©¸®½º¸¶½º ¸Ê ¼öÁ¤ (2007.12.04)





// ----------------------------------------------------------------------------
// ÇØ¿Ü±îÁö ¿Ïº®È÷ ¶È°°ÀÌ Àû¿ëµÈ µðÆÄÀÎµéÀÌ¹Ç·Î ¼ÕµÉ ÀÏ ¾ø°í Á¤¸®ÇÒ ÀÏ¸¸ ³²¾ÒÀ½
// ÀÌÇÏ ¸ðµÎ µðÆÄÀÎ Á¤¸® ´ë»ó
// ----------------------------------------------------------------------------

// - ±èÀçÈñ
#define KJH_ADD_CHECK_RESOURCE_GUARD_BEFORE_LOADING	// ·ÎµùÀü ¸®¼Ò½º°¡µå Ã¼Å© (2010.10.14)
#define KJH_MOD_RESOURCE_GUARD						// ¸®¼Ò½º°¡µå ¼öÁ¤ - ½ÇÇàÆÄÀÏµÚ¿¡ ºÙÀÌ´ø°ÍÀ» ´Üµ¶ Ã¥¼¶ ÆÄÀÏ·Î º¯°æ(10.03.10)

// - ±èÀçÈñ
#define KJH_MOD_LIBRARY_LINK_EACH_NATION			// ÄÚµå ¶óÀÌºí·¯¸® ±¹°¡º° Link ¹æ½ÄÀ¸·Î º¯°æ (10.04.22) - ¸ðµç ±¹°¡ ÇÊ¼ö

// - ¾È»ó±Ô
#define ADD_ALICE_WINGS_2				// ¼ÒÈ¯¼ú»ç 3Â÷ ³¯°³.(2008.01.08). 3Â÷ ³¯°³ Ãß°¡ Âü°í¿ë define.
#define	ADD_ALICE_WINGS_1				// ¼ÒÈ¯¼ú»ç 1Â÷, 2Â÷ ³¯°³.(2007.11.23). 1,2Â÷ ³¯°³ Ãß°¡ Âü°í¿ë define.
#define ADD_NPC_DEVIN					// »çÁ¦µ¥ºó NPC.(2007.05.21). NPC Ãß°¡ Âü°í¿ë define.

// ÀÌº¥Æ® Á¾·á·Î ¾Æ·¡ Á¤ÀÇ ¸·À½.
/*#ifdef _TEST_SERVER
	#define	ADD_EVENT_SERVER_NAME		//	Å×½ºÆ®6 ¼­¹ö ºÎÅÍ 'ÀÌº¥Æ®1'·Î ¼­¹ö ÀÌ¸§ º¯°æ.(2007.05.15)
										//	ADD_EXPERIENCE_SERVER¿Í °°ÀÌ ¾²¸é ¾ÈµÊ.
#endif	// _TEST_SERVER*/

#ifdef _DEBUG
	//. ÆùÆ®Ãâ·Â °ü·Ã ºÎºÐÀ» °³¼±ÇÏ·ÁÇÏ°Å³ª µð¹ö±ë ÇÏ·ÁÇÒ¶§ ÄÑÁÖ¼¼¿ä.
	//. ¿¡µðÆ® À©µµ¿ì, ÇöÀç ÅØ½ºÃÄµîÀ» º¸½Ç¼ö ÀÖ½À´Ï´Ù.
	//#define DEBUG_FONT_TEXTURE_TEST		// ÆùÆ® ÅØ½ºÃÄ, ÀÔ·ÂÀ©µµ¿ìµî Ãâ·Â(2007.05.05)
	//#define DEBUG_BITMAP_CACHE			// ÄÜ¼ÖÃ¢¿¡¼­ ÇöÀç ºñÆ®¸Ê »óÅÂ È®ÀÎ °¡´É
	//#define DEBUG_INVENTORY_BASE_TEST		// ÀÎº¥Åä¸® ±â¹Ý ±¸Çö Å×½ºÆ®: ¹Ú½º, ¶óÀÎ Ãâ·Â (2007.05.30)
#endif // _DEBUG

// - ¹ÚÁ¾ÈÆ
#define WHITE_DAY_EVENT					//  È­ÀÌÆ®µ¥ÀÌ ÀÌº¥Æ®(2006-02-24 Ãß°¡)
#define WORLDCUP_ADD					//  ¿ùµåÄÅÀÌº¥Æ®ÀÛ¾÷
//#define BATTLE_SOCCER_ADD_NPC_DIALOG	//  ¹èÆ²»çÄ¿ ÀÌº¥Æ®¿¡ °üÇÑ NPCÀÇ ´ëÈ­Ã³¸®(ÀÌº¥Æ® ¾È³» ´ëÈ­)			
//#define NO_MORE_DANCING				//  ÃãÀ» ¸øÃß°Ô
#define WINDOWMODE						//  À©µµ¿ì ¸ðµå »ç¿ë½Ã(2006-07-18 Ãß°¡)
#define HELLOWIN_EVENT					//  ÇÒ·ÎÀ© ÀÌº¥Æ® ¾ÆÀÌÅÛ Ã³¸®.(2006-10-18 Ãß°¡)

//-------------------------------------------------------------------------------------------------------------------------------------

#endif //__WINMAIN_NEW_H__
