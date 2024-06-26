using System;
using System.Runtime.InteropServices;
using System.Text;

class Program
{
    // Import the necessary Advapi32.dll functions
    [DllImport("advapi32.dll", CharSet = CharSet.Auto, SetLastError = true)]
    public static extern bool CryptEncrypt(
        IntPtr hKey,
        IntPtr hHash,
        bool final,
        uint dwFlags,
        byte[] pbData,
        ref uint pdwDataLen,
        uint dwBufLen);

    [DllImport("advapi32.dll", CharSet = CharSet.Auto, SetLastError = true)]
    public static extern bool CryptDecrypt(
        IntPtr hKey,
        IntPtr hHash,
        bool final,
        uint dwFlags,
        byte[] pbData,
        ref uint pdwDataLen);

    // Define the encryption and decryption functions
    static byte[] EncryptData(byte[] data, IntPtr hKey)
    {
        uint dataLength = (uint)data.Length;
        uint bufferLength = dataLength + 16; // Add some extra buffer space

        byte[] encryptedData = new byte[bufferLength];
        Array.Copy(data, encryptedData, dataLength);

        if (!CryptEncrypt(hKey, IntPtr.Zero, true, 0, encryptedData, ref dataLength, bufferLength))
        {
            // Handle encryption failure
            throw new Exception("Data encryption failed.");
        }

        Array.Resize(ref encryptedData, (int)dataLength);
        return encryptedData;
    }

    static byte[] DecryptData(byte[] encryptedData, IntPtr hKey)
    {
        uint dataLength = (uint)encryptedData.Length;

        byte[] decryptedData = new byte[dataLength];
        Array.Copy(encryptedData, decryptedData, dataLength);

        if (!CryptDecrypt(hKey, IntPtr.Zero, true, 0, decryptedData, ref dataLength))
        {
            // Handle decryption failure
            throw new Exception("Data decryption failed.");
        }

        Array.Resize(ref decryptedData, (int)dataLength);
        return decryptedData;
    }

    static void Main()
    {
        // Example usage
        byte[] originalData = Encoding.UTF8.GetBytes("Hello, World!");

        // Encrypt the data
        IntPtr hKey = IntPtr.Zero; // Placeholder for the cryptographic key
        byte[] encryptedData = EncryptData(originalData, hKey);

        // Decrypt the data
        byte[] decryptedData = DecryptData(encryptedData, hKey);

        // Display the results
        Console.WriteLine("Original Data: " + Encoding.UTF8.GetString(originalData));
        Console.WriteLine("Encrypted Data: " + Convert.ToBase64String(encryptedData));
        Console.WriteLine("Decrypted Data: " + Encoding.UTF8.GetString(decryptedData));

        Console.ReadKey();
    }
}