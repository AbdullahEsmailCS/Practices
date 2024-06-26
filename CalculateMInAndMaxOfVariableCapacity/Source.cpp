#include<iostream>
#include<cmath>
using namespace std;

long ComputeMinOfInteger(short byte) {
	int numberOfBits = byte * 8;
	int n = pow(-2, numberOfBits - 1) - 1;
	return n;
}

long ComputeMaxOfInteger(short byte) {
	int numberOfBits = byte * 8;
	int n = pow(2, numberOfBits - 1) - 1;
	return n;
}

int main() {

	cout << ComputeMinOfInteger(4) << endl;
	cout << ComputeMaxOfInteger(4) << endl;




	return 0;
}