
// MySDIDoc.cpp : implementation of the CMySDIDoc class
//

#include "pch.h"
#include "framework.h"
// SHARED_HANDLERS can be defined in an ATL project implementing preview, thumbnail
// and search filter handlers and allows sharing of document code with that project.
#ifndef SHARED_HANDLERS
#include "MySDI.h"
#endif

#include "MySDIDoc.h"

#include <propkey.h>

#ifdef _DEBUG
#define new DEBUG_NEW
#endif

// CMySDIDoc

IMPLEMENT_DYNCREATE(CMySDIDoc, CDocument)

BEGIN_MESSAGE_MAP(CMySDIDoc, CDocument)
END_MESSAGE_MAP()


CMySDIDoc::CMySDIDoc() noexcept
{
	// TODO: add one-time construction code here

}

CMySDIDoc::~CMySDIDoc()
{
}

BOOL CMySDIDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: add reinitialization code here
	// (SDI documents will reuse this document)

  // 👈 Set a default starting message
	m_strDisplayDocText = _T("Hello! This text is stored in the Document.");

	return TRUE;
}


// CMySDIDoc serialization
void CMySDIDoc::Serialize(CArchive& ar)
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

