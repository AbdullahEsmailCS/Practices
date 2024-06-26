#include<iostream>
#include<string>
using namespace std;


void PrintHeader() {
	cout << "\n\n \t\t\t Multiplication table from 1 to 10\n\n";
	cout << "\t";

	for (int i = 1; i <= 10; i++) {
		cout << i << "\t";
	}
	cout << "\n-----------------------------------------------------------------------------\n";
}


string ColumnSeparator(int number) {
	if (number < 10)
		return "    |";
	else
		return "   |";
}

void PrintTableData() {

	PrintHeader();
	for (int i = 1; i <= 10; i++) {

		cout << " " << i << ColumnSeparator(i) << "\t";

		for (int j = 1; j <= 10; j++) {
			cout << i * j << "\t";
		}
		cout << endl;
	}
}


int main() {

	PrintTableData();

	return 0;
}