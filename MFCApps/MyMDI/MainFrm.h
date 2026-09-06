
// MainFrm.h : interface of the CMainFrame class
//

#pragma once

class CMainFrame : public CMDIFrameWnd
{
	
public:
	CMainFrame() noexcept;
	virtual ~CMainFrame();
	// Overrides
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
	

protected:  // control bar embedded members
	CToolBar          m_wndToolBar;
	CStatusBar        m_wndStatusBar;

	// Generated message map functions
	afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);
	DECLARE_MESSAGE_MAP()

private:
	DECLARE_DYNAMIC(CMainFrame)

};


