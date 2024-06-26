#include <iostream>

std::string replace(const std::string& str, const std::string& oldValue, const std::string& newValue) {
    std::string result;
    int strLen = str.length();
    int oldValueLen = oldValue.length();

    for (int i = 0; i < strLen; i++) {
        bool found = true;

        // Check if the current substring matches the old value
        for (int j = 0; j < oldValueLen; j++) {
            if (str[i + j] != oldValue[j]) {
                found = false;
                break;
            }
        }

        if (found) {
            // Append the new value to the result string
            result += newValue;

            // Move the iteration index to skip the old value
            i += oldValueLen - 1;
        }
        else {
            // Append the current character to the result string
            result += str[i];
        }
    }

    return result;
}

int main() {
    std::string str = "Hello, World!";
    std::string oldValue = "World";
    std::string newValue = "Universe";

    std::string replaced = replace(str, oldValue, newValue);

    std::cout << "Replaced string: " << replaced << std::endl;

    return 0;
}