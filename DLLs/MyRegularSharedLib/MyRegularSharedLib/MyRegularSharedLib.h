// MyRegularSharedLib.h : main header file for the MyRegularSharedLib DLL
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'pch.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// CMyRegularSharedLibApp
// See MyRegularSharedLib.cpp for the implementation of this class
//

class CMyRegularSharedLibApp : public CWinApp
{
public:
	CMyRegularSharedLibApp();

// Overrides
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
