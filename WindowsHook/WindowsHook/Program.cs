using System;
using System.Diagnostics;
using System.Runtime.InteropServices;
using System.Windows.Forms;

class Program
{
    // Declare the hook type constants
    private const int WH_KEYBOARD_LL = 13;
    private const int WH_MOUSE_LL = 14;

    // Declare the hook procedure delegate
    private delegate IntPtr LowLevelHookProc(int nCode, IntPtr wParam, IntPtr lParam);

    // Declare the hook procedure
    private static LowLevelHookProc keyboardHookProc;
    private static LowLevelHookProc mouseHookProc;

    // Declare the hook handle
    private static IntPtr keyboardHookHandle = IntPtr.Zero;
    private static IntPtr mouseHookHandle = IntPtr.Zero;

    // Import the necessary User32.dll functions
    [DllImport("user32.dll", CharSet = CharSet.Auto, SetLastError = true)]
    private static extern IntPtr SetWindowsHookEx(int idHook, LowLevelHookProc lpfn, IntPtr hMod, uint dwThreadId);

    [DllImport("user32.dll", CharSet = CharSet.Auto, SetLastError = true)]
    private static extern bool UnhookWindowsHookEx(IntPtr hhk);

    [DllImport("user32.dll", CharSet = CharSet.Auto, SetLastError = true)]
    private static extern IntPtr CallNextHookEx(IntPtr hhk, int nCode, IntPtr wParam, IntPtr lParam);

    [DllImport("kernel32.dll", CharSet = CharSet.Auto, SetLastError = true)]
    private static extern IntPtr GetModuleHandle(string lpModuleName);

    // Main entry point
    static void Main()
    {
        // Set up the hook procedures
        keyboardHookProc = KeyboardHookCallback;
        mouseHookProc = MouseHookCallback;

        // Set up the keyboard hook
        keyboardHookHandle = SetHook(keyboardHookProc, WH_KEYBOARD_LL);

        // Set up the mouse hook
        mouseHookHandle = SetHook(mouseHookProc, WH_MOUSE_LL);

        // Run the application
        Console.WriteLine("Hooks installed. Press any key to exit.");
        Console.ReadKey();

        // Clean up the hooks
        UnhookWindowsHookEx(keyboardHookHandle);
        UnhookWindowsHookEx(mouseHookHandle);

        Console.ReadKey();
    }

    // Hook callback for keyboard events
    private static IntPtr KeyboardHookCallback(int nCode, IntPtr wParam, IntPtr lParam)
    {
        if (nCode >= 0 && wParam == (IntPtr)0x0100) // WM_KEYDOWN
        {
            int vkCode = Marshal.ReadInt32(lParam);
            Console.WriteLine($"Keyboard key pressed: {(Keys)vkCode}");
        }

        return CallNextHookEx(keyboardHookHandle, nCode, wParam, lParam);
    }

    // Hook callback for mouse events
    private static IntPtr MouseHookCallback(int nCode, IntPtr wParam, IntPtr lParam)
    {
        if (nCode >= 0 && wParam == (IntPtr)0x0200) // WM_MOUSEMOVE
        {
            MSLLHOOKSTRUCT hookStruct = Marshal.PtrToStructure<MSLLHOOKSTRUCT>(lParam);
            Console.WriteLine($"Mouse moved. X: {hookStruct.pt.x}, Y: {hookStruct.pt.y}");
        }

        return CallNextHookEx(mouseHookHandle, nCode, wParam, lParam);
    }

    // Structure for mouse hook callback
    [StructLayout(LayoutKind.Sequential)]
    private struct MSLLHOOKSTRUCT
    {
        public POINT pt;
        public uint mouseData;
        public uint flags;
        public uint time;
        public IntPtr dwExtraInfo;
    }

    // Structure for mouse point
    [StructLayout(LayoutKind.Sequential)]
    private struct POINT
    {
        public int x;
        public int y;
    }

    // Set the hook
    private static IntPtr SetHook(LowLevelHookProc hookProc, int hookType)
    {
        using (Process currentProcess = Process.GetCurrentProcess())
        using (ProcessModule currentModule = currentProcess.MainModule)
        {
            return SetWindowsHookEx(hookType, hookProc, GetModuleHandle(currentModule.ModuleName), 0);
        }
    }
}