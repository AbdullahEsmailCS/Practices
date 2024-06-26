#include<iostream>
#include<string>
using namespace std;


// Constant variables
string EnterYourNameAlert = "Enter your name";
const string YourNameAlert = "Your name :";


// Function to read the name from the user
string ReadName(string& message) {
	cout << message << endl;
	string _name;
	getline(cin, _name);
	return _name;
}

// Function to print the name on the screen
void PrintNameOnScreen(string& name) {
	cout << YourNameAlert << name << endl;
}


int main() {
	string _name = ReadName(EnterYourNameAlert);
	PrintNameOnScreen(_name);

	return 0;
}