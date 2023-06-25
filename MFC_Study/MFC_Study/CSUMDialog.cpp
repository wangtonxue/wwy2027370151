// CSUMDialog.cpp: 实现文件
//

#include "pch.h"
#include "MFC_Study.h"
#include "afxdialogex.h"
#include "CSUMDialog.h"
#include "TipDialog.h"


// CSUMDialog 对话框

IMPLEMENT_DYNAMIC(CSUMDialog, CDialogEx)

CSUMDialog::CSUMDialog(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_sum, pParent)
	, m_editsumOne(0)
	, m_sumTwo(0)
	, m_sum(0)
{

}

CSUMDialog::~CSUMDialog()
{
}

void CSUMDialog::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_SUMONE_EDIT, m_editsumOne);
	DDX_Text(pDX, IDC_SUMWTO_EDIT, m_sumTwo);
	DDX_Text(pDX, IDC_SUM_EDIT, m_sum);
}


BEGIN_MESSAGE_MAP(CSUMDialog, CDialogEx)
	ON_BN_CLICKED(IDC_ADD_BUTTON, &CSUMDialog::OnBnClickedAddButton)
END_MESSAGE_MAP()


// CSUMDialog 消息处理程序


void CSUMDialog::OnBnClickedAddButton()
{
	// TODO: 在此添加控件通知处理程序代码
	//模态弹出窗口
    INT_PTR nRes;
    TipDialog tip;
    nRes = tip.DoModal();
    if (nRes == IDCANCEL)
        return;
    UpdateData(TRUE);
    m_sum = m_editsumOne + m_sumTwo;
    UpdateData(FALSE);

}
