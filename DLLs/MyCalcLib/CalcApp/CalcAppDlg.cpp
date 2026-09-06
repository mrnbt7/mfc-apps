
// CalcAppDlg.cpp : implementation file
//

#include "pch.h"
#include "framework.h"
#include "CalcApp.h"
#include "CalcAppDlg.h"
#include "afxdialogex.h"
#include "resource.h"


#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CCalcAppDlg dialog

CCalcAppDlg::CCalcAppDlg(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_CALCAPP_DIALOG, pParent)
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CCalcAppDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT_VALUE1, m_lVal1);
	DDX_Text(pDX, IDC_EDIT_VALUE2, m_lVal2);
	DDX_Text(pDX, IDC_EDIT_RESULT, m_lResult);
}

BEGIN_MESSAGE_MAP(CCalcAppDlg, CDialogEx)
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_BN_CLICKED(IDOK, &CCalcAppDlg::OnBnClickedOk)
	ON_BN_CLICKED(IDC_BTN_ADD, &CCalcAppDlg::OnBnClickedBtnAdd)
	ON_BN_CLICKED(IDC_BTN_SUBSTRACT, &CCalcAppDlg::OnBnClickedBtnSubstract)
	ON_BN_CLICKED(IDC_BTN_MULTIPLICATION, &CCalcAppDlg::OnBnClickedBtnMultiplication)
	ON_BN_CLICKED(IDC_BUTTON_DIVISION, &CCalcAppDlg::OnBnClickedButtonDivision)
	ON_BN_CLICKED(IDC_BTN_MODULO, &CCalcAppDlg::OnBnClickedBtnModulo)
	ON_BN_CLICKED(IDC_BTN_PERCENTAGE, &CCalcAppDlg::OnBnClickedBtnPercentage)
	ON_BN_CLICKED(IDC_BTN_POWER, &CCalcAppDlg::OnBnClickedBtnPower)
	ON_BN_CLICKED(ID_BTN_SQUARE, &CCalcAppDlg::OnBnClickedBtnSquare)
	ON_BN_CLICKED(IDC_BTN_SQARE_ROOT, &CCalcAppDlg::OnBnClickedBtnSqareRoot)
	ON_BN_CLICKED(IDC_BTN_CUBE, &CCalcAppDlg::OnBnClickedBtnCube)
	ON_BN_CLICKED(IDC_BTN_CUBE_ROOT, &CCalcAppDlg::OnBnClickedBtnCubeRoot)
	ON_BN_CLICKED(IDC_BTN_NAGATE, &CCalcAppDlg::OnBnClickedBtnNagate)
	ON_BN_CLICKED(IDC_BTN_RESIPROCAL, &CCalcAppDlg::OnBnClickedBtnResiprocal)
	ON_BN_CLICKED(IDC_BTN_NATURAL_LOG, &CCalcAppDlg::OnBnClickedBtnNaturalLog)
	ON_BN_CLICKED(IDC_BTN_LOG10, &CCalcAppDlg::OnBnClickedBtnLog10)
	ON_BN_CLICKED(IDC_BTN_EXPONENTIAL, &CCalcAppDlg::OnBnClickedBtnExponential)
END_MESSAGE_MAP()


// CCalcAppDlg message handlers

BOOL CCalcAppDlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// Set the icon for this dialog.  The framework does this automatically
	//  when the application's main window is not a dialog
	SetIcon(m_hIcon, TRUE);			// Set big icon
	SetIcon(m_hIcon, FALSE);		// Set small icon

	// TODO: Add extra initialization here

	return TRUE;  // return TRUE  unless you set the focus to a control
}

// If you add a minimize button to your dialog, you will need the code below
//  to draw the icon.  For MFC applications using the document/view model,
//  this is automatically done for you by the framework.

void CCalcAppDlg::OnPaint()
{
	CDialogEx::OnPaint();
}

// The system calls this function to obtain the cursor to display while the user drags
//  the minimized window.
HCURSOR CCalcAppDlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}


void CCalcAppDlg::OnBnClickedOk()
{
	// TODO: Add your control notification handler code here
	CDialogEx::OnOK();
}

void CCalcAppDlg::OnBnClickedBtnAdd()
{
	// 1. Read the numbers from the Edit Boxes into m_lVal1 and m_lVal2
	if (!UpdateData(TRUE))
	{
		// This stops the code if the user typed something invalid (like letters)
		return;
	}

	// 2. Perform the calculation
	 m_lResult = m_calc.Add(m_lVal1, m_lVal2);

	 // 3. Push the new m_lResult back onto the screen's result Edit Box
	 UpdateData(FALSE);
}

void CCalcAppDlg::OnBnClickedBtnSubstract()
{
	if (!UpdateData(TRUE))
		return;

	 m_lResult = m_calc.Substract(m_lVal1, m_lVal2);
	 UpdateData(FALSE);
}

void CCalcAppDlg::OnBnClickedBtnMultiplication()
{
	if (!UpdateData(TRUE))
		return;

	 m_lResult = m_calc.Multiply(m_lVal1, m_lVal2);
	 UpdateData(FALSE);
}

void CCalcAppDlg::OnBnClickedButtonDivision()
{
	if (!UpdateData(TRUE))
		return;

	 m_lResult = m_calc.Divide(m_lVal1, m_lVal2);
	 UpdateData(FALSE);
}



void CCalcAppDlg::OnBnClickedBtnModulo()
{
	if (!UpdateData(TRUE))
		return;

	m_lResult = m_calc.Modulo(m_lVal1, m_lVal2);
	UpdateData(FALSE);

}

void CCalcAppDlg::OnBnClickedBtnPercentage()
{
	if (!UpdateData(TRUE))
		return;

	m_lResult = m_calc.Percentage(m_lVal1, m_lVal2);
	UpdateData(FALSE);
}

void CCalcAppDlg::OnBnClickedBtnPower()
{
	if (!UpdateData(TRUE))
		return;

	m_lResult = m_calc.Power(m_lVal1, m_lVal2);
	UpdateData(FALSE);
}

void CCalcAppDlg::OnBnClickedBtnSquare()
{
	if (!UpdateData(TRUE))
		return;

	m_lResult = m_calc.Square(m_lVal1);
	UpdateData(FALSE);
}

void CCalcAppDlg::OnBnClickedBtnSqareRoot()
{
	if (!UpdateData(TRUE))
		return;

	m_lResult = m_calc.SquareRoot(m_lVal1);
	UpdateData(FALSE);
}

void CCalcAppDlg::OnBnClickedBtnCube()
{
	if (!UpdateData(TRUE))
		return;

	m_lResult = m_calc.Cube(m_lVal1);
	UpdateData(FALSE);
}

void CCalcAppDlg::OnBnClickedBtnCubeRoot()
{
	if (!UpdateData(TRUE))
		return;

	m_lResult = m_calc.CubeRoot(m_lVal1);
	UpdateData(FALSE);
}

void CCalcAppDlg::OnBnClickedBtnNagate()
{
	if (!UpdateData(TRUE))
		return;

	m_lResult = m_calc.Negate(m_lVal1);
	UpdateData(FALSE);
}

void CCalcAppDlg::OnBnClickedBtnResiprocal()
{
	if (!UpdateData(TRUE))
		return;

	m_lResult = m_calc.Reciprocal(m_lVal1);
	UpdateData(FALSE);
}

void CCalcAppDlg::OnBnClickedBtnNaturalLog()
{
	if (!UpdateData(TRUE))
		return;

	m_lResult = m_calc.NaturalLog(m_lVal1);
	UpdateData(FALSE);
}

void CCalcAppDlg::OnBnClickedBtnLog10()
{
	if (!UpdateData(TRUE))
		return;

	m_lResult = m_calc.Log10(m_lVal1);
	UpdateData(FALSE);
}

void CCalcAppDlg::OnBnClickedBtnExponential()
{
	if (!UpdateData(TRUE))
		return;

	m_lResult = m_calc.Exponential(m_lVal1);
	UpdateData(FALSE);
}
