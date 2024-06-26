#include <iostream>
#include <string>

int main() {
    const std::string correctUsername = "admin";
    const std::string correctPassword = "password";
    int loginAttempts = 0;
    bool loggedIn = false;

    while (loginAttempts < 3 &&  !loggedIn) {
        std::string username, password;

        std::cout << "Enter username: ";
        std::cin >> username;

        std::cout << "Enter password: ";
        std::cin >> password;

        if (username == correctUsername && password == correctPassword) {
            std::cout << "Login successful!" << std::endl;
            loggedIn = true;
        }
        else {
            std::cout << "Incorrect username or password. Please try again." << std::endl;
            loginAttempts++;
        }
    }

    if (!loggedIn) {
        std::cout << "Login failed. Maximum attempts exceeded." << std::endl;
    }

    return 0;
} 