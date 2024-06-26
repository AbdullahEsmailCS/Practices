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

void PrintNumberFromOneToN(int number) {
    for (int i = 1; i <= number; i++) {
        cout << i << "\t";
    }
}


int main() {
   
    int number = ReadNumber(EnterNumberPrompt);
    PrintNumberFromOneToN(number);

   

    return 0;
}