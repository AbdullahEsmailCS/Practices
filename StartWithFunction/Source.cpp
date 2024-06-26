#include <iostream>

bool startsWith(const std::string& str, const std::string& prefix) {
    size_t strLen = str.length();
    size_t prefixLen = prefix.length();

    if (prefixLen > strLen) {
        return false;  // Prefix is longer than the string, cannot be a match
    }

    for (size_t i = 0; i < prefixLen; i++) {
        if (str[i] != prefix[i]) {
            return false;  // Mismatch found, prefix does not match the start of the string
        }
    }

    return true;  // All characters of the prefix matched with the start of the string
}

int main() {
    std::string str = "Hello, World!";
    std::string prefix = "Hello";

    if (startsWith(str, prefix)) {
        std::cout << "\"" << str << "\" starts with \"" << prefix << "\"" << std::endl;
    }
    else {
        std::cout << "\"" << str << "\" does not start with \"" << prefix << "\"" << std::endl;
    }

    return 0;
}