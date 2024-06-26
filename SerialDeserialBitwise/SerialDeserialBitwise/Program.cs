using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace SerialDeserialBitwise
{
    

    [Flags]
    enum Options : byte
    {
        None = 0,
        Option1 = 1 << 0,
        Option2 = 1 << 1,
        Option3 = 1 << 2,
        Option4 = 1 << 3
    }

    class Program
    {
        static void Main(string[] args)
        {
            Options options = Options.Option1 | Options.Option3 | Options.Option4;

            byte serializedData = SerializeOptions(options);
            Console.WriteLine($"Serialized Data: {Convert.ToString(serializedData, 2).PadLeft(8, '0')}");

            Options deserializedOptions = DeserializeOptions(serializedData);
            Console.WriteLine($"Deserialized Options: {deserializedOptions}");



            Console.ReadKey();
        }

        static byte SerializeOptions(Options options)
        {
            byte serializedData = 0;

            if (options.HasFlag(Options.Option1))
                serializedData |= (byte)Options.Option1;

            if (options.HasFlag(Options.Option2))
                serializedData |= (byte)Options.Option2;

            if (options.HasFlag(Options.Option3))
                serializedData |= (byte)Options.Option3;

            if (options.HasFlag(Options.Option4))
                serializedData |= (byte)Options.Option4;

            return serializedData;
        }

        static Options DeserializeOptions(byte serializedData)
        {
            Options options = Options.None;

            if ((serializedData & (byte)Options.Option1) != 0)
                options |= Options.Option1;

            if ((serializedData & (byte)Options.Option2) != 0)
                options |= Options.Option2;

            if ((serializedData & (byte)Options.Option3) != 0)
                options |= Options.Option3;

            if ((serializedData & (byte)Options.Option4) != 0)
                options |= Options.Option4;

            return options;
        }
    }
}
