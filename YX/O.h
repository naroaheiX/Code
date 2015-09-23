// O.h : main header file for the O application
//

#if !defined(AFX_O_H__5871EF8B_43A7_4FC2_8816_06E559921490__INCLUDED_)
#define AFX_O_H__5871EF8B_43A7_4FC2_8816_06E559921490__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"	// main symbols

#include "Comm_Thread.h"
/////////////////////////////////////////////////////////////////////////////
// COApp:
// See O.cpp for the implementation of this class
//

class COApp : public CWinApp
{
public:
	COApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(COApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation

	//{{AFX_MSG(COApp)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
public:
	unsigned char x_Port,x_Order,x_Address;
    CComm_Thread * x_pCommThread;
    unsigned int uiLed[6], Snum, Rnum, Enum, MilliSecondH;
public:
    unsigned char Year,Month,Day,Hour,Minute,Second,MilliSecondL,Eledpos,Etype;
    CString year,month,day;
	char hour,minute,second;
    float edition,pbt;
	unsigned char JH[36],JL[36],optional;
	CString test;
	BOOL x_stop,ChkOff,ChkOn,bEnum,ChkClock,B;
	int ChkMsg;
	BOOL NewEvent1,NewEvent2,NewEvent3,NewEvent4,NewEvent5,NoneEvent;
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_O_H__5871EF8B_43A7_4FC2_8816_06E559921490__INCLUDED_)
