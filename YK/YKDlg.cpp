// YKDlg.cpp : implementation file
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
// CYKDlg dialog

CYKDlg::CYKDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CYKDlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(CYKDlg)
	m_MsgR = 0;
	m_MsgS = 0;
	//}}AFX_DATA_INIT
	// Note that LoadIcon does not require a subsequent DestroyIcon in Win32
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CYKDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CYKDlg)
	DDX_Control(pDX, IDC_COB_STOP, m_ctrlStop);
	DDX_Control(pDX, IDC_COB_PARITY, m_ctrlParity);
	DDX_Control(pDX, IDC_COB_BAUD, m_ctrlBaud);
	DDX_Control(pDX, IDC_COB_SP, m_ctrlSP);
	DDX_Text(pDX, IDC_EDT_MSGR, m_MsgR);
	DDX_Text(pDX, IDC_EDT_MSGS, m_MsgS);
	//}}AFX_DATA_MAP
}

BEGIN_MESSAGE_MAP(CYKDlg, CDialog)
	//{{AFX_MSG_MAP(CYKDlg)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_BN_CLICKED(IDC_BTN_OPEN, OnBtnOpen)
	ON_MESSAGE(WM_MSGANSWER,MsgAnswer)
	ON_BN_CLICKED(IDC_BTN_EDITION, OnBtnEdition)
	ON_BN_CLICKED(IDC_BTN_RELAY1, OnBtnRelay1)
	ON_BN_CLICKED(IDC_BTN_RELAY2, OnBtnRelay2)
	ON_BN_CLICKED(IDC_BTN_RELAY3, OnBtnRelay3)
	ON_BN_CLICKED(IDC_BTN_RELAY4, OnBtnRelay4)
	ON_BN_CLICKED(IDC_BTN_RELAY5, OnBtnRelay5)
	ON_BN_CLICKED(IDC_BTN_RELAY6, OnBtnRelay6)
	ON_BN_CLICKED(IDC_BTN_RELAY7, OnBtnRelay7)
	ON_BN_CLICKED(IDC_BTN_RELAY8, OnBtnRelay8)
	ON_BN_CLICKED(IDC_BTN_RELAY9, OnBtnRelay9)
	ON_BN_CLICKED(IDC_BTN_RELAY10, OnBtnRelay10)
	ON_BN_CLICKED(IDC_BTN_RELAY11, OnBtnRelay11)
	ON_BN_CLICKED(IDC_BTN_RELAY12, OnBtnRelay12)
	ON_BN_CLICKED(IDC_BTN_SPAGN, OnBtnSpagn)
	ON_BN_CLICKED(IDC_BTN_ADDRESS, OnBtnAddress)
	ON_WM_TIMER()
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CYKDlg message handlers

BOOL CYKDlg::OnInitDialog()
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
	GetDlgItem(IDC_BTN_EDITION)->EnableWindow(false);
	GetDlgItem(IDC_BTN_ADDRESS)->EnableWindow(false);
	for(int i=0;i<12;i++)
	{
		GetDlgItem(IDC_BTN_RELAY1+i)->EnableWindow(false);
	}

	GetSP();
	m_ctrlBaud.SetCurSel(8);
	m_ctrlParity.SetCurSel(0);
	m_ctrlStop.SetCurSel(0);
	x_BmpOff.LoadBitmap(IDB_BMP_RELAYOFF);
	x_BmpOn.LoadBitmap(IDB_BMP_RELAYON);

	return TRUE;  // return TRUE  unless you set the focus to a control
}

void CYKDlg::OnSysCommand(UINT nID, LPARAM lParam)
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

void CYKDlg::OnPaint() 
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
HCURSOR CYKDlg::OnQueryDragIcon()
{
	return (HCURSOR) m_hIcon;
}

//自动获取串口
int CYKDlg::GetSP()
{
	int reg;
	HKEY hKey;
	int rtn;
	//清理串口
	m_ctrlSP.ResetContent();
	//
	rtn=RegOpenKeyEx(HKEY_LOCAL_MACHINE,"HARDWARE\\DEVICEMAP\\SERIALCOMM",NULL,KEY_READ,&hKey);
	if(rtn==ERROR_SUCCESS)
	{
		int i=0;
		char portName[30],commName[30];
		DWORD portSize,commSize;
		while(1)
		{
			portSize=sizeof(portName);
			commSize=sizeof(commName);
			rtn=RegEnumValue(hKey,i,portName,&portSize,NULL,NULL,(PUCHAR)commName,&commSize);
			if(rtn==ERROR_NO_MORE_ITEMS)
			{
				break;
			}
			m_ctrlSP.AddString(commName);
			i++;
		}
		reg=i;
	}
	RegCloseKey(hKey);
	m_ctrlSP.SetCurSel(0);
	return reg;
}

void CYKDlg::OnBtnOpen() 
{
	// TODO: Add your control notification handler code here
	CYKApp* pApp=(CYKApp*)AfxGetApp();

	CString temp;
	m_ctrlSP.GetWindowText(temp);
	temp=temp.Mid(3,2);
	pApp->x_Port=atoi(temp);
	pApp->x_BaudOrder=m_ctrlBaud.GetCurSel();
	pApp->x_ParityOrder=m_ctrlParity.GetCurSel();
	pApp->x_StopOrder=m_ctrlStop.GetCurSel();

	GetDlgItemText(IDC_BTN_OPEN,temp);
	if(temp=="打开串口")
	{
		PostThreadMessage(pApp->x_pBGThread->m_nThreadID,WM_MSGCOMMBTN,0x00,0xAA);
		PostThreadMessage(pApp->x_pBGThread->m_nThreadID,WM_MSGSEND,0x00,0x03);
		SetDlgItemText(IDC_BTN_OPEN,"关闭串口");

		GetDlgItem(IDC_COB_SP)->EnableWindow(false);
		GetDlgItem(IDC_COB_BAUD)->EnableWindow(false);
		GetDlgItem(IDC_COB_PARITY)->EnableWindow(false);
		GetDlgItem(IDC_COB_STOP)->EnableWindow(false);
		GetDlgItem(IDC_BTN_SPAGN)->EnableWindow(false);
		GetDlgItem(IDC_BTN_EDITION)->EnableWindow(true);
		GetDlgItem(IDC_BTN_ADDRESS)->EnableWindow(true);
		for(int i=0;i<12;i++)
		{
			GetDlgItem(IDC_BTN_RELAY1+i)->EnableWindow(true);
		}

		pApp->x_MsgS=0;
		temp.Format("%d",pApp->x_MsgS);
		SetDlgItemText(IDC_EDT_MSGS,temp);
		pApp->x_MsgR=0;
		temp.Format("%d",pApp->x_MsgR);
		SetDlgItemText(IDC_EDT_MSGR,temp);

		SetTimer(1010,20,NULL);
	}
	else
	{
		PostThreadMessage(pApp->x_pBGThread->m_nThreadID,WM_MSGCOMMBTN,0x00,0x55);
		SetDlgItemText(IDC_BTN_OPEN,"打开串口");

		GetDlgItem(IDC_COB_SP)->EnableWindow(true);
		GetDlgItem(IDC_COB_BAUD)->EnableWindow(true);
		GetDlgItem(IDC_COB_PARITY)->EnableWindow(true);
		GetDlgItem(IDC_COB_STOP)->EnableWindow(true);
		GetDlgItem(IDC_BTN_SPAGN)->EnableWindow(true);
		GetDlgItem(IDC_BTN_EDITION)->EnableWindow(false);
		GetDlgItem(IDC_BTN_ADDRESS)->EnableWindow(false);
		for(int i=0;i<12;i++)
		{
			GetDlgItem(IDC_BTN_RELAY1+i)->EnableWindow(false);
		}

		KillTimer(1010);
	}
}

void CYKDlg::MsgAnswer(WPARAM wParam,LPARAM lParam)
{
	CYKApp* pApp=(CYKApp*)AfxGetApp();
	unsigned char ucParam=wParam & 0xFF;
	CString temp,string;

	switch(ucParam)
	{
	case 0x00:
		{
			temp="打开串口失败!";
			AfxMessageBox(temp,MB_OK|MB_APPLMODAL|MB_ICONINFORMATION);
			OnBtnOpen();
			break;
		}
	case 0x01:
		{
			temp.Format("版本: %.2f",pApp->x_Edition);
			SetDlgItemText(IDC_STC_EDITION,temp);
			break;
		}
	case 0x02:
		{
			switch(pApp->x_RelayAct)
			{
			case 0x55:
				{
					SetDlgItemText(pApp->x_RelayItem+1005,"分");
					((CStatic*)GetDlgItem(pApp->x_RelayItem+1041))->SetBitmap((HBITMAP)x_BmpOn.m_hObject);
					if(pApp->x_Previous && pApp->x_Previous!=pApp->x_RelayItem)
					{
						SetDlgItemText(pApp->x_Previous+1005,"合");
						((CStatic*)GetDlgItem(pApp->x_Previous+1041))->SetBitmap((HBITMAP)x_BmpOff.m_hObject);
					}
					break;
				}
			case 0xAA:
				{
					SetDlgItemText(pApp->x_RelayItem+1005,"合");
					((CStatic*)GetDlgItem(pApp->x_RelayItem+1041))->SetBitmap((HBITMAP)x_BmpOff.m_hObject);
					break;
				}
			}			
			pApp->x_Previous=pApp->x_RelayItem;
			break;
		}
	case 0x03:
		{
			temp.Format("板卡地址: 0x%02X",pApp->x_Address);
			SetDlgItemText(IDC_STC_ADDRESS,temp);
			break;
		}
	case 0x04:
		{
			SetDlgItemText(pApp->x_Previous+1005,"分");
			((CStatic*)GetDlgItem(pApp->x_Previous+1041))->SetBitmap((HBITMAP)x_BmpOn.m_hObject);
			break;
		}
	case 0x05:
		{
			temp.Format("%d",pApp->x_MsgS);
			SetDlgItemText(IDC_EDT_MSGS,temp);
			break;
		}
	case 0x06:
		{
			temp.Format("%d",pApp->x_MsgR);
			SetDlgItemText(IDC_EDT_MSGR,temp);
			break;
		}
	case 0xFF:
		{
			break;
		}
	}
}

void CYKDlg::OnBtnEdition() 
{
	// TODO: Add your control notification handler code here
	CYKApp* pApp=(CYKApp*)AfxGetApp();
	PostThreadMessage(pApp->x_pBGThread->m_nThreadID,WM_MSGSEND,0x00,0x00);
}

void CYKDlg::OnBtnRelay1() 
{
	// TODO: Add your control notification handler code here
	CYKApp* pApp=(CYKApp*)AfxGetApp();
	CString action;
	GetDlgItemText(IDC_BTN_RELAY1,action);
	if(action=="合")
	{
		pApp->x_RelayAct=0x55;
	}
	else
	{
		pApp->x_RelayAct=0xAA;
	}
	pApp->x_RelayItem=0x01;
	PostThreadMessage(pApp->x_pBGThread->m_nThreadID,WM_MSGSEND,0x00,0x01);
}

void CYKDlg::OnBtnRelay2() 
{
	// TODO: Add your control notification handler code here
	CYKApp* pApp=(CYKApp*)AfxGetApp();
	CString action;
	GetDlgItemText(IDC_BTN_RELAY2,action);
	if(action=="合")
	{
		pApp->x_RelayAct=0x55;
	}
	else
	{
		pApp->x_RelayAct=0xAA;
	}
	pApp->x_RelayItem=0x02;
	PostThreadMessage(pApp->x_pBGThread->m_nThreadID,WM_MSGSEND,0x00,0x01);
}

void CYKDlg::OnBtnRelay3() 
{
	// TODO: Add your control notification handler code here
	CYKApp* pApp=(CYKApp*)AfxGetApp();
	CString action;
	GetDlgItemText(IDC_BTN_RELAY3,action);
	if(action=="合")
	{
		pApp->x_RelayAct=0x55;
	}
	else
	{
		pApp->x_RelayAct=0xAA;
	}
	pApp->x_RelayItem=0x03;
	PostThreadMessage(pApp->x_pBGThread->m_nThreadID,WM_MSGSEND,0x00,0x01);
}

void CYKDlg::OnBtnRelay4() 
{
	// TODO: Add your control notification handler code here
	CYKApp* pApp=(CYKApp*)AfxGetApp();
	CString action;
	GetDlgItemText(IDC_BTN_RELAY4,action);
	if(action=="合")
	{
		pApp->x_RelayAct=0x55;
	}
	else
	{
		pApp->x_RelayAct=0xAA;
	}
	pApp->x_RelayItem=0x04;
	PostThreadMessage(pApp->x_pBGThread->m_nThreadID,WM_MSGSEND,0x00,0x01);
}

void CYKDlg::OnBtnRelay5() 
{
	// TODO: Add your control notification handler code here
	CYKApp* pApp=(CYKApp*)AfxGetApp();
	CString action;
	GetDlgItemText(IDC_BTN_RELAY5,action);
	if(action=="合")
	{
		pApp->x_RelayAct=0x55;
	}
	else
	{
		pApp->x_RelayAct=0xAA;
	}
	pApp->x_RelayItem=0x05;
	PostThreadMessage(pApp->x_pBGThread->m_nThreadID,WM_MSGSEND,0x00,0x01);
}

void CYKDlg::OnBtnRelay6() 
{
	// TODO: Add your control notification handler code here
	CYKApp* pApp=(CYKApp*)AfxGetApp();
	CString action;
	GetDlgItemText(IDC_BTN_RELAY6,action);
	if(action=="合")
	{
		pApp->x_RelayAct=0x55;
	}
	else
	{
		pApp->x_RelayAct=0xAA;
	}
	pApp->x_RelayItem=0x06;
	PostThreadMessage(pApp->x_pBGThread->m_nThreadID,WM_MSGSEND,0x00,0x01);
}

void CYKDlg::OnBtnRelay7() 
{
	// TODO: Add your control notification handler code here
	CYKApp* pApp=(CYKApp*)AfxGetApp();
	CString action;
	GetDlgItemText(IDC_BTN_RELAY7,action);
	if(action=="合")
	{
		pApp->x_RelayAct=0x55;
	}
	else
	{
		pApp->x_RelayAct=0xAA;
	}
	pApp->x_RelayItem=0x07;
	PostThreadMessage(pApp->x_pBGThread->m_nThreadID,WM_MSGSEND,0x00,0x01);
}

void CYKDlg::OnBtnRelay8() 
{
	// TODO: Add your control notification handler code here
	CYKApp* pApp=(CYKApp*)AfxGetApp();
	CString action;
	GetDlgItemText(IDC_BTN_RELAY8,action);
	if(action=="合")
	{
		pApp->x_RelayAct=0x55;
	}
	else
	{
		pApp->x_RelayAct=0xAA;
	}
	pApp->x_RelayItem=0x08;
	PostThreadMessage(pApp->x_pBGThread->m_nThreadID,WM_MSGSEND,0x00,0x01);
}

void CYKDlg::OnBtnRelay9() 
{
	// TODO: Add your control notification handler code here
	CYKApp* pApp=(CYKApp*)AfxGetApp();
	CString action;
	GetDlgItemText(IDC_BTN_RELAY9,action);
	if(action=="合")
	{
		pApp->x_RelayAct=0x55;
	}
	else
	{
		pApp->x_RelayAct=0xAA;
	}
	pApp->x_RelayItem=0x09;
	PostThreadMessage(pApp->x_pBGThread->m_nThreadID,WM_MSGSEND,0x00,0x01);
}

void CYKDlg::OnBtnRelay10() 
{
	// TODO: Add your control notification handler code here
	CYKApp* pApp=(CYKApp*)AfxGetApp();
	CString action;
	GetDlgItemText(IDC_BTN_RELAY10,action);
	if(action=="合")
	{
		pApp->x_RelayAct=0x55;
	}
	else
	{
		pApp->x_RelayAct=0xAA;
	}
	pApp->x_RelayItem=0x0A;
	PostThreadMessage(pApp->x_pBGThread->m_nThreadID,WM_MSGSEND,0x00,0x01);
}

void CYKDlg::OnBtnRelay11() 
{
	// TODO: Add your control notification handler code here
	CYKApp* pApp=(CYKApp*)AfxGetApp();
	CString action;
	GetDlgItemText(IDC_BTN_RELAY11,action);
	if(action=="合")
	{
		pApp->x_RelayAct=0x55;
	}
	else
	{
		pApp->x_RelayAct=0xAA;
	}
	pApp->x_RelayItem=0x0B;
	PostThreadMessage(pApp->x_pBGThread->m_nThreadID,WM_MSGSEND,0x00,0x01);
}

void CYKDlg::OnBtnRelay12() 
{
	// TODO: Add your control notification handler code here
	CYKApp* pApp=(CYKApp*)AfxGetApp();
	CString action;
	GetDlgItemText(IDC_BTN_RELAY12,action);
	if(action=="合")
	{
		pApp->x_RelayAct=0x55;
	}
	else
	{
		pApp->x_RelayAct=0xAA;
	}
	pApp->x_RelayItem=0x0C;
	PostThreadMessage(pApp->x_pBGThread->m_nThreadID,WM_MSGSEND,0x00,0x01);
}

BOOL CYKDlg::PreTranslateMessage(MSG* pMsg) 
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

void CYKDlg::OnBtnSpagn() 
{
	// TODO: Add your control notification handler code here
	GetSP();
}

void CYKDlg::OnBtnAddress() 
{
	// TODO: Add your control notification handler code here
	CYKApp* pApp=(CYKApp*)AfxGetApp();
	PostThreadMessage(pApp->x_pBGThread->m_nThreadID,WM_MSGSEND,0x00,0x02);
}

void CYKDlg::OnTimer(UINT nIDEvent) 
{
	// TODO: Add your message handler code here and/or call default
	CYKApp* pApp=(CYKApp*)AfxGetApp();
	CString temp;

	temp.Format("%.1f%%",pApp->x_Accuracy);
	SetDlgItemText(IDC_EDT_ACCURACY,temp);

	CDialog::OnTimer(nIDEvent);
}
