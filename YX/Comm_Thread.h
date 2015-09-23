#if !defined(AFX_COMM_THREAD_H__431D3734_50EA_468A_807E_A2E9C98EB06D__INCLUDED_)
#define AFX_COMM_THREAD_H__431D3734_50EA_468A_807E_A2E9C98EB06D__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// Comm_Thread.h : header file
//


/////////////////////////////////////////////////////////////////////////////
// CComm_Thread thread

class CComm_Thread : public CWinThread
{
	DECLARE_DYNCREATE(CComm_Thread)
protected:
	CComm_Thread();           // protected constructor used by dynamic creation
// Attributes
public:
	unsigned char CommMsgS[100];
	unsigned char CommMsgR[100];
	int xLength;
	BOOL bOutComm;
	BOOL CommLink;
// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CComm_Thread)
	public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();
	virtual BOOL OnIdle(LONG lCount);
	//}}AFX_VIRTUAL

// Implementation
protected:
	virtual ~CComm_Thread();

	BOOL Init_ComPort();
	void Exit_ComPort();
    BOOL CommSend(unsigned char *mdata,int mLength);
    int CommRecv(unsigned char *);
	void CRC16(unsigned char* ,int,unsigned char*);
	// Generated message map functions
	//{{AFX_MSG(CComm_Thread)
		// NOTE - the ClassWizard will add and remove member functions here.
	afx_msg void MsgCommSnd(WPARAM wParam,LPARAM lParam);
	afx_msg void MsgCommBtn(WPARAM wParam,LPARAM lParam);
	//}}AFX_MSG

	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_COMM_THREAD_H__431D3734_50EA_468A_807E_A2E9C98EB06D__INCLUDED_)
