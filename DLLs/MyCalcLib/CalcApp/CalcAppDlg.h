
// CalcAppDlg.h : header file
//

#pragma once
#include "Calc.h"

// CCalcAppDlg dialog
class CCalcAppDlg : public CDialogEx
{
// Construction
public:
	CCalcAppDlg(CWnd* pParent = nullptr);	// standard constructor
	double m_lVal1;
	double m_lVal2;
	double m_lResult;
	Calc m_calc;


// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_CALCAPP_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support


// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	virtual BOOL OnInitDialog();
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedOk();
	afx_msg void OnBnClickedBtnAdd();
	afx_msg void OnBnClickedBtnSubstract();
	afx_msg void OnBnClickedBtnMultiplication();
	afx_msg void OnBnClickedButtonDivision();
	afx_msg void OnBnClickedBtnModulo();
	afx_msg void OnBnClickedBtnPercentage();
	afx_msg void OnBnClickedBtnPower();
	afx_msg void OnBnClickedBtnSquare();
	afx_msg void OnBnClickedBtnSqareRoot();
	afx_msg void OnBnClickedBtnCube();
	afx_msg void OnBnClickedBtnCubeRoot();
	afx_msg void OnBnClickedBtnNagate();
	afx_msg void OnBnClickedBtnResiprocal();
	afx_msg void OnBnClickedBtnNaturalLog();
	afx_msg void OnBnClickedBtnLog10();
	afx_msg void OnBnClickedBtnExponential();
};
