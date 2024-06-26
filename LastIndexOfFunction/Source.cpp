#include <iostream>

int lastIndexOf(const std::string& str, const std::string& substr) {
    size_t strLen = str.length();
    size_t substrLen = substr.length();

    if (substrLen > strLen) {
        return -1;  // Substring is longer than the string, not possible to find
    }

    for (int i = strLen - substrLen; i >= 0; i--) {
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
    std::string substr = "o";
    int index = lastIndexOf(str, substr);

    if (index != -1) {
        std::cout << "Last occurrence of \"" << substr << "\" found at index " << index << std::endl;
    }
    else {
        std::cout << "Substring \"" << substr << "\" not found." << std::endl;
    }

    return 0;
}