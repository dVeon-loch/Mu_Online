#ifndef __WINMAIN_H__
#define __WINMAIN_H__

/////////////////////////////////////////////////////////

#define SEASON6P3_UP			0
#define AJASIJSJIA				1

/////////////////////////////////////////////////////////


//!! ÆÐÄ¡½Ã ÁÖ¼® Ã³¸® ÇØ¾ß ÇÔ
/*-------------------- ÇÁ·Î±×·¥ mode ¼³Á¤ ----------------------------------------------*/
#define FOR_LAST_TEST			// ÃÖÁ¾ Å×½ºÆ® ¿ë ¹öÀü (½ºÅÈ ¿Ã¸®±â ½±°Ô)
#define FOR_WORK				// »ç³» ÀÛ¾÷¿ë ¹öÁ¯ (Alt-Tab °¡´É)
#define FOR_HACKING				// ÇØÅ·ÆÀ¿ë ¹öÁ¯ (Å¬¶óÀÌ¾ðÆ® º¹¼ö ½ÇÇà °¡´É)
/*--------------------------------------------------------------------------------------*/

//////////// Áß¿ä!!!!! - ÀÌÇõÀç //////////////////////////////////////////////////////////////////////////////////
//	- ¾ÕÀ¸·Î Å×¼· ÆÐÄ¡´Â Ç×½Ã ÀÌ µðÆÄÀÎ ´Ù ÄÑÁÝ½Ã´Ù. ^^ ÀÌÀ¯´Â ¾Æ·¡ÀÖ´Â ÆÄÀÏÀÇ ¼öÁ¤ ÆÐÄ¡¸¸ ÀÖÀ»½Ã				//
//	  exe ÆÄÀÏÀ» ¸¸µé ÇÊ¿ä°¡ ¾ø¾îÁö°í µ¥ÀÌÅÍ¸¸ ÆÐÄ¡°¡ °¡´ÉÇØÁö¸é ¼­¹ö ¶ÇÇÑ ÆÐÄ¡°¡ ÇÊ¿ä ¾ø¾îÁö±â ¶§¹®ÀÔ´Ï´Ù ^^	//
//    Ç×½Ã ÄÑ µÓ½Ã´Ù.																							//
//////////// Áß¿ä!!!!! - ÀÌÇõÀç //////////////////////////////////////////////////////////////////////////////////


//Å×¼·½Ã¿¡´Â MuTest.ini¸¦ ÀÐµµ·Ï ÄÑ ÁÖ¾î¾ß ÇÑ´Ù. 
#ifdef _TEST_SERVER	// Áß¿ä!!!!! - ÀÌÇõÀç À§¿¡ ³»¿ë ÀÐ¾î ÁÖ¼¼¿ä
	#define USE_MUTEST_INI	//MuTest È£Ãâ(Å×¼· °ÔÀÓ°¡µå½ÇÇà)-> Ç×»ó Å²´Ù.
	#define USE_TEXTTEST_BMD
	#define USE_ITEMTEST_BMD
	#define USE_SKILLTEST_BMD
	#define USE_GATETEST_BMD
	#define USE_PLAYERTEST_BMD
	#define USE_QUESTTEST_BMD
	#define USE_DIALOGTEST_BMD
	#define USE_SET_ITEMTEST_BMD
	#define USE_MOVEREQTEST_BMD
	#define USE_SLIDETEST_BMD
	#define USE_MONSTERSKILLTEST_BMD
	#define USE_CREDITTEST_BMD
	#define USE_HARMONYJEWELOPTION_BMD
	#define USE_NOTSMELTING_BMD
	#define USE_ITEMADDOPTION_BMD
	#define USE_MIXTEST_BMD
	#define USE_MASTERTREE_BMD
	#define USE_SOCKETITEM_TEST_BMD
	#define USE_PET_TEST_BMD
	#define USE_FILTER_TEST_BMD
	#define USE_QUESTPROGRESSTEST_BMD
	#define USE_QUESTWORDSTEST_BMD
	#define USE_NPCDIALOGUETEST_BMD
	#define USE_MINIMAPTEST_BMD
#endif //_TEST_SERVER

/*-------------------- ±¹°¡ ¼±ÅÃ -------------------------------------------------------*/

// Áö¿øÇÏ´Â ¾ð¾î Á¤ÀÇ
#define LANGUAGE_KOREAN			( 0 )	// ÇÑ±¹¾î
#define LANGUAGE_ENGLISH		( 1 )	// ¿µ¾î
#define LANGUAGE_TAIWANESE		( 2 )	// ´ë¸¸¾î
#define LANGUAGE_CHINESE		( 3 )	// Áß±¹¾î
#define LANGUAGE_JAPANESE		( 4 )	// ÀÏº»¾î
#define LANGUAGE_THAILAND		( 5 )	// ÅÂ±¹¾î
#define LANGUAGE_PHILIPPINES	( 6 )	// ÇÊ¸®ÇÉ
#define LANGUAGE_VIETNAMESE		( 7 )	// º£Æ®³²
#define NUM_LANGUAGE			( 8 )
// ¿©±â¼­ ¾ð¾î ¼±ÅÃ

//#ifdef KJH_MOD_LIBRARY_LINK_EACH_NATION
//----------------------------------------------------------------------------- Kor
// Kor
#ifdef _LANGUAGE_KOR
	#define SELECTED_LANGUAGE	( LANGUAGE_KOREAN )
//----------------------------------------------------------------------------- Eng
// Eng
#elif _LANGUAGE_ENG
	#define SELECTED_LANGUAGE	( LANGUAGE_ENGLISH )
//----------------------------------------------------------------------------- Tai
// Tai
#elif _LANGUAGE_TAI
	#define SELECTED_LANGUAGE	( LANGUAGE_TAIWANESE )
//----------------------------------------------------------------------------- Chs
// Chs
#elif _LANGUAGE_CHS
	#define SELECTED_LANGUAGE	( LANGUAGE_CHINESE )
//----------------------------------------------------------------------------- Jpn
// Jpn
#elif _LANGUAGE_JPN
	#define SELECTED_LANGUAGE	( LANGUAGE_JAPANESE )
//----------------------------------------------------------------------------- Tha
// Tha
#elif _LANGUAGE_THA
	#define SELECTED_LANGUAGE	( LANGUAGE_THAILAND )
//----------------------------------------------------------------------------- Phi
// Phi
#elif _LANGUAGE_PHI
	#define SELECTED_LANGUAGE	( LANGUAGE_PHILIPPINES )
//----------------------------------------------------------------------------- Vie
// Vie
#elif _LANGUAGE_VIE
	#define SELECTED_LANGUAGE	( LANGUAGE_VIETNAMESE )
#endif
//-----------------------------------------------------------------------------
// #else // KJH_MOD_LIBRARY_LINK_EACH_NATION
// 	#define SELECTED_LANGUAGE	( LANGUAGE_ENGLISH ) --> ¼öÁ¤ÇÏÁö ¸»°Í
// #endif // KJH_MOD_LIBRARY_LINK_EACH_NATION

/*--------------------------------------------------------------------------------------*/
#ifdef _BLUE_SERVER
	#define GAMEGUARD_BLUEMU_VERSION			// ºí·ç ¹Â Àû¿ëµÈ °ÔÀÓ°¡µå
#endif //_BLUE_SERVER

#if SELECTED_LANGUAGE == LANGUAGE_KOREAN || SELECTED_LANGUAGE == LANGUAGE_JAPANESE || SELECTED_LANGUAGE == LANGUAGE_TAIWANESE || SELECTED_LANGUAGE == LANGUAGE_ENGLISH || SELECTED_LANGUAGE == LANGUAGE_VIETNAMESE || SELECTED_LANGUAGE == LANGUAGE_PHILIPPINES
// - ¾È¼º¹Î
// °ÔÀÓ°¡µå ÀÎÁõ 2.5¹öÀü(Àý´ë µðÆÄÀÎ À§Ä¡ ¿Å±âÁö ¸» °Í!)
//	ÀÌ µðÆÄÀÎÀÌ ²¨Á® ÀÖÀ» ½Ã¿¡´Â, °ÔÀÓ°¡µå ¶óÀÌºê·¯¸®¸¦ 051223¹öÀü ÀüÀ¸·Î µ¤¾î½á¾ß ÇÔ
#define GAMEGUARD_AUTH25
#endif //SELECTED_LANGUAGE == LANGUAGE_KOREAN || SELECTED_LANGUAGE == LANGUAGE_JAPANESE

/*-------------------- ±¹°¡º°·Î ´Ù¸¥ ¿É¼Ç ¼³Á¤ -----------------------------------------*/

#ifdef _DEBUG
	#define ENABLE_EDIT				// Ñèñòåìíîå ñîîáùåíèå
	#define ENABLE_EDIT2			// Ïåðåìåùåíèå ñ ïîìîùüþ êëàâèø ñî ñòðåëêàìè
	//#define ACC_PACKETSIZE		// Àü¼ÛµÇ´Â ÆÐÅ¶ »çÀÌÁî °è»ê
	#if SELECTED_LANGUAGE == LANGUAGE_KOREAN	// ÇÑ±¹ ¹öÀü¿¡¼­¸¸ ÀÛµ¿ÇÏ¸ç, ÇØ¿Ü¹öÀü¿¡¼­´Â boost new ¿Í Ãæµ¹ ¹ß»ýÇÕ´Ï´Ù. (2009.01.05)
		#define USE_CRT_DEBUG			// ¸Þ¸ð¸® ´©¼ö µð¹ö±ë
	#endif // SELECTED_LANGUAGE == LANGUAGE_KOREAN
	//#define PK_ATTACK_TESTSERVER_LOG		// Å×¼·¿¡ PK °ü·Ã °ø°ÝÂÊ ·Î±×³²±â´Â ÀÛ¾÷(2007.04.25)
#endif // _DEBUG

#ifdef FOR_WORK
/*----------------------- µð¹ö±ë¿ë ¸ðµâµé --------------------------------------------------*/

//#define KJH_LOG_ERROR_DUMP					// ¿¡·¯´ýÇÁ±â´É ·Î±× Ãâ·Â (2009.06.15)
#ifdef KJH_LOG_ERROR_DUMP
	#define LOG_ERROR_DUMP_FILENAME		"Log_ErrorDump.txt"		// ¿¡·¯´ýÇÁ±â´É ·Î±×ÆÄÀÏÀÌ¸§
#endif // KJH_LOG_ERROR_DUMP

//#define PBG_LOG_PACKET_WINSOCKERROR		// À©¼Ó¿¡·¯ ·Î±× È®ÀÎ
#ifdef PBG_LOG_PACKET_WINSOCKERROR
	#define PACKET_LOG_FILE	"PacketLogFileRecv.txt"
#endif //PBG_LOG_PACKET_WINSOCKERROR

#ifdef _DEBUG

	//$ ÄÜ¼Ö µð¹ö±×
	#define CSK_LH_DEBUG_CONSOLE			// ÄÜ¼Ö·Î µð¹ö±ë Á¤º¸ ³²±â´Â Ã³¸®(2007.03.20)
	#ifdef CSK_LH_DEBUG_CONSOLE
		#define CONSOLE_DEBUG				// ÄÜ¼Ö·Î µð¹ö±ë Á¤º¸ Ãâ·Â(2007.03.20)
	#endif // CSK_LH_DEBUG_CONSOLE

	//$ ¸Ê¼Ó¼º º¸´Â ±â´É
	#define CSK_DEBUG_MAP_ATTRIBUTE			// ¸Ê ¼Ó¼ºÀ» °ÔÀÓ³»¿¡ Ãâ·Â(2008.10.14)

	//$ ¹Ù¿îµù¹Ú½º ·»´õ¸µ ±â´É
	#define CSK_DEBUG_RENDER_BOUNDINGBOX		// ¹Ù¿îµù ¹Ú½º ·»´õ¸µ(2008.10.28)

	//$ ±æÃ£±â³ëµå º¸´Â ±â´É
	#define CSK_DEBUG_MAP_PATHFINDING		// ±æÃ£±â³ëµå¸¦ °ÔÀÓ³»¿¡ Ãâ·Â(2008.10.14)

	//$ Ïðîôèëèðîâàíèå è îòëàäêà êàìåðû
	// Ïîñêîëüêó êàäð ìåäëåííûé, ðàáîòàéòå ëîêàëüíî ïðè ïðîôèëèðîâàíèè èëè ñúåìêå
	//#define LDS_ADD_DEBUGINGMODULES	// Ðåæèì âíóòðåííåãî ïðîôèëèðîâàíèÿ (ôàéë ðåçóëüòàòîâ ñîõðàíÿåòñÿ êàê RESULT_PROFILING.txt)

	#ifdef LDS_ADD_DEBUGINGMODULES
		#define DO_PROCESS_DEBUGCAMERA	// Íàñòðîéêà êàìåðû äëÿ îòëàäêè â Main GameScene (2008.07.30)
		//#define LDS_ADD_DEBUGINGMODULES_FOR_PROFILING
		#ifdef LDS_ADD_DEBUGINGMODULES_FOR_PROFILING
			#define DO_PROFILING			// PROFILING_RESULT.txt-Result output // Ñëåäóåò ëè ïðèìåíÿòü âíóòðåííèé ðåæèì ïðîôèëèðîâàíèÿ. (2008.07.11)
			//#define DO_PROFILING_FOR_LOADING// PROFILING_FOR_LOADING_RESULT.txt-Result output // Ðåæèì ïðîôèëèðîâàíèÿ òîëüêî âî âðåìÿ çàãðóçêè. (2008.08.19)
		#endif // LDS_ADD_DEBUGINGMODULES_FOR_PROFILING
	#endif // LDS_ADD_DEBUGINGMODULES

	// ÇÁ·¹ÀÓÀÌ ´À·ÁÁö´Â °ü°è·Î, ÇÁ·ÎÆÄÀÏ¸µ,Ä«¸Þ¶ó ÀÛ¾÷À» ÇÒ¶§´Â local·Î ÀÛ¾÷ÇÏ½Ã¿À
	#define LDS_UNFIXED_FIXEDFRAME_FORDEBUG	// ÃÊ´ç 20°íÁ¤ ÇÁ·¹ÀÓÀ» ÀÚÀ¯·Î º¯È¯ °¡´É »ç¿ëÀÚÀÔ·ÂÄÚµå($unfixframe on/$unfixframe off) »ç¿ë È°¼ºÈ­, ¸¸¾à realease ¸ðµå¿¡¼­ »ç¿ëÀ» ¿øÇÒ ½Ã CSK_LH_DEBUG_CONSOLE µðÆÄÀÎÀ» ÇÊÈ÷ ÄÑ¾ß ÇÕ´Ï´Ù.

#endif // _DEBUG

//#define LDS_FOR_DEVELOPMENT_TESTMODE
#ifdef LDS_FOR_DEVELOPMENT_TESTMODE
	#define CSK_LH_DEBUG_CONSOLE			// ÄÜ¼Ö·Î µð¹ö±ë Á¤º¸ ³²±â´Â Ã³¸®(2007.03.20)
	//#define ENABLE_FULLSCREEN				// Ç®½ºÅ©¸°	(°£È¤ Release(»ç³»Å×½ºÆ®¿ë)½Ã¿¡ ÀüÃ¼È­¸é ±â´ÉÀ» ¿øÇÏ´Â °æ¿ì°¡ ÀÖÀ½.)
#endif // LDS_FOR_DEVELOPMENT_TESTMODE

/*------------------------------------------------------------------------------------------*/
#endif // FOR_WORK

#ifdef NDEBUG
	#ifdef FOR_HACKING				// ÇØÅ·ÆÀ¿ë
	#else // FOR_HACKING
		#define ENABLE_FULLSCREEN	// Ç®½ºÅ©¸°
	#endif // FOR_HACKING

	#ifndef FOR_WORK
		
		// ¸®¼Ò½º°¡µå
		#define RESOURCE_GUARD		
		
		//#define USE_SELFCHECKCODE	// ¼¿ÇÁ Ã¼Å© ÄÚµå »ç¿ë

		// °ÔÀÓ°¡µå
		#if SELECTED_LANGUAGE != LANGUAGE_CHINESE
			//#define USE_MU_INTERNAL_TEST			//°ÔÀÓ°¡µå »ç³» Å×½ºÆ®¹öÀü
			//#define USE_VIETNAMESE_NPGAME_TEST	//°ÔÀÓ°¡µå »ç³» Å×½ºÆ® ¹öÁ¯(º£Æ®³²)
			#define NP_GAME_GUARD					// nProtect Game Guard.
			#define GG_SERVER_AUTH					// °ÔÀÓ°¡µå - ¼­¹ö¸¦ ÅëÇÑ ÀÎÁõ
			//#define USE_NPROTECT	// nProtect ¸¦ »ç¿ëÇÑ´Ù. ¾ÈÃ¶¼ö ÇÙ½¯µå·Î ¿¬°áµÈ´Ù
		#endif	// SELECTED_LANGUAGE != LANGUAGE_CHINESE

#ifdef KJH_MOD_NATION_LANGUAGE_REDEFINE
#ifndef _LANGUAGE_KOR				// KOR Á¦¿Ü
		#define FOR_ADULT		// ¼ºÀÎ¿ë(ÇÇ»¡°£»ö)
#endif // _LANGUAGE_KOR
#else // KJH_MOD_LIBRARY_LINK_EACH_NATION
		#if SELECTED_LANGUAGE == LANGUAGE_KOREAN
			//#define USING_MFGS	// MFGS »ç¿ë Ã¼Å©Ã¼Å©
		#else // SELECTED_LANGUAGE == LANGUAGE_KOREAN
			#define FOR_ADULT		// ¼ºÀÎ¿ë(ÇÇ»¡°£»ö)
		#endif // SELECTED_LANGUAGE == LANGUAGE_KOREAN
#endif // KJH_MOD_NATION_LANGUAGE_REDEFINE

	#endif // FOR_WORK
#endif // NDEBUG

#if SELECTED_LANGUAGE == LANGUAGE_KOREAN
	#define WAV_CONVERT		// wav ÄÁ¹öÆ® ±â´ÉÀ» ³ÖÀ» °ÍÀÎ°¡? ÇÑ±Û À½¾Ç ÆÄÀÏÀ» ¿µ¾î·Î ¹Ù²Ù´Â ±â´É
	#ifndef WAV_CONVERT
		#define KOREAN_WAV_USE		// ÇÑ±Û·Î µÈ wav ÆÄÀÏÀ» ¾µ °ÍÀÎ°¡? 
	#endif
#endif

#ifdef NP_GAME_GUARD
	#define GG_SERVER_AUTH			// °ÔÀÓ°¡µå - ¼­¹ö¸¦ ÅëÇÑ ÀÎÁõ

	#if defined(GAMEGUARD_AUTH25) || SELECTED_LANGUAGE == LANGUAGE_JAPANESE || SELECTED_LANGUAGE == LANGUAGE_VIETNAMESE || SELECTED_LANGUAGE == LANGUAGE_ENGLISH
		#define NPROTECT_AUTH2		// NProtect Auth2Àû¿ë
	#endif

#endif // NP_GAME_GUARD 

#if defined USER_WINDOW_MODE || (defined WINDOWMODE)
#define ACTIVE_FOCUS_OUT				// Ã¢ ¹Ù±ùÀ¸·Î Æ÷Ä¿½º ³ª°¡µµ °ÔÀÓ Á¤Áö ¾ÈµÊ & alt-tabÇã°¡
#endif	// USER_WINDOW_MODE

#if SELECTED_LANGUAGE == LANGUAGE_ENGLISH
// 	#define LIMIT_CHAOS_MIX			// 2Â÷ ³¯°³, ±ºÁÖÀÇ ¸ÁÅä, Åõ¸í¸ÁÅä, µ¥ºô½ºÄù¾î ÃÊ´ë±Ç ¸ø ¸¸µé°Ô ÇÔ(npc ÅØ½ºÆ®µµ »­) -> ½ÃÁð4ÆÐÄ¡¿¡¼­ ¸·À½
// 	#define LIMIT_SKILL				// ±Û·Î¹úÀº ½ºÀ£¶óÀÌÇÁ, ºí·Î¿ì ½ºÅ³ ¸·À½ -> ½ÃÁð4ÆÐÄ¡¿¡¼­ ¸·À½
	#define GRAMMAR_OF				// of ¹®Á¦
#endif // SELECTED_LANGUAGE == LANGUAGE_ENGLISH

#if SELECTED_LANGUAGE == LANGUAGE_PHILIPPINES
	#define GRAMMAR_OF				// of ¹®Á¦
#endif

#if SELECTED_LANGUAGE == LANGUAGE_CHINESE
	#define USER_WINDOW_MODE		// À¯Àú Ã¢¸ðµå »ç¿ë
	#define ONLY_PSWD_STORAGELOCK	// Ã¢°í Àá±Ý ±â´É¿¡ ºñ¹ø¸¸ »ç¿ë (Áß±¹)
	#define CHINESE_PRICERISE		// Áß±¹ ¹°°¡»ó½ÂÁ¤Ã¥
	//#define ANTIHACKING_ENABLE	// Áß±¹¿¡¼­ °³¹ßµÈ anti-hacking solution À» ÀÌ¿ëÇÑ´Ù.
#else
	#define BAN_USE_CMDLINE				// ¸í·ÉÁÙ»ç¿ëÀ» ±ÝÁöÇÑ´Ù. ´ë½Å, Mu Virtual Commander¸¦ Á¦°øÇÑ´Ù. (2005-02-18)
	#define NEW_YEAR_BAG_EVENT		// ¼³¸¸ º¹ÁÖ¸Ó´Ï ÀÌº¥Æ®.   ( Áß±¹¿¡¼­´Â »ç¿ëÇÏÁö ¾Ê´Â´Ù. )
#endif

#if SELECTED_LANGUAGE == LANGUAGE_JAPANESE
	#define TAMAJJANG					// Å¸¸¶Â¯. ( ÀÏº» ).
	//#define HERO_SELECT					// ÀÚ±â ÀÚ½Å ¼±ÅÃÇÏ±â.
	#define JAPANESE_ITEM_HELP_FIX		// ÀÏº» ¾ÆÀÌÅÛ µµ¿ò¸» ¿¡³ÊÁö Ç¥½Ã ¼öÁ¤ (2004-07-22)
	//#define JPN_SERIAL_NOT_RENDERTEXT	// ÀÏº» È²±Ý ±Ã¼ö ½Ã¸®¾ó ÀÔ·Â½Ã ¾ÆÀÌÅÛ ¸íÄª Ç¥½Ã ¾ÈµÇ°Ô ¼öÁ¤(2005.11.03)
#endif

#if SELECTED_LANGUAGE != LANGUAGE_TAIWANESE
	#define CONNECT_LIST_FIX		// Á¢¼Ó ¼­¹ö ¼ø¼­ º¯°æ ½±°Ô °íÄ£°Í (´ë¸¸¹öÀüÀº »ç¿ëÇÏÁö ¾Ê°Å³ª ¼ø¼­ »õ·Î ¹Ù²ãÁà¾ß ÇÔ)
#endif

#if SELECTED_LANGUAGE == LANGUAGE_CHINESE || SELECTED_LANGUAGE == LANGUAGE_TAIWANESE
	#define CHINA_MOON_CAKE			// Áß±¹ ¿ùº´ ÀÌº¥Æ®.
#endif

#if SELECTED_LANGUAGE == LANGUAGE_TAIWANESE || SELECTED_LANGUAGE == LANGUAGE_JAPANESE \
	|| SELECTED_LANGUAGE == LANGUAGE_CHINESE
	#define DISABLE_MUTO			// ¹ÂÅäº¹±ÇÀº »ç¿ë¾ÈÇÔ(´ë¸¸) (2004-07-27)
#endif

#if SELECTED_LANGUAGE == LANGUAGE_CHINESE || SELECTED_LANGUAGE == LANGUAGE_TAIWANESE \
	|| SELECTED_LANGUAGE == LANGUAGE_ENGLISH || SELECTED_LANGUAGE == LANGUAGE_PHILIPPINES \
	|| SELECTED_LANGUAGE == LANGUAGE_VIETNAMESE
	#define GRAMMAR_VERB			// µ¿»ç ¹®Á¦ ( welcome to °°Àº)
#endif

#if SELECTED_LANGUAGE == LANGUAGE_PHILIPPINES || SELECTED_LANGUAGE == LANGUAGE_VIETNAMESE
	#define PHIL_LANGUAGE_PROBLEM	// ¾î¼ø ¹®Á¦ (°ü·Ã ¹ö±× ¸ðµÎ Æ÷ÇÔÇØ¾ß ÇÔ, ÃßÈÄ ¹ß°ß½Ã ÀÌ ¾Æ·¡·Î Ãß°¡)
#endif

#if SELECTED_LANGUAGE == LANGUAGE_ENGLISH
	#define ENG_LANGUAGE_PROBLEM	// ¾î¼ø ¹®Á¦ (°ü·Ã ¹ö±× ¸ðµÎ Æ÷ÇÔÇØ¾ß ÇÔ, ÃßÈÄ ¹ß°ß½Ã ÀÌ ¾Æ·¡·Î Ãß°¡)
#endif

#if !defined(NP_GAME_GUARD) && !defined(FOR_WORK) && !defined(_DEBUG)
	//#define ATTACH_HACKSHIELD		// ¾ÈÃ¶¼ö¿¬±¸¼Ò ÇÙ½¯µå Àû¿ë
#endif


#ifndef ANTIHACKING_ENABLE		// Anti-hacking solution °ü·Ã ÇÔ¼öµé overload
	#define hanguo_check1();	{}
	#define hanguo_check2();	{}
	#define hanguo_check3();	{}
	#define hanguo_check4();	{}
	#define hanguo_check5();	{}
	#define hanguo_check6();	{}
	#define hanguo_check7();	{}
	#define hanguo_check8();	{}
	#define hanguo_check9();	{}
	#define hanguo_check10();	{}
	#define hanguo_check11();	{}
	#define hanguo_check12();	{}
	#define	pre_send( g_hInst);	{}
#endif

/*--------------------------------------------------------------------------------------*/


/*----------------------- ÀÌº¥Æ® -------------------------------------------------------*/

//#define CSK_EVENT_HALLOWEEN_MAP	//	ÇÒ·ÎÀ© ÀÌº¥Æ® ¸Ê Ã³¸®(2006.10.09)
//#define DEVIAS_XMAS_EVENT			//  Å©¸®½º¸¶½º ÀÌº¥Æ® °ü·Ã µ¥ºñ¾Æ½º ¸Ê ¹× ¸®¼Ò½º ¼öÁ¤(2005.12)
#define STONE_EVENT_DIALOG			// ½ºÅæ ÀÌº¥Æ® ( ¿µ¼® ·¯½¬ °ÔÀÓ, °øÂ¥ °æ¸Å ÀÌº¥Æ® ).
//#define LENA_EXCHANGE_ZEN			// ·¹³ª È¯Àü ½Ã½ºÅÛ, ÁÖÀ§ : ½ºÅæ¿¡¼­´Â ÄÑ¼­´Â ¾ÈµÈ´Ù.
#define BLOODCASTLE_2ND_PATCH		// ½ºÅæ È¯Àü ½Ã½ºÅÛ, Á¶ÇÕ°ü·Ã
#define USE_EVENT_ELDORADO			// ¿¤µµ¶óµµÀÇ »óÀÚ ÀÌº¥Æ®
#define SCRATCH_TICKET				// »ó¿ëÈ­ 2ÁÖ³â ÀÌº¥Æ®.
#define FRIEND_EVENT				// Ä£±¸ ÀÌº¥Æ®.
#define FRIENDLYSTONE_EXCHANGE_ZEN	// ¿ìÁ¤ÀÇµ¹ È¯Àü ½Ã½ºÅÛ

#define CASTLE_EVENT				// ±ºÁÖÀÇ ¹®Àå µî·Ï
#ifdef CASTLE_EVENT
	#undef FRIEND_EVENT
	#undef FRIENDLYSTONE_EXCHANGE_ZEN
	#undef LENA_EXCHANGE_ZEN
	#define DISABLE_MUTO			// CASTLE_EVENT ½Ã ÇÊ¿ä
#endif

#define BATTLE_SOCCER_EVENT         // ¹èÆ²½ÎÄ¿ ÀÌº¥Æ®.
#define LOREN_RAVINE_EVENT			// ·Î·£Çù°î ÀÌº¥Æ®¿¡¼­ ¾²ÀÓ.
//#define GUILD_WAR_EVENT           // ±æÀü ÀÌº¥Æ®.
//#define MYSTERY_BEAD				// ½ÅºñÀÇ ±¸½½ ÀÌº¥Æ®

#if SELECTED_LANGUAGE == LANGUAGE_JAPANESE
	#define ANNIVERSARY_EVENT			// ÀÏº» 1ÁÖ³â ÆøÁ× ÀÌº¥Æ® (´Ù¸¥³ª¶óµµ »ç¿ëÇÒ ¼ö ÀÖÀ½)
#endif //SELECTED_LANGUAGE == LANGUAGE_JAPANESE

#define	PCROOM_EVENT				//	PC¹æ ÀÌº¥Æ®.(2006.1.26)

/*--------------------------------------------------------------------------------------*/


/*----------------------- ½Ã½ºÅÛ °ü·Ã --------------------------------------------------*/

#define DUEL_SYSTEM					// °áÅõ ½Ã½ºÅÛ
#define PET_SYSTEM					// ¾Ö¿Ï ½Ã½ºÅÛ.
#define PROTECT_SYSTEMKEY			// °ÔÀÓÁß ½Ã½ºÅÛÅ°·ÎºÎÅÍ °ÔÀÓÀ» º¸È£ÇÑ´Ù.
#define CHANGE_RATE					// µî±Þ ¹Ù²Ù±â
//#define SYSTEM_NOT_RENDER_TEXT	// ÅØ½ºÆ®¸¦ ÂïÁö ¾ÊÀ» ½Ã½ºÅÛ(2007.11.28)
//#define FOR_DRAMA					// µå¶ó¸¶ »ïÃÑ»ç¿ë
//#define ON_AIR_BLOODCASTLE		// ºí·¯µå Ä³½½ ¹æ¼ÛÀ» À§ÇÑ ÀÛ¾÷. ÇÊ¿ä¾ø´Â ¸Þ¼¼Áö Ãâ·Â ¾ÈÇÔ
//#define CAMERA_TEST				// ½º¼¦¿ë ( Ä³¸¯ÅÍ ¾Èº¸ÀÓ )
//#define CAMERA_TEST_FPS			// 1ÀÎÄª ½ÃÁ¡°ú °°Àº °¢µµ·Î ¸Ö¸®±îÁö º¸±â
//#define DONTRENDER_TERRAIN		// ÁöÇüÀ» ±×¸®Áö ¾Ê´Â´Ù

/*--------------------------------------------------------------------------------------*/


/*----------------------- ³ªµÑ°Íµé -----------------------------------------------------*/

#define CRYINGWOLF_2NDMVP				// Å©¶óÀÌ¿ïÇÁ Á¡·ÉÁö - Çì´õ¶û ½ÃÇÇÇÇ¶û °ü·ÃµÈ ÇÔ¼ö´Â ÀüºÎ Áö¿ì°í ÀÌÆåÆ®¸¸ ³²°ÜµÎ¼¼¿ä
#define GIFT_BOX_EVENT					//  ¹ß·»Å¸ÀÎµ¥ÀÌ ÀÌº¥Æ® °ü·Ã (2006.1)
#define BUGFIX_CRYWOLF_END_COUNT		// Á¾·áÄ«¿îÆ® ¶ß°í ÀÖ´Âµ¥ Á¦´Ü Å¬¸¯ °¡´ÉÇÑ ¹ö±×
//#define CASTLE_TAX_LIMIT              // °ø¼ºÀÇ ¼¼±Ý Á¶Àý ±â´É »ç¿ë±ÝÁö.
//#define STATE_LIMIT_TIME              // Ä³¸¯ÅÍ »óÅÂ Á¦ÇÑ ½Ã°£.
//#define AUTO_CHANGE_ITEM				// ÀÚµ¿À¸·Î Àåºñ ±³Ã¼ÇÏ±â.
//#define UNDECIDED						// ¸¶¿ì½º ÈÙ °ü·Ã ( Áß°£ ÈÙ ¹öÆ°À¸·Î ¹°¾à ¸Ô±â¿Í ÈÙ·Î ´ÜÃàÅ° ¾²±â)
//#define ENABLE_CHAT_IN_CHAOS			// Ä«¿À½ºÄ³½½¿¡¼­ ÃÂÆÃ°¡´ÉÇÏµµ·ÏÇÔ(¿î¿µÀÚ ¸ðµå)
//#define ENABLE_POTION_EFFECT			// ¹°¾à¸Ô´Â È¿°ú¸¸ ÄÑ±â (DISPLAYVIEWPORT_EFFECT¿Í °°ÀÌ »ç¿ëµÇ¾î¾ß ÇÑ´Ù)
//#define _PVP_ATTACK_GUARD				// °æºñº´ °ø°Ý °¡´ÉÇÏ°Ô
//#define _PVP_MURDERER_HERO_ITEM		// ¿µ¿õ&»ìÀÎ¸¶ ¾ÆÀÌÅÛ&»óÁ¡
//#define _PVP_ADD_MOVE_SCROLL			// ÀÌµ¿¹®¼­ Ãß°¡
//#define _PVP_BLOCK_PVP_CHAR			// Ä³¸¯ÅÍ ¼±ÅÃ½Ã »ìÀÎ¸¶ ·Î±×ÀÎ ¸·±â
//#define _PVP_DYNAMIC_SERVER_TYPE		// ¼­¹ö pvp°¡´É ¿©ºÎ µ¿Àû º¯°æ
//#define USE_SKILL_LEVEL				// ½ºÄÌ¿¡ ·¹º§ °³³ä Ãß°¡
//#define USE_SHADOWVOLUME		        // ¼¨µµ¿ì º¼·ý »ç¿ë
//#ifdef _TEST_SERVER
//	#define	ADD_EXPERIENCE_SERVER			//	½ÃÁð 2 Ã¼Çè ¼­¹ö(2006.08.04)
//#endif	//  _TEST_SERVER
//#define RE_PRICE_SPECIAL_ITEM
//#define USE_MASTER_SKILL
//#define CRYWOLF_1ST
//#define BATTLE_CASTLE_AS				// °ø¼ºº¸¿ÏÀÛ¾÷µðÆÄÀÎ(2005-10-14) °ø¼ºÀü Å×½ºÆ® ÇØ º¸¾Æ¾ß ÇÔ!!
//#define BATTLE_CASTLE					// °ø¼ºÀü.
//#define ADD_MONSTER_SKILL
//#define MVP_INTERFACE
//#define REPAIR_KALIMA					//  Ä®¸®¸¶ ·¹º§Á¶Á¤(2005-12-12 Ãß°¡)
//#define REPAIR_HELPER_ELF				//  °ø¹ænpc °ø°Ý,¹æ¾î ¼öÄ¡Á¶Àý(2005-12-14 Ãß°¡)
//#define MVP_RESULT					//	Å©¶óÀÌ¿ïÇÁ ÇýÅÃ +Ä«¿À½ºÁ¶ÇÕÈ®·ü(2005-12-19 Ãß°¡)
//#define SELL_ITEM_PRICE				//  »çÅºÇÏ°í ¼öÈ£ÀÇ º¸¼® ÆÈ¶§ °¡°Ý /3 ¾ÈÇÏ°Ô(2006-02-21 Ãß°¡)-ÇÑ½ÃÀûÀ¸·Î ¿î¿µÇÒ°ÍÀÓ.
//#define VISTA_ADD						//  ºñ½ºÅ¸ ´ëºñ Ãß°¡ ÄÚµå(2006-12-11 Ãß°¡)
//#define OBJECT_ID						//¿ÀºêÁ§Æ®¿¡ IDÃß°¡
//#define DYNAMIC_FRUSTRUM				//¿ÀºêÁ§Æ®¿¡ °¢ÀÚÀÇ ÇÁ·¯½ºÅÒÀ» °¡Áú ¼ö ÀÖ´Ù

/*--------------------------------------------------------------------------------------*/


/*----------------------- ÀÛ¾÷ Ãë¼ÒµÈ°Å ------------------------------------------------*/
// - ÃÖ¼®±Ù
//#define MOVIE_DIRECTSHOW				//	DirectShow¸¦ ÀÌ¿ëÇØ¼­ µ¿¿µ»ó ½ÇÇà(2005.12.09)

// ¾È¼º¹Î, ÀÌµ¿¼®
//#define MR0
#ifdef	MR0
	#define NEW_RENDERING_SYSTEM

	// 1. MR0:System Type
	#ifdef NEW_RENDERING_SYSTEM
		#define NEW_RENDER_OBJECT
		#define NEW_RENDER_TERRAIN
//		#define NEW_RENDER_EFFECT			
	#endif //NEW_RENDERING_SYSTEM

	// 2. MR0:º¸°­ µÈ »çÇ×µé
	#define LDS_ADD_RENDERMESHEFFECT_FOR_VBO					// RenderMeshEffect() ÇÔ¼ö¿¡ ´ëÇÑ VBO ¹öÀüÀ» Ãß°¡ ÇÕ´Ï´Ù. (ÇÔ¼ö³»¿¡¼­ VBO¿¡¼­´Â Çã¿ë¾ÈµÇ´Â WorldVertexÁ¢±ÙÀ¸·Î "Ä¡¸íÀû ¿À·ù" ¹ß»ý) (09.09.09)
	#define LDS_MOD_ANIMATIONTRANSFORM_WITHHIGHMODEL			// AnimationTransformWithAttachHighModelÇÔ¼ö¿¡¼­ ÇöÀç arrayBone¸¸ ÇÊ¿äÇÒ °æ¿ì´Â TransformÀ¸·Î BoneÀÌ Vertices¿¡ °öÇÏÁö ¾Êµµ·Ï º¯°æ. (2009.09.09)
	#define LDS_ADD_ANIMATIONTRANSFORMWITHMODEL_USINGGLOBALTM	// AnimationTransformWithAttachHighModelÇÔ¼ö³» TMArray°¡ LocalÀÎ ÀÌÀ¯·Î ÀÌÈÄ ¿¬»ê¿¡ TMÀÌ Point¸¦ ÀÒ¾î¹ö¸®´Â Çö»óÀ¸·Î TMÀ» Global À¸·Î º¯°æ. (09.09.07)
	#define LDS_MR0_MODIFY_DIRECTLYAPPLY_SCALETM_INCLUDESHADER	// ShaderCode+RenderMachine°è»ê½Ä º¸°­ : ChromeÈ¿°ú¿Í °°Àº VertexNormalÀ» ÀÌ¿ëÇÑ °è»ê½Ã¿¡ Normal¿¡ Scale¿µÇâÀ» ¹ÞÁö ¾Êµµ·Ï Position¿¡¸¸ ScaleÀÌ °öÇØÁöµµ·Ï ¸ÞÄ¿´ÏÁò º¯°æ. (2009.09.01)
	#define LDS_MR0_MODIFY_TRANSFORMSCALE_FORSILHOUETTE			// ¼±ÅÃ ÄÉ¸¯ÅÍ ¹× ¿ÀºêÁ§Æ® ½Ç·ç¿§ º¸°­ : ½ºÄÉÀÏ º¯È¯½Ä º¸°­:¿ÀºêÁ§Æ®ÀÇ º»·¡ ½ºÄÉÀÏ °ªÀÌ ¾Æ´Ñ À¯Àú ½ºÄÉÀÏ Àû¿ë ¿À·ù·Î ¿¬»ê º¸°­ (2009.01.02)
	#define LDS_MR0_MODIFY_MISSRENDERSHADOW_MOSTMESH			// ½¦µµ¿ì Ãâ·Â :´ëºÎºÐÀÇ ¸Þ½¬ÀÇ ½¦µµ¿ì ¹ÌÃâ·Â ¹®Á¦ (2009.01.05)
	#define LDS_MR0_MODIFY_LOGINSCENE_SHADOWPROBLEM				// Æ¯Á¤ ¸ÊÀÇ LightDisable Ã³¸®. LightEnable µÇ¸é Blending ÀÌ ²¨Á®, Fog È¿°ú°¡ Ã³¸® µÇÁö ¾ÊÀ½. (2009.01.07)
	#define LDS_MR0_MODIFY_ANIMATIONMAPPING_NOANIMATED			// ¿¡´Ï¸ÞÀÌ¼Ç Mapping¿¡ ´ëÇØ Animate µÇÁö ¾Ê´Â Çö»ó(BlendTexture·Î½á Ã³¸®°¡ µÇ¾î¾ß ÇÏ´Âµ¥ Blend Ã³¸®°¡ ÀÌ·ç¾îÁöÁö ¾Ê´Â ¹®Á¦.) (2009.01.09)
	#define LDS_MR0_MODIFY_WHENREOPEN2_SKIPCONVERT				// Bmd::Open2·Î ÀÌ¹Ì ÀÐÇôÁø ÆÄÀÏ¿¡ ´ëÇØ¼­ Skip Parameter¿¡ ´ëÇÏ¿©, VBOÀÇ ConvertMesh¶ÇÇÑ Skip µÇµµ·Ï ¼³Á¤ÇÕ´Ï´Ù. (2009.02.24)
	#define LDS_MR0_ADD_WHENSHUTDOWN_UNINIT_MODELMANAGER		// ShutDown ½Ã¿¡ Á¤»ó Á¾·á°¡ µÇµµ·Ï ModelManager Uninit ÇÕ´Ï´Ù. (2009.02.26)	
	#define LDS_MR0_MODIFY_RENDER_SKIPORNOT_WHEN_NONBLENDMESH	// TextureScript Parsing ½Ã _N ÅØ½ºÃÄµé¿¡ ´ëÇØ NonBlendMesh°¡ True¼³Á¤ µÇ¸ç, AddRender()ÇÔ¼ö»ó¿¡¼­ Render SkipµÇ¾î, ¼ÒÈ¯¼ú»ç Çï¸ä ·»´õ°¡ ¾Èº¸ÀÌ´Â ¹®Á¦. (2009.02.26)
	#ifdef LDS_ADD_RENDERMESHEFFECT_FOR_VBO
		#define LDS_MR0_ADD_DONTDELETE_OLDMESHSBUFFER_DARKSPIRIT	// RenderMeshEffect ÇÔ¼ö¿¡¼­ ±¸¸ðµ¨¹öÀü ¹öÅØ½ºÁ¤º¸°¡ ÇÊ¿ä, olddelmodelÀ» ¾ÊÇÏµµ·Ï º¯°æ. ´ÙÅ©½ºÇÇ¸´. (09.09.10)
	#endif // LDS_ADD_RENDERMESHEFFECT_FOR_VBO
	
	#define LDS_MR0_MOD_PATIALPHYSIQMODEL_PHYSICPROCESS_FIX		// Physic¿¡¼­ ´Ù·ç´Â Åë¹°¸®¸ðµ¨, ºÎºÐ¹°¸®¸ðµ¨ Áß ºÎºÐ¹°¸®¸ðµ¨¿¡¼­¸¸ ¹ß»ýÇÏ´Â ¹®Á¦ FIXÀÛ¾÷. (09.09.28)
	#define LDS_MR0_ADD_VBOMANAGER_SETONOFF						// VBO Manager¸¦ On/Off ÇÏ´Â ÇÔ¼ö¸¦ Ãß°¡ (09.09.29)
	#define LDS_MR0_ADD_SPECIFICMODEL_DOANIMATIONPROCESSING		// VBO Model·Î º¯È¯µÈ ÀÌÈÄ ±¸ ¸ðµ¨ Á¤º¸°¡ ÇÊ¿äÇÏ¿© ÀûÀç¸¦ ³²°ÜµÎ´Â ¸ðµ¨µé¿¡ ´ëÇØ ±¸ ¹öÀüÀÇ Animation Transformation ¿¬»êÀ» ÁöÁ¤µÈ ¸Þ½¬¸¸ ÇÏµµ·Ï ÇÕ´Ï´Ù. ¿¬»êµÈ ¹öÅØ½º Á¤º¸°¡ ÇÊ¿äÇÑ °æ¿ì µîµî. (09.10.20)
	#define LDS_MR0_ADD_ENCRYPTION_ALLSHADERSCRIPT				// ¸ðµç Shader Scriptµé¿¡ ´ëÇØ Encryption/Decryption. (09.11.25)

	#define LDS_MR0_MOD_WHENTRANFORM_BUILDOBB_ALLWAYS			// BMDÆÄÀÏÀÌ ¾ø´Â °æ¿ì¶óµµ BMD ¸ðµ¨ÀÇ OBB¸¦ ¹«Á¶°ÇÀûÀ¸·Î ±¸¼º. (09.12.01)
	#define LDS_MR0_INTIALIZE_SOME_MAINVARIABLES				// ¸î¸î ÁÖ¿äº¯¼öµéÀÇ ÃÊ±âÈ­°¡ ¹ÌÈíÇÑ°Í¿¡ ´ëÇÑ º¸Ãæ. (09.12.02)
	#define LDS_MR0_MOD_SYNCHRONIZE_SETRARGETOBJECT				// ¿É¼ÇÃ¢ÀÇ È¿°ú Á¦ÇÑÀÌ 3ÀÎ°æ¿ì ÁÖÀÎ°ø ÄÉ¸¯ÅÍ ±úÁüÇö»ó. RenderPartObjectEffect ÇÔ¼ö¿¡¼­ ShaderObject ¹Ì·»´õ¸µ »óÅÂ·Î ¹ÝÈ¯ ¹®Á¦·Î ±úÁü. (09.12.04)
	#define LDS_MR0_MOD_FIXEDFRAME_DELTA						// °íÁ¤ 20ÇÁ·¹ÀÓÀÇ ÇöÀç DELTAÇÁ·¹ÀÓ¿¡ ´ëÇØ °íÁ¤°è»ê¿¡¼­ ºñ°íÁ¤°è»êÀ¸·Î º¯°æ. (09.12.09s)

	#define LDS_MR0_MOD_DUETOOVERCOUNTBONES_BREAKVISUAL			// ¸Þ½¬º° º»°¹¼ö°¡ ½¦ÀÌ´õ ÆÄ¶ó¹ÌÅÍ °¹¼ö ÇÑµµ(¾à 70°³) ÃÊ°ú·Î ÀÎÇÑ ±úÁü Çö»óÀ¸·Î ¸Þ½¬º° º» °¹¼ö º¯°æ (»çÇÇ 3Á¾ + °íºí¸° ½Ãµå ¸¶½ºÅÍ + ÅäÅÛ °ñ·½) (10.01.20)

	#define LDS_MR0_FIX_BREAKVISUAL_DOPPELGANGER_CHARACTER		// µµÇÃ°»¾î¸ÊÀÇ "µµÇÃ°»¾î" ¸ó½ºÅÍÀÇ ¿¹¿ÜÀû RenderMesh, RenderBody È£Ãâ·Î ÀÎÇÑ TM ¾ð¸ÅÄ¡·Î ±úÁüÇö»ó¹ß»ý-> SetTargetObject() ¹­¾îÁÖ°í, Move´Ü°è¿¡¼­ È£ÃâµÈ RenderBody¸¦ RenderMonsterVisual·Î À§Ä¡ ÀÌµ¿. (10.02.03)

	#define LDS_MR0_MOD_SET_LOWRENDERER_INIT					// ±âÁ¸ ºñÁÖ¾ó ¹öÀü¿¡ ¸ÂÃß±â À§ÇØ LOWRENDERER ·Î °­Á¦ ¼³Á¤ ÇÕ´Ï´Ù. (2010.03.30)

	// 3. MR0:For TESTDEBUG
	#ifdef _DEBUG
		#define LDS_MR0_FORDEBUG_USERRESPOND_BEINGVPMANAGERENABLE// ÇöÀç VPMANAGER°¡ Enable »óÅÂ ÀÎÁö ¿©ºÎ¸¦ ¹ÝÈ¯ ÇÕ´Ï´Ù.
		#define LDS_MR0_FORDEBUG_VERIFYCONVERTMESH				// ConvertMesh·Î º¯È¯µÈ VBOMeshÀÇ °ËÁõÀ» Ãâ·Â ÇÕ´Ï´Ù. (2009.01.15)
		#define LDS_MR0_FORDEBUG_CALCTRANFROMBYCPU				// Transform À» CPU·Î ¿¬»ê ÇÕ´Ï´Ù. (2009.02.02)

		// For Debug
		#define LDS_FOR_DEVELOPMENT_TESTMODE					// Debug Á¤º¸ Ãâ·Â (LDS_UNFIXED_FIXEDFRAME_FORDEBUG Æ÷ÇÔ)
		#define CSK_LH_DEBUG_CONSOLE							// ÄÜ¼Ö·Î µð¹ö±ë Á¤º¸ ³²±â´Â Ã³¸®(2007.03.20)
		//#define ENABLE_FULLSCREEN								// Ç®½ºÅ©¸°	(°£È¤ Release(»ç³»Å×½ºÆ®¿ë)½Ã¿¡ ÀüÃ¼È­¸é ±â´ÉÀ» ¿øÇÏ´Â °æ¿ì°¡ ÀÖÀ½.)

		// Output GL Error 
		#define LDS_MR0_OUTPUT_GLERROR_IN_BITMAPLOAD			// Output OpenGL Error In Jpeg, Tga Loading Function (2009.02.19)
		#define LDS_MR0_OUTPUT_GLERROR_INNER_GLRENDERER			// GL Renderer ³»ºÎÀÇ GLERROR ´ÜÀ§ ÄÚµå¸¦ ½É¾î ³õ½À´Ï´Ù. (2009.02.26)
		#define LDS_MR0_OUTPUT_GLERROR_GENERAL					// 
	#endif // _DEBUG

	// 4. MR0:For Temporary 
	#define LDS_MR0_TEMPORARY
	#ifdef LDS_MR0_TEMPORARY
		#define LDS_MR0_FORDEBUG_MESHALLWAYS_VSTYPE				// MR0 ¸Þ½¬ Å¸ÀÔÀ» Ç×»ó VBO·Î ¼³Á¤ ÇÕ´Ï´Ù. PBO ±¸Çö ¹Ì¿Ï¼º 
		#define LDS_MR0_FIXED_RIGHT_SHADER_MAXPARAM_VALUE		// Env Param, Local Param °¹¼ö°¡ ½ÇÁ¦ OpenGL¿¡¼­ Á¦°øµÇ´Â °¹¼ö·Î º¯°æ (2009.04.02)
		#define LDS_MR0_FIX_ALLPETOBJECT_RENDERINGPASSEDWAY		// Æê¸Þ´ÏÀú¿¡¼­ ±×·ÁÁö´Â ¸ðµ¨µé(µ¥¸ó,¼öÈ£Á¤·É,Ææ´õ,·çµ¹ÇÁµîµî..)Àº ShaderRender°¡ ¾Æ´Ñ ±âÁ¸ VertexRender ÇÕ´Ï´Ù.- ÀÓ½ÃÀû ¿øÀÎ ºÒ¸í¿À·ù. (09.12.01)
//		#define LDS_MR0_FIXED_SHADERPARAM_WHICH_MODEL_BREAKED_DUETO_BONE	// Shader¿¡¼­ DrawCall ÇÑ¹ø´ç º» ÆÄ¶ó¹ÌÅÍ 64°³ ÀÌ»ó ³Ñ±æ ¼ö ¾ø´Â ¿À·ù¸¦ ¼öÁ¤ÇÏ±â À§ÇØ 
																			// °¹¼ö Á¦ÇÑ 256°³¸¸ ¼±¾ðµÉ ¼ö ÀÖ´Â env param¿¡¼­ 1024°³ÀÎ local paramÀ¸·Î º¯°æ (data\MixShader\Definitions.txt, data\Shader\shadowmap.vsh ½¦ÀÌ´õ ÆÄÀÏ ¼öÁ¤ )(2009.04.14)
	#endif // LDS_MR0_TEMPORARY

#endif //MR0
/*--------------------------------------------------------------------------------------*/


/*--------------------------------------------------------------------------------------*/

#define WM_USER_MEMORYHACK	( WM_USER + 1)
#define WM_NPROTECT_EXIT_TWO  (WM_USER + 10001)

//#define PBG_ADD_INGAMESHOP_FONT

extern bool ashies;
extern int weather;
extern int Time_Effect;
extern HWND      g_hWnd;
extern HINSTANCE g_hInst;
extern HDC       g_hDC;
extern HGLRC     g_hRC;
extern HFONT     g_hFont;
extern HFONT     g_hFontBold;
extern HFONT     g_hFontBig;
extern HFONT     g_hFixFont;
#ifdef PBG_ADD_INGAMESHOP_FONT
extern HFONT	 g_hInGameShopFont;
#endif //PBG_ADD_INGAMESHOP_FONT
//extern HFONT     g_hFontSmall;
extern bool      Destroy;
extern int       RandomTable[];
extern char      *Language;

extern char m_ID[];
extern char m_Version[];
extern int  m_SoundOnOff;
extern int  m_MusicOnOff;
extern int  m_Resolution;
extern int m_nColorDepth;	

void MouseUpdate();
extern void CheckHack( void);
extern void CloseHack(HWND shWnd,bool Flag);
extern DWORD GetCheckSum( WORD wKey);
extern void StopMp3(char *Name, BOOL bEnforce=false);
extern void PlayMp3(char *Name, BOOL bEnforce=false);
extern bool IsEndMp3();
#ifdef YDG_ADD_DOPPELGANGER_SOUND
extern int GetMp3PlayPosition();
#endif	// YDG_ADD_DOPPELGANGER_SOUND
extern unsigned int GenID();

extern void CloseMainExe( void);
extern GLvoid KillGLWindow(GLvoid);
extern void DestroyWindow();
extern void DestroySound();

/*-------------------- Macro --------------------*/

/*----------------------- µð¹ö±ë¿ë ¸ðµâµé --------------------------------------------------*/
#ifdef DO_PROFILING
	#include "Profiler.h"
	extern CProfiler	*g_pProfiler;
#endif // DO_PROFILING

#ifdef DO_PROFILING_FOR_LOADING
	#include "Profiler.h"
	extern CProfiler	*g_pProfilerForLoading;
#endif // DO_PROFILING_FOR_LOADING

#ifdef DO_PROCESS_DEBUGCAMERA
	#include "DebugCameraManager.h"
	//#include "./Utilities/DebugCamera/DebugCameraManager.h"
	extern CDebugCameraManager *g_pDebugCameraManager;
#endif // DO_PROCESS_DEBUGCAMERA

#if defined(LDS_FOR_DEVELOPMENT_TESTMODE) || defined(LDS_UNFIXED_FIXEDFRAME_FORDEBUG)
	extern bool g_bUnfixedFixedFrame;
#endif // defined(LDS_FOR_DEVELOPMENT_TESTMODE) || defined(LDS_UNFIXED_FIXEDFRAME_FORDEBUG)

#if defined _DEBUG || defined PBG_LOG_PACKET_WINSOCKERROR
	#include "./Utilities/Log/DebugAngel.h"
#define ExecutionLog	DebugAngel_Write
#else
#define ExecutionLog	{}
#endif //_DEBUG

#ifdef USE_CRT_DEBUG				
	#define _CRTDBG_MAP_ALLOC
	#include <stdlib.h>
	#include <crtdbg.h>
	#define new new(_NORMAL_BLOCK, __FILE__, __LINE__)
#endif // USE_CRT_DEBUG

/*-------------------------------------------------------------------------------------------*/


/*----------------------- MR0 ¸ðµâµé --------------------------------------------------*/

#ifdef MR0
	#ifdef LDS_MR0_FIXED_RIGHT_SHADER_MAXPARAM_VALUE
		#define MR0_MAX_PARAMETERS			1024
		#define MR0_MAX_ENV_PARAMETERS		256
		#define MR0_MAX_LOCAL_PARAMETERS	1024
	#endif // LDS_MR0_FIXED_RIGHT_SHADER_MAXPARAM_VALUE

	#ifdef LDS_MR0_FIXED_SHADERPARAM_WHICH_MODEL_BREAKED_DUETO_BONE
		#define NUM_PRERESERVED_PARAM_GPUREGISTER	10
	#endif // LDS_MR0_FIXED_SHADERPARAM_WHICH_MODEL_BREAKED_DUETO_BONE
#endif // MR0
/*-------------------------------------------------------------------------------------------*/

#define FAKE_CODE( pos)\
	_asm { jmp pos };\
	_asm { __emit 0xFF };\
	_asm { __emit 0x15 }


#endif
