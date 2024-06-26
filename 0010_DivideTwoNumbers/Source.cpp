#include<iostream>
#include<cstdlib>
using namespace std;

string EnterNumberAlert = "Enter a Number ";
string NumberAlert = "Number is: ";
string DivisionAlert = "Division is: ";
string ErrorStringAlert = "Can Not Divide By Zero";

// Data 
struct TwoNumber {
	float FirstNumber;
	float SecondNumber;
};


//Checking Functions
bool IsZero(float number) {
	return (number == 0) ? true : false;
}

bool IsThereErrorDivideByZero(float number) {
	if (IsZero(number)) {
		return true;
	}
	else {
		return false;
	}
}


// Reading Function
float ReadNumber(string& message) {
	cout << message << endl;
	float _number;
	cin >> _number;
	return (float)_number;
}

TwoNumber ReadTwoNumberFromUser() {
	TwoNumber tn;
	tn.FirstNumber = ReadNumber(EnterNumberAlert);
	tn.SecondNumber = ReadNumber(EnterNumberAlert);
	return tn;
}


//Printing Functions
void PrintNumberOnScreen(float number) {
	cout << NumberAlert << number << endl;
}

void PrintErrorString(string error) {
	cout << error << endl;
}

void PrintTwoNumber(TwoNumber tn) {
	PrintNumberOnScreen(tn.FirstNumber);
	PrintNumberOnScreen(tn.SecondNumber);
}

void PrintDivisionOnScreen(float division) {
	cout << DivisionAlert << division << endl;
}

// Geting functions
string GetErrorString(float number) {
	if (IsZero(number)) {
		return ErrorStringAlert;
	}
}


//Calculation Functions

float Divide(float firstNumber, float secondNumber) {
	return (float)firstNumber / secondNumber;
}


float GetDivision(float firstNumber, float secondNumber) {


	if (IsThereErrorDivideByZero(secondNumber)) {
		PrintErrorString(GetErrorString(secondNumber));
		exit(0);
	}

	float division = Divide(firstNumber, secondNumber);
	return (float)division;
}

float Divide(TwoNumber tn) {
	float division = GetDivision(tn.FirstNumber, tn.SecondNumber);
	return (float)division;
}




int main() {

	TwoNumber tn = ReadTwoNumberFromUser();
	float division = Divide(tn);
	PrintDivisionOnScreen(division);

	return 0;
}