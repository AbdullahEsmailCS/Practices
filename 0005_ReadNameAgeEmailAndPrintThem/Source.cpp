#include <iostream>
#include <string>

using namespace std;

// Function to read name from the user
string readName() {
    string name;
    cout << "Enter your name: ";
    getline(cin, name);
    return name;
}

// Function to read age from the user
int readAge() {
    int age;
    cout << "Enter your age: ";
    cin >> age;
    return age;
}

// Function to read email from the user
string readEmail() {
    string email;
    cin.ignore(); // Ignore any remaining newline character from previous input
    cout << "Enter your email: ";
    getline(cin, email);
    return email;
}

// Function to print name, age, and email
void printDetails(const string& name, int age, const string& email) {
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "Email: " << email << endl;
}

int main() {
    string name = readName();
    int age = readAge();
    string email = readEmail();

    // Print the details
    printDetails(name, age, email);

    return 0;
}