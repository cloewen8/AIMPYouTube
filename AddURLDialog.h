#pragma once

#include <windows.h>

class AddURLDialog {
public:
    static void Show();

private:
    AddURLDialog();
    AddURLDialog(const AddURLDialog &);
    AddURLDialog &operator=(const AddURLDialog &);

    static INT_PTR CALLBACK DlgProc(HWND hwnd, UINT Msg, WPARAM wParam, LPARAM lParam);
};
