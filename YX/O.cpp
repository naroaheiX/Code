// O.cpp : Defines the class behaviors for the application.
//

#include "stdafx.h"
#include "O.h"
#include "ODlg.h"
#include "stdlib.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// COApp

BEGIN_MESSAGE_MAP(COApp, CWinApp)
	//{{AFX_MSG_MAP(COApp)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG
	ON_COMMAND(ID_HELP, CWinApp::OnHelp)
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// COApp construction

COApp::COApp()
{
	// TODO: add construction code here,
	// Place all significant initialization in InitInstance
	memset(uiLed,255,sizeof(uiLed));
	memset(JH,0,sizeof(JH));
	memset(JL,0,sizeof(JL));
	x_Address=0;
	x_Port=1;
	Year=0;
	Month=0;
	Day=0;
	Hour=0;
	Minute=0;
	Second=1;
	x_stop=true;
	B=true;
	ChkOff=false;
	ChkOn=false;
	bEnum=false;
	ChkClock=true;
	optional=0;
	Enum=0;
	Snum=0;
	Rnum=0;
	pbt=0;
	NewEvent1=true;
	NewEvent2=true;
	NewEvent3=true;
	NewEvent4=true;
	NewEvent5=true;
	NoneEvent=true;
}

/////////////////////////////////////////////////////////////////////////////
// The one and only COApp object

COApp theApp;

/////////////////////////////////////////////////////////////////////////////
// COApp initialization

BOOL COApp::InitInstance()
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

	CODlg dlg;
	m_pMainWnd = &dlg;
	x_pCommThread=(CComm_Thread*)AfxBeginThread(RUNTIME_CLASS(CComm_Thread));
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
