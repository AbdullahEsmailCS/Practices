#include<iostream>
using namespace std;

bool ReadBoolean(string message) {
	cout << message << endl;
	cout << "Note: the input should be either zero or one " << endl;
	bool _option;
	cin >> _option;
	return _option;
}

void PrintBoolean(bool option) {
	cout << option << endl;
}

int main() {

	bool isPressedYes = ReadBoolean("enter a user selection option ");
	PrintBoolean(isPressedYes);


	return 0;
}