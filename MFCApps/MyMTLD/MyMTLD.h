
// MyMTLD.h : main header file for the MyMTLD application
//
#pragma once

#ifndef __AFXWIN_H__
	#error "include 'pch.h' before including this file for PCH"
#endif

#include "resource.h"       // main symbols


// CMyMTLDApp:
// See MyMTLD.cpp for the implementation of this class
//

class CMyMTLDApp : public CWinApp
{

public:
	CMyMTLDApp() noexcept;

	// Overrides
	virtual BOOL InitInstance();

    // Implementation
	afx_msg void OnFileNewFrame();
	afx_msg void OnFileNew();
	DECLARE_MESSAGE_MAP()

protected:
	CMultiDocTemplate* m_pDocTemplate;
};

extern CMyMTLDApp theApp;
