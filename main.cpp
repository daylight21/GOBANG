// gobang.cpp : 定义应用程序的入口点。
//

#include "stdafx.h"
#include "Resource.h"
#include "GameFrameWnd.h"


// 程序入口及Duilib初始化部分
int APIENTRY WinMain(HINSTANCE hInstance, HINSTANCE /*hPrevInstance*/, LPSTR /*lpCmdLine*/, int nCmdShow)
{
	CPaintManagerUI::SetInstance(hInstance);
	CPaintManagerUI::SetResourcePath(CPaintManagerUI::GetInstancePath());

    GameFrameWnd* pFrame = new GameFrameWnd();
    if (pFrame == NULL) {
        return 0;
    }

	pFrame->Create(NULL, _T("gobang"), UI_WNDSTYLE_FRAME, WS_EX_APPWINDOW);
    // 窗体放中间
    pFrame->CenterWindow();
	CPaintManagerUI::MessageLoop();

	return 0;
}
