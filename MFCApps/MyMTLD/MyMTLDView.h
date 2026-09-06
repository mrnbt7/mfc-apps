
// MyMTLDView.h : interface of the CMyMTLDView class
//

#pragma once


class CMyMTLDView : public CView
{

public:
	CMyMTLDDoc* GetDocument() const;
	// Overrides
	virtual void OnDraw(CDC* pDC);  // overridden to draw this view
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);

    // Implementation
	virtual ~CMyMTLDView();

protected:
	// create from serialization only
	CMyMTLDView() noexcept;
	DECLARE_DYNCREATE(CMyMTLDView)

	// Generated message map functions
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in MyMTLDView.cpp
inline CMyMTLDDoc* CMyMTLDView::GetDocument() const
   { return reinterpret_cast<CMyMTLDDoc*>(m_pDocument); }
#endif

