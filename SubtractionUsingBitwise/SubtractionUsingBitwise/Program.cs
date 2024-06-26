using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace SubtractionUsingBitwise
{
    internal class Program
    {
        static int ReadNumber(string message)
        {
            int validNumber = 0;
            Console.WriteLine(message);
            if (int.TryParse(Console.ReadLine(), out int number))
            {
                validNumber = number;
            }
            else
            {
                Console.WriteLine("Error Occured");
            }
            return validNumber;
        }

        static int PerformSubtractionByBitwise(int minuend, int subtrahend)
        {
            while (subtrahend != 0)
            {
                int borrow = (~minuend) & subtrahend;
                minuend = minuend ^ subtrahend;
                subtrahend = borrow << 1;
            }
            return minuend;
        }
        static void PrintSubtraction(int subtraction)
        {
            Console.WriteLine("Subtraction is: " + subtraction);
        }
        static void Main(string[] args)
        {

            int firstNumber = ReadNumber("Enter the First Number");
            int secondNumber = ReadNumber("Enter the Second Number");
            PrintSubtraction(PerformSubtractionByBitwise(firstNumber, secondNumber));

            Console.ReadKey();

        }
    }
}
