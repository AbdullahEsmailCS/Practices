using System;
using System.Collections.Generic;
using System.Runtime.InteropServices;

class Program
{
    // Define the Native API function prototypes and structures
    [DllImport("ntdll.dll", SetLastError = true)]
    public static extern int NtQuerySystemInformation(int SystemInformationClass, IntPtr SystemInformation, int SystemInformationLength, out int ReturnLength);

    [StructLayout(LayoutKind.Sequential)]
    public struct SYSTEM_PROCESS_INFORMATION
    {
        public IntPtr NextEntryOffset;
        public IntPtr NumberOfThreads;
        public IntPtr Reserved1;
        public IntPtr Reserved2;
        public IntPtr UniqueProcessId;
        public IntPtr ParentProcessId;
        public IntPtr BasePriority;
        public IntPtr Reserved3;
        public IntPtr Reserved4;
        public IntPtr Reserved5;
        public IntPtr Reserved6;
    }

    static void Main()
    {
        // Call the Native API function to retrieve process information
        int status;
        int returnLength;
        status = NtQuerySystemInformation(5, IntPtr.Zero, 0, out returnLength);

        if (status == 0 && returnLength > 0)
        {
            IntPtr buffer = Marshal.AllocHGlobal(returnLength);
            status = NtQuerySystemInformation(5, buffer, returnLength, out returnLength);

            if (status == 0)
            {
                IntPtr currentOffset = buffer;

                while (true)
                {
                    SYSTEM_PROCESS_INFORMATION processInfo = Marshal.PtrToStructure<SYSTEM_PROCESS_INFORMATION>(currentOffset);

                    // Display process name and ID
                    string processName = Marshal.PtrToStringAnsi(processInfo.Reserved2);
                    int processId = processInfo.UniqueProcessId.ToInt32();
                    Console.WriteLine("Process Name: " + processName);
                    Console.WriteLine("Process ID: " + processId);

                    if (processInfo.NextEntryOffset == IntPtr.Zero)
                        break;

                    currentOffset = IntPtr.Add(currentOffset, processInfo.NextEntryOffset.ToInt32());
                }
            }

            Marshal.FreeHGlobal(buffer);
        }

        if (status != 0)
        {
            Console.WriteLine("NtQuerySystemInformation failed with error: " + status);
        }

        Console.ReadKey();
    }
}