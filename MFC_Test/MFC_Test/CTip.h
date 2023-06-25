#pragma once
#include "afxdialogex.h"


// CTip 对话框

class CTip : public CDialogEx
{
	DECLARE_DYNAMIC(CTip)

public:
	CTip(CWnd* pParent = nullptr);   // 标准构造函数
	virtual ~CTip();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG1 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
};
