#pragma once
#include "afxdialogex.h"



// CSUMDialog 对话框

class CSUMDialog : public CDialogEx
{
	DECLARE_DYNAMIC(CSUMDialog)

public:
	CSUMDialog(CWnd* pParent = nullptr);   // 标准构造函数
	virtual ~CSUMDialog();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG1 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	double m_editsumOne;
	double m_sumTwo;
	double m_sum;
	afx_msg void OnBnClickedAddButton();

};
