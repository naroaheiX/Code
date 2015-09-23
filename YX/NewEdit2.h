#if !defined(AFX_NEWEDIT2_H__C01B6D5A_D5B1_44FD_ADCF_6BA32C0370D3__INCLUDED_)
#define AFX_NEWEDIT2_H__C01B6D5A_D5B1_44FD_ADCF_6BA32C0370D3__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// NewEdit2.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CNewEdit2 window

class CNewEdit2 : public CEdit
{
// Construction
public:
	CNewEdit2();

// Attributes
public:

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CNewEdit2)
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CNewEdit2();

	// Generated message map functions
protected:
	//{{AFX_MSG(CNewEdit2)
	afx_msg void OnChar(UINT nChar, UINT nRepCnt, UINT nFlags);
	//}}AFX_MSG

	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_NEWEDIT2_H__C01B6D5A_D5B1_44FD_ADCF_6BA32C0370D3__INCLUDED_)
