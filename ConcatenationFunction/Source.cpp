#include <iostream>

char* concat(const char* str1, const char* str2) {
    int len1 = 0;
    while (str1[len1] != '\0') {
        len1++;
    }

    int len2 = 0;
    while (str2[len2] != '\0') {
        len2++;
    }

    char* result = new char[len1 + len2 + 1];

    for (int i = 0; i < len1; i++) {
        result[i] = str1[i];
    }

    for (int i = 0; i < len2; i++) {
        result[len1 + i] = str2[i];
    }

    result[len1 + len2] = '\0';

    return result;
}

int main() {
    const char* str1 = "Hello, ";
    const char* str2 = "World!";
    char* concatenated = concat(str1, str2);
    std::cout << "Concatenated string: " << concatenated << std::endl;
    delete[] concatenated;
    return 0;
}