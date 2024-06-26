#include<iostream>
#include<string>

using namespace std;

struct Expense {
	int ID;
	string Item;
	string Description;
	int Quantity;
	double Price;
	double TotalAmount;
};

int ReadIntegerNumber(string message) {
	cout << message << endl;
	int _number;
	cin >> _number;
	cin.ignore();
	return _number;
}

double ReadDoubleNumber(string message) {
	cout << message << endl;
	double _number;
	cin >> _number;
	cin.ignore();
	return _number;
}

string ReadString(string message) {
	cout << message << endl;
	string _text;
	getline(cin, _text);
	return _text;
}

Expense ReadRecord() {
	Expense _Expense;
	_Expense.ID = ReadIntegerNumber("Enter the ID of Expense");
	_Expense.Item = ReadString("Enter the item name");
	_Expense.Description = ReadString("Enter the expense description");
	_Expense.Quantity = ReadIntegerNumber("Enter the Quantity of item you purchased");
	_Expense.Price = ReadDoubleNumber("enter the price of the item");
	_Expense.TotalAmount = _Expense.Quantity * _Expense.Price;
	return _Expense;
}

void DisplayRecord(Expense expense) {
	cout << "Expense ID :" << expense.ID << "  ";
	cout << "Item  Name: " << expense.Item << endl;
	cout << "Expense Description :" << expense.Description << "  ";
	cout << "Quantity: " << expense.Quantity << endl;
	cout << "Price :" << expense.Price<< "  ";
	cout << "Total Amount: " << expense.TotalAmount << endl;
}

void AddExpense(Expense*& Expenses, int numberOfExpenses) {
	for (int i = 0; i < numberOfExpenses; i++) {
		Expenses[i] = ReadRecord();
	}
}

double CalculateTotalExpense(Expense*& Expenses, int numberOfExpenses) {
	double totalExpense = 0.0;
	for (int i = 0; i < numberOfExpenses; i++) {
	 totalExpense += Expenses[i].TotalAmount;
	}
	return(double) totalExpense;
}

void DisplayTotalExpenseAmount(double total) {
	cout << "Total Amount of expense : " << total << endl;
}



void DisplayExpenses(Expense*& Expenses, int numberOfExpenses) {
	for (int i = 0; i < numberOfExpenses; i++) {
		DisplayRecord(Expenses[i]);
	}
}


int main() {

	int	size = ReadIntegerNumber("Enter the size of array Expenses");
	Expense* Expenses = new Expense[size];
	size_t totalSize = sizeof(Expenses);
	size_t elementSize = sizeof(Expenses[0]);
	size_t sizeOfArrayExpense = totalSize / elementSize;
	AddExpense(Expenses, size);
	DisplayExpenses(Expenses, size);
	DisplayTotalExpenseAmount(CalculateTotalExpense(Expenses, size));
	return 0;
}