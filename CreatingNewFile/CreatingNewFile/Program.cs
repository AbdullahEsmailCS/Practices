using System;
using System.Runtime.InteropServices;

class Program
{
    // Define the Native API function prototypes and constants
    [DllImport("ntdll.dll", SetLastError = true)]
    public static extern int NtCreateFile(out IntPtr FileHandle, FileAccess DesiredAccess, ref OBJECT_ATTRIBUTES ObjectAttributes, out IO_STATUS_BLOCK IoStatusBlock, IntPtr AllocationSize, uint FileAttributes, uint ShareAccess, uint CreateDisposition, uint CreateOptions, IntPtr EaBuffer, uint EaLength);

    [DllImport("ntdll.dll", SetLastError = true)]
    public static extern int NtSetInformationFile(IntPtr FileHandle, out IO_STATUS_BLOCK IoStatusBlock, IntPtr FileInformation, uint Length, FILE_INFORMATION_CLASS FileInformationClass);

    [StructLayout(LayoutKind.Sequential)]
    public struct UNICODE_STRING
    {
        public ushort Length;
        public ushort MaximumLength;
        public IntPtr Buffer;
    }

    [StructLayout(LayoutKind.Sequential)]
    public struct OBJECT_ATTRIBUTES
    {
        public int Length;
        public IntPtr RootDirectory;
        public IntPtr ObjectName;
        public uint Attributes;
        public IntPtr SecurityDescriptor;
        public IntPtr SecurityQualityOfService;
    }

    [StructLayout(LayoutKind.Sequential)]
    public struct IO_STATUS_BLOCK
    {
        public IntPtr Status;
        public IntPtr Information;
    }

    public enum FileAccess : uint
    {
        GENERIC_READ = 0x80000000,
        GENERIC_WRITE = 0x40000000
    }

    public enum FILE_INFORMATION_CLASS : uint
    {
        FileBasicInformation = 4
    }

    [StructLayout(LayoutKind.Sequential)]
    public struct FILE_BASIC_INFORMATION
    {
        public long CreationTime;
        public long LastAccessTime;
        public long LastWriteTime;
        public long ChangeTime;
        public uint FileAttributes;
    }

    static void Main()
    {
        // Create a new file using the Native API
        IntPtr fileHandle;
        OBJECT_ATTRIBUTES objAttributes = new OBJECT_ATTRIBUTES();
        IO_STATUS_BLOCK ioStatusBlock;
        UNICODE_STRING fileName = new UNICODE_STRING();
        fileName.Length = (ushort)(10 * 2); // Length in bytes
        fileName.MaximumLength = (ushort)(11 * 2); // Maximum length in bytes
        fileName.Buffer = Marshal.StringToHGlobalUni("testfile.txt");

        objAttributes.Length = Marshal.SizeOf(objAttributes);
        objAttributes.ObjectName = Marshal.AllocHGlobal(Marshal.SizeOf(fileName));
        Marshal.StructureToPtr(fileName, objAttributes.ObjectName, false);

        int status = NtCreateFile(out fileHandle, FileAccess.GENERIC_WRITE, ref objAttributes, out ioStatusBlock, IntPtr.Zero, 0, 0, 1, 0x1000, IntPtr.Zero, 0);

        if (status == 0)
        {
            Console.WriteLine("File created successfully.");

            // Set file attributes using the Native API
            FILE_BASIC_INFORMATION fileBasicInfo = new FILE_BASIC_INFORMATION();
            fileBasicInfo.FileAttributes = 0x2; // Set file as read-only

            status = NtSetInformationFile(fileHandle, out ioStatusBlock, Marshal.AllocHGlobal(Marshal.SizeOf(fileBasicInfo)), (uint)Marshal.SizeOf(fileBasicInfo), FILE_INFORMATION_CLASS.FileBasicInformation);

            if (status == 0)
            {
                Console.WriteLine("File attributes set successfully.");
            }
            else
            {
                Console.WriteLine("NtSetInformationFile failed with error: " + status);
            }
        }
        else
        {
            Console.WriteLine("NtCreateFile failed with error: " + status);
        }

        // Cleanup
        Marshal.FreeHGlobal(objAttributes.ObjectName);
        Marshal.FreeHGlobal(fileName.Buffer);


        Console.ReadKey();
    }
}