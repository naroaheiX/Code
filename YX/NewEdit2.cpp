// NewEdit2.cpp : implementation file
//

#include "stdafx.h"
#include "O.h"
#include "NewEdit2.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CNewEdit2

CNewEdit2::CNewEdit2()
{
}

CNewEdit2::~CNewEdit2()
{
}


BEGIN_MESSAGE_MAP(CNewEdit2, CEdit)
	//{{AFX_MSG_MAP(CNewEdit2)
	ON_WM_CHAR()
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CNewEdit2 message handlers

void CNewEdit2::OnChar(UINT nChar, UINT nRepCnt, UINT nFlags) 
{
	// TODO: Add your message handler code here and/or call default
	if(nChar>='0' && nChar<='9' || nChar=='DEL'|| nChar==8)
	{
		CEdit::OnChar(nChar, nRepCnt, nFlags);
	}
}
