#include <iostream>
#include <string>

using namespace std;

enum AgeValidity {
    ValidAge,
    InvalidAge
};

const string AgePrompt = "Please enter your age: ";
const string ErrorMessage = "Invalid input. Please enter a valid number.";
const int MIN_AGE = 18;
const int MAX_AGE = 45;

int ReadNumber(const string& prompt) {
    while (true) {
        cout << prompt;
        int number;
        if (cin >> number) {
            return number;
        }
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << ErrorMessage << endl;
    }
}

AgeValidity CheckAgeValidity(int age) {
    if (age >= MIN_AGE && age <= MAX_AGE) {
        return ValidAge;
    }
    else {
        return InvalidAge;
    }
}

string GetAgeValidityString(AgeValidity validity) {
    if (validity == ValidAge) {
        return "Valid Age";
    }
    else {
        return "Invalid Age";
    }
}

void PrintResult(const string& message) {
    cout << message << endl;
}

int main() {
    int age;
    AgeValidity validity = InvalidAge;

    while (validity != ValidAge) {
        age = ReadNumber(AgePrompt);
        validity = CheckAgeValidity(age);
        string result = GetAgeValidityString(validity);
        PrintResult(result);
    }

    return 0;
}