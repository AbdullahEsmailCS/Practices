#include <iostream>
#include <string>
using namespace std;

const string AgeEnterMessage = "Enter your age ";

enum  VotingStatus {
    Eligible,
    NotEligible
};

bool checkEligibility(int age) {
    return age >= 18;
}

VotingStatus getVotingStatus(int age) {
    if (checkEligibility(age)) {
        return VotingStatus::Eligible;
    }
    else {
        return VotingStatus::NotEligible;
    }
}

std::string getVotingStatusAsString(VotingStatus status) {
    switch (status) {
    case VotingStatus::Eligible:
        return "You are eligible to vote";
    case VotingStatus::NotEligible:
        return "You are not eligible to vote";
    }
}

void printVotingStatus(int age) {
    VotingStatus status = getVotingStatus(age);
     string statusString = getVotingStatusAsString(status);
     cout << statusString << endl;
}

int readAge(string message) {
    int age;
     cout << message;
    cin >> age;
    return age;
}


/*
Write a program that asks the user to enter their age and determines if they are eligible to vote or not. 
The voting age is typically 18 and above. 
The program should print whether the person is eligible to vote or not.
*/

int main() {
    int age = readAge(AgeEnterMessage);
    printVotingStatus(age);

    return 0;
}