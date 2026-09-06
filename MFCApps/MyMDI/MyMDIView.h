
// MyMDIView.h : interface of the CMyMDIView class
//

#pragma once


class CMyMDIView : public CView
{
protected: // create from serialization only
	CMyMDIView() noexcept;
	DECLARE_DYNCREATE(CMyMDIView)

// Attributes
public:
	CMyMDIDoc* GetDocument() const;

// Operations
public:

// Overrides
public:
	virtual void OnDraw(CDC* pDC);  // overridden to draw this view
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// Implementation
public:
	virtual ~CMyMDIView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in MyMDIView.cpp
inline CMyMDIDoc* CMyMDIView::GetDocument() const
   { return reinterpret_cast<CMyMDIDoc*>(m_pDocument); }
#endif

