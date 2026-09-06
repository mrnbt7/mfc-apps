
// MyMDIView.cpp : implementation of the CMyMDIView class
//

#include "pch.h"
#include "framework.h"
// SHARED_HANDLERS can be defined in an ATL project implementing preview, thumbnail
// and search filter handlers and allows sharing of document code with that project.
#ifndef SHARED_HANDLERS
#include "MyMDI.h"
#endif

#include "MyMDIDoc.h"
#include "MyMDIView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMyMDIView

IMPLEMENT_DYNCREATE(CMyMDIView, CView)

BEGIN_MESSAGE_MAP(CMyMDIView, CView)
// 🗺️ Step 2: Hook up the Message Map (this is the "glue" that connects the key press to our function)
    ON_WM_CHAR() // 👈 Add this line if it isn't there already!
END_MESSAGE_MAP()


CMyMDIView::CMyMDIView() noexcept
{
	// TODO: add construction code here
}

CMyMDIView::~CMyMDIView()
{
}

BOOL CMyMDIView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

// CMyMDIView drawing
void CMyMDIView::OnDraw(CDC* pDC)
{
	CMyMDIDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: add draw code for native data here
	pDC->TextOutW(100, 100, pDoc->m_strDisplayDocText );
}


CMyMDIDoc* CMyMDIView::GetDocument() const // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMyMDIDoc)));
	return (CMyMDIDoc*)m_pDocument;
}


// 🎹 Step 1: Catch Key Presses in the View 
void CMyMDIView::OnChar(UINT nChar, UINT nRepCnt, UINT nFlags)
{
    // 1. Get a pointer to the document
    CMyMDIDoc* pDoc = GetDocument();
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


