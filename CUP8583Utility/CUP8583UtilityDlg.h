// CUP8583UtilityDlg.h : header file
//

#pragma once
#include "afxwin.h"
#include "afxcmn.h"


// CCUP8583UtilityDlg dialog
class CCUP8583UtilityDlg : public CDialog
{
// Construction
public:
	CCUP8583UtilityDlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	enum { IDD = IDD_CUP8583UTILITY_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support


// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	afx_msg LRESULT OnHotKey(WPARAM wParam,LPARAM lParam);//手动加入.  
	DECLARE_MESSAGE_MAP()
public:
	CEdit m_ceOriginal8583Msg;
	CEdit m_cdDE55;
	afx_msg void OnEnChangeOriginal8583msg();
	CEdit m_ceFieldContent;
	afx_msg void OnEnChangeEdit1();
	afx_msg void OnBnClickedBtnClear();
	afx_msg void OnBnClickedBtnselect();
	CString m_csOrig8583MsgCount;
	afx_msg void OnClose();
};
