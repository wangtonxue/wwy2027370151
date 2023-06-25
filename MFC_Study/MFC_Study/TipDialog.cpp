// TipDialog.cpp: 实现文件
//

#include "pch.h"
#include "MFC_Study.h"
#include "afxdialogex.h"
#include "TipDialog.h"


// TipDialog 对话框

IMPLEMENT_DYNAMIC(TipDialog, CDialogEx)

TipDialog::TipDialog(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_Tip, pParent)
{

}

TipDialog::~TipDialog()
{
}

void TipDialog::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(TipDialog, CDialogEx)
	ON_BN_CLICKED(IDOK, &TipDialog::OnBnClickedOk)
	ON_BN_CLICKED(IDCANCEL, &TipDialog::OnBnClickedCancel)
END_MESSAGE_MAP()


// TipDialog 消息处理程序


void TipDialog::OnBnClickedOk()
{
	// TODO: 在此添加控件通知处理程序代码
	CDialogEx::OnOK();
}


void TipDialog::OnBnClickedCancel()
{
	// TODO: 在此添加控件通知处理程序代码
	CDialogEx::OnCancel();
}
