// MyRegularStaticallyLinkedLib.h : main header file for the MyRegularStaticallyLinkedLib DLL
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'pch.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// CMyRegularStaticallyLinkedLibApp
// See MyRegularStaticallyLinkedLib.cpp for the implementation of this class
//

class CMyRegularStaticallyLinkedLibApp : public CWinApp
{
public:
	CMyRegularStaticallyLinkedLibApp();

// Overrides
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
