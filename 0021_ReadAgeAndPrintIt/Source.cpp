#include<iostream>
#include<string>

using namespace std;
const string AgeNotification = "Your age is ";
int ReadAge(const string& message) {
	cout << message << endl;
	int _age;
	cin >> _age;
	return _age;
}

void PrintAge(int age) {
	cout << AgeNotification << age << endl;
}

int main() {




	return 0;
}