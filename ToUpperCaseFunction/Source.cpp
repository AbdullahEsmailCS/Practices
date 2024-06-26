#include <iostream>

std::string toUpperCase(const std::string& str) {
    std::string uppercased = str;
    for (size_t i = 0; i < uppercased.length(); i++) {
        if (uppercased[i] >= 'a' && uppercased[i] <= 'z') {
            uppercased[i] = uppercased[i] - 'a' + 'A';
        }
    }
    return uppercased;
}

int main() {
    std::string str = "Hello, World!";
    std::string uppercased = toUpperCase(str);
    std::cout << "Uppercased string: " << uppercased << std::endl;
    return 0;
}