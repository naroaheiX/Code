// YK.cpp : Defines the class behaviors for the application.
//

#include "stdafx.h"
#include "YK.h"
#include "YKDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CYKApp

BEGIN_MESSAGE_MAP(CYKApp, CWinApp)
	//{{AFX_MSG_MAP(CYKApp)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG
	ON_COMMAND(ID_HELP, CWinApp::OnHelp)
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CYKApp construction

CYKApp::CYKApp()
{
	// TODO: add construction code here,
	// Place all significant initialization in InitInstance
	x_Port=1;
	x_Address=0;
	x_Accuracy=0;
	x_BaudOrder=x_ParityOrder=x_StopOrder=0;
	x_MsgS=x_MsgR=0;
	x_Previous=0;
	x_RelayAct=0x00;
	x_RelayItem=0x00;
}

/////////////////////////////////////////////////////////////////////////////
// The one and only CYKApp object

CYKApp theApp;

/////////////////////////////////////////////////////////////////////////////
// CYKApp initialization

BOOL CYKApp::InitInstance()
{
	AfxEnableControlContainer();

	// Standard initialization
	// If you are not using these features and wish to reduce the size
	//  of your final executable, you should remove from the following
	//  the specific initialization routines you do not need.

#ifdef _AFXDLL
	Enable3dControls();			// Call this when using MFC in a shared DLL
#else
	Enable3dControlsStatic();	// Call this when linking to MFC statically
#endif

	x_pBGThread=(CBGThread*)AfxBeginThread(RUNTIME_CLASS(CBGThread));
	CYKDlg dlg;
	m_pMainWnd = &dlg;
	int nResponse = dlg.DoModal();
	if (nResponse == IDOK)
	{
		// TODO: Place code here to handle when the dialog is
		//  dismissed with OK
	}
	else if (nResponse == IDCANCEL)
	{
		// TODO: Place code here to handle when the dialog is
		//  dismissed with Cancel
	}

	// Since the dialog has been closed, return FALSE so that we exit the
	//  application, rather than start the application's message pump.
	return FALSE;
}