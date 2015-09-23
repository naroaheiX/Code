// YK.h : main header file for the YK application
//

#if !defined(AFX_YK_H__6D2A73F0_9F0E_4755_94A2_9E5B534C1016__INCLUDED_)
#define AFX_YK_H__6D2A73F0_9F0E_4755_94A2_9E5B534C1016__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"		// main symbols
#include "BGThread.h"
/////////////////////////////////////////////////////////////////////////////
// CYKApp:
// See YK.cpp for the implementation of this class
//

class CYKApp : public CWinApp
{
public:
	CYKApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CYKApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation
	public:
		CBGThread* x_pBGThread;
		unsigned char x_Port,x_BaudOrder,x_ParityOrder,x_StopOrder;
		CString x_Note;
		float x_Edition,x_Accuracy;
		unsigned char x_RelayAct,x_RelayItem,x_Address,x_Previous;
		unsigned int x_MsgS,x_MsgR;
	//{{AFX_MSG(CYKApp)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_YK_H__6D2A73F0_9F0E_4755_94A2_9E5B534C1016__INCLUDED_)
