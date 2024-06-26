#include<iostream>
#include<string>
using namespace std;

string ReadNumberAsString(const string& message) {
	cout << message << endl;
	string _number;
	getline(cin, _number);
	return _number;
}

int FindDot(string number,char dot = '.') {

	for (int i = 0; i < number.length(); i++) {
		if (number[i] == dot)
			return i;
	}
	return 0;

}


int CountDigits(string number, int startFrom) {
	int count = 0;
	for (int i = startFrom+1; i < number.length(); i++) {
		count++;
	}

	return count;
}

void Print(int number) {
	cout << number << endl;
}


int main() {
	string number = ReadNumberAsString("Enter a floating poit number");
	int index = FindDot(number);
	Print(CountDigits(number, index));

	return 0;
}