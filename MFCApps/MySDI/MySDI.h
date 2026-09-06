
// MySDI.h : main header file for the MySDI application
//
#pragma once

#ifndef __AFXWIN_H__
	#error "include 'pch.h' before including this file for PCH"
#endif

#include "resource.h"       // main symbols


class CMySDIApp : public CWinApp
{
public:
	CMySDIApp() noexcept;

public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};

extern CMySDIApp theApp;
