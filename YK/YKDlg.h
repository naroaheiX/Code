// YKDlg.h : header file
//

#if !defined(AFX_YKDLG_H__10DED81F_8602_45D2_A904_73E26235B2BA__INCLUDED_)
#define AFX_YKDLG_H__10DED81F_8602_45D2_A904_73E26235B2BA__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

/////////////////////////////////////////////////////////////////////////////
// CYKDlg dialog

class CYKDlg : public CDialog
{
// Construction
public:
	CYKDlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	//{{AFX_DATA(CYKDlg)
	enum { IDD = IDD_YK_DIALOG };
	CComboBox	m_ctrlStop;
	CComboBox	m_ctrlParity;
	CComboBox	m_ctrlBaud;
	CComboBox	m_ctrlSP;
	UINT	m_MsgR;
	UINT	m_MsgS;
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CYKDlg)
	public:
	virtual BOOL PreTranslateMessage(MSG* pMsg);
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	HICON m_hIcon;
	int GetSP();
	CBitmap x_BmpOff,x_BmpOn;

	// Generated message map functions
	//{{AFX_MSG(CYKDlg)
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	afx_msg void OnBtnOpen();
	afx_msg void MsgAnswer(WPARAM,LPARAM);
	afx_msg void OnBtnEdition();
	afx_msg void OnBtnRelay1();
	afx_msg void OnBtnRelay2();
	afx_msg void OnBtnRelay3();
	afx_msg void OnBtnRelay4();
	afx_msg void OnBtnRelay5();
	afx_msg void OnBtnRelay6();
	afx_msg void OnBtnRelay7();
	afx_msg void OnBtnRelay8();
	afx_msg void OnBtnRelay9();
	afx_msg void OnBtnRelay10();
	afx_msg void OnBtnRelay11();
	afx_msg void OnBtnRelay12();
	afx_msg void OnBtnSpagn();
	afx_msg void OnBtnAddress();
	afx_msg void OnTimer(UINT nIDEvent);
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_YKDLG_H__10DED81F_8602_45D2_A904_73E26235B2BA__INCLUDED_)
