#include <iostream>

bool includes(const std::string& str, const std::string& target) {
    size_t strLen = str.length();
    size_t targetLen = target.length();

    if (targetLen > strLen) {
        return false;  // Target is longer than the string, cannot be included
    }

    for (size_t i = 0; i <= strLen - targetLen; i++) {
        bool found = true;

        for (size_t j = 0; j < targetLen; j++) {
            if (str[i + j] != target[j]) {
                found = false;
                break;
            }
        }

        if (found) {
            return true;  // Target substring found in the string
        }
    }

    return false;  // Target substring not found in the string
}

int main() {
    std::string str = "Hello, World!";
    std::string target = "World";

    if (includes(str, target)) {
        std::cout << "\"" << str << "\" includes \"" << target << "\"" << std::endl;
    }
    else {
        std::cout << "\"" << str << "\" does not include \"" << target << "\"" << std::endl;
    }

    return 0;
}