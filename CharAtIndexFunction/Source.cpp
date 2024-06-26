#include <iostream>

char charAt(const std::string& str, size_t index) {
    if (index >= 0 && index < str.length()) {
        return str[index];
    }
    return '\0'; // Return null character if the index is out of range
}

int main() {
    std::string str = "Hello, World!";
    size_t index = 7;
    char character = charAt(str, index);
    std::cout << "Character at index " << index << ": " << character << std::endl;
    return 0;
}