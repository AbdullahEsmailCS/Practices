#include<iostream>
#include<string>
using namespace std;

const int SizeOfArray = 4;
string Products[SizeOfArray];

void PrintText(string& text) {
	cout << text << endl;
}
string ReadText(string message) {
	PrintText(message);
	string _input;
	getline(cin, _input);
	return _input;
}

void ReadProductsFromUser() {

	for (int i = 0; i < SizeOfArray; i++) {

		Products[i] = ReadText("Enter Product Name");
	}
}

void PrintProducts() {
	cout << "\nProducts: " << endl;
	for (int i = 0; i < SizeOfArray; i++) {
		cout << "Product Name[" << i+1 << "]: " << Products[i] << endl;
	}
}



int main() {

	ReadProductsFromUser();
	PrintProducts();
	return 0;
}