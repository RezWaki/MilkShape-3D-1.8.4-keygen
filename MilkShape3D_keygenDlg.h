// MilkShape3D_keygenDlg.h : header file
//

#if !defined(AFX_MILKSHAPE3D_KEYGENDLG_H__AD50C0CF_B9A1_47C2_8D9D_C33E29055C57__INCLUDED_)
#define AFX_MILKSHAPE3D_KEYGENDLG_H__AD50C0CF_B9A1_47C2_8D9D_C33E29055C57__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

/////////////////////////////////////////////////////////////////////////////
// CMilkShape3D_keygenDlg dialog

class CMilkShape3D_keygenDlg : public CDialog
{
// Construction
public:
	CMilkShape3D_keygenDlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	//{{AFX_DATA(CMilkShape3D_keygenDlg)
	enum { IDD = IDD_MILKSHAPE3D_KEYGEN_DIALOG };
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMilkShape3D_keygenDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	//{{AFX_MSG(CMilkShape3D_keygenDlg)
	virtual BOOL OnInitDialog();
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	afx_msg void OnGen();
	afx_msg void OnChangeEdit2();
	afx_msg void OnButton1();
	afx_msg void OnOk2();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MILKSHAPE3D_KEYGENDLG_H__AD50C0CF_B9A1_47C2_8D9D_C33E29055C57__INCLUDED_)
