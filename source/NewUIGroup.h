//=============================================================================
//
//	NewUIGroup.h
//
//	Copyright 2010 Webzen Mu-Studio
//
//=============================================================================
#ifndef _NEWUIGROUP_H_
#define _NEWUIGROUP_H_

#ifdef KJW_ADD_NEWUI_GROUP
#pragma once
#include "NewUIBase.h"
#include <vector>

namespace SEASON3B
{
	class CNewUIGroup : public CNewUIObj
	{
		typedef std::vector<CNewUIObj*>		type_vector_uibase;
		type_vector_uibase	m_vecUI;		//. for rendering and updating
		
	private:
		float m_fLayerDepth;
		float m_fKeyEventOrder;

	public:
		CNewUIGroup();
		virtual ~CNewUIGroup();
		
		void AddUIObj( CNewUIObj* pUIObj );
		
		virtual bool Render();
		virtual bool Update();
		virtual bool UpdateMouseEvent();
		virtual bool UpdateKeyEvent();
		
		virtual void Release();
		
		void SetKeyEventOrder( float fOrder ){ m_fKeyEventOrder = fOrder; }
		float GetKeyEventOrder(){ return m_fKeyEventOrder; }
		
		void SetLayerDepth( float fDepth ){ m_fLayerDepth = fDepth; }
		float GetLayerDepth(){ return  m_fLayerDepth; }
	};
}
#endif // KJW_ADD_NEWUI_GROUP
#endif // _NEWUIGROUP_H_

