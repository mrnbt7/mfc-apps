
// MyMDIDoc.h : interface of the CMyMDIDoc class
//


#pragma once


class CMyMDIDoc : public CDocument
{

public:
    // attributes 
	CString m_strDisplayDocText;
	virtual ~CMyMDIDoc();
	// Overrides
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);


protected:
	CMyMDIDoc() noexcept;
	DECLARE_DYNCREATE(CMyMDIDoc)

	// Generated message map functions
	DECLARE_MESSAGE_MAP()
};
