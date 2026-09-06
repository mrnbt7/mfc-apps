
// MyMDI.h : main header file for the MyMDI application
//
#pragma once

#ifndef __AFXWIN_H__
	#error "include 'pch.h' before including this file for PCH"
#endif

#include "resource.h"       // main symbols


// CMyMDIApp:
// See MyMDI.cpp for the implementation of this class
//

class CMyMDIApp : public CWinApp
{
public:
	CMyMDIApp() noexcept;

	// Overrides
	virtual BOOL InitInstance();
	virtual int ExitInstance();

	// Generated message map functions
	DECLARE_MESSAGE_MAP()
};

extern CMyMDIApp theApp;
