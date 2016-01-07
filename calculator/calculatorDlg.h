
// calculatorDlg.h : 头文件
//

#pragma once


// CcalculatorDlg 对话框
class CcalculatorDlg : public CDialogEx
{
// 构造
public:
	CcalculatorDlg(CWnd* pParent = NULL);	// 标准构造函数

// 对话框数据
	enum { IDD = IDD_CALCULATOR_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV 支持


// 实现
protected:
	HICON m_hIcon;
	int c;
	int b;

	// 生成的消息映射函数
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	
	double temp;
	int flag;
	afx_msg void OnBnClicked0();
	afx_msg void OnBnClicked1();
	afx_msg void OnBnClicked2();
	afx_msg void OnBnClicked3();
	afx_msg void OnBnClicked4();
	afx_msg void OnBnClicked5();
	afx_msg void OnBnClicked6();
	afx_msg void OnBnClicked7();
	afx_msg void OnBnClicked8();
	afx_msg void OnBnClicked9();
	afx_msg void OnBnClickedPoint();
	afx_msg void OnBnClickedDel();
	afx_msg void OnBnClickedAdd();
	afx_msg void OnBnClickedDec();
	afx_msg void OnBnClickedMnl();
	afx_msg void OnBnClickedDivide();
	afx_msg void OnBnClickedBra();
	afx_msg void OnBnClickedCal();
	CString m_str;
	afx_msg void OnBnClickedBack();
	afx_msg void OnBnClickedLeft();
	afx_msg void OnBnClickedRight();
	afx_msg void OnBnClickedBear();
	afx_msg void OnBnClickedRad();

	afx_msg void OnBnClickedCos();
	afx_msg void OnBnClickedTan();
	afx_msg void OnBnClickedSin();
	afx_msg void OnTimer(UINT_PTR nIDEvent);
	
};
