
// MySDIDoc.h : interface of the CMySDIDoc class
//


#pragma once


class CMySDIDoc : public CDocument
{
protected: // create from serialization only
	CMySDIDoc() noexcept;
	DECLARE_DYNCREATE(CMySDIDoc)

public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);
	virtual ~CMySDIDoc();

// Generated message map functions
protected:
	DECLARE_MESSAGE_MAP()


public:
	CString m_strDisplayDocText;
};
