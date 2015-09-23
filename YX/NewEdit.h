#if !defined(AFX_NEWEDIT_H__F20C75AA_47B4_4F52_A9CE_3A0AD02B78BE__INCLUDED_)
#define AFX_NEWEDIT_H__F20C75AA_47B4_4F52_A9CE_3A0AD02B78BE__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// NewEdit.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CNewEdit window

class CNewEdit : public CEdit
{
// Construction
public:
	CNewEdit();

// Attributes
public:

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CNewEdit)
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CNewEdit();

	// Generated message map functions
protected:
	//{{AFX_MSG(CNewEdit)
	afx_msg void OnChar(UINT nChar, UINT nRepCnt, UINT nFlags);
	//}}AFX_MSG

	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_NEWEDIT_H__F20C75AA_47B4_4F52_A9CE_3A0AD02B78BE__INCLUDED_)
