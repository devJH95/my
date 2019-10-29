#include<afxwin.h>
class CMainFrame : public CFrameWnd {
public:
	CMainFrame() {
		Create(NULL, L"Hi !");
	}
	DECLARE_MESSAGE_MAP()
	afx_msg void OnPaint();
};
class CMyApp : public CWinApp {
	BOOL InitInstance() {
		CMainFrame* Frm = new CMainFrame();
		m_pMainWnd = Frm;
		Frm->ShowWindow(1);
		return TRUE;
	}
};
CMyApp theApp;BEGIN_MESSAGE_MAP(CMainFrame, CFrameWnd)
ON_WM_PAINT()
END_MESSAGE_MAP()

#include<atlimage.h>
void CMainFrame::OnPaint()
{
	CPaintDC dc(this); // device context for painting
					   // TODO: 여기에 메시지 처리기 코드를 추가합니다.
					   // 그리기 메시지에 대해서는 CFrameWnd::OnPaint()을(를) 호출하지 마십시오.
	CImage img;
	img.Load(L"hello.png");
	img.Draw(dc, 0, 0);
}
