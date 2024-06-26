#include<iostream>
#include<string>
#include <iomanip>
using namespace std;

void PrintOnScreen(string text) {
	cout << text << endl;
}

void PrintUsingPuts(const char*  txt) {
    puts(txt);
}

void PrintUsingPrintF(const char* text) {
    printf(text);
}

int main() {

	PrintOnScreen("\tHi, we want to study c++ language\t");
	PrintOnScreen("\\hellow \'i am happy to learn programming");
    PrintUsingPuts("I am a cyber security engineer");
    PrintUsingPrintF(" I am a new student at Taiz University");

    cout << "Printing with cout:" << endl;
    cout << "Hello, world!" << endl;

    // Using printf from <cstdio>
    printf("\nPrinting with printf:\n");
    printf("Hello, world!\n");

    // Using puts
    puts("\nPrinting with puts:");
    puts("Hello, world!");

    // Using cout with formatting
    int number = 42;
    double pi = 3.14159;

    cout << "\nFormatted output with cout:" << endl;
    cout << "Number: " << number << endl;
    cout << "Pi: " << setprecision(5) << pi << endl;

    // Example of setprecision
     pi = 3.14159265358979323846;

     cout <<  setprecision(3) << "Pi: " << pi <<  endl;
     cout <<  setprecision(7) << "Pi: " << pi <<  endl;
     cout <<  setprecision(2) << "Pi: " << pi <<  endl;
                                                  




    // Using placeholders with printf
    char name[] = "Alice";
    int age = 30;

    printf("\nFormatted output with printf:\n");
    printf("Name: %s\n", name);
    printf("Age: %d\n", age);



	return 0;
}