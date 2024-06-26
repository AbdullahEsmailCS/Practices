#include <iostream>

bool endsWith(const std::string& str, const std::string& suffix) {
    size_t strLen = str.length();
    size_t suffixLen = suffix.length();

    if (suffixLen > strLen) {
        return false;  // Suffix is longer than the string, cannot be a match
    }

    size_t strPos = strLen - suffixLen;

    for (size_t i = 0; i < suffixLen; i++) {
        if (str[strPos + i] != suffix[i]) {
            return false;  // Mismatch found, suffix does not match the end of the string
        }
    }

    return true;  // All characters of the suffix matched with the end of the string
}

int main() {
    std::string str = "Hello, World!";
    std::string suffix = "World!";

    if (endsWith(str, suffix)) {
        std::cout << "\"" << str << "\" ends with \"" << suffix << "\"" << std::endl;
    }
    else {
        std::cout << "\"" << str << "\" does not end with \"" << suffix << "\"" << std::endl;
    }

    return 0;
}