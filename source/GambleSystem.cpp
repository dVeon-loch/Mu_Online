// GambleSystem.cpp: implementation of the GembleSystem class.
//
//////////////////////////////////////////////////////////////////////
#include "stdafx.h"
#include "GambleSystem.h"

#ifdef LDK_ADD_GAMBLE_SYSTEM

//////////////////////////////////////////////////////////////////////
// Sington Instance
//////////////////////////////////////////////////////////////////////

GambleSystem& GambleSystem::Instance()
{
	static GambleSystem s_GambleSys;                  
	return s_GambleSys;
}

//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////

GambleSystem::~GambleSystem()
{

}

void GambleSystem::Init()
{
	m_isGambleShop = false;
	m_byBuyItemPos = 0;
}

#endif //LDK_ADD_GAMBLE_SYSTEM
