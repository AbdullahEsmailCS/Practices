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

void PrintNumberNToOne(int number) {
    for (int i = number; i >= 0; i--) {
        cout << i << "\t";
    }
}


int main() {

    int number = ReadNumber(EnterNumberPrompt);
    PrintNumberNToOne(number);



    return 0;
}