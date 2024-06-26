#include<iostream>
#include<string>
using namespace std;

void DisplayMessage(const string& message) {
	cout << message << endl;
}




int main() {

	cout << (5 < 9 )<< endl;
	cout << (5 > 9) << endl;
	cout << (5 <= 9) << endl;
	cout << (5 >= 9) << endl;
	cout << (5 == 9) << endl;
	cout << (5 != 9) << endl;

	return 0;
}