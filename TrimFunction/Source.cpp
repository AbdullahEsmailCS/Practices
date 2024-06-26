#include <iostream>

std::string trim(const std::string& str) {
    std::string trimmed;
    size_t start = 0;
    size_t end = str.length() - 1;

    // Find the start index of non-whitespace characters
    while (start <= end && std::isspace(str[start])) {
        start++;
    }

    // Find the end index of non-whitespace characters
    while (end >= start && std::isspace(str[end])) {
        end--;
    }

    // Copy the non-whitespace characters to the trimmed string
    for (size_t i = start; i <= end; i++) {
        trimmed += str[i];
    }

    return trimmed;
}

int main() {
    std::string str = "   Hello, World!   ";
    std::string trimmed = trim(str);
    std::cout << "Trimmed string: \"" << trimmed << "\"" << std::endl;
    return 0;
}