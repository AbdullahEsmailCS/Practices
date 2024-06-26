using System;
using System.Collections.Generic;
using System.DirectoryServices.AccountManagement;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace FindAllUserAccounWin
{
    internal class Program
    {

        static void CreateAccount(string accountName, string password, bool isenable)
        {
            

            try
            {
                // Create a new user principal
                using (var context = new PrincipalContext(ContextType.Machine))
                {
                    using (var newUser = new UserPrincipal(context))
                    {
                        // Set the new user's properties
                        newUser.SamAccountName = accountName;
                        newUser.SetPassword(password);
                        newUser.Enabled = isenable;

                        // Save the new user principal
                        newUser.Save();
                    }
                }

                Console.WriteLine("New user account created successfully!");
            }
            catch (Exception ex)
            {
                Console.WriteLine("Error creating user account: " + ex.Message);
            }

            Console.ReadLine();



        }


        static void ShowUsers()
        {

            try
            {
                // Create a principal context for the local machine
                using (var context = new PrincipalContext(ContextType.Machine))
                {
                    // Create a new user principal object as a search filter
                    using (var userPrincipal = new UserPrincipal(context))
                    {
                        // Create a principal searcher with the user principal as the filter
                        using (var searcher = new PrincipalSearcher(userPrincipal))
                        {
                            // Retrieve a collection of user principals that match the search filter
                            var users = searcher.FindAll();

                            // Iterate over the user principals and display their names
                            foreach (var user in users)
                            {
                                Console.WriteLine("Username: " + user.SamAccountName);
                            }
                        }
                    }
                }
            }
            catch (Exception ex)
            {
                Console.WriteLine("Error listing user accounts: " + ex.Message);
            }

            Console.ReadLine();
        }


        static void Main(string[] args)
        {
            CreateAccount("Abdism", "12345abgh", true);
            ShowUsers();

            Console.ReadKey();



        }
    }
}
