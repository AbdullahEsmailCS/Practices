#include <iostream>
using namespace std;

const string EnterNumberPrompt = "Enter a number";
 
 

int ReadNumber(string alert) {
    cout << alert << endl;
    int _number;
    do {
        cin >> _number;
    } while (_number <= 0);

    return _number;
}
 
int ComputeFactorial(int number) {
    int factorial = 1;
    for (int i = number; i >=1 ; i--) {
        factorial = factorial * i;
    }
    return factorial;
 }

void PrintFactorial(int fact) {
    cout << "Factorial is " << fact << endl;;
}

int main() {

    int number = ReadNumber(EnterNumberPrompt);
    PrintFactorial(ComputeFactorial(number));



    return 0;
}