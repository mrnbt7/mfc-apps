
// MyDlg.cpp : Defines the class behaviors for the application.
//

#include "pch.h"
#include "framework.h"
#include "MyDlg.h"
#include "MyDlgDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMyDlgApp

BEGIN_MESSAGE_MAP(CMyDlgApp, CWinApp)
	ON_COMMAND(ID_HELP, &CWinApp::OnHelp)
END_MESSAGE_MAP()


// CMyDlgApp construction

CMyDlgApp::CMyDlgApp()
{
	// support Restart Manager
	m_dwRestartManagerSupportFlags = AFX_RESTART_MANAGER_SUPPORT_RESTART;

	// TODO: add construction code here,
	// Place all significant initialization in InitInstance
}


// The one and only CMyDlgApp object

CMyDlgApp theApp;


// CMyDlgApp initialization

BOOL CMyDlgApp::InitInstance()
{
	CWinApp::InitInstance();
	AfxEnableControlContainer();

	CMyDlgDlg dlg;
	m_pMainWnd = &dlg;
	INT_PTR nResponse = dlg.DoModal();

	if (nResponse == IDOK)
	{
		// TODO: Place code here to handle when the dialog is
		//  dismissed with OK
	}
	else if (nResponse == IDCANCEL)
	{
		// TODO: Place code here to handle when the dialog is
		//  dismissed with Cancel
	}
	else if (nResponse == -1)
	{
		TRACE(traceAppMsg, 0, "Warning: dialog creation failed, so application is terminating unexpectedly.\n");
	}


#if !defined(_AFXDLL) && !defined(_AFX_NO_MFC_CONTROLS_IN_DIALOGS)
	ControlBarCleanUp();
#endif

	// Since the dialog has been closed, return FALSE so that we exit the
	//  application, rather than start the application's message pump.
	return FALSE;
}

