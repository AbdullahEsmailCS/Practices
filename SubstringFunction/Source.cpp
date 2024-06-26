#include <iostream>

std::string substring(const std::string& str, int startIndex, int length) {
    int strLen = str.length();

    if (startIndex >= strLen || startIndex < 0 || length <= 0) {
        return "";  // Invalid start index or length, return an empty string
    }

    std::string result;
    int endIndex = startIndex + length;

    // Copy characters from the input string to the result string
    for (int i = startIndex; i < endIndex && i < strLen; i++) {
        result += str[i];
    }

    return result;
}

int main() {
    std::string str = "Hello, World!";
    int startIndex = 7;
    int length = 5;

    std::string sub = substring(str, startIndex, length);

    std::cout << "Substring: " << sub << std::endl;

    return 0;
}