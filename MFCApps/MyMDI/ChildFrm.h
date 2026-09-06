
// ChildFrm.h : interface of the CChildFrame class
//

#pragma once

class CChildFrame : public CMDIChildWnd
{


public:
	CChildFrame() noexcept;
	virtual ~CChildFrame();
	// Overrides
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);

protected:
	// Attributes
	CSplitterWnd m_wndSplitter;

    // Generated message map functions
	DECLARE_MESSAGE_MAP()

private:
	DECLARE_DYNCREATE(CChildFrame)
};
