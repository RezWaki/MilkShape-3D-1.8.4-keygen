// MilkShape3D_keygenDlg.cpp : implementation file
//

#include "stdafx.h"
#include "MilkShape3D_keygen.h"
#include "MilkShape3D_keygenDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CMilkShape3D_keygenDlg dialog
CMilkShape3D_keygenDlg::CMilkShape3D_keygenDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CMilkShape3D_keygenDlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(CMilkShape3D_keygenDlg)
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CMilkShape3D_keygenDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CMilkShape3D_keygenDlg)
		// NOTE: the ClassWizard will add DDX and DDV calls here
	//}}AFX_DATA_MAP
}

BEGIN_MESSAGE_MAP(CMilkShape3D_keygenDlg, CDialog)
	//{{AFX_MSG_MAP(CMilkShape3D_keygenDlg)
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_BN_CLICKED(IDOK, OnGen)
	ON_EN_CHANGE(IDC_EDIT2, OnChangeEdit2)
	ON_BN_CLICKED(IDOK2, OnOk2)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CMilkShape3D_keygenDlg message handlers

BOOL CMilkShape3D_keygenDlg::OnInitDialog()
{
	CDialog::OnInitDialog();

	SetIcon(m_hIcon, TRUE);			// Set big icon
	SetIcon(m_hIcon, FALSE);		// Set small icon
	
	// TODO: Add extra initialization here
	
	return TRUE;  // return TRUE  unless you set the focus to a control
}

// If you add a minimize button to your dialog, you will need the code below
//  to draw the icon.  For MFC applications using the document/view model,
//  this is automatically done for you by the framework.

void CMilkShape3D_keygenDlg::OnPaint() 
{
	if (IsIconic())
	{
		CPaintDC dc(this); // device context for painting

		SendMessage(WM_ICONERASEBKGND, (WPARAM) dc.GetSafeHdc(), 0);

		// Center icon in client rectangle
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// Draw the icon
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialog::OnPaint();
	}
}

HCURSOR CMilkShape3D_keygenDlg::OnQueryDragIcon()
{
	return (HCURSOR) m_hIcon;
}

void CMilkShape3D_keygenDlg::OnGen() 
{
	CEdit *editBoxPtr = (CEdit *) (this->GetDlgItem(IDC_EDIT1));
	CEdit *editBoxPtr2 = (CEdit *) (this->GetDlgItem(IDC_EDIT2));
	editBoxPtr->SetWindowText("CodeByRezWaki");
	editBoxPtr2->SetWindowText("40d5D-E26dKG-SFFFFFF");
}

void CMilkShape3D_keygenDlg::OnChangeEdit2() 
{
		// send this notification unless you override the CDialog::OnInitDialog()
	// function and call CRichEditCtrl().SetEventMask()
	// with the ENM_CHANGE flag ORed into the mask.
	
	// TODO: Add your control notification handler code here
	
}



void CMilkShape3D_keygenDlg::OnOk2() 
{
MessageBox("KeyGen written By RezWaki on C++98 (VS 6.0) without .NET FrameWork", "INFO", MB_OK);	
}
