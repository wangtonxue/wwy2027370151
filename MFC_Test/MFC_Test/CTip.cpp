// CTip.cpp: 实现文件
//

#include "pch.h"
#include "MFC_Test.h"
#include "afxdialogex.h"
#include "CTip.h"


// CTip 对话框

IMPLEMENT_DYNAMIC(CTip, CDialogEx)

CTip::CTip(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_DIALOG1, pParent)
{

}

CTip::~CTip()
{
}

void CTip::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CTip, CDialogEx)
END_MESSAGE_MAP()


// CTip 消息处理程序
