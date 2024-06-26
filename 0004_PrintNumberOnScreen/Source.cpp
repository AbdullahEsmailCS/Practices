#include<iostream>
using namespace std;

const string NumberAlert = "Number is :";

void PrintNumberOnScreen(int number) {
	cout<<NumberAlert << number << endl;
}

int main() {

	int _number = 23;
	PrintNumberOnScreen(_number);

	return 0;
}