// w_BuffTimeControl.h: interface for the BuffTimeControl class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_W_BUFFTIMECONTROL_H__BBD38A0F_DFE7_4E2E_893A_39A5C7C0803C__INCLUDED_)
#define AFX_W_BUFFTIMECONTROL_H__BBD38A0F_DFE7_4E2E_893A_39A5C7C0803C__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

BoostSmartPointer( BuffTimeControl );
class BuffTimeControl
{
public:
	static BuffTimeControlPtr Make();
	virtual ~BuffTimeControl();

public:
#ifdef KWAK_FIX_COMPILE_LEVEL4_WARNING
	void RegisterBuffTime( eBuffState bufftype, int curbufftime );
#else // KWAK_FIX_COMPILE_LEVEL4_WARNING
	void RegisterBuffTime( eBuffState bufftype, DWORD curbufftime );
#endif // KWAK_FIX_COMPILE_LEVEL4_WARNING
	bool UnRegisterBuffTime( eBuffState bufftype );
	bool IsBuffTime( eBuffTimeType bufftype );

public:
	void GetBuffStringTime( eBuffState bufftype, string& timeText );
	void GetBuffStringTime( DWORD type, string& timeText, bool issecond = true );
	const DWORD GetBuffTime( DWORD type );
	void GetStringTime( DWORD time, string& timeText, bool isSecond = true );

public:
	bool HandleWindowMessage( UINT message, WPARAM wParam, LPARAM lParam, LRESULT& result );

private:
	eBuffTimeType CheckBuffTimeType( eBuffState bufftype );
	DWORD GetBuffEventTime( eBuffTimeType bufftimetype );
#ifdef KWAK_FIX_COMPILE_LEVEL4_WARNING
	int GetBuffMaxTime( eBuffState bufftype, int curbufftime = 0 );
#else // KWAK_FIX_COMPILE_LEVEL4_WARNING
	DWORD GetBuffMaxTime( eBuffState bufftype, DWORD curbufftime = 0 );
#endif // KWAK_FIX_COMPILE_LEVEL4_WARNING
	bool CheckBuffTime( DWORD type );
	BuffTimeControl();

private:
	struct BuffTimeInfo 
	{
		eBuffState s_BuffType;
		DWORD    s_CurBuffTime;
		DWORD    s_EventBuffTime;

		BuffTimeInfo() : s_BuffType(eBuffNone), s_CurBuffTime(0), s_EventBuffTime(0) {}
	};
	typedef map<DWORD, BuffTimeInfo>		BuffTimeInfoMap;

private:
	BuffTimeInfoMap		m_BuffTimeList;
};

#endif // !defined(AFX_W_BUFFTIMECONTROL_H__BBD38A0F_DFE7_4E2E_893A_39A5C7C0803C__INCLUDED_)
