
// MySDI.h : main header file for the MySDI application
//
#pragma once

#ifndef __AFXWIN_H__
	#error "include 'pch.h' before including this file for PCH"
#endif

#include "resource.h"       // main symbols


// CMySDIApp:
// See MySDI.cpp for the implementation of this class
//

class CMySDIApp : public CWinApp
{
public:
	CMySDIApp() noexcept;


// Overrides
public:
	virtual BOOL InitInstance();

// Implementation
	DECLARE_MESSAGE_MAP()
};

extern CMySDIApp theApp;
