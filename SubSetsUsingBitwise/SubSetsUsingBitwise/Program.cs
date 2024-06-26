using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace SubSetsUsingBitwise
{
    internal class Program
    {
        public class Solution
        {
            public IList<IList<int>> Subsets(int[] nums)
            {
                int n = nums.Length;
                IList<IList<int>> subsets = new List<IList<int>>();

                for (int i = 0; i < (1 << n); i++)
                {
                    IList<int> subset = new List<int>();

                    for (int j = 0; j < n; j++)
                    {
                        if (((i >> j) & 1) == 1)
                        {
                            subset.Add(nums[j]);
                        }
                    }

                    subsets.Add(subset);
                }

                return subsets;
            }
        }
        static void Main(string[] args)
        {

            int[] nums1 = { 1, 2, 3 };
            Solution solution = new Solution();
            IList<IList<int>> result1 = solution.Subsets(nums1);
            foreach (IList<int> subset in result1)
            {
                Console.WriteLine(string.Join(", ", subset));
            }

                Console.ReadKey();
            }
        }
    }

