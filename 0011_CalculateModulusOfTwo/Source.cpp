#include<iostream>
#include<cstdlib>
using namespace std;

string EnterNumberAlert = "Enter a Number ";
string NumberAlert = "Number is: ";
string ModDisplayAlert = "Mod is: ";
 

// Data 
struct TwoNumber {
	float FirstNumber;
	float SecondNumber;
};


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


void PrintTwoNumber(TwoNumber tn) {
	PrintNumberOnScreen(tn.FirstNumber);
	PrintNumberOnScreen(tn.SecondNumber);
}

void PrintModOnScreen(float mod) {
	cout << ModDisplayAlert << mod << endl;
}



//Calculation Functions

int GetMod(int firstNumber, int secondNumber) {
	int remainder = firstNumber % secondNumber;
	return  remainder;
}



int Mod(TwoNumber tn) {
	int mod  = GetMod(tn.FirstNumber, tn.SecondNumber);
	return mod;
}




int main() {

	TwoNumber tn = ReadTwoNumberFromUser();
	int mod = Mod(tn);
	PrintModOnScreen(mod);

	return 0;
}