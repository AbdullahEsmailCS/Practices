using System;
using System.Runtime.InteropServices;

class Program
{
    // Import the necessary Advapi32.dll functions
    [DllImport("advapi32.dll", CharSet = CharSet.Unicode, SetLastError = true)]
    public static extern int RegGetValue(
        IntPtr hKey,
        string lpSubKey,
        string lpValue,
        int dwFlags,
        out uint pdwType,
        IntPtr pvData,
        ref uint pcbData);

    // Define the registry key constants
    private static readonly IntPtr HKEY_CURRENT_USER = new IntPtr(-2147483647);

    static void Main()
    {
        // Read a registry value
        string valueName = "SomeValue";
        uint bufferSize = 1024;
        IntPtr buffer = Marshal.AllocHGlobal((int)bufferSize);
        uint valueType;
        int result = RegGetValue(
            HKEY_CURRENT_USER,
            "Software\\SomeKey",
            valueName,
            0,
            out valueType,
            buffer,
            ref bufferSize);

        if (result == 0)
        {
            // Successfully read the value
            string value = Marshal.PtrToStringUni(buffer);
            Console.WriteLine($"Registry value '{valueName}': {value}");
        }
        else
        {
            // Failed to read the value
            Console.WriteLine($"Failed to read the registry value '{valueName}'. Error code: {result}");
        }

        // Clean up the allocated memory
        Marshal.FreeHGlobal(buffer);



        Console.ReadKey();

    }
}