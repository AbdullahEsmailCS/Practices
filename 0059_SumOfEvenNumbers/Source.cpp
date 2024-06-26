#include <iostream>
using namespace std;

const string EnterNumberPrompt = "Enter a number";

enum OddEven {
    Even = 0,
    Odd = 1
};

bool IsEven(int number) {
    return (number % 2 == 0);
}

OddEven CheckNumberType(int number) {
    if (IsEven(number))
        return OddEven::Even;
    else
        return OddEven::Odd;
}

string GetNumberTypeString(OddEven type) {
    if (type == OddEven::Even)
        return "Even";
    else
        return "Odd";
}

int ReadNumber(string alert) {
    cout << alert << endl;
    int _number;
    do {
        cin >> _number;
    } while (_number <= 0);

    return _number;
}

int SumOfOddNumbers(int to) {
    int sum = 0;
    for (int i = 1; i <= to; i++) {
        if (IsEven(i)) {
            sum += i;
        }
    }
    return sum;
}

void PrintSumOfOddNumbers(int sum) {
    cout << "Sum of Even is " << sum << endl;
}


int main() {

    int number = ReadNumber(EnterNumberPrompt);
    PrintSumOfOddNumbers(SumOfOddNumbers(number));



    return 0;
}