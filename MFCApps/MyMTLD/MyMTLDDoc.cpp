
// MyMTLDDoc.cpp : implementation of the CMyMTLDDoc class
//

#include "pch.h"
#include "framework.h"
// SHARED_HANDLERS can be defined in an ATL project implementing preview, thumbnail
// and search filter handlers and allows sharing of document code with that project.
#ifndef SHARED_HANDLERS
#include "MyMTLD.h"
#endif

#include "MyMTLDDoc.h"

#include <propkey.h>

#ifdef _DEBUG
#define new DEBUG_NEW
#endif

// CMyMTLDDoc

IMPLEMENT_DYNCREATE(CMyMTLDDoc, CDocument)

BEGIN_MESSAGE_MAP(CMyMTLDDoc, CDocument)
END_MESSAGE_MAP()

CMyMTLDDoc::CMyMTLDDoc() noexcept
{
	// TODO: add one-time construction code here

}

CMyMTLDDoc::~CMyMTLDDoc()
{
}

BOOL CMyMTLDDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: add reinitialization code here
	// (SDI documents will reuse this document)

	return TRUE;
}


// CMyMTLDDoc serialization
void CMyMTLDDoc::Serialize(CArchive& ar)
{
	if (ar.IsStoring())
	{
		// TODO: add storing code here
	}
	else
	{
		// TODO: add loading code here
	}
}



