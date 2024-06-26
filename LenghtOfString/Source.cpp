#include <iostream>
using namespace std;

int length(const char* str) {
    int count = 0;
    while (str[count] != '\0') {
        count++;
    }
    return count;
}

int main() {
    const char* str = "Hello, World!";
    int len = length(str);
    cout << "Length of the string: " << len << endl;
    return 0;
}