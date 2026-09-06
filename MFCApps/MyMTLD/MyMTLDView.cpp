
// MyMTLDView.cpp : implementation of the CMyMTLDView class
//

#include "pch.h"
#include "framework.h"
// SHARED_HANDLERS can be defined in an ATL project implementing preview, thumbnail
// and search filter handlers and allows sharing of document code with that project.
#ifndef SHARED_HANDLERS
#include "MyMTLD.h"
#endif

#include "MyMTLDDoc.h"
#include "MyMTLDView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMyMTLDView

IMPLEMENT_DYNCREATE(CMyMTLDView, CView)

BEGIN_MESSAGE_MAP(CMyMTLDView, CView)
END_MESSAGE_MAP()

// CMyMTLDView construction/destruction

CMyMTLDView::CMyMTLDView() noexcept
{
	// TODO: add construction code here
}

CMyMTLDView::~CMyMTLDView()
{
}

BOOL CMyMTLDView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

// CMyMTLDView drawing

void CMyMTLDView::OnDraw(CDC* /*pDC*/)
{
	CMyMTLDDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: add draw code for native data here
}


CMyMTLDDoc* CMyMTLDView::GetDocument() const // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMyMTLDDoc)));
	return (CMyMTLDDoc*)m_pDocument;
}

