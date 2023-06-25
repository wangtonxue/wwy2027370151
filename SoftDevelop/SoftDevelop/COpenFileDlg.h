#pragma once
#include "afxdialogex.h"


// COpenFileDlg 对话框

class COpenFileDlg : public CDialogEx
{
	DECLARE_DYNAMIC(COpenFileDlg)

public:
	COpenFileDlg(CWnd* pParent = nullptr);   // 标准构造函数
	virtual ~COpenFileDlg();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG_OpenFile };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
};
