
// MySDIView.cpp : implementation of the CMySDIView class
//

#include "pch.h"
#include "framework.h"
// SHARED_HANDLERS can be defined in an ATL project implementing preview, thumbnail
// and search filter handlers and allows sharing of document code with that project.
#ifndef SHARED_HANDLERS
#include "MySDI.h"
#endif

#include "MySDIDoc.h"
#include "MySDIView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMySDIView
IMPLEMENT_DYNCREATE(CMySDIView, CView)

BEGIN_MESSAGE_MAP(CMySDIView, CView)
	// Step 2: Hook up the Message Map (this is the "glue" that connects the key press to our function)
    ON_WM_CHAR() // 👈 Add this line if it isn't there already!
END_MESSAGE_MAP()

CMySDIView::CMySDIView() noexcept
{
	// TODO: add construction code here
}

CMySDIView::~CMySDIView()
{
}

BOOL CMySDIView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs
	return CView::PreCreateWindow(cs);
}

// CMySDIView drawing
void CMySDIView::OnDraw(CDC* pDC)
{
	CMySDIDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: add draw code for native data here
	pDC->TextOutW(100, 100, pDoc->m_strDisplayDocText );
}


// CMySDIView diagnostics
CMySDIDoc* CMySDIView::GetDocument() const // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMySDIDoc)));
	return (CMySDIDoc*)m_pDocument;
}


//  Step 1: Catch Key Presses in the View 
void CMySDIView::OnChar(UINT nChar, UINT nRepCnt, UINT nFlags)
{
    // 1. Get a pointer to the document
    CMySDIDoc* pDoc = GetDocument();
    ASSERT_VALID(pDoc);
    if (!pDoc)
        return;

    // 2. Check if the user pressed the 'Backspace' key
    if (nChar == VK_BACK)
    {
        // Remove the last letter if the text isn't empty
        if (!pDoc->m_strDisplayDocText.IsEmpty())
        {
            pDoc->m_strDisplayDocText.Delete(pDoc->m_strDisplayDocText.GetLength() - 1);
        }
    }
    else
    {
        // 3. Otherwise, append the new typed letter to our text variable
		pDoc->m_strDisplayDocText.AppendChar(nChar);
    }

    // 4. Tell the program that the file has changed (so it asks to save on exit)
    pDoc->SetModifiedFlag(TRUE);

    // 5. Force the screen to redraw right now with the new text!
    Invalidate();

    CView::OnChar(nChar, nRepCnt, nFlags);
}
