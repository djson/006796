#pragma once


// CFreqFilteringDlg ��ȭ �����Դϴ�.

class CFreqFilteringDlg : public CDialogEx
{
	DECLARE_DYNAMIC(CFreqFilteringDlg)

public:
	CFreqFilteringDlg(CWnd* pParent = NULL);   // ǥ�� �������Դϴ�.
	virtual ~CFreqFilteringDlg();

// ��ȭ ���� �������Դϴ�.
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_FREQUENCY_FILTERING };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV �����Դϴ�.

	DECLARE_MESSAGE_MAP()
public:
	int m_nFilterType;
	int m_nFilterShape;
	int m_nCutoff;
	CString m_strRange;
};