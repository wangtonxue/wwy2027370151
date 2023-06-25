#pragma once
#include "afxdialogex.h"


// TipDialog 对话框

class TipDialog : public CDialogEx
{
	DECLARE_DYNAMIC(TipDialog)

public:
	TipDialog(CWnd* pParent = nullptr);   // 标准构造函数
	virtual ~TipDialog();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_Tip };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedOk();
	afx_msg void OnBnClickedCancel();
};
