// ODlg.h : header file
//

#if !defined(AFX_ODLG_H__AB278393_9387_40E2_B286_FEF488BB1949__INCLUDED_)
#define AFX_ODLG_H__AB278393_9387_40E2_B286_FEF488BB1949__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

/////////////////////////////////////////////////////////////////////////////
// CODlg dialog
#include "Led.h"
#include "NewEdit.h"
#include "NewEdit2.h"

class CODlg : public CDialog
{
// Construction
public:
	CODlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	//{{AFX_DATA(CODlg)
	enum { IDD = IDD_O_DIALOG };
	CStatic	m_YXClock;
	CNewEdit2	m_NE72;
	CNewEdit2	m_NE71;
	CNewEdit2	m_NE70;
	CNewEdit2	m_NE69;
	CNewEdit2	m_NE68;
	CNewEdit2	m_NE67;
	CNewEdit2	m_NE66;
	CNewEdit2	m_NE65;
	CNewEdit2	m_NE64;
	CNewEdit2	m_NE63;
	CNewEdit2	m_NE62;
	CNewEdit2	m_NE61;
	CNewEdit2	m_NE60;
	CNewEdit2	m_NE59;
	CNewEdit2	m_NE58;
	CNewEdit2	m_NE57;
	CNewEdit2	m_NE56;
	CNewEdit2	m_NE55;
	CNewEdit2	m_NE54;
	CNewEdit2	m_NE53;
	CNewEdit2	m_NE52;
	CNewEdit2	m_NE51;
	CNewEdit2	m_NE50;
	CNewEdit2	m_NE49;
	CNewEdit2	m_NE48;
	CNewEdit2	m_NE47;
	CNewEdit2	m_NE46;
	CNewEdit2	m_NE45;
	CNewEdit2	m_NE44;
	CNewEdit2	m_NE43;
	CNewEdit2	m_NE42;
	CNewEdit2	m_NE41;
	CNewEdit2	m_NE40;
	CNewEdit2	m_NE39;
	CNewEdit2	m_NE38;
	CNewEdit2	m_NE37;
	CNewEdit2	m_NE2Day;
	CNewEdit2	m_NE2Hour;
	CNewEdit2	m_NE2Jitter;
	CNewEdit2	m_NE2Minute;
	CNewEdit2	m_NE2Month;
	CNewEdit2	m_NE2Second;
	CNewEdit2	m_NE2Year;
	CNewEdit	m_NewEdit;
	CComboBox	m_cbbBaudRate;
	CLed	m_Led36;
	CLed	m_Led35;
	CLed	m_Led34;
	CLed	m_Led33;
	CLed	m_Led32;
	CLed	m_Led31;
	CLed	m_Led30;
	CLed	m_Led29;
	CLed	m_Led28;
	CLed	m_Led27;
	CLed	m_Led26;
	CLed	m_Led25;
	CLed	m_Led24;
	CLed	m_Led23;
	CLed	m_Led22;
	CLed	m_Led21;
	CLed	m_Led20;
	CLed	m_Led19;
	CLed	m_Led18;
	CLed	m_Led17;
	CLed	m_Led16;
	CLed	m_Led15;
	CLed	m_Led14;
	CLed	m_Led13;
	CLed	m_Led12;
	CLed	m_Led11;
	CLed	m_Led10;
	CLed	m_Led09;
	CLed	m_Led08;
	CLed	m_Led07;
	CLed	m_Led06;
	CLed	m_Led05;
	CLed	m_Led04;
	CLed	m_Led03;
	CLed	m_Led02;
	CLed	m_Led01;
	CButton	m_ctlComBtn;
	CComboBox	m_cbbBox;
	int		m_lJitter;
	int		m_iRadio;
	int		m_iDay;
	int		m_iHour;
	int		m_iMinute;
	int		m_iMonth;
	int		m_iSecond;
	int		m_iYear;
	int		m_iEdit37;
	int		m_iEdit38;
	int		m_iEdit39;
	int		m_iEdit40;
	int		m_iEdit41;
	int		m_iEdit42;
	int		m_iEdit43;
	int		m_iEdit44;
	int		m_iEdit45;
	int		m_iEdit46;
	int		m_iEdit47;
	int		m_iEdit48;
	int		m_iEdit49;
	int		m_iEdit50;
	int		m_iEdit51;
	int		m_iEdit52;
	int		m_iEdit53;
	int		m_iEdit54;
	int		m_iEdit55;
	int		m_iEdit56;
	int		m_iEdit57;
	int		m_iEdit58;
	int		m_iEdit59;
	int		m_iEdit60;
	int		m_iEdit61;
	int		m_iEdit62;
	int		m_iEdit63;
	int		m_iEdit64;
	int		m_iEdit65;
	int		m_iEdit66;
	int		m_iEdit67;
	int		m_iEdit68;
	int		m_iEdit69;
	int		m_iEdit70;
	int		m_iEdit71;
	int		m_iEdit72;
	DWORD	m_RNum;
	DWORD	m_SNum;
	int		m_Enum;
	int		m_ErrNum;
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CODlg)
	public:
	virtual BOOL PreTranslateMessage(MSG* pMsg);
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	//{{AFX_MSG(CODlg)
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	afx_msg void OnCombtn();
	afx_msg void OnBtnEdt();
	afx_msg void OnBtnRtime();
	afx_msg void OnBtnStime();
	afx_msg void OnBtnJtime();
	afx_msg void OnTimer(UINT nIDEvent);
	afx_msg void OnBtnEvnt();
	afx_msg void MsgCommAns(WPARAM,LPARAM);
	afx_msg void OnRadio1();
	afx_msg void OnRadio2();
	afx_msg void OnBtnSystime();
	afx_msg HBRUSH OnCtlColor(CDC* pDC, CWnd* pWnd, UINT nCtlColor);
	afx_msg void OnDestroy();
	virtual void OnCancel();
	afx_msg void OnSetSysTime();
	afx_msg void OnButton37();
	afx_msg void OnButton38();
	afx_msg void OnBtnCleanevent();
	afx_msg void OnButton39();
	afx_msg void OnBtnBasic();
	afx_msg void OnChkEvent();
	afx_msg void OnBtnStop();
	afx_msg void OnBtnFlscomm();
	afx_msg void OnChkYxclock();
	afx_msg BOOL OnEraseBkgnd(CDC* pDC);
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
protected:
	void EventMark();
	int GetCom();
	CBitmap x_bmpErr;
	CBitmap x_bmpOk;
	unsigned int x_Previous1,x_Previous2,ErrNum;
	BOOL First,bFirst;

};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_ODLG_H__AB278393_9387_40E2_B286_FEF488BB1949__INCLUDED_)
