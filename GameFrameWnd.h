#pragma once
#include "UIlib.h"

using namespace DuiLib;

// 窗口实例及消息响应部分
class GameFrameWnd : public WindowImplBase
{
public:
	GameFrameWnd();
    ~GameFrameWnd();
	LPCTSTR GetWindowClassName() const override;
    CDuiString GetSkinFile() override;
    CDuiString GetSkinFolder() override;
	UINT GetClassStyle() const;

    LRESULT HandleCustomMessage(UINT uMsg, WPARAM wParam, LPARAM lParam, BOOL& bHandled) override;
    LRESULT HandleMessage(UINT uMsg, WPARAM wParam, LPARAM lParam) override;

private:
    void Notify(TNotifyUI& msg);

	void Init();

    void OnCreate(UINT uMsg, WPARAM wParam, LPARAM lParam);
    void OnSize(UINT uMsg, WPARAM wParam, LPARAM lParam);
    // 窗体关闭后执行
    void OnDestroy(UINT uMsg, WPARAM wParam, LPARAM lParam);
    void OnFinalMessage(HWND /*hWnd*/);
};

