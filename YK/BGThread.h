#if !defined(AFX_BGTHREAD_H__B0EC487E_1D5E_4DAF_A429_8BCC3B3F96E4__INCLUDED_)
#define AFX_BGTHREAD_H__B0EC487E_1D5E_4DAF_A429_8BCC3B3F96E4__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// BGThread.h : header file
//


/////////////////////////////////////////////////////////////////////////////
// CBGThread thread

class CBGThread : public CWinThread
{
	DECLARE_DYNCREATE(CBGThread)
protected:
	CBGThread();           // protected constructor used by dynamic creation

// Attributes
public:

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CBGThread)
	public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();
	virtual BOOL OnIdle(LONG lCount);
	//}}AFX_VIRTUAL

// Implementation
protected:
	virtual ~CBGThread();

	BOOL Init_SP();
	void Exit_SP();
	BOOL CommSend(unsigned char* data,int Length);
	int CommReceive(unsigned char * data);
	BOOL CommLink,CommOn;
	void CRC16(unsigned char* ,int,unsigned char*);
	unsigned char CommMsgS[50],CommMsgR[50],x_Length;

	// Generated message map functions
	//{{AFX_MSG(CBGThread)
		// NOTE - the ClassWizard will add and remove member functions here.
	afx_msg void MsgCommBtn(WPARAM wParam,LPARAM lParam);
	afx_msg void MsgSend(WPARAM,LPARAM);
	//}}AFX_MSG

	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_BGTHREAD_H__B0EC487E_1D5E_4DAF_A429_8BCC3B3F96E4__INCLUDED_)
