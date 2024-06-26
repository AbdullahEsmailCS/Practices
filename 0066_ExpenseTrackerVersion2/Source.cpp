#include <iostream>
#include <fstream>
#include <string>
#include<sstream>

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
    int number;
    cin >> number;
    cin.ignore();
    return number;
}

double ReadDoubleNumber(string message) {
    cout << message << endl;
    double number;
    cin >> number;
    cin.ignore();
    return number;
}

string ReadString(string message) {
    cout << message << endl;
    string text;
    getline(cin, text);
    return text;
}

Expense ReadRecord() {
    Expense expense;
    expense.ID = ReadIntegerNumber("Enter the ID of Expense");
    expense.Item = ReadString("Enter the item name");
    expense.Description = ReadString("Enter the expense description");
    expense.Quantity = ReadIntegerNumber("Enter the Quantity of item you purchased");
    expense.Price = ReadDoubleNumber("Enter the price of the item");
    expense.TotalAmount = expense.Quantity * expense.Price;
    return expense;
}

void DisplayRecord(Expense expense) {
    cout << "Expense ID: " << expense.ID << "  ";
    cout << "Item Name: " << expense.Item << endl;
    cout << "Expense Description: " << expense.Description << "  ";
    cout << "Quantity: " << expense.Quantity << endl;
    cout << "Price: " << expense.Price << "  ";
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
    return totalExpense;
}

void DisplayTotalExpenseAmount(double total) {
    cout << "Total Amount of expense: " << total << endl;
}

void DisplayExpenses(Expense*& Expenses, int numberOfExpenses) {
    for (int i = 0; i < numberOfExpenses; i++) {
        DisplayRecord(Expenses[i]);
    }
}

void StoreExpensesToFile(const Expense* Expenses, int numberOfExpenses, const string& filename) {
    ofstream file(filename);
    if (file.is_open()) {
        file << numberOfExpenses << endl;
        for (int i = 0; i < numberOfExpenses; ++i) {
            file << Expenses[i].ID << endl;
            file << Expenses[i].Item << endl;
            file << Expenses[i].Description << endl;
            file << Expenses[i].Quantity << endl;
            file << Expenses[i].Price << endl;
            file << Expenses[i].TotalAmount << endl;
        }
        file.close();
        cout << "Expenses stored in file: " << filename << endl;
    }
    else {
        cout << "Unable to open file: " << filename << endl;
    }
}
//
//void ReadExpensesFromFile(Expense*& Expenses, int& numberOfExpenses, const string& filename) {
//    ifstream file(filename);
//    if (file.is_open()) {
//        file >> numberOfExpenses;
//        file.ignore();  // Ignore the newline character after reading numberOfExpenses
//        Expenses = new Expense[numberOfExpenses];
//        for (int i = 0; i < numberOfExpenses; ++i) {
//            file >> Expenses[i].ID;
//            file.ignore();
//            getline(file, Expenses[i].Item);
//            getline(file, Expenses[i].Description);
//            file >> Expenses[i].Quantity;
//            file >> Expenses[i].Price;
//            file >> Expenses[i].TotalAmount;
//            file.ignore();  // Ignore the newline character after reading TotalAmount
//        }
//        file.close();
//        cout << "Expenses loaded from file: " << filename << endl;
//    }
//    else {
//        cout << "Unable to open file: " << filename << endl;
//    }
//}
//
//void StoreExpensesToFile(const Expense* Expenses, int numberOfExpenses, const string& filename) {
//    ofstream file(filename);
//    if (file.is_open()) {
//        for (int i = 0; i < numberOfExpenses; ++i) {
//            file << Expenses[i].ID << "|";
//            file << Expenses[i].Item << "|";
//            file << Expenses[i].Description << "|";
//            file << Expenses[i].Quantity << "|";
//            file << Expenses[i].Price << "|";
//            file << Expenses[i].TotalAmount << "\n";
//        }
//        file.close();
//        cout << "Expenses stored in file: " << filename << endl;
//    }
//    else {
//        cout << "Unable to open file: " << filename << endl;
//    }
//}

void ReadExpensesFromFile(Expense*& Expenses, int& numberOfExpenses, const string& filename) {
    ifstream file(filename);
    if (file.is_open()) {
        // Count the number of lines in the file
        numberOfExpenses = count(istreambuf_iterator<char>(file), istreambuf_iterator<char>(), '\n');
        file.seekg(0); // Move the file pointer back to the beginning

        Expenses = new Expense[numberOfExpenses];
        for (int i = 0; i < numberOfExpenses; ++i) {
            string line;
            getline(file, line);

            // Parse the line and extract attributes
            stringstream ss(line);
            string attribute;
            getline(ss, attribute, '|');
            Expenses[i].ID = stoi(attribute);
            getline(ss, Expenses[i].Item, '|');
            getline(ss, Expenses[i].Description, '|');
            getline(ss, attribute, '|');
            Expenses[i].Quantity = stoi(attribute);
            getline(ss, attribute, '|');
            Expenses[i].Price = stod(attribute);
            getline(ss, attribute, '|');
            Expenses[i].TotalAmount = stod(attribute);
        }
        file.close();
        cout << "Expenses loaded from file: " << filename << endl;
    }
    else {
        cout << "Unable to open file: " << filename << endl;
    }
}










int main() {
    int size = ReadIntegerNumber("Enter the size of array Expenses");
    Expense* Expenses = new Expense[size];
    AddExpense(Expenses, size);
    double totalExpense = CalculateTotalExpense(Expenses, size);
    DisplayExpenses(Expenses, size);
    DisplayTotalExpenseAmount(totalExpense);

    string filename = "expenses.txt";
    StoreExpensesToFile(Expenses, size, filename);
    delete[] Expenses;
    Expenses = nullptr;

    int loadedNumberOfExpenses = 0;
    Expense* loadedExpenses = nullptr;
    ReadExpensesFromFile(loadedExpenses, loadedNumberOfExpenses, filename);
    double loadedTotalExpense = CalculateTotalExpense(loadedExpenses, loadedNumberOfExpenses);
    DisplayExpenses(loadedExpenses, loadedNumberOfExpenses);
    DisplayTotalExpenseAmount(loadedTotalExpense);

    delete[] loadedExpenses;
    loadedExpenses = nullptr;

    return 0;
}