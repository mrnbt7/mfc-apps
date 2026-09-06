
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
END_MESSAGE_MAP()

// CMyMDIView construction/destruction

CMyMDIView::CMyMDIView() noexcept
{
	// TODO: add construction code here

}

CMyMDIView::~CMyMDIView()
{
}

BOOL CMyMDIView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

// CMyMDIView drawing

void CMyMDIView::OnDraw(CDC* /*pDC*/)
{
	CMyMDIDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: add draw code for native data here
}


// CMyMDIView diagnostics

#ifdef _DEBUG
void CMyMDIView::AssertValid() const
{
	CView::AssertValid();
}

void CMyMDIView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMyMDIDoc* CMyMDIView::GetDocument() const // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMyMDIDoc)));
	return (CMyMDIDoc*)m_pDocument;
}
#endif //_DEBUG


// CMyMDIView message handlers
