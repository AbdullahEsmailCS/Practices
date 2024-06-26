#include <iostream>

std::string toLowerCase(const std::string& str) {
    std::string lowercased = str;
    for (size_t i = 0; i < lowercased.length(); i++) {
        if (lowercased[i] >= 'A' && lowercased[i] <= 'Z') {
            lowercased[i] = lowercased[i] - 'A' + 'a';
        }
    }
    return lowercased;
}

int main() {
    std::string str = "Hello, World!";
    std::string lowercased = toLowerCase(str);
    std::cout << "Lowercased string: " << lowercased << std::endl;
    return 0;
}