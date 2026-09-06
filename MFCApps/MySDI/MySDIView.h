
// MySDIView.h : interface of the CMySDIView class
//

#pragma once


class CMySDIView : public CView
{
protected: // create from serialization only
	CMySDIView() noexcept;
	DECLARE_DYNCREATE(CMySDIView)

// Attributes
public:
	CMySDIDoc* GetDocument() const;

// Operations
public:

// Overrides
public:
	virtual void OnDraw(CDC* pDC);  // overridden to draw this view
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// Implementation
public:
	virtual ~CMySDIView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in MySDIView.cpp
inline CMySDIDoc* CMySDIView::GetDocument() const
   { return reinterpret_cast<CMySDIDoc*>(m_pDocument); }
#endif

