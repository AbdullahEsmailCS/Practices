#include <iostream>
#include <string>
using namespace std;

int ReadNumber(const string& prompt)
{
    int number;
    cout << prompt;
    cin >> number;
    return number;
}

struct PiggyBankContent
{
    int Pennies, Nickels, Dimes, Quarters, Dollars;
};

PiggyBankContent ReadPiggyBankContent()
{
    PiggyBankContent content;
    content.Pennies = ReadNumber("Please enter the total number of Pennies: ");
    content.Nickels = ReadNumber("Please enter the total number of Nickels: ");
    content.Dimes = ReadNumber("Please enter the total number of Dimes: ");
    content.Quarters = ReadNumber("Please enter the total number of Quarters: ");
    content.Dollars = ReadNumber("Please enter the total number of Dollars: ");
    return content;
}

int CalculateTotalPennies(const PiggyBankContent& content)
{
    const int PENNY_VALUE = 1;
    const int NICKEL_VALUE = 5;
    const int DIME_VALUE = 10;
    const int QUARTER_VALUE = 25;
    const int DOLLAR_VALUE = 100;

    int totalPennies = 0;
    totalPennies = content.Pennies * PENNY_VALUE +
        content.Nickels * NICKEL_VALUE +
        content.Dimes * DIME_VALUE +
        content.Quarters * QUARTER_VALUE +
        content.Dollars * DOLLAR_VALUE;
    return totalPennies;
}

int main()
{
    PiggyBankContent piggyBankContent = ReadPiggyBankContent();
    int totalPennies = CalculateTotalPennies(piggyBankContent);

    cout << endl << "Total Pennies = " << totalPennies << endl;
    cout << "Total Dollars = " << static_cast<float>(totalPennies) / 100 << endl;

    return 0;
}