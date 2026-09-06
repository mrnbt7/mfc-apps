
// MyMDIDoc.cpp : implementation of the CMyMDIDoc class
//

#include "pch.h"
#include "framework.h"
// SHARED_HANDLERS can be defined in an ATL project implementing preview, thumbnail
// and search filter handlers and allows sharing of document code with that project.
#ifndef SHARED_HANDLERS
#include "MyMDI.h"
#endif

#include "MyMDIDoc.h"

#include <propkey.h>

#ifdef _DEBUG
#define new DEBUG_NEW
#endif

// CMyMDIDoc

IMPLEMENT_DYNCREATE(CMyMDIDoc, CDocument)

BEGIN_MESSAGE_MAP(CMyMDIDoc, CDocument)
END_MESSAGE_MAP()


CMyMDIDoc::CMyMDIDoc() noexcept
{
	// TODO: add one-time construction code here
}

CMyMDIDoc::~CMyMDIDoc()
{
}

BOOL CMyMDIDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: add reinitialization code here
	// (SDI documents will reuse this document)

	  // 👈 Set a default starting message
	m_strDisplayDocText = _T("Hello! This text is stored in the Document.");

	return TRUE;
}


// CMyMDIDoc serialization
void CMyMDIDoc::Serialize(CArchive& ar)
{
	if (ar.IsStoring())
	{
		// TODO: add storing code here
		 // 💾 SAVING: Send the text to the file archive
		ar << m_strDisplayDocText;
	}
	else
	{
		// TODO: add loading code here
		// 📂 LOADING: Pull the text out of the file archive
		ar >> m_strDisplayDocText;
	}
}

