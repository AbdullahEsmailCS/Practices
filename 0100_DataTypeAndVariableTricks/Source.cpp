#include<iostream>
#include<iomanip>
using namespace std;


class Person {
    int ID;
    string FirstName;
    string LastName;
    string Phone;
    string Email;

};


int main() {
	cout << 20 - 30 << endl;
	int a1 = 20, b1 = 30;
	cout << a1 - b1 << endl;
	int x2 = 2147483647;
	short y1 = 20;
	cout << x2 - y1 << endl;
	cout << x2 + 200 << endl;
	cout << x2 + x2 << endl;
    // char
    char charMin = -128;
    char charMax = 127;
    std::cout << "Minimum ASCII value of char: " << static_cast<int>(charMin) << std::endl;
    std::cout << "Maximum ASCII value of char: " << static_cast<int>(charMax) << std::endl;

    // short
    short shortMin = -32768;
    short shortMax = 32767;
    std::cout << "Minimum value of short: " << shortMin << std::endl;
    std::cout << "Maximum value of short: " << shortMax << std::endl;

    // int
    int intMin = -2147483648;
    int intMax = 2147483647;
    std::cout << "Minimum value of int: " << intMin << std::endl;
    std::cout << "Maximum value of int: " << intMax << std::endl;

    // long
    long longMin = -2147483648;
    long longMax = 2147483647;
    std::cout << "Minimum value of long: " << longMin << std::endl;
    std::cout << "Maximum value of long: " << longMax << std::endl;

    // bool
    bool boolMin = false;
    bool boolMax = true;
    std::cout << "Minimum value of bool: " << boolMin << std::endl;
    std::cout << "Maximum value of bool: " << boolMax << std::endl;

    // float
    float floatMin = -3.4e38;
    float floatMax = 3.4e38;
    std::cout << "Minimum value of float: " << floatMin << std::endl;
    std::cout << "Maximum value of float: " << floatMax << std::endl;

    // double
    double doubleMin = -1.7e308;
    double doubleMax = 1.7e308;
    std::cout << "Minimum value of double: " << doubleMin << std::endl;
    std::cout << "Maximum value of double: " << doubleMax << std::endl;

    // long double
    long double longDoubleMin = -1.7e308;
    long double longDoubleMax = 1.7e308;
    std::cout << "Minimum value of long double: " << longDoubleMin << std::endl;
    std::cout << "Maximum value of long double: " << longDoubleMax << std::endl;

    // wchar_t
    wchar_t wcharMin = 0;
    wchar_t wcharMax = 65535;
    std::wcout << "Minimum value of wchar_t: " << static_cast<int>(wcharMin) << std::endl;
    std::wcout << "Maximum value of wchar_t: " << static_cast<int>(wcharMax) << std::endl;



    char cValue = 'A';
    short sValue = 10;
    int iValue = 100;
    long lValue = 1000L;
    long long llValue = 100000LL;
    float fValue = 3.14f;
    double dValue = 2.71828;
    long double ldValue = 3.141592653589793238462643383279502884L;
    bool bValue = true;

    std::cout << "cValue: " << cValue << std::endl;
    std::cout << "sValue: " << sValue << std::endl;
    std::cout << "iValue: " << iValue << std::endl;
    std::cout << "lValue: " << lValue << std::endl;
    std::cout << "llValue: " << llValue << std::endl;
    std::cout << "fValue: " << fValue << std::endl;
    std::cout << "dValue: " << dValue << std::endl;
    std::cout << "ldValue: " << ldValue << std::endl;
    std::cout << "bValue: " << std::boolalpha << bValue << std::endl;

    double value = 3.14159;

    std::cout << std::setw(10) << "Value: ";
    std::cout << std::setprecision(4) << std::fixed << value << std::endl;

    std::cout << std::setiosflags(std::ios_base::left);
    std::cout << std::setw(10) << "Value: ";
    std::cout << std::setprecision(2) << std::fixed << value << std::endl;
    cout << setw(20) << "i am" << endl;

	return 0;
}