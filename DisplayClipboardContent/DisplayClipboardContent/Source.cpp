#include <iostream>
#include <Windows.h>

// Function to retrieve and display the clipboard text
void DisplayClipboardText()
{
    // Open the clipboard
    if (OpenClipboard(nullptr))
    {
        // Get the clipboard data handle
        HANDLE hClipboardData = GetClipboardData(CF_TEXT);
        if (hClipboardData)
        {
            // Lock the clipboard data
            LPSTR lpClipboardText = reinterpret_cast<LPSTR>(GlobalLock(hClipboardData));
            if (lpClipboardText)
            {
                // Display the clipboard text
                std::cout << "Clipboard Text: " << lpClipboardText << std::endl;

                // Unlock the clipboard data
                GlobalUnlock(hClipboardData);
            }
        }

        // Close the clipboard
        CloseClipboard();
    }
}

int main()
{
    // Display the clipboard text
    DisplayClipboardText();

    return 0;
}