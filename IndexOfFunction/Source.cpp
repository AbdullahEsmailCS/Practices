#include <iostream>

int indexOf(const std::string& str, const std::string& substr) {
    size_t strLen = str.length();
    size_t substrLen = substr.length();

    for (size_t i = 0; i <= strLen - substrLen; i++) {
        size_t j;

        for (j = 0; j < substrLen; j++) {
            if (str[i + j] != substr[j]) {
                break;
            }
        }

        if (j == substrLen) {
            return i;  // Found the substring, return the starting index
        }
    }

    return -1;  // Substring not found, return -1
}

int main() {
    std::string str = "Hello, World!";
    std::string substr = "World";
    int index = indexOf(str, substr);

    if (index != -1) {
        std::cout << "Substring \"" << substr << "\" found at index " << index << std::endl;
    }
    else {
        std::cout << "Substring \"" << substr << "\" not found." << std::endl;
    }

    return 0;
}