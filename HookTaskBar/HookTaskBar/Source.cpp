#include <iostream>
#include <Windows.h>

// Function pointer type for the original taskbar window procedure
typedef LRESULT(WINAPI* OriginalWndProc)(HWND, UINT, WPARAM, LPARAM);

// Global variables
HWND g_TaskbarWnd = nullptr;
OriginalWndProc g_OriginalWndProc = nullptr;

// Custom window procedure for the taskbar
LRESULT CALLBACK TaskbarWndProc(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam)
{
    // Modify the taskbar behavior here
    // For this example, we'll intercept the WM_LBUTTONDOWN message and prevent taskbar clicks

    if (uMsg == WM_LBUTTONDOWN)
    {
        // Taskbar click intercepted, do nothing
        return 0;
    }

    // Call the original window procedure for other messages
    return CallWindowProc(g_OriginalWndProc, hwnd, uMsg, wParam, lParam);
}

// Function to hook the taskbar window procedure
void HookTaskbar()
{
    g_TaskbarWnd = FindWindow(L"Shell_TrayWnd", nullptr);
    if (g_TaskbarWnd)
    {
        g_OriginalWndProc = (OriginalWndProc)SetWindowLongPtr(g_TaskbarWnd, GWLP_WNDPROC, (LONG_PTR)TaskbarWndProc);
        if (!g_OriginalWndProc)
        {
            std::cerr << "Failed to set the taskbar window procedure." << std::endl;
        }
    }
    else
    {
        std::cerr << "Failed to find the taskbar window." << std::endl;
    }
}

// Function to unhook the taskbar window procedure
void UnhookTaskbar()
{
    if (g_TaskbarWnd && g_OriginalWndProc)
    {
        SetWindowLongPtr(g_TaskbarWnd, GWLP_WNDPROC, (LONG_PTR)g_OriginalWndProc);
        g_TaskbarWnd = nullptr;
        g_OriginalWndProc = nullptr;
    }
}

int main()
{
    // Hook the taskbar
    HookTaskbar();

    // Keep the program running until a key is pressed
    std::cout << "Taskbar hooked. Press any key to unhook and exit." << std::endl;
    std::cin.get();

    // Unhook the taskbar
    UnhookTaskbar();

    return 0;
}