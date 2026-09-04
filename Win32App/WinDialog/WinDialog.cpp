#ifndef UNICODE
#define UNICODE
#endif

#include <windows.h>

// Unique identifiers for our dialog controls
#define ID_BTN_CLICKME 1001
#define ID_BTN_CLOSE   1002

// 1. The Dialog Procedure (Handles events inside the dialog)
INT_PTR CALLBACK DialogProc(HWND hwndDlg, UINT uMsg, WPARAM wParam, LPARAM lParam)
{
    switch (uMsg)
    {
    case WM_INITDIALOG:
        // Set the window title when the dialog initializes
        SetWindowText(hwndDlg, L"Win32 Dialog Sample");
        return (INT_PTR)TRUE;

    case WM_COMMAND:
        // Check which control triggered the notification
        switch (LOWORD(wParam))
        {
        case ID_BTN_CLICKME:
            MessageBox(hwndDlg, L"You clicked the button!", L"Notification", MB_OK | MB_ICONINFORMATION);
            return (INT_PTR)TRUE;

        case ID_BTN_CLOSE:
        case IDCANCEL: // Handles the 'X' top-right close button
            // Destroys the modal dialog and returns 0 to DialogBoxIndirectParam
            EndDialog(hwndDlg, 0);
            return (INT_PTR)TRUE;
        }
        break;
    }
    return (INT_PTR)FALSE;
}

// 2. Main Entry Point
int WINAPI wWinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, PWSTR pCmdLine, int nCmdShow)
{
    // Define an in-memory structure representing the dialog box layout
#pragma pack(push, 2)
    struct DialogTemplate {
        DLGTEMPLATE dlg;
        WORD menu;
        WORD windowClass;
        WCHAR title[1];
    } dt = { 0 };
#pragma pack(pop)

    // Configure the dialog box window properties
    dt.dlg.style = WS_POPUP | WS_CAPTION | WS_SYSMENU | DS_MODALFRAME | DS_CENTER;
    dt.dlg.cx = 150;  // Width in Dialog Units (DLUs)
    dt.dlg.cy = 100;  // Height in Dialog Units (DLUs)

    // Launch the modal dialog box 
    DialogBoxIndirectParam(hInstance, &dt.dlg, NULL, DialogProc, 0);

    return 0;
}
