#include<iostream>
#include<string>
using namespace std;

void PrintNameOnScreen(const string& name) {
	cout << name << endl;
}

int main() {

	string name = "Abdullah Abdo MOhammed Esmail Ali";
	PrintNameOnScreen(name);

	return 0;
}