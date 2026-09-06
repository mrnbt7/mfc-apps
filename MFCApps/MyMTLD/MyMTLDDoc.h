
// MyMTLDDoc.h : interface of the CMyMTLDDoc class
//


#pragma once


class CMyMTLDDoc : public CDocument
{

public:
	// Overrides
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);
	
	// Implementation
	virtual ~CMyMTLDDoc();


protected:
	// create from serialization only
	CMyMTLDDoc() noexcept;
	DECLARE_DYNCREATE(CMyMTLDDoc)

   // Generated message map functions
	DECLARE_MESSAGE_MAP()

};
