#include <iostream>
using namespace std;

const string EnterNumberPrompt = "Enter a number";

enum OddEven {
    Even =0,
    Odd =1
};

bool IsOdd(int number) {
    return (number % 2 != 0);
}

OddEven CheckNumberType(int number) {
    if (IsOdd(number))
        return OddEven::Odd;
    else
        return OddEven::Even;
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
        if (IsOdd(i)) {
            sum += i;
        }
    }
    return sum;
}

void PrintSumOfOddNumbers(int sum) {
    cout << "Sum of Odd is " << sum << endl;
}


int main() {

    int number = ReadNumber(EnterNumberPrompt);
    PrintSumOfOddNumbers(SumOfOddNumbers(number));



    return 0;
}