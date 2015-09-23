// NewEdit.cpp : implementation file
//

#include "stdafx.h"
#include "O.h"
#include "NewEdit.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CNewEdit

CNewEdit::CNewEdit()
{
}

CNewEdit::~CNewEdit()
{
}


BEGIN_MESSAGE_MAP(CNewEdit, CEdit)
	//{{AFX_MSG_MAP(CNewEdit)
	ON_WM_CHAR()
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CNewEdit message handlers

void CNewEdit::OnChar(UINT nChar, UINT nRepCnt, UINT nFlags) 
{
	// TODO: Add your message handler code here and/or call default
	if(!nChar)
	{
		CEdit::OnChar(nChar, nRepCnt, nFlags);
	}
}
