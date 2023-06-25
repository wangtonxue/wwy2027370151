// COpenFileDlg.cpp: 实现文件
//

#include "pch.h"
#include "SoftDevelop.h"
#include "afxdialogex.h"
#include "COpenFileDlg.h"


// COpenFileDlg 对话框

IMPLEMENT_DYNAMIC(COpenFileDlg, CDialogEx)

COpenFileDlg::COpenFileDlg(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_DIALOG_OpenFile, pParent)
{

}

COpenFileDlg::~COpenFileDlg()
{
}

void COpenFileDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(COpenFileDlg, CDialogEx)
END_MESSAGE_MAP()


// COpenFileDlg 消息处理程序
