
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


protected:

// Generated message map functions
protected:
	// 📜 Step 3 : Add the Function Declaration
	afx_msg void OnChar(UINT nChar, UINT nRepCnt, UINT nFlags); // 👈 Add this line
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in MySDIView.cpp
inline CMySDIDoc* CMySDIView::GetDocument() const
   { return reinterpret_cast<CMySDIDoc*>(m_pDocument); }
#endif

