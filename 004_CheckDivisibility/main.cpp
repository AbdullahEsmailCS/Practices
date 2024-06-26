#include<iostream>
#include<string>


/*
write a program to check if a number is divisable by x and y
*/
using namespace std;

void Print(const string& message) {
	cout << message << endl;
}

int ReadNumber(const string& message) {
	Print(message);
	int number;
	cin >> number;
	cin.ignore();
	return number;
}

int Mod(int firstValue, int secondValue) {
	return firstValue % secondValue;
}
bool IsEqual(int firstValue, int secondValue) {
	return firstValue == secondValue;
}

bool IsDivisable(int firstValue, int secondValue) {
	int result = Mod(firstValue, secondValue);
	return IsEqual(result,0);
}

bool And(bool A, bool B) {
	return A && B;
}

bool IsDivisableByXAndY(int number, int x, int y) {
	bool isDivisbleByX = IsDivisable(number, x);
	bool isDivisbleByY = IsDivisable(number, y);
	return And(isDivisbleByX, isDivisbleByY);
}
 
string CastBooleanToString(bool value) {
	switch (value)
	{
	case 0:
		return "UnDivisable";
		break;
	case 1:
		return "Divisible";
		break;
	default:
		return "Unkown";
		break;
	}
}

 

 

int main() {
 
	int number = ReadNumber("Enter the number");
	int x = ReadNumber("Enter x ");
	int y = ReadNumber("Enter y");
	bool isDivisible = IsDivisableByXAndY(number, x, y);
	Print(CastBooleanToString(isDivisible));


	return 0;
}