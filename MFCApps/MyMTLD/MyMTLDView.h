
// MyMTLDView.h : interface of the CMyMTLDView class
//

#pragma once


class CMyMTLDView : public CView
{
protected: // create from serialization only
	CMyMTLDView() noexcept;
	DECLARE_DYNCREATE(CMyMTLDView)

// Attributes
public:
	CMyMTLDDoc* GetDocument() const;

// Operations
public:

// Overrides
public:
	virtual void OnDraw(CDC* pDC);  // overridden to draw this view
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// Implementation
public:
	virtual ~CMyMTLDView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in MyMTLDView.cpp
inline CMyMTLDDoc* CMyMTLDView::GetDocument() const
   { return reinterpret_cast<CMyMTLDDoc*>(m_pDocument); }
#endif

