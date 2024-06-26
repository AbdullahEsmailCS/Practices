#include<iostream>
using namespace std;

void PrintWelcome(const string& greeting) {
	cout << greeting << endl;
}

int main() {

	string welcome = "Hello, World";
	PrintWelcome(welcome);

	return 0;
}