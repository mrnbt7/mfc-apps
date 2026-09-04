#include <windows.h>
#include <tchar.h>

int WINAPI WinMain(
    _In_ HINSTANCE hInstance,
    _In_opt_ HINSTANCE hPrevInstance,
    _In_ LPSTR     lpCmdLine,
    _In_ int       nCmdShow
)
{
    MessageBox(NULL, _T("Hello World"), _T("Message"), MB_OK);
    return 0;
}



