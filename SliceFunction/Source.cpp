#include <iostream>

std::string slice(const std::string& str, int start, int end) {
    int strLen = str.length();

    if (start < 0) {
        start = std::max(0, strLen + start);  // Convert negative start index to positive
    }

    if (end < 0) {
        end = std::max(0, strLen + end);  // Convert negative end index to positive
    }

    if (start > end) {
        return "";  // Invalid start and end indices, return an empty string
    }

    std::string result;
    end = std::min(end, strLen);

    // Copy characters from the input string to the result string
    for (int i = start; i < end; i++) {
        result += str[i];
    }

    return result;
}

int main() {
    std::string str = "Hello, World!";
    int start = 7;
    int end = 12;

    std::string sliced = slice(str, start, end);

    std::cout << "Sliced string: " << sliced << std::endl;

    return 0;
}