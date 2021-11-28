#include "stdafx.h"
#include "GameFrameWnd.h"

GameFrameWnd::GameFrameWnd()
{
}

GameFrameWnd::~GameFrameWnd()
{
    ::PostQuitMessage(0L);
}

LPCTSTR GameFrameWnd::GetWindowClassName() const
{
	return _T("GameFrame");
}

CDuiString GameFrameWnd::GetSkinFile()
{
    return _T("main.xml");
}

CDuiString GameFrameWnd::GetSkinFolder()
{
    return CDuiString(CPaintManagerUI::GetInstancePath());
}

UINT GameFrameWnd::GetClassStyle() const
{
	return UI_CLASSSTYLE_FRAME | CS_DBLCLKS;
}

void GameFrameWnd::OnFinalMessage(HWND)
{
	delete this;
}

void GameFrameWnd::OnCreate(UINT uMsg, WPARAM wParam, LPARAM lParam)
{

}

void GameFrameWnd::OnSize(UINT uMsg, WPARAM wParam, LPARAM lParam)
{

}

void GameFrameWnd::OnDestroy(UINT uMsg, WPARAM wParam, LPARAM lParam)
{
    ::PostQuitMessage(0L);
}

void GameFrameWnd::Notify(TNotifyUI & msg)
{
	if (msg.sType == _T("click")) {
		if (msg.pSender->GetName() == _T("closebtn")) {
			Close();
		}
	}
}

LRESULT GameFrameWnd::HandleCustomMessage(UINT uMsg, WPARAM wParam, LPARAM lParam, BOOL & bHandled)
{
    return LRESULT();
}

LRESULT GameFrameWnd::HandleMessage(UINT uMsg, WPARAM wParam, LPARAM lParam)
{
	switch (uMsg) {
	// case WM_CREATE:       OnCreate(uMsg, wParam, lParam); break;
    // case WM_SIZE:         OnSize(uMsg, wParam, lParam); break;
    case WM_DESTROY:      OnDestroy(uMsg, wParam, lParam); break;
    default:
        break;
	}
	return WindowImplBase::HandleMessage(uMsg, wParam, lParam);
}

void GameFrameWnd::Init()
{
}
