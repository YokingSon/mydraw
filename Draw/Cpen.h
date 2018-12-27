#pragma once
#include "afxwin.h"


class Cpen : public CDialogEx
{
	DECLARE_DYNAMIC(Cpen)

public:
	Cpen(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~Cpen();

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG_PEN_STYLE };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedButtonColor();
	afx_msg void OnCbnSelchangeComboThickness();
	afx_msg void OnCbnSelchangePenStyle();
	CComboBox m_pen_weight;
	CComboBox m_pen_style;
	afx_msg void OnBnClickedStraightLine();
	afx_msg void OnBnClickedCurveBight();
	afx_msg void OnBnClickedRectangle();
	afx_msg void OnBnClickedCircularBead();
	afx_msg void OnBnClickedCircle();

};
