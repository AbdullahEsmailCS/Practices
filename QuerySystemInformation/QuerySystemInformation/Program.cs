using System;
using System.Runtime.InteropServices;

class Program
{
    // Define the Native API function prototypes and structures
    [DllImport("ntdll.dll", SetLastError = true)]
    public static extern int NtQuerySystemInformation(int SystemInformationClass, IntPtr SystemInformation, int SystemInformationLength, out int ReturnLength);

    [StructLayout(LayoutKind.Sequential)]
    public struct SYSTEM_TIMEOFDAY_INFORMATION
    {
        public IntPtr BootTime;
        public IntPtr CurrentTime;
        public IntPtr TimeZoneBias;
        public uint TimeZoneId;
        public uint Reserved;
        public ulong BootTimeBias;
        public ulong SleepTimeBias;
    }

    static void Main()
    {
        // Call the Native API function to retrieve system information
        int status;
        int returnLength;
        status = NtQuerySystemInformation(3, IntPtr.Zero, 0, out returnLength);

        if (status == 0 && returnLength > 0)
        {
            IntPtr buffer = Marshal.AllocHGlobal(returnLength);
            status = NtQuerySystemInformation(3, buffer, returnLength, out returnLength);

            if (status == 0)
            {
                SYSTEM_TIMEOFDAY_INFORMATION sysInfo = Marshal.PtrToStructure<SYSTEM_TIMEOFDAY_INFORMATION>(buffer);
                long currentTime = sysInfo.CurrentTime.ToInt64();
                DateTime currentDateTime = DateTime.FromFileTime(currentTime);
                Console.WriteLine("Current Time: " + currentDateTime);
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