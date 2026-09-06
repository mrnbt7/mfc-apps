
// MyMDIView.h : interface of the CMyMDIView class
//

#pragma once


class CMyMDIView : public CView
{

public:
	// Attributes
	CMyMDIDoc* GetDocument() const;
	virtual ~CMyMDIView();

	// Overrides
	virtual void OnDraw(CDC* pDC);  // overridden to draw this view
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
	


protected:
	CMyMDIView() noexcept;
	DECLARE_DYNCREATE(CMyMDIView)

	// Generated message map functions
	// 📜 Step 3 : Add the Function Declaration
	afx_msg void OnChar(UINT nChar, UINT nRepCnt, UINT nFlags); // 👈 Add this line
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in MyMDIView.cpp
inline CMyMDIDoc* CMyMDIView::GetDocument() const
   { return reinterpret_cast<CMyMDIDoc*>(m_pDocument); }
#endif

