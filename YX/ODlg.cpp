// ODlg.cpp : implementation file
//

#include "stdafx.h"
#include "O.h"
#include "ODlg.h"
//#include "string.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CAboutDlg dialog used for App About

class CAboutDlg : public CDialog
{
public:
	CAboutDlg();

// Dialog Data
	//{{AFX_DATA(CAboutDlg)
	enum { IDD = IDD_ABOUTBOX };
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CAboutDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	//{{AFX_MSG(CAboutDlg)
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

CAboutDlg::CAboutDlg() : CDialog(CAboutDlg::IDD)
{
	//{{AFX_DATA_INIT(CAboutDlg)
	//}}AFX_DATA_INIT
}

void CAboutDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CAboutDlg)
	//}}AFX_DATA_MAP
}

BEGIN_MESSAGE_MAP(CAboutDlg, CDialog)
	//{{AFX_MSG_MAP(CAboutDlg)
		// No message handlers
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CODlg dialog

CODlg::CODlg(CWnd* pParent /*=NULL*/)
	: CDialog(CODlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(CODlg)
	m_lJitter = 20;
	m_iRadio = 0;
	m_iDay = 0;
	m_iHour = 0;
	m_iMinute = 0;
	m_iMonth = 0;
	m_iSecond = 0;
	m_iYear = 0;
	m_iEdit37 = 20;
	m_iEdit38 = 20;
	m_iEdit39 = 20;
	m_iEdit40 = 20;
	m_iEdit41 = 20;
	m_iEdit42 = 20;
	m_iEdit43 = 20;
	m_iEdit44 = 20;
	m_iEdit45 = 20;
	m_iEdit46 = 20;
	m_iEdit47 = 20;
	m_iEdit48 = 20;
	m_iEdit49 = 20;
	m_iEdit50 = 20;
	m_iEdit51 = 20;
	m_iEdit52 = 20;
	m_iEdit53 = 20;
	m_iEdit54 = 20;
	m_iEdit55 = 20;
	m_iEdit56 = 20;
	m_iEdit57 = 20;
	m_iEdit58 = 20;
	m_iEdit59 = 20;
	m_iEdit60 = 20;
	m_iEdit61 = 20;
	m_iEdit62 = 20;
	m_iEdit63 = 20;
	m_iEdit64 = 20;
	m_iEdit65 = 20;
	m_iEdit66 = 20;
	m_iEdit67 = 20;
	m_iEdit68 = 20;
	m_iEdit69 = 20;
	m_iEdit70 = 20;
	m_iEdit71 = 20;
	m_iEdit72 = 20;
	m_RNum = 0;
	m_SNum = 0;
	m_Enum = 0;
	m_ErrNum = 0;
	//}}AFX_DATA_INIT
	// Note that LoadIcon does not require a subsequent DestroyIcon in Win32
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CODlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CODlg)
	DDX_Control(pDX, IDC_STC_BITMAP, m_YXClock);
	DDX_Control(pDX, IDC_EDIT72, m_NE72);
	DDX_Control(pDX, IDC_EDIT71, m_NE71);
	DDX_Control(pDX, IDC_EDIT70, m_NE70);
	DDX_Control(pDX, IDC_EDIT69, m_NE69);
	DDX_Control(pDX, IDC_EDIT68, m_NE68);
	DDX_Control(pDX, IDC_EDIT67, m_NE67);
	DDX_Control(pDX, IDC_EDIT66, m_NE66);
	DDX_Control(pDX, IDC_EDIT65, m_NE65);
	DDX_Control(pDX, IDC_EDIT64, m_NE64);
	DDX_Control(pDX, IDC_EDIT63, m_NE63);
	DDX_Control(pDX, IDC_EDIT62, m_NE62);
	DDX_Control(pDX, IDC_EDIT61, m_NE61);
	DDX_Control(pDX, IDC_EDIT60, m_NE60);
	DDX_Control(pDX, IDC_EDIT59, m_NE59);
	DDX_Control(pDX, IDC_EDIT58, m_NE58);
	DDX_Control(pDX, IDC_EDIT57, m_NE57);
	DDX_Control(pDX, IDC_EDIT56, m_NE56);
	DDX_Control(pDX, IDC_EDIT55, m_NE55);
	DDX_Control(pDX, IDC_EDIT54, m_NE54);
	DDX_Control(pDX, IDC_EDIT53, m_NE53);
	DDX_Control(pDX, IDC_EDIT52, m_NE52);
	DDX_Control(pDX, IDC_EDIT51, m_NE51);
	DDX_Control(pDX, IDC_EDIT50, m_NE50);
	DDX_Control(pDX, IDC_EDIT49, m_NE49);
	DDX_Control(pDX, IDC_EDIT48, m_NE48);
	DDX_Control(pDX, IDC_EDIT47, m_NE47);
	DDX_Control(pDX, IDC_EDIT46, m_NE46);
	DDX_Control(pDX, IDC_EDIT45, m_NE45);
	DDX_Control(pDX, IDC_EDIT44, m_NE44);
	DDX_Control(pDX, IDC_EDIT43, m_NE43);
	DDX_Control(pDX, IDC_EDIT42, m_NE42);
	DDX_Control(pDX, IDC_EDIT41, m_NE41);
	DDX_Control(pDX, IDC_EDIT40, m_NE40);
	DDX_Control(pDX, IDC_EDIT39, m_NE39);
	DDX_Control(pDX, IDC_EDIT38, m_NE38);
	DDX_Control(pDX, IDC_EDIT37, m_NE37);
	DDX_Control(pDX, IDC_EDT_DAY, m_NE2Day);
	DDX_Control(pDX, IDC_EDT_HOUR, m_NE2Hour);
	DDX_Control(pDX, IDC_EDT_JITTER, m_NE2Jitter);
	DDX_Control(pDX, IDC_EDT_MINUTE, m_NE2Minute);
	DDX_Control(pDX, IDC_EDT_MONTH, m_NE2Month);
	DDX_Control(pDX, IDC_EDT_SECOND, m_NE2Second);
	DDX_Control(pDX, IDC_EDT_YEAR, m_NE2Year);
	DDX_Control(pDX, IDC_BOARD, m_NewEdit);
	DDX_Control(pDX, IDC_COB_BAUDRATE, m_cbbBaudRate);
	DDX_Control(pDX, IDC_STC_LED36, m_Led36);
	DDX_Control(pDX, IDC_STC_LED35, m_Led35);
	DDX_Control(pDX, IDC_STC_LED34, m_Led34);
	DDX_Control(pDX, IDC_STC_LED33, m_Led33);
	DDX_Control(pDX, IDC_STC_LED32, m_Led32);
	DDX_Control(pDX, IDC_STC_LED31, m_Led31);
	DDX_Control(pDX, IDC_STC_LED30, m_Led30);
	DDX_Control(pDX, IDC_STC_LED29, m_Led29);
	DDX_Control(pDX, IDC_STC_LED28, m_Led28);
	DDX_Control(pDX, IDC_STC_LED27, m_Led27);
	DDX_Control(pDX, IDC_STC_LED26, m_Led26);
	DDX_Control(pDX, IDC_STC_LED25, m_Led25);
	DDX_Control(pDX, IDC_STC_LED24, m_Led24);
	DDX_Control(pDX, IDC_STC_LED23, m_Led23);
	DDX_Control(pDX, IDC_STC_LED22, m_Led22);
	DDX_Control(pDX, IDC_STC_LED21, m_Led21);
	DDX_Control(pDX, IDC_STC_LED20, m_Led20);
	DDX_Control(pDX, IDC_STC_LED19, m_Led19);
	DDX_Control(pDX, IDC_STC_LED18, m_Led18);
	DDX_Control(pDX, IDC_STC_LED17, m_Led17);
	DDX_Control(pDX, IDC_STC_LED16, m_Led16);
	DDX_Control(pDX, IDC_STC_LED15, m_Led15);
	DDX_Control(pDX, IDC_STC_LED14, m_Led14);
	DDX_Control(pDX, IDC_STC_LED13, m_Led13);
	DDX_Control(pDX, IDC_STC_LED12, m_Led12);
	DDX_Control(pDX, IDC_STC_LED11, m_Led11);
	DDX_Control(pDX, IDC_STC_LED10, m_Led10);
	DDX_Control(pDX, IDC_STC_LED09, m_Led09);
	DDX_Control(pDX, IDC_STC_LED08, m_Led08);
	DDX_Control(pDX, IDC_STC_LED07, m_Led07);
	DDX_Control(pDX, IDC_STC_LED06, m_Led06);
	DDX_Control(pDX, IDC_STC_LED05, m_Led05);
	DDX_Control(pDX, IDC_STC_LED04, m_Led04);
	DDX_Control(pDX, IDC_STC_LED03, m_Led03);
	DDX_Control(pDX, IDC_STC_LED02, m_Led02);
	DDX_Control(pDX, IDC_STC_LED01, m_Led01);
	DDX_Control(pDX, IDC_BTN_COM, m_ctlComBtn);
	DDX_Control(pDX, IDC_COB_COM, m_cbbBox);
	DDX_Text(pDX, IDC_EDT_JITTER, m_lJitter);
	DDV_MinMaxInt(pDX, m_lJitter, 10, 60000);
	DDX_Radio(pDX, IDC_RADIO1, m_iRadio);
	DDX_Text(pDX, IDC_EDT_DAY, m_iDay);
	DDV_MinMaxInt(pDX, m_iDay, 0, 31);
	DDX_Text(pDX, IDC_EDT_HOUR, m_iHour);
	DDV_MinMaxInt(pDX, m_iHour, 0, 24);
	DDX_Text(pDX, IDC_EDT_MINUTE, m_iMinute);
	DDV_MinMaxInt(pDX, m_iMinute, 0, 59);
	DDX_Text(pDX, IDC_EDT_MONTH, m_iMonth);
	DDV_MinMaxInt(pDX, m_iMonth, 0, 12);
	DDX_Text(pDX, IDC_EDT_SECOND, m_iSecond);
	DDV_MinMaxInt(pDX, m_iSecond, 0, 59);
	DDX_Text(pDX, IDC_EDT_YEAR, m_iYear);
	DDV_MinMaxInt(pDX, m_iYear, 0, 99);
	DDX_Text(pDX, IDC_EDIT37, m_iEdit37);
	DDV_MinMaxInt(pDX, m_iEdit37, 10, 60000);
	DDX_Text(pDX, IDC_EDIT38, m_iEdit38);
	DDV_MinMaxInt(pDX, m_iEdit38, 10, 60000);
	DDX_Text(pDX, IDC_EDIT39, m_iEdit39);
	DDV_MinMaxInt(pDX, m_iEdit39, 10, 60000);
	DDX_Text(pDX, IDC_EDIT40, m_iEdit40);
	DDV_MinMaxInt(pDX, m_iEdit40, 10, 60000);
	DDX_Text(pDX, IDC_EDIT41, m_iEdit41);
	DDV_MinMaxInt(pDX, m_iEdit41, 10, 60000);
	DDX_Text(pDX, IDC_EDIT42, m_iEdit42);
	DDV_MinMaxInt(pDX, m_iEdit42, 10, 60000);
	DDX_Text(pDX, IDC_EDIT43, m_iEdit43);
	DDV_MinMaxInt(pDX, m_iEdit43, 10, 60000);
	DDX_Text(pDX, IDC_EDIT44, m_iEdit44);
	DDV_MinMaxInt(pDX, m_iEdit44, 10, 60000);
	DDX_Text(pDX, IDC_EDIT45, m_iEdit45);
	DDV_MinMaxInt(pDX, m_iEdit45, 10, 60000);
	DDX_Text(pDX, IDC_EDIT46, m_iEdit46);
	DDV_MinMaxInt(pDX, m_iEdit46, 10, 60000);
	DDX_Text(pDX, IDC_EDIT47, m_iEdit47);
	DDV_MinMaxInt(pDX, m_iEdit47, 10, 60000);
	DDX_Text(pDX, IDC_EDIT48, m_iEdit48);
	DDV_MinMaxInt(pDX, m_iEdit48, 10, 60000);
	DDX_Text(pDX, IDC_EDIT49, m_iEdit49);
	DDV_MinMaxInt(pDX, m_iEdit49, 10, 60000);
	DDX_Text(pDX, IDC_EDIT50, m_iEdit50);
	DDV_MinMaxInt(pDX, m_iEdit50, 10, 60000);
	DDX_Text(pDX, IDC_EDIT51, m_iEdit51);
	DDV_MinMaxInt(pDX, m_iEdit51, 10, 60000);
	DDX_Text(pDX, IDC_EDIT52, m_iEdit52);
	DDV_MinMaxInt(pDX, m_iEdit52, 10, 60000);
	DDX_Text(pDX, IDC_EDIT53, m_iEdit53);
	DDV_MinMaxInt(pDX, m_iEdit53, 10, 60000);
	DDX_Text(pDX, IDC_EDIT54, m_iEdit54);
	DDV_MinMaxInt(pDX, m_iEdit54, 10, 60000);
	DDX_Text(pDX, IDC_EDIT55, m_iEdit55);
	DDV_MinMaxInt(pDX, m_iEdit55, 10, 60000);
	DDX_Text(pDX, IDC_EDIT56, m_iEdit56);
	DDV_MinMaxInt(pDX, m_iEdit56, 10, 60000);
	DDX_Text(pDX, IDC_EDIT57, m_iEdit57);
	DDV_MinMaxInt(pDX, m_iEdit57, 10, 60000);
	DDX_Text(pDX, IDC_EDIT58, m_iEdit58);
	DDV_MinMaxInt(pDX, m_iEdit58, 10, 60000);
	DDX_Text(pDX, IDC_EDIT59, m_iEdit59);
	DDV_MinMaxInt(pDX, m_iEdit59, 10, 60000);
	DDX_Text(pDX, IDC_EDIT60, m_iEdit60);
	DDV_MinMaxInt(pDX, m_iEdit60, 10, 60000);
	DDX_Text(pDX, IDC_EDIT61, m_iEdit61);
	DDV_MinMaxInt(pDX, m_iEdit61, 10, 60000);
	DDX_Text(pDX, IDC_EDIT62, m_iEdit62);
	DDV_MinMaxInt(pDX, m_iEdit62, 10, 60000);
	DDX_Text(pDX, IDC_EDIT63, m_iEdit63);
	DDV_MinMaxInt(pDX, m_iEdit63, 10, 60000);
	DDX_Text(pDX, IDC_EDIT64, m_iEdit64);
	DDV_MinMaxInt(pDX, m_iEdit64, 10, 60000);
	DDX_Text(pDX, IDC_EDIT65, m_iEdit65);
	DDV_MinMaxInt(pDX, m_iEdit65, 10, 60000);
	DDX_Text(pDX, IDC_EDIT66, m_iEdit66);
	DDV_MinMaxInt(pDX, m_iEdit66, 10, 60000);
	DDX_Text(pDX, IDC_EDIT67, m_iEdit67);
	DDV_MinMaxInt(pDX, m_iEdit67, 10, 60000);
	DDX_Text(pDX, IDC_EDIT68, m_iEdit68);
	DDV_MinMaxInt(pDX, m_iEdit68, 10, 60000);
	DDX_Text(pDX, IDC_EDIT69, m_iEdit69);
	DDV_MinMaxInt(pDX, m_iEdit69, 10, 60000);
	DDX_Text(pDX, IDC_EDIT70, m_iEdit70);
	DDV_MinMaxInt(pDX, m_iEdit70, 10, 60000);
	DDX_Text(pDX, IDC_EDIT71, m_iEdit71);
	DDV_MinMaxInt(pDX, m_iEdit71, 10, 60000);
	DDX_Text(pDX, IDC_EDIT72, m_iEdit72);
	DDV_MinMaxInt(pDX, m_iEdit72, 10, 60000);
	DDX_Text(pDX, IDC_EDT_RNUM, m_RNum);
	DDX_Text(pDX, IDC_EDT_SNUM, m_SNum);
	DDX_Text(pDX, IDC_EDT_EVENTNUM, m_Enum);
	DDV_MinMaxInt(pDX, m_Enum, 0, 1000);
	DDX_Text(pDX, IDC_EDT_ERRNUM, m_ErrNum);
	//}}AFX_DATA_MAP
}

BEGIN_MESSAGE_MAP(CODlg, CDialog)
	//{{AFX_MSG_MAP(CODlg)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_BN_CLICKED(IDC_BTN_COM, OnCombtn)
	ON_BN_CLICKED(IDC_BTN_EDT, OnBtnEdt)
	ON_BN_CLICKED(IDC_BTN_RTIME, OnBtnRtime)
	ON_BN_CLICKED(IDC_BTN_STIME, OnBtnStime)
	ON_BN_CLICKED(IDC_BTN_JTIME, OnBtnJtime)
	ON_WM_TIMER()
	ON_BN_CLICKED(IDC_BTN_EVNT, OnBtnEvnt)
	ON_MESSAGE(WM_MSGCOMMANS,MsgCommAns)
	ON_BN_CLICKED(IDC_RADIO1, OnRadio1)
	ON_BN_CLICKED(IDC_RADIO2, OnRadio2)
	ON_BN_CLICKED(IDC_BTN_SYSTIME, OnBtnSystime)
	ON_WM_CTLCOLOR()
	ON_WM_DESTROY()
	ON_BN_CLICKED(IDC_BTN_SETSYSTIME, OnSetSysTime)
	ON_BN_CLICKED(IDC_BUTTON37, OnButton37)
	ON_BN_CLICKED(IDC_BUTTON38, OnButton38)
	ON_BN_CLICKED(IDC_BTN_CLEANEVENT, OnBtnCleanevent)
	ON_BN_CLICKED(IDC_BUTTON39, OnButton39)
	ON_BN_CLICKED(IDC_BTN_BASIC, OnBtnBasic)
	ON_BN_CLICKED(IDC_CHK_EVENT, OnChkEvent)
	ON_BN_CLICKED(IDC_BTN_STOP, OnBtnStop)
	ON_BN_CLICKED(IDC_BTN_FLSCOMM, OnBtnFlscomm)
	ON_BN_CLICKED(IDC_CHK_YXCLOCK, OnChkYxclock)
	ON_WM_ERASEBKGND()
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CODlg message handlers

BOOL CODlg::OnInitDialog()
{
	CDialog::OnInitDialog();

	// Add "About..." menu item to system menu.

	// IDM_ABOUTBOX must be in the system command range.
	ASSERT((IDM_ABOUTBOX & 0xFFF0) == IDM_ABOUTBOX);
	ASSERT(IDM_ABOUTBOX < 0xF000);

	CMenu* pSysMenu = GetSystemMenu(FALSE);
	if (pSysMenu != NULL)
	{
		CString strAboutMenu;
		strAboutMenu.LoadString(IDS_ABOUTBOX);
		if (!strAboutMenu.IsEmpty())
		{
			pSysMenu->AppendMenu(MF_SEPARATOR);
			pSysMenu->AppendMenu(MF_STRING, IDM_ABOUTBOX, strAboutMenu);
		}
	}

	// Set the icon for this dialog.  The framework does this automatically
	//  when the application's main window is not a dialog
	SetIcon(m_hIcon, TRUE);			// Set big icon
	SetIcon(m_hIcon, FALSE);		// Set small icon
	
	// TODO: Add extra initialization here

	GetDlgItem(IDC_RADIO1)->EnableWindow(false);
	GetDlgItem(IDC_RADIO2)->EnableWindow(false);
	GetDlgItem(IDC_BTN_EDT)->EnableWindow(false);
	GetDlgItem(IDC_EDT_DAY)->EnableWindow(false);
    GetDlgItem(IDC_CHK_MSG)->EnableWindow(false);
	GetDlgItem(IDC_BTN_EVNT)->EnableWindow(false);
	GetDlgItem(IDC_EDT_YEAR)->EnableWindow(false);
	GetDlgItem(IDC_EDT_HOUR)->EnableWindow(false);
	GetDlgItem(IDC_BUTTON37)->EnableWindow(false);
	GetDlgItem(IDC_BUTTON38)->EnableWindow(false);
	GetDlgItem(IDC_CHK_EVENT)->EnableWindow(false);
	GetDlgItem(IDC_BTN_BASIC)->EnableWindow(false);
	GetDlgItem(IDC_BTN_RTIME)->EnableWindow(false);
	GetDlgItem(IDC_BTN_STIME)->EnableWindow(false);
	GetDlgItem(IDC_BTN_JTIME)->EnableWindow(false);
	GetDlgItem(IDC_EDT_MONTH)->EnableWindow(false);
	GetDlgItem(IDC_EDT_MINUTE)->EnableWindow(false);
	GetDlgItem(IDC_EDT_SECOND)->EnableWindow(false);
	GetDlgItem(IDC_EDT_JITTER)->EnableWindow(false);
	GetDlgItem(IDC_BTN_SYSTIME)->EnableWindow(false);
	GetDlgItem(IDC_BTN_SETSYSTIME)->EnableWindow(false);
	GetDlgItem(IDC_BTN_CLEANEVENT)->EnableWindow(false);

	for(int a3=0;a3<36;a3++)
	{
		GetDlgItem(IDC_EDIT37+a3)->EnableWindow(false);
	}

/*	for(int i=0;i<36;i++)
	{
		((CLed*)GetDlgItem(IDC_STC_LED01+i))->SetLed(CLed::LED_COLOR_GREEN,CLed::LED_ON,CLed::LED_ROUND);		
	}
*/
	GetCom();
	m_cbbBaudRate.SetCurSel(8);

	First=false;
	bFirst=false;
	ErrNum=0;
	x_Previous1=0;
	x_Previous2=0;
	x_bmpOk.LoadBitmap(IDB_BITMAP_OK);
	x_bmpErr.LoadBitmap(IDB_BITMAP_ERR);
	
	return TRUE;  // return TRUE  unless you set the focus to a control
}

void CODlg::OnSysCommand(UINT nID, LPARAM lParam)
{
	if ((nID & 0xFFF0) == IDM_ABOUTBOX)
	{
		CAboutDlg dlgAbout;
		dlgAbout.DoModal();
	}
	else
	{
		CDialog::OnSysCommand(nID, lParam);
	}
}

// If you add a minimize button to your dialog, you will need the code below
//  to draw the icon.  For MFC applications using the document/view model,
//  this is automatically done for you by the framework.

void CODlg::OnPaint() 
{
	if (IsIconic())
	{
		CPaintDC dc(this); // device context for painting

		SendMessage(WM_ICONERASEBKGND, (WPARAM) dc.GetSafeHdc(), 0);

		// Center icon in client rectangle
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// Draw the icon
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialog::OnPaint();
	}
}

// The system calls this to obtain the cursor to display while the user drags
//  the minimized window.
HCURSOR CODlg::OnQueryDragIcon()
{
	return (HCURSOR) m_hIcon;
}

//填充背景
BOOL CODlg::OnEraseBkgnd(CDC* pDC) 
{
	BOOL retValue= CDialog::OnEraseBkgnd(pDC);

/*	CRect rc;
	GetClientRect(&rc);
	pDC->FillSolidRect(&rc,RGB(205,230,225));
*/	
	return retValue;
}

HBRUSH CODlg::OnCtlColor(CDC* pDC, CWnd* pWnd, UINT nCtlColor) 
{
	HBRUSH hbr = CDialog::OnCtlColor(pDC, pWnd, nCtlColor);
	
	// TODO: Change any attributes of the DC here
	//static颜色
/*	if (pWnd->GetDlgCtrlID()==IDC_STATIC)
	{
		pDC->SetTextColor(RGB(15,65,130));
		pDC->SetBkMode(TRANSPARENT);
    }
	//1.
	if(nCtlColor==CTLCOLOR_STATIC)
	{
		pDC->SetBkMode(TRANSPARENT); 
		HBRUSH B=CreateSolidBrush(RGB(205,230,225));
		return B;	
	}
	//2.
	switch(nCtlColor)
	{
	case CTLCOLOR_STATIC:
		pDC->SetBkMode(TRANSPARENT); 
		HBRUSH B=CreateSolidBrush(RGB(236,233,216));
		return B;	
	}
	//串口
	if(pWnd->GetDlgCtrlID()==IDC_COB_COM)
	{
		pDC->SetTextColor(RGB(236,233,216));
		pDC->SetBkColor(TRANSPARENT);
		static HBRUSH hBrush=CreateSolidBrush(RGB(236,233,216));
		return hBrush;
	}
*/	// TODO: Return a different brush if the default is not desired
	return hbr;
}

//打开串口
void CODlg::OnCombtn() 
{
	// TODO: Add your control notification handler code here
	COApp* pApp=(COApp*)AfxGetApp();
	CButton* pChkClock=(CButton*)GetDlgItem(IDC_CHK_YXCLOCK);
	CString temp;
	//1.
	//pApp->x_Port=m_cbbBox.GetCurSel()+1;
	//2.
	m_cbbBox.GetWindowText(temp);
	temp=temp.Mid(3,2);
	pApp->x_Port=atoi(temp);
	pApp->x_Order=m_cbbBaudRate.GetCurSel();

	m_ctlComBtn.GetWindowText(temp);
	if(temp=="打开串口")
	{
		PostThreadMessage(pApp->x_pCommThread->m_nThreadID,WM_MSGCOMMBTN,0x00,0xAA);
		GetDlgItem(IDC_BTN_COM)->SetWindowText("关闭串口");

		GetDlgItem(IDC_RADIO1)->EnableWindow(true);
		GetDlgItem(IDC_RADIO2)->EnableWindow(true);
		GetDlgItem(IDC_EDT_DAY)->EnableWindow(true);
	    GetDlgItem(IDC_CHK_MSG)->EnableWindow(true);
		GetDlgItem(IDC_EDT_HOUR)->EnableWindow(true);
		GetDlgItem(IDC_EDT_YEAR)->EnableWindow(true);
		GetDlgItem(IDC_COB_COM)->EnableWindow(false);
		GetDlgItem(IDC_EDT_MONTH)->EnableWindow(true);
		GetDlgItem(IDC_EDT_MINUTE)->EnableWindow(true);
		GetDlgItem(IDC_EDT_SECOND)->EnableWindow(true);
		GetDlgItem(IDC_BTN_FLSCOMM)->EnableWindow(false);
		GetDlgItem(IDC_COB_BAUDRATE)->EnableWindow(false);
		
		if(((CButton*)GetDlgItem(IDC_CHK_YXCLOCK))->GetCheck()==0)
		{
			GetDlgItem(IDC_BTN_SETSYSTIME)->EnableWindow(true);
			GetDlgItem(IDC_BTN_SYSTIME)->EnableWindow(true);
			GetDlgItem(IDC_BTN_RTIME)->EnableWindow(true);
			GetDlgItem(IDC_BTN_STIME)->EnableWindow(true);
			GetDlgItem(IDC_BTN_STOP)->EnableWindow(true);
			GetDlgItem(IDC_BTN_EDT)->EnableWindow(true);
			GetDlgItem(IDC_BUTTON37)->EnableWindow(true);
			GetDlgItem(IDC_BTN_JTIME)->EnableWindow(true);
			GetDlgItem(IDC_BTN_CLEANEVENT)->EnableWindow(true);
			GetDlgItem(IDC_BUTTON38)->EnableWindow(true);
			GetDlgItem(IDC_CHK_EVENT)->EnableWindow(true);
			GetDlgItem(IDC_BTN_BASIC)->EnableWindow(true);
			CString str="例: 15年 01月 01日 23时 59分 59秒";
			SetDlgItemText(IDC_STC_TIME,str);
		}
		if(((CButton*)GetDlgItem(IDC_CHK_YXCLOCK))->GetCheck()==1)
		{
			GetDlgItem(IDC_BTN_SETSYSTIME)->EnableWindow(false);
			GetDlgItem(IDC_BTN_SYSTIME)->EnableWindow(false);
			GetDlgItem(IDC_BTN_RTIME)->EnableWindow(false);
			GetDlgItem(IDC_BTN_STIME)->EnableWindow(false);
			GetDlgItem(IDC_BTN_STOP)->EnableWindow(false);
			GetDlgItem(IDC_BTN_EDT)->EnableWindow(false);
			GetDlgItem(IDC_BUTTON37)->EnableWindow(false);
			GetDlgItem(IDC_BTN_JTIME)->EnableWindow(false);
			GetDlgItem(IDC_BTN_CLEANEVENT)->EnableWindow(false);
			GetDlgItem(IDC_BUTTON38)->EnableWindow(false);
			GetDlgItem(IDC_CHK_EVENT)->EnableWindow(false);
			GetDlgItem(IDC_BTN_BASIC)->EnableWindow(false);
		}

		if(((CButton*)GetDlgItem(IDC_CHK_EVENT))->GetCheck()==1 || ((CButton*)GetDlgItem(IDC_CHK_YXCLOCK))->GetCheck()==1)
			GetDlgItem(IDC_BTN_EVNT)->EnableWindow(false);
		else
			GetDlgItem(IDC_BTN_EVNT)->EnableWindow(true);


/*		for(int i=0;i<36;i++)
		{
			((CLed*)GetDlgItem(IDC_STC_LED01+i))->SetLed(CLed::LED_COLOR_GREEN,CLed::LED_ON,CLed::LED_ROUND);		
		}
*/
		//根据单选按钮判断防抖窗口
		UpdateData(true);
		if(m_iRadio==0)
		{
			GetDlgItem(IDC_EDT_JITTER)->EnableWindow(true);

			for(int a3=0;a3<36;a3++)
			{
				GetDlgItem(IDC_EDIT37+a3)->EnableWindow(false);
			}
		}
		else
		{
			GetDlgItem(IDC_EDT_JITTER)->EnableWindow(false);

			for(int a3=0;a3<36;a3++)
			{
				GetDlgItem(IDC_EDIT37+a3)->EnableWindow(true);
			}
		}

		//设置定时器
		SetTimer(1001,20,NULL);

		//清理屏幕
		OnButton39();
		pApp->Snum=0;
		temp.Format("%d",pApp->Snum);
		SetDlgItemText(IDC_EDT_SNUM,temp);
		pApp->Rnum=0;
		temp.Format("%d",pApp->Rnum);
		SetDlgItemText(IDC_EDT_RNUM,temp);
		pApp->pbt=0;
		temp.Format("%.1f",pApp->pbt);
		SetDlgItemText(IDC_EDT_PBT,temp);
	}
	else
	{
		PostThreadMessage(pApp->x_pCommThread->m_nThreadID,WM_MSGCOMMBTN,0x00,0x55);
		GetDlgItem(IDC_BTN_COM)->SetWindowText("打开串口");

		GetDlgItem(IDC_COB_COM)->EnableWindow(true);
		GetDlgItem(IDC_RADIO1)->EnableWindow(false);
		GetDlgItem(IDC_RADIO2)->EnableWindow(false);
		GetDlgItem(IDC_CHK_MSG)->EnableWindow(false);
		GetDlgItem(IDC_EDT_DAY)->EnableWindow(false);
		GetDlgItem(IDC_BTN_EDT)->EnableWindow(false);
		GetDlgItem(IDC_EDT_HOUR)->EnableWindow(false);
		GetDlgItem(IDC_BTN_EVNT)->EnableWindow(false);
		GetDlgItem(IDC_EDT_YEAR)->EnableWindow(false);
		GetDlgItem(IDC_BUTTON37)->EnableWindow(false);
		GetDlgItem(IDC_BUTTON38)->EnableWindow(false);
		GetDlgItem(IDC_BTN_RTIME)->EnableWindow(false);
		GetDlgItem(IDC_BTN_STIME)->EnableWindow(false);
		GetDlgItem(IDC_BTN_JTIME)->EnableWindow(false);
		GetDlgItem(IDC_EDT_MONTH)->EnableWindow(false);
		GetDlgItem(IDC_BTN_BASIC)->EnableWindow(false);
		GetDlgItem(IDC_CHK_EVENT)->EnableWindow(false);
		GetDlgItem(IDC_EDT_MINUTE)->EnableWindow(false);
		GetDlgItem(IDC_EDT_SECOND)->EnableWindow(false);
		GetDlgItem(IDC_EDT_JITTER)->EnableWindow(false);
		GetDlgItem(IDC_BTN_FLSCOMM)->EnableWindow(true);
		GetDlgItem(IDC_BTN_SYSTIME)->EnableWindow(false);
		GetDlgItem(IDC_COB_BAUDRATE)->EnableWindow(true);
		GetDlgItem(IDC_BTN_SETSYSTIME)->EnableWindow(false);
		GetDlgItem(IDC_BTN_CLEANEVENT)->EnableWindow(false);


		for(int a3=0;a3<36;a3++)
		{
			GetDlgItem(IDC_EDIT37+a3)->EnableWindow(false);
		}

		//关闭LED
		for(int i=0;i<36;i++)
		{
			((CLed*)GetDlgItem(IDC_STC_LED01+i))->SetLed(CLed::LED_COLOR_RED,CLed::LED_OFF,CLed::LED_ROUND);
		}

		//关闭定时器
		KillTimer(1001);

		pApp->NewEvent1=true;
		pApp->NewEvent2=true;
		pApp->NewEvent3=true;
		pApp->NewEvent4=true;
		pApp->NewEvent5=true;

		pApp->Enum=0;
		pApp->Snum=0;
		pApp->Rnum=0;
		pApp->pbt=0;

		((CButton*)GetDlgItem(IDC_CHK_YXCLOCK))->SetCheck(false);
		pApp->ChkClock=true;
	}
}

void CODlg::OnBtnFlscomm() 
{
	// TODO: Add your control notification handler code here
	GetCom();
}

//查询版本号
void CODlg::OnBtnEdt() 
{
	// TODO: Add your control notification handler code here
	COApp* pApp=(COApp*)AfxGetApp();
	PostThreadMessage(pApp->x_pCommThread->m_nThreadID,WM_MSGCOMMSND,0x00,0x01);
}

//提取时间
void CODlg::OnBtnRtime() 
{
	// TODO: Add your control notification handler code here
	COApp* pApp=(COApp*)AfxGetApp();
	PostThreadMessage(pApp->x_pCommThread->m_nThreadID,WM_MSGCOMMSND,0x00,0x02);
	pApp->optional=0x0A;
}

//时间精度
void CODlg::OnButton38() 
{
	// TODO: Add your control notification handler code here
	COApp* pApp=(COApp*)AfxGetApp();
	PostThreadMessage(pApp->x_pCommThread->m_nThreadID,WM_MSGCOMMSND,0x00,0x02);
	pApp->optional=0x0B;
}

//设置时间
void CODlg::OnBtnStime() 
{
	// TODO: Add your control notification handler code here
	COApp* pApp=(COApp*)AfxGetApp();

	//时钟比较清零
	x_Previous1=0;
	x_Previous2=0;

	UpdateData(true);
	//First method
	GetDlgItemText(IDC_EDT_YEAR,pApp->year);
	GetDlgItemText(IDC_EDT_MONTH,pApp->month);
	GetDlgItemText(IDC_EDT_DAY,pApp->day);
	//Second method
	pApp->hour=m_iHour;
	pApp->minute=m_iMinute;
	pApp->second=m_iSecond;

	//简单判断数据合法性
	if(atoi(pApp->year)>=0 && atoi(pApp->year)<100 &&
		atoi(pApp->month)>=1 && atoi(pApp->month)<=12 &&
		atoi(pApp->day)>=1 && atoi(pApp->day)<=31 &&
		pApp->hour>=0 && pApp->hour<=24 &&
		pApp->minute>=0 && pApp->minute<=59 &&
		pApp->second>=0 && pApp->second<=59)
	{
		PostThreadMessage(pApp->x_pCommThread->m_nThreadID,WM_MSGCOMMSND,0x00,0x03);
	}
}

//提取系统时间
void CODlg::OnSetSysTime() 
{
	// TODO: Add your control notification handler code here
	CString strTime,temp;
	CTime systime=CTime::GetCurrentTime();
	strTime=systime.Format("系统时间: %Y年%m月%d日%H时%M分%S秒\r\n");
	
	CString Syear=strTime.Mid(12,2);
	CString Smonth=strTime.Mid(16,2);
	CString Sday=strTime.Mid(20,2);
	CString Shour=strTime.Mid(24,2);
	CString Sminute=strTime.Mid(28,2);
	CString Ssecond=strTime.Mid(32,2);

	SetDlgItemText(IDC_EDT_YEAR,Syear);
	SetDlgItemText(IDC_EDT_MONTH,Smonth);
	SetDlgItemText(IDC_EDT_DAY,Sday);
	SetDlgItemText(IDC_EDT_HOUR,Shour);
	SetDlgItemText(IDC_EDT_MINUTE,Sminute);
	SetDlgItemText(IDC_EDT_SECOND,Ssecond);

	GetDlgItemText(IDC_BOARD,temp);
	temp=strTime+temp;
	SetDlgItemText(IDC_BOARD,temp);
}

//设置系统时间
void CODlg::OnBtnSystime() 
{
	// TODO: Add your control notification handler code here
	//获取系统时间
	CString strTime,temp;
	CTime systime=CTime::GetCurrentTime();	
	strTime=systime.Format("%Y年%m月%d日%H时%M分%S秒");

	CString Syear=strTime.Mid(2,2);
	CString Smonth=strTime.Mid(6,2);
	CString Sday=strTime.Mid(10,2);
	CString Shour=strTime.Mid(14,2);
	CString Sminute=strTime.Mid(18,2);
	CString Ssecond=strTime.Mid(22,2);

	SetDlgItemText(IDC_EDT_YEAR,Syear);
	SetDlgItemText(IDC_EDT_MONTH,Smonth);
	SetDlgItemText(IDC_EDT_DAY,Sday);
	SetDlgItemText(IDC_EDT_HOUR,Shour);
	SetDlgItemText(IDC_EDT_MINUTE,Sminute);
	SetDlgItemText(IDC_EDT_SECOND,Ssecond);

	OnBtnStime();

	GetDlgItemText(IDC_BOARD,temp);
	temp="设置系统时间: "+strTime+"\r\n"+temp;
	SetDlgItemText(IDC_BOARD,temp);
}

//提取事件
void CODlg::OnBtnEvnt() 
{
	// TODO: Add your control notification handler code here
	COApp* pApp=(COApp*)AfxGetApp();
	pApp->ChkOn=true;
	pApp->B=false;
	pApp->NoneEvent=true;
}

//清除事件
void CODlg::OnBtnCleanevent() 
{
	// TODO: Add your control notification handler code here
	COApp* pApp=(COApp*)AfxGetApp();
	PostThreadMessage(pApp->x_pCommThread->m_nThreadID,WM_MSGCOMMSND,0x00,0x07);
}

//清空屏幕记录
void CODlg::OnButton39() 
{
	// TODO: Add your control notification handler code here
	COApp* pApp=(COApp*)AfxGetApp();
	SetDlgItemText(IDC_BOARD,"");
	pApp->Enum=0;
}

//发送相同的防抖时间
void CODlg::OnRadio1() 
{
	// TODO: Add your control notification handler code here
	for(int a3=0;a3<36;a3++)
	{
		GetDlgItem(IDC_EDIT37+a3)->EnableWindow(false);
	}
	GetDlgItem(IDC_EDT_JITTER)->EnableWindow(true);
}

//发送不同的防抖时间
void CODlg::OnRadio2() 
{
	// TODO: Add your control notification handler code here
	for(int a3=0;a3<36;a3++)
	{
		GetDlgItem(IDC_EDIT37+a3)->EnableWindow(true);
	}
	GetDlgItem(IDC_EDT_JITTER)->EnableWindow(false);
}

//设置防抖时间
void CODlg::OnBtnJtime()
{
	// TODO: Add your control notification handler code here
	COApp* pApp=(COApp*)AfxGetApp();
	//memset(JitterData,0,sizeof(JitterData));
	CString str;

	UpdateData(true);
	
	if(m_iRadio==0)
	{//判断数据合法性
		if(m_lJitter>9 && m_lJitter<60001)
		{//36路防抖时间赋值
			for(int a=0;a<36;a++)
			{//位运算效率高于算术运算
				pApp->JH[a]=m_lJitter>>8;
				pApp->JL[a]=m_lJitter&0xFF;
				str.Format("%d",pApp->JH[a]*256+pApp->JL[a]);
				SetDlgItemText(IDC_EDIT37+a,str);
			}
			PostThreadMessage(pApp->x_pCommThread->m_nThreadID,WM_MSGCOMMSND,0x00,0x04);
		}
	}
	else
	{
		BOOL isok;
		for(int a=0;a<36;a++)
		{//判断数据合法性
			CString temp;
			GetDlgItemText(IDC_EDIT37+a,temp);
			if(atoi(temp)>9 && atoi(temp)<60001)
			{
				isok=true;
			}
			else
			{
				isok=false;
				break;
			}
		}
		if(isok)
		{//防抖时间赋值
			CString temp;
			for(a=0;a<36;a++)
			{
				GetDlgItemText(IDC_EDIT37+a,temp);
				pApp->JH[a]=atoi(temp)>>8;
				pApp->JL[a]=atoi(temp)&0xFF;
				str.Format("%d",pApp->JH[a]*256+pApp->JL[a]);
				SetDlgItemText(IDC_EDIT37+a,str);
			}
			PostThreadMessage(pApp->x_pCommThread->m_nThreadID,WM_MSGCOMMSND,0x00,0x04);
		}
	}
}

//提取全部防抖时间
void CODlg::OnButton37() 
{
	// TODO: Add your control notification handler code here
	COApp* pApp=(COApp*)AfxGetApp();
	PostThreadMessage(pApp->x_pCommThread->m_nThreadID,WM_MSGCOMMSND,0x00,0x06);
}

//设置定时器
void CODlg::OnTimer(UINT nIDEvent) 
{
	// TODO: Add your message handler code here and/or call default
	COApp* pApp=(COApp*)AfxGetApp();
	CButton* pChk=(CButton*)GetDlgItem(IDC_CHK_EVENT);
	CString str,temp;

	//B1
	if(pApp->uiLed[0] & 0x01)
	{
		((CLed*)GetDlgItem(IDC_STC_LED01))->SetLed(CLed::LED_COLOR_GREEN,CLed::LED_ON,CLed::LED_ROUND);		
	}
	else
	{
		((CLed*)GetDlgItem(IDC_STC_LED01))->SetLed(CLed::LED_COLOR_RED,CLed::LED_ON,CLed::LED_ROUND);
	}
	if(pApp->uiLed[0] & 0x02)
	{
		((CLed*)GetDlgItem(IDC_STC_LED02))->SetLed(CLed::LED_COLOR_GREEN,CLed::LED_ON,CLed::LED_ROUND);		
	}
	else
	{
		((CLed*)GetDlgItem(IDC_STC_LED02))->SetLed(CLed::LED_COLOR_RED,CLed::LED_ON,CLed::LED_ROUND);
	}
	if(pApp->uiLed[0] & 0x04)
	{
		((CLed*)GetDlgItem(IDC_STC_LED03))->SetLed(CLed::LED_COLOR_GREEN,CLed::LED_ON,CLed::LED_ROUND);		
	}
	else
	{
		((CLed*)GetDlgItem(IDC_STC_LED03))->SetLed(CLed::LED_COLOR_RED,CLed::LED_ON,CLed::LED_ROUND);
	}
	if(pApp->uiLed[0] & 0x08)
	{
		((CLed*)GetDlgItem(IDC_STC_LED04))->SetLed(CLed::LED_COLOR_GREEN,CLed::LED_ON,CLed::LED_ROUND);		
	}
	else
	{
		((CLed*)GetDlgItem(IDC_STC_LED04))->SetLed(CLed::LED_COLOR_RED,CLed::LED_ON,CLed::LED_ROUND);		
	}
	if(pApp->uiLed[0] & 0x10)
	{
		((CLed*)GetDlgItem(IDC_STC_LED05))->SetLed(CLed::LED_COLOR_GREEN,CLed::LED_ON,CLed::LED_ROUND);		
	}
	else
	{
		((CLed*)GetDlgItem(IDC_STC_LED05))->SetLed(CLed::LED_COLOR_RED,CLed::LED_ON,CLed::LED_ROUND);
	}
	if(pApp->uiLed[0] & 0x20)
	{
		((CLed*)GetDlgItem(IDC_STC_LED06))->SetLed(CLed::LED_COLOR_GREEN,CLed::LED_ON,CLed::LED_ROUND);		
	}
	else
	{
		((CLed*)GetDlgItem(IDC_STC_LED06))->SetLed(CLed::LED_COLOR_RED,CLed::LED_ON,CLed::LED_ROUND);
	}
	if(pApp->uiLed[0] & 0x40)
	{
		((CLed*)GetDlgItem(IDC_STC_LED07))->SetLed(CLed::LED_COLOR_GREEN,CLed::LED_ON,CLed::LED_ROUND);		
	}
	else
	{
		((CLed*)GetDlgItem(IDC_STC_LED07))->SetLed(CLed::LED_COLOR_RED,CLed::LED_ON,CLed::LED_ROUND);
	}
	if(pApp->uiLed[0] & 0x80)
	{
		((CLed*)GetDlgItem(IDC_STC_LED08))->SetLed(CLed::LED_COLOR_GREEN,CLed::LED_ON,CLed::LED_ROUND);		
	}
	else
	{
		((CLed*)GetDlgItem(IDC_STC_LED08))->SetLed(CLed::LED_COLOR_RED,CLed::LED_ON,CLed::LED_ROUND);
	}
	//B2
	if(pApp->uiLed[1] & 0x01)
	{
		((CLed*)GetDlgItem(IDC_STC_LED09))->SetLed(CLed::LED_COLOR_GREEN,CLed::LED_ON,CLed::LED_ROUND);		
	}
	else
	{
		((CLed*)GetDlgItem(IDC_STC_LED09))->SetLed(CLed::LED_COLOR_RED,CLed::LED_ON,CLed::LED_ROUND);
	}
	if(pApp->uiLed[1] & 0x02)
	{
		((CLed*)GetDlgItem(IDC_STC_LED10))->SetLed(CLed::LED_COLOR_GREEN,CLed::LED_ON,CLed::LED_ROUND);		
	}
	else
	{
		((CLed*)GetDlgItem(IDC_STC_LED10))->SetLed(CLed::LED_COLOR_RED,CLed::LED_ON,CLed::LED_ROUND);
	}
	if(pApp->uiLed[1] & 0x04)
	{
		((CLed*)GetDlgItem(IDC_STC_LED11))->SetLed(CLed::LED_COLOR_GREEN,CLed::LED_ON,CLed::LED_ROUND);		
	}
	else
	{
		((CLed*)GetDlgItem(IDC_STC_LED11))->SetLed(CLed::LED_COLOR_RED,CLed::LED_ON,CLed::LED_ROUND);
	}
	if(pApp->uiLed[1] & 0x08)
	{
		((CLed*)GetDlgItem(IDC_STC_LED12))->SetLed(CLed::LED_COLOR_GREEN,CLed::LED_ON,CLed::LED_ROUND);		
	}
	else
	{
		((CLed*)GetDlgItem(IDC_STC_LED12))->SetLed(CLed::LED_COLOR_RED,CLed::LED_ON,CLed::LED_ROUND);
	}
	if(pApp->uiLed[1] & 0x10)
	{
		((CLed*)GetDlgItem(IDC_STC_LED13))->SetLed(CLed::LED_COLOR_GREEN,CLed::LED_ON,CLed::LED_ROUND);		
	}
	else
	{
		((CLed*)GetDlgItem(IDC_STC_LED13))->SetLed(CLed::LED_COLOR_RED,CLed::LED_ON,CLed::LED_ROUND);
	}
	if(pApp->uiLed[1] & 0x20)
	{
		((CLed*)GetDlgItem(IDC_STC_LED14))->SetLed(CLed::LED_COLOR_GREEN,CLed::LED_ON,CLed::LED_ROUND);		
	}
	else
	{
		((CLed*)GetDlgItem(IDC_STC_LED14))->SetLed(CLed::LED_COLOR_RED,CLed::LED_ON,CLed::LED_ROUND);
	}
	if(pApp->uiLed[1] & 0x40)
	{
		((CLed*)GetDlgItem(IDC_STC_LED15))->SetLed(CLed::LED_COLOR_GREEN,CLed::LED_ON,CLed::LED_ROUND);		
	}
	else
	{
		((CLed*)GetDlgItem(IDC_STC_LED15))->SetLed(CLed::LED_COLOR_RED,CLed::LED_ON,CLed::LED_ROUND);
	}
	if(pApp->uiLed[1] & 0x80)
	{
		((CLed*)GetDlgItem(IDC_STC_LED16))->SetLed(CLed::LED_COLOR_GREEN,CLed::LED_ON,CLed::LED_ROUND);		
	}
	else
	{
		((CLed*)GetDlgItem(IDC_STC_LED16))->SetLed(CLed::LED_COLOR_RED,CLed::LED_ON,CLed::LED_ROUND);
	}
	//B3
	if(pApp->uiLed[2] & 0x01)
	{
		((CLed*)GetDlgItem(IDC_STC_LED17))->SetLed(CLed::LED_COLOR_GREEN,CLed::LED_ON,CLed::LED_ROUND);		
	}
	else
	{
		((CLed*)GetDlgItem(IDC_STC_LED17))->SetLed(CLed::LED_COLOR_RED,CLed::LED_ON,CLed::LED_ROUND);
	}
	if(pApp->uiLed[2] & 0x02)
	{
		((CLed*)GetDlgItem(IDC_STC_LED18))->SetLed(CLed::LED_COLOR_GREEN,CLed::LED_ON,CLed::LED_ROUND);		
	}
	else
	{
		((CLed*)GetDlgItem(IDC_STC_LED18))->SetLed(CLed::LED_COLOR_RED,CLed::LED_ON,CLed::LED_ROUND);
	}
	if(pApp->uiLed[2] & 0x04)
	{
		((CLed*)GetDlgItem(IDC_STC_LED19))->SetLed(CLed::LED_COLOR_GREEN,CLed::LED_ON,CLed::LED_ROUND);		
	}
	else
	{
		((CLed*)GetDlgItem(IDC_STC_LED19))->SetLed(CLed::LED_COLOR_RED,CLed::LED_ON,CLed::LED_ROUND);
	}
	if(pApp->uiLed[2] & 0x08)
	{
		((CLed*)GetDlgItem(IDC_STC_LED20))->SetLed(CLed::LED_COLOR_GREEN,CLed::LED_ON,CLed::LED_ROUND);		
	}
	else
	{
		((CLed*)GetDlgItem(IDC_STC_LED20))->SetLed(CLed::LED_COLOR_RED,CLed::LED_ON,CLed::LED_ROUND);
	}
	if(pApp->uiLed[2] & 0x10)
	{
		((CLed*)GetDlgItem(IDC_STC_LED21))->SetLed(CLed::LED_COLOR_GREEN,CLed::LED_ON,CLed::LED_ROUND);		
	}
	else
	{
		((CLed*)GetDlgItem(IDC_STC_LED21))->SetLed(CLed::LED_COLOR_RED,CLed::LED_ON,CLed::LED_ROUND);
	}
	if(pApp->uiLed[2] & 0x20)
	{
		((CLed*)GetDlgItem(IDC_STC_LED22))->SetLed(CLed::LED_COLOR_GREEN,CLed::LED_ON,CLed::LED_ROUND);		
	}
	else
	{
		((CLed*)GetDlgItem(IDC_STC_LED22))->SetLed(CLed::LED_COLOR_RED,CLed::LED_ON,CLed::LED_ROUND);
	}
	if(pApp->uiLed[2] & 0x40)
	{
		((CLed*)GetDlgItem(IDC_STC_LED23))->SetLed(CLed::LED_COLOR_GREEN,CLed::LED_ON,CLed::LED_ROUND);		
	}
	else
	{
		((CLed*)GetDlgItem(IDC_STC_LED23))->SetLed(CLed::LED_COLOR_RED,CLed::LED_ON,CLed::LED_ROUND);
	}
	if(pApp->uiLed[2] & 0x80)
	{
		((CLed*)GetDlgItem(IDC_STC_LED24))->SetLed(CLed::LED_COLOR_GREEN,CLed::LED_ON,CLed::LED_ROUND);		
	}
	else
	{
		((CLed*)GetDlgItem(IDC_STC_LED24))->SetLed(CLed::LED_COLOR_RED,CLed::LED_ON,CLed::LED_ROUND);
	}
	//B4
	if(pApp->uiLed[3] & 0x01)
	{
		((CLed*)GetDlgItem(IDC_STC_LED25))->SetLed(CLed::LED_COLOR_GREEN,CLed::LED_ON,CLed::LED_ROUND);		
	}
	else
	{
		((CLed*)GetDlgItem(IDC_STC_LED25))->SetLed(CLed::LED_COLOR_RED,CLed::LED_ON,CLed::LED_ROUND);
	}
	if(pApp->uiLed[3] & 0x02)
	{
		((CLed*)GetDlgItem(IDC_STC_LED26))->SetLed(CLed::LED_COLOR_GREEN,CLed::LED_ON,CLed::LED_ROUND);		
	}
	else
	{
		((CLed*)GetDlgItem(IDC_STC_LED26))->SetLed(CLed::LED_COLOR_RED,CLed::LED_ON,CLed::LED_ROUND);
	}
	if(pApp->uiLed[3] & 0x04)
	{
		((CLed*)GetDlgItem(IDC_STC_LED27))->SetLed(CLed::LED_COLOR_GREEN,CLed::LED_ON,CLed::LED_ROUND);		
	}
	else
	{
		((CLed*)GetDlgItem(IDC_STC_LED27))->SetLed(CLed::LED_COLOR_RED,CLed::LED_ON,CLed::LED_ROUND);
	}
	if(pApp->uiLed[3] & 0x08)
	{
		((CLed*)GetDlgItem(IDC_STC_LED28))->SetLed(CLed::LED_COLOR_GREEN,CLed::LED_ON,CLed::LED_ROUND);		
	}
	else
	{
		((CLed*)GetDlgItem(IDC_STC_LED28))->SetLed(CLed::LED_COLOR_RED,CLed::LED_ON,CLed::LED_ROUND);
	}
	if(pApp->uiLed[3] & 0x10)
	{
		((CLed*)GetDlgItem(IDC_STC_LED29))->SetLed(CLed::LED_COLOR_GREEN,CLed::LED_ON,CLed::LED_ROUND);		
	}
	else
	{
		((CLed*)GetDlgItem(IDC_STC_LED29))->SetLed(CLed::LED_COLOR_RED,CLed::LED_ON,CLed::LED_ROUND);
	}
	if(pApp->uiLed[3] & 0x20)
	{
		((CLed*)GetDlgItem(IDC_STC_LED30))->SetLed(CLed::LED_COLOR_GREEN,CLed::LED_ON,CLed::LED_ROUND);		
	}
	else
	{
		((CLed*)GetDlgItem(IDC_STC_LED30))->SetLed(CLed::LED_COLOR_RED,CLed::LED_ON,CLed::LED_ROUND);
	}
	if(pApp->uiLed[3] & 0x40)
	{
		((CLed*)GetDlgItem(IDC_STC_LED31))->SetLed(CLed::LED_COLOR_GREEN,CLed::LED_ON,CLed::LED_ROUND);		
	}
	else
	{
		((CLed*)GetDlgItem(IDC_STC_LED31))->SetLed(CLed::LED_COLOR_RED,CLed::LED_ON,CLed::LED_ROUND);
	}
	if(pApp->uiLed[3] & 0x80)
	{
		((CLed*)GetDlgItem(IDC_STC_LED32))->SetLed(CLed::LED_COLOR_GREEN,CLed::LED_ON,CLed::LED_ROUND);		
	}
	else
	{
		((CLed*)GetDlgItem(IDC_STC_LED32))->SetLed(CLed::LED_COLOR_RED,CLed::LED_ON,CLed::LED_ROUND);
	}
	//B5
	if(pApp->uiLed[4] & 0x01)
	{
		((CLed*)GetDlgItem(IDC_STC_LED33))->SetLed(CLed::LED_COLOR_GREEN,CLed::LED_ON,CLed::LED_ROUND);	
	}
	else
	{
		((CLed*)GetDlgItem(IDC_STC_LED33))->SetLed(CLed::LED_COLOR_RED,CLed::LED_ON,CLed::LED_ROUND);
	}
	if(pApp->uiLed[4] & 0x02)
	{
		((CLed*)GetDlgItem(IDC_STC_LED34))->SetLed(CLed::LED_COLOR_GREEN,CLed::LED_ON,CLed::LED_ROUND);		
	}
	else
	{
		((CLed*)GetDlgItem(IDC_STC_LED34))->SetLed(CLed::LED_COLOR_RED,CLed::LED_ON,CLed::LED_ROUND);
	}
	if(pApp->uiLed[4] & 0x04)
	{
		((CLed*)GetDlgItem(IDC_STC_LED35))->SetLed(CLed::LED_COLOR_GREEN,CLed::LED_ON,CLed::LED_ROUND);		
	}
	else
	{
		((CLed*)GetDlgItem(IDC_STC_LED35))->SetLed(CLed::LED_COLOR_RED,CLed::LED_ON,CLed::LED_ROUND);
	}
	if(pApp->uiLed[4] & 0x08)
	{
		((CLed*)GetDlgItem(IDC_STC_LED36))->SetLed(CLed::LED_COLOR_GREEN,CLed::LED_ON,CLed::LED_ROUND);		
	}
	else
	{
		((CLed*)GetDlgItem(IDC_STC_LED36))->SetLed(CLed::LED_COLOR_RED,CLed::LED_ON,CLed::LED_ROUND);
	}

	//自动提取事件记录
	if(pChk->GetCheck()==1)
	{
		pApp->ChkOff=true;
	}
	if(pChk->GetCheck()==0)
	{
		pApp->ChkOff=false;
	}

	//更新收发报文成功率
	temp.Format("%.1f%%",pApp->pbt);
	SetDlgItemText(IDC_EDT_PBT,temp);

	CDialog::OnTimer(nIDEvent);
}

//消息响应
void CODlg::MsgCommAns(WPARAM wParam,LPARAM lParam)
{
	CString str,temp,strTime;
	COApp* pApp=(COApp*)AfxGetApp();
	CButton* pChkMsg=(CButton*)GetDlgItem(IDC_CHK_MSG);
	unsigned int J[36];

	unsigned char ucwAns=wParam & 0xFF;
	unsigned char uclAns=lParam & 0xFF;
	switch(ucwAns)
	{
	case 0x00:
		{
			str.Format("板卡地址: 0x%02X\r\n设备地址: 0xFF\r\n数据格式: 8-N-1\r\n",pApp->x_Address);
			GetDlgItemText(IDC_BOARD,temp);
			temp=str+temp;
			SetDlgItemText(IDC_BOARD,temp);
			break;
		}
	case 0x01:
		{//提取事件响应
			pApp->Enum+=1;
			temp.Format("%d",pApp->Enum);
			SetDlgItemText(IDC_EDT_EVENTNUM,temp);
			GetDlgItemText(IDC_BOARD,temp);
			temp=pApp->test+temp;
			SetDlgItemText(IDC_BOARD,temp);
			break;
		}
	case 0x02://提取实时时钟响应
		{
			switch(pApp->optional)
			{
			case 0x0A:
				{
					str.Format("遥信时间: %d年%02d月%02d日%02d时%02d分%02d秒\r\n",pApp->Year+2000,pApp->Month,pApp->Day,pApp->Hour,pApp->Minute,pApp->Second);
					CString strtime;
					strtime.Format("%d",pApp->Year);
					SetDlgItemText(IDC_EDT_YEAR,strtime);
					strtime.Format("%02d",pApp->Month);
					SetDlgItemText(IDC_EDT_MONTH,strtime);
					strtime.Format("%02d",pApp->Day);
					SetDlgItemText(IDC_EDT_DAY,strtime);
					strtime.Format("%02d",pApp->Hour);
					SetDlgItemText(IDC_EDT_HOUR,strtime);
					strtime.Format("%02d",pApp->Minute);
					SetDlgItemText(IDC_EDT_MINUTE,strtime);
					strtime.Format("%02d",pApp->Second);
					SetDlgItemText(IDC_EDT_SECOND,strtime);

					GetDlgItemText(IDC_BOARD,temp);
					temp=str+temp;
					break;
				}
			case 0x0B:
				{
					CString cstr;
					int value;
					str.Format("遥信时间: %d年%02d月%02d日%02d时%02d分%02d秒\r\n",pApp->Year+2000,pApp->Month,pApp->Day,pApp->Hour,pApp->Minute,pApp->Second);
					CTime systime=CTime::GetCurrentTime();
					strTime=systime.Format("系统时间: %Y年%m月%d日%H时%M分%S秒\r\n");
					CString Vyear=strTime.Mid(10,4);
					CString Vmonth=strTime.Mid(16,2);
					CString Vday=strTime.Mid(20,2);
					CString Vhour=strTime.Mid(24,2);
					CString Vminute=strTime.Mid(28,2);
					CString Vsecond=strTime.Mid(32,2);
					value=((pApp->Day)-atoi(Vday))*24*60*60+((pApp->Hour)-atoi(Vhour))*60*60+((pApp->Minute)-atoi(Vminute))*60+((pApp->Second)-atoi(Vsecond));
					if(value>0)
					{
						cstr.Format("遥信时间快了 %d秒\r\n",((pApp->Day)-atoi(Vday))*24*60*60+((pApp->Hour)-atoi(Vhour))*60*60+((pApp->Minute)-atoi(Vminute))*60+((pApp->Second)-atoi(Vsecond)));
					}
					else if(value==0)
					{
						cstr.Format("遥信时间正常\r\n");
					}
					else
					{
						cstr.Format("遥信时间慢了 %d秒\r\n",((pApp->Day)-atoi(Vday))*24*60*60+((pApp->Hour)-atoi(Vhour))*60*60+((pApp->Minute)-atoi(Vminute))*60+((pApp->Second)-atoi(Vsecond)));
					}
					if((pApp->Year+2000)-atoi(Vyear)!=0|| value>=1296000)
					{
						cstr.Format("遥信时间误差超过15天,存在严重问题!\r\n");
					}
					GetDlgItemText(IDC_BOARD,temp);
					temp=cstr+str+strTime+temp;
					break;
				}
			case 0x0C:
				{
					GetDlgItemText(IDC_BOARD,temp);
					break;
				}
			default:
				{
					GetDlgItemText(IDC_BOARD,temp);
					break;
				}
			}
			SetDlgItemText(IDC_BOARD,temp);
			break;
		}
	case 0x03:
		{//版本信息
			str.Format("版本信息: V%.2f\r\n",pApp->edition);
			GetDlgItemText(IDC_BOARD,temp);
			temp=str+temp;
			SetDlgItemText(IDC_BOARD,temp);
			break;
		}
	case 0x04:
		{//设置时间响应
			str="时间设置成功!\r\n";
			GetDlgItemText(IDC_BOARD,temp);
			temp=str+temp;
			SetDlgItemText(IDC_BOARD,temp);
			break;
		}
	case 0x05:
		{//设置防抖时间响应
			str="防抖时间设置成功!\r\n";
			GetDlgItemText(IDC_BOARD,temp);
			temp=str+temp;
			SetDlgItemText(IDC_BOARD,temp);
			break;
		}
	case 0x06:
		{//端口打开状况
			str="端口打开失败!";
			AfxMessageBox(str,MB_OK|MB_APPLMODAL|MB_ICONINFORMATION);
			OnCombtn();
			break;
		}
    case 0x07:
		{//提取防抖时间响应
			for(int i=0;i<36;i++)
			{
				J[i]=pApp->JH[i]*256+pApp->JL[i];
				str.Format("%d",J[i]);
				SetDlgItemText(IDC_EDIT37+i,str);
			}
			str.Format("01:%d | 02:%d | 03:%d | 04:%d | 05:%d | 06:%d | 07:%d | 08:%d | 09:%d\r\n10:%d | 11:%d | 12:%d | 13:%d | 14:%d | 15:%d | 16:%d | 17:%d | 18:%d\r\n19:%d | 20:%d | 21:%d | 22:%d | 23:%d | 24:%d | 25:%d | 26:%d | 27:%d\r\n28:%d | 29:%d | 30:%d | 31:%d | 32:%d | 33:%d | 34:%d | 35:%d | 36:%d\r\n",
				J[0],J[1],J[2],J[3],J[4],J[5],J[6],J[7],J[8],J[9],J[10],J[11],J[12],J[13],J[14],J[15],J[16],J[17],
				J[18],J[19],J[20],J[21],J[22],J[23],J[24],J[25],J[26],J[27],J[28],J[29],J[30],J[31],J[32],J[33],J[34],J[35]);
			GetDlgItemText(IDC_BOARD,temp);			
			temp=str+temp;
			SetDlgItemText(IDC_BOARD,temp);
			break;
		}
    case 0x08:
		{//事件清除响应
			str="成功清除事件!\r\n";
			GetDlgItemText(IDC_BOARD,temp);
			temp=str+temp;
			SetDlgItemText(IDC_BOARD,temp);
			break;
		}
	case 0x09:
		{//无事件响应
			str="无新事件记录!\r\n";
			GetDlgItemText(IDC_BOARD,temp);
			temp=str+temp;
			SetDlgItemText(IDC_BOARD,temp);
			break;
		}
	case 0x10:
		{//嗅探结果失败
			//test
			GetDlgItemText(IDC_BOARD,temp);
			temp=pApp->test+"\r\n"+temp;
			SetDlgItemText(IDC_BOARD,temp);
			break;
		}
	case 0x11:
		{//发送报文显示
			if(pChkMsg->GetCheck()==1)
			{
				//test
				GetDlgItemText(IDC_BOARD,temp);
				temp=pApp->test+"\r\n"+temp;
				SetDlgItemText(IDC_BOARD,temp);
			}
			pApp->Snum+=1;
			temp.Format("%d",pApp->Snum);
			SetDlgItemText(IDC_EDT_SNUM,temp);
			break;
		}
	case 0x12:
		{//有新的事件记录
			str="有新的事件记录!\r\n";
			GetDlgItemText(IDC_BOARD,temp);
			temp=str+temp;
			SetDlgItemText(IDC_BOARD,temp);
			break;
		}
	case 0x13:
		{//板卡故障1
			str="板卡故障1:遥信板实时时钟失效!\r\n";
			GetDlgItemText(IDC_BOARD,temp);
			temp=str+temp;
			SetDlgItemText(IDC_BOARD,temp);
			break;
		}
	case 0x14:
		{//板卡故障2
			str="板卡故障2:实时时钟提取异常!\r\n";
			GetDlgItemText(IDC_BOARD,temp);
			temp=str+temp;
			SetDlgItemText(IDC_BOARD,temp);
			break;
		}
	case 0x15:
		{//板卡故障3
			str="板卡故障3:参数同步异常!\r\n";
			GetDlgItemText(IDC_BOARD,temp);
			temp=str+temp;
			SetDlgItemText(IDC_BOARD,temp);
			break;
		}
	case 0x16:
		{//板卡故障4
			str="板卡故障4:备用\r\n";
			GetDlgItemText(IDC_BOARD,temp);
			temp=str+temp;
			SetDlgItemText(IDC_BOARD,temp);
			break;
		}
	case 0x17:
		{//收到报文显示
			if(pChkMsg->GetCheck()==1)
			{
				//test
				GetDlgItemText(IDC_BOARD,temp);
				temp=pApp->test+"\r\n"+temp;
				SetDlgItemText(IDC_BOARD,temp);
			}
			pApp->Rnum+=1;
			temp.Format("%d",pApp->Rnum);
			SetDlgItemText(IDC_EDT_RNUM,temp);
			break;
		}
	case 0x18:
		{//遥信时钟合法性判断
			SetDlgItemText(IDC_STC_TIME,pApp->test);
			if(pApp->Year*10000+pApp->Month*100+pApp->Day < x_Previous2)
			{
				ErrNum+=1;
				temp.Format("%d",ErrNum);
				SetDlgItemText(IDC_EDT_ERRNUM,temp);
				////////////////////////////////////////////////////////////////////////////////////////////////////////////
				temp.Format("%06d%09d",x_Previous2,x_Previous1);
				str.Format("|||||N: %d年%02d月%02d日%02d时%02d分%02d秒%03d毫秒|||||\r\n|||||P: %d年%02d月%02d日%02d时%02d分%02d秒%03d毫秒|||||\r\n",pApp->Year,pApp->Month,pApp->Day,pApp->Hour,pApp->Minute,pApp->Second,pApp->MilliSecondH,atoi(temp.Mid(0,2)),atoi(temp.Mid(2,2)),atoi(temp.Mid(4,2)),atoi(temp.Mid(6,2)),atoi(temp.Mid(8,2)),atoi(temp.Mid(10,2)),atoi(temp.Mid(12,3)));
				GetDlgItemText(IDC_BOARD,temp);
				temp=str+temp;
				SetDlgItemText(IDC_BOARD,temp);
				///////////////////////////////////////////////////////////////////////////////////////////////////////////
				x_Previous1=(pApp->Hour)*10000000+(pApp->Minute)*100000+(pApp->Second)*1000+(pApp->MilliSecondH);
				x_Previous2=pApp->Year*10000+pApp->Month*100+pApp->Day;
			}
			else if(pApp->Year*10000+pApp->Month*100+pApp->Day == x_Previous2)
			{
				if(((pApp->Hour)*10000000+(pApp->Minute)*100000+(pApp->Second)*1000+(pApp->MilliSecondH)) > x_Previous1)
				{//当前时间大于上一次时间：正常
					/////////////////////////////////////////////////////////////////////////////////////////////////////
					//str.Format("遥信时间: %d年%02d月%02d日%02d时%02d分%02d秒%03d毫秒\r\n",pApp->Year+2000,pApp->Month,pApp->Day,pApp->Hour,pApp->Minute,pApp->Second,pApp->MilliSecondH);
					//GetDlgItemText(IDC_BOARD,temp);
					//temp=str+temp;
					//SetDlgItemText(IDC_BOARD,temp);
					///////////////////////////////////////////////////////////////////////////////////////
					x_Previous1=(pApp->Hour)*10000000+(pApp->Minute)*100000+(pApp->Second)*1000+(pApp->MilliSecondH);
					x_Previous2=pApp->Year*10000+pApp->Month*100+pApp->Day;
				}
				else if(((pApp->Hour)*10000000+(pApp->Minute)*100000+(pApp->Second)*1000+(pApp->MilliSecondH)) == x_Previous1)
				{
					ErrNum+=1;
					temp.Format("%d",ErrNum);
					SetDlgItemText(IDC_EDT_ERRNUM,temp);
					////////////////////////////////////////////////////////////////////////////////////////////////////////////
					temp.Format("%06d%09d",x_Previous2,x_Previous1);
					str.Format("===N: %d年%02d月%02d日%02d时%02d分%02d秒%03d毫秒===\r\n===P: %d年%02d月%02d日%02d时%02d分%02d秒%03d毫秒===\r\n",pApp->Year,pApp->Month,pApp->Day,pApp->Hour,pApp->Minute,pApp->Second,pApp->MilliSecondH,atoi(temp.Mid(0,2)),atoi(temp.Mid(2,2)),atoi(temp.Mid(4,2)),atoi(temp.Mid(6,2)),atoi(temp.Mid(8,2)),atoi(temp.Mid(10,2)),atoi(temp.Mid(12,3)));
					GetDlgItemText(IDC_BOARD,temp);
					temp=str+temp;
					SetDlgItemText(IDC_BOARD,temp);
					///////////////////////////////////////////////////////////////////////////////////////////////////////////
					x_Previous1=(pApp->Hour)*10000000+(pApp->Minute)*100000+(pApp->Second)*1000+(pApp->MilliSecondH);
					x_Previous2=pApp->Year*10000+pApp->Month*100+pApp->Day;
				}
				else
				{
					ErrNum+=1;
					temp.Format("%d",ErrNum);
					SetDlgItemText(IDC_EDT_ERRNUM,temp);
					///////////////////////////////////////////////////////////////////
					temp.Format("%06d%09d",x_Previous2,x_Previous1);
					str.Format(">>>>>>>>>>>>>>>>>>错误N: %d年%02d月%02d日%02d时%02d分%02d秒%03d毫秒<<<<<<<<<<<<<<<\r\n>>>>>>>>>>>>>>>>>>错误P: %d年%02d月%02d日%02d时%02d分%02d秒%03d毫秒<<<<<<<<<<<<<<<\r\n",pApp->Year,pApp->Month,pApp->Day,pApp->Hour,pApp->Minute,pApp->Second,pApp->MilliSecondH,atoi(temp.Mid(0,2)),atoi(temp.Mid(2,2)),atoi(temp.Mid(4,2)),atoi(temp.Mid(6,2)),atoi(temp.Mid(8,2)),atoi(temp.Mid(10,2)),atoi(temp.Mid(12,3)));
					GetDlgItemText(IDC_BOARD,temp);
					temp=str+temp;
					SetDlgItemText(IDC_BOARD,temp);
					////////////////////////////////////////////////////////////////////
					x_Previous1=(pApp->Hour)*10000000+(pApp->Minute)*100000+(pApp->Second)*1000+(pApp->MilliSecondH);
					x_Previous2=pApp->Year*10000+pApp->Month*100+pApp->Day;
				}
			}
			else
			{
				if(((pApp->Hour)*10000000+(pApp->Minute)*100000+(pApp->Second)*1000+(pApp->MilliSecondH)) < x_Previous1)
				{
					/////////////////////////////////////////////////////////////////////////////////////////////////////
					//str.Format("遥信时间: %d年%02d月%02d日%02d时%02d分%02d秒%03d毫秒\r\n",pApp->Year+2000,pApp->Month,pApp->Day,pApp->Hour,pApp->Minute,pApp->Second,pApp->MilliSecondH);
					//GetDlgItemText(IDC_BOARD,temp);
					//temp=str+temp;
					//SetDlgItemText(IDC_BOARD,temp);
					///////////////////////////////////////////////////////////////////////////////////////
					x_Previous1=(pApp->Hour)*10000000+(pApp->Minute)*100000+(pApp->Second)*1000+(pApp->MilliSecondH);
					x_Previous2=pApp->Year*10000+pApp->Month*100+pApp->Day;
				}
				else if(((pApp->Hour)*10000000+(pApp->Minute)*100000+(pApp->Second)*1000+(pApp->MilliSecondH)) == x_Previous1)
				{
					ErrNum+=1;
					temp.Format("%d",ErrNum);
					SetDlgItemText(IDC_EDT_ERRNUM,temp);
					////////////////////////////////////////////////////////////////////////////////////////////////////////////
					temp.Format("%06d%09d",x_Previous2,x_Previous1);
					str.Format("===N: %d年%02d月%02d日%02d时%02d分%02d秒%03d毫秒===\r\n===P: %d年%02d月%02d日%02d时%02d分%02d秒%03d毫秒===\r\n",pApp->Year,pApp->Month,pApp->Day,pApp->Hour,pApp->Minute,pApp->Second,pApp->MilliSecondH,atoi(temp.Mid(0,2)),atoi(temp.Mid(2,2)),atoi(temp.Mid(4,2)),atoi(temp.Mid(6,2)),atoi(temp.Mid(8,2)),atoi(temp.Mid(10,2)),atoi(temp.Mid(12,3)));
					GetDlgItemText(IDC_BOARD,temp);
					temp=str+temp;
					SetDlgItemText(IDC_BOARD,temp);
					///////////////////////////////////////////////////////////////////////////////////////////////////////////
					x_Previous1=(pApp->Hour)*10000000+(pApp->Minute)*100000+(pApp->Second)*1000+(pApp->MilliSecondH);
					x_Previous2=pApp->Year*10000+pApp->Month*100+pApp->Day;
				}
				else
				{
					if(bFirst)//忽略软件打开后的第一次判断
					{
						ErrNum+=1;
						temp.Format("%d",ErrNum);
						SetDlgItemText(IDC_EDT_ERRNUM,temp);
						///////////////////////////////////////////////////////////////////
						temp.Format("%06d%09d",x_Previous2,x_Previous1);
						str.Format(">>>>>>>>>>>>>>>>>>错误N: %d年%02d月%02d日%02d时%02d分%02d秒%03d毫秒<<<<<<<<<<<<<<<\r\n>>>>>>>>>>>>>>>>>>错误P: %d年%02d月%02d日%02d时%02d分%02d秒%03d毫秒<<<<<<<<<<<<<<<\r\n",pApp->Year,pApp->Month,pApp->Day,pApp->Hour,pApp->Minute,pApp->Second,pApp->MilliSecondH,atoi(temp.Mid(0,2)),atoi(temp.Mid(2,2)),atoi(temp.Mid(4,2)),atoi(temp.Mid(6,2)),atoi(temp.Mid(8,2)),atoi(temp.Mid(10,2)),atoi(temp.Mid(12,3)));
						GetDlgItemText(IDC_BOARD,temp);
						temp=str+temp;
						SetDlgItemText(IDC_BOARD,temp);
						////////////////////////////////////////////////////////////////////
					}
					else
						bFirst=true;
					x_Previous1=(pApp->Hour)*10000000+(pApp->Minute)*100000+(pApp->Second)*1000+(pApp->MilliSecondH);
					x_Previous2=pApp->Year*10000+pApp->Month*100+pApp->Day;
				}
			}

			if(ErrNum>0)
			{
				m_YXClock.SetBitmap((HBITMAP)x_bmpErr.m_hObject);
			}
			else
			{
				m_YXClock.SetBitmap((HBITMAP)x_bmpOk.m_hObject);
			}
			break;
		}
	default:
		break;	
	}
}

void CODlg::OnDestroy() 
{
	CDialog::OnDestroy();
	
	// TODO: Add your message handler code here
	CDialog::OnDestroy();
	KillTimer(1001);
	OnBtnCleanevent();
}

void CODlg::OnCancel() 
{
	// TODO: Add extra cleanup here
	
	CDialog::OnCancel();
	DestroyWindow();
}

void CODlg::OnBtnBasic() 
{
	// TODO: Add your control notification handler code here
	COApp* pApp=(COApp*)AfxGetApp();
	PostThreadMessage(pApp->x_pCommThread->m_nThreadID,WM_MSGCOMMSND,0x00,0x00);
}

void CODlg::OnChkEvent() 
{
	// TODO: Add your control notification handler code here
	if(((CButton*)GetDlgItem(IDC_CHK_EVENT))->GetCheck()==1)
		GetDlgItem(IDC_BTN_EVNT)->EnableWindow(false);
	else
		GetDlgItem(IDC_BTN_EVNT)->EnableWindow(true);
}

void CODlg::OnBtnStop() 
{//冻结屏幕
	// TODO: Add your control notification handler code here
	COApp* pApp=(COApp*)AfxGetApp();
	CString temp;
	GetDlgItemText(IDC_BTN_STOP,temp);
	if(temp=="冻结屏幕")
	{
		pApp->x_stop=false;
		temp="解冻屏幕";
		SetDlgItemText(IDC_BTN_STOP,temp);
	}
	else
	{
		pApp->x_stop=true;
		temp="冻结屏幕";
		SetDlgItemText(IDC_BTN_STOP,temp);
	}
}

//自动寻找可用串口
int CODlg::GetCom()
{
	int reg;
	//CStringArray strCommArr;
	HKEY hKey;
	int rtn;

	m_cbbBox.ResetContent();

	rtn = RegOpenKeyEx(HKEY_LOCAL_MACHINE,"Hardware\\DeviceMap\\SerialComm",NULL,KEY_READ,&hKey);
	//打开串口注册表
	if(rtn==ERROR_SUCCESS)
	{
		int i=0;
		char portName[30],commName[30];
		DWORD dwLong,dwSize;
		while(1)
		{
			dwSize = sizeof(portName);
			dwLong = dwSize;
			rtn = RegEnumValue(hKey,i,portName,&dwLong,NULL,NULL,(PUCHAR)commName,&dwSize);  
			//枚举串口
			if(rtn==ERROR_NO_MORE_ITEMS)  
			{
				break;
			}

			m_cbbBox.AddString(commName);
			i++;
		}
		reg=i;
	}
	RegCloseKey(hKey);
	m_cbbBox.SetCurSel(0);
	return reg;
}

void CODlg::OnChkYxclock() 
{
	// TODO: Add your control notification handler code here
	COApp* pApp=(COApp*)AfxGetApp();
	CString str;

	if(((CButton*)GetDlgItem(IDC_CHK_YXCLOCK))->GetCheck()==0)
	{
		pApp->ChkClock=true;
		GetDlgItem(IDC_BTN_SETSYSTIME)->EnableWindow(true);
		GetDlgItem(IDC_BTN_SYSTIME)->EnableWindow(true);
		GetDlgItem(IDC_BTN_RTIME)->EnableWindow(true);
		GetDlgItem(IDC_BTN_STIME)->EnableWindow(true);
		GetDlgItem(IDC_BTN_EVNT)->EnableWindow(true);
		GetDlgItem(IDC_BTN_STOP)->EnableWindow(true);
		GetDlgItem(IDC_BTN_EDT)->EnableWindow(true);
		GetDlgItem(IDC_BUTTON37)->EnableWindow(true);
		GetDlgItem(IDC_BTN_JTIME)->EnableWindow(true);
		GetDlgItem(IDC_BTN_CLEANEVENT)->EnableWindow(true);
		GetDlgItem(IDC_BUTTON38)->EnableWindow(true);
		GetDlgItem(IDC_CHK_EVENT)->EnableWindow(true);
		GetDlgItem(IDC_BTN_BASIC)->EnableWindow(true);
		str="例: 15年 01月 01日 23时 59分 59秒";
		SetDlgItemText(IDC_STC_TIME,str);
		//重设定时器
		SetTimer(1001,20,NULL);
	}
	if(((CButton*)GetDlgItem(IDC_CHK_YXCLOCK))->GetCheck()==1)
	{
		pApp->ChkClock=false;
		pApp->optional=0x0C;
		GetDlgItem(IDC_BTN_SETSYSTIME)->EnableWindow(false);
		GetDlgItem(IDC_BTN_SYSTIME)->EnableWindow(false);
		GetDlgItem(IDC_BTN_RTIME)->EnableWindow(false);
		GetDlgItem(IDC_BTN_STIME)->EnableWindow(false);
		GetDlgItem(IDC_BTN_EVNT)->EnableWindow(false);
		GetDlgItem(IDC_BTN_STOP)->EnableWindow(false);
		GetDlgItem(IDC_BTN_EDT)->EnableWindow(false);
		GetDlgItem(IDC_BUTTON37)->EnableWindow(false);
		GetDlgItem(IDC_BTN_JTIME)->EnableWindow(false);
		GetDlgItem(IDC_BTN_CLEANEVENT)->EnableWindow(false);
		GetDlgItem(IDC_BUTTON38)->EnableWindow(false);
		GetDlgItem(IDC_CHK_EVENT)->EnableWindow(false);
		GetDlgItem(IDC_BTN_BASIC)->EnableWindow(false);
		First=true;
		ErrNum=0;
		str.Format("%d",ErrNum);
		SetDlgItemText(IDC_EDT_ERRNUM,str);
		//关闭定时器
		KillTimer(1001);
	}
}

//屏蔽回车和ESC退出
BOOL CODlg::PreTranslateMessage(MSG* pMsg) 
{
	// TODO: Add your specialized code here and/or call the base class
	if(pMsg->message == WM_KEYDOWN)
	{
		switch(pMsg->wParam)
		{
		case VK_RETURN://截获回车
			return TRUE;
			break;
		case VK_ESCAPE://截获ESC
			return TRUE;
			break;
		}
	}
	
	return CDialog::PreTranslateMessage(pMsg);
}
