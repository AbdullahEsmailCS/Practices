using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace DivideTwoIntegersBitwise
{

    public class Solution
    {
        public int Divide(int dividend, int divisor)
        {
            // Handle the special case of division by zero
            if (divisor == 0)
            {
                throw new DivideByZeroException();
            }

            // Handle the special case of dividend equals zero
            if (dividend == 0)
            {
                return 0;
            }

            // Handle the special case of dividend equals Int32.MinValue and divisor equals -1
            if (dividend == Int32.MinValue && divisor == -1)
            {
                return Int32.MaxValue;
            }

            // Convert the dividend and divisor to positive numbers
            long dvd = Math.Abs((long)dividend);
            long dvs = Math.Abs((long)divisor);

            // Determine the sign of the quotient
            int sign = (dividend < 0) ^ (divisor < 0) ? -1 : 1;

            // Initialize the quotient
            int quotient = 0;

            // Perform binary long division
            while (dvd >= dvs)
            {
                long temp = dvs;
                long multiple = 1;

                while (dvd >= (temp << 1))
                {
                    temp <<= 1;
                    multiple <<= 1;
                }

                dvd -= temp;
                quotient += (int)multiple;
            }

            return sign * quotient;
        }
    }
    internal class Program
    {

        public static int SingleNumber(int[] nums)
        {
            int result = 0;
            foreach (int num in nums)
            {
                result ^= num;
            }
            return result;
        }
        static void Main(string[] args)
        {
            //Solution solution = new Solution();

            //int dividend1 = 10;
            //int divisor1 = 3;
            //int result1 = solution.Divide(dividend1, divisor1);
            //Console.WriteLine(result1);  // Output: 3

            //int dividend2 = 7;
            //int divisor2 = -3;
            //int result2 = solution.Divide(dividend2, divisor2);
            //Console.WriteLine(result2);  // Output: -2



            int[] nums = { 4, 1, 2, 1, 2 };
            int singleNumber = SingleNumber(nums);
            Console.WriteLine(singleNumber); // Output: 4













            Console.ReadKey();

        }
    }
}
