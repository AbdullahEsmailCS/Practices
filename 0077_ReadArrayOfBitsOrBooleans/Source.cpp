#include <iostream>

const int FLAG_COUNT = 8; // Number of flags

bool readFlag() {
    char input;
    do {
        std::cout << "Enter a flag (0 or 1): ";
        std::cin >> input;
    } while (input != '0' && input != '1');

    return (input == '1');
}

void readFlags(bool flags[], int count) {
    for (int i = 0; i < count; ++i) {
        flags[i] = readFlag();
    }
}

int main() {
    bool flags[FLAG_COUNT] = { false }; // Array of booleans to represent flags

    // Read flags
    readFlags(flags, FLAG_COUNT);

    // Print the state of flags
    std::cout << "State of flags: ";
    for (int i = 0; i < FLAG_COUNT; ++i) {
        std::cout << (flags[i] ? "1" : "0") << " ";
    }
    std::cout << std::endl;

    return 0;
}