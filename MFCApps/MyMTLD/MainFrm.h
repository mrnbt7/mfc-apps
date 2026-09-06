
// MainFrm.h : interface of the CMainFrame class
//

#pragma once

class CMainFrame : public CFrameWnd
{

public:

	virtual ~CMainFrame();

	// Overrides
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
	virtual BOOL LoadFrame(UINT nIDResource, DWORD dwDefaultStyle = WS_OVERLAPPEDWINDOW | FWS_ADDTOTITLE, CWnd* pParentWnd = nullptr, CCreateContext* pContext = nullptr);

protected:  
	// create from serialization only
	CMainFrame() noexcept;
	DECLARE_DYNCREATE(CMainFrame)

	// control bar embedded members
	CToolBar          m_wndToolBar;
	CStatusBar        m_wndStatusBar;

   // Generated message map functions
	afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);
	afx_msg void OnFileClose();
	DECLARE_MESSAGE_MAP()

};


