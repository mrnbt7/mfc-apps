
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
END_MESSAGE_MAP()

// CMySDIView construction/destruction

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
	pDC->TextOutW(100, 100, _T("Hello, MFC SDI!"));

}


// CMySDIView diagnostics

#ifdef _DEBUG
void CMySDIView::AssertValid() const
{
	CView::AssertValid();
}

void CMySDIView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMySDIDoc* CMySDIView::GetDocument() const // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMySDIDoc)));
	return (CMySDIDoc*)m_pDocument;
}
#endif //_DEBUG


// CMySDIView message handlers
