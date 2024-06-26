#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>

struct Person {
    std::string name;
    int age;
    std::string email;
};

int main() {
    std::ifstream readFile("data.txt");

    std::string line;
    std::vector<Person> persons;

    // Write the data to a file
    std::ofstream writeFile("output.txt");
    if (writeFile.is_open()) {
        // Write the header
        writeFile << "Name\tAge\tEmail\n";

        // Write the data
        for (const auto& person : persons) {
            writeFile << person.name << '\t' << person.age << '\t' << person.email << '\n';
        }

        writeFile.close();
        std::cout << "Data written to output.txt" << std::endl;
    }
    else {
        std::cout << "Failed to open the output file" << std::endl;
    }









   

    // Read the header
    std::getline(readFile, line); // Assuming the header is on the first line

    // Read the data blocks
    while (std::getline(readFile, line)) {
        std::stringstream ss(line);
        std::string field;

        Person person;
        ss >> person.name >> person.age >> person.email;

        persons.push_back(person);
    }

    readFile.close();

    // Print the data
    for (const auto& person : persons) {
        std::cout << "Name: " << person.name << std::endl;
        std::cout << "Age: " << person.age << std::endl;
        std::cout << "Email: " << person.email << std::endl;
        std::cout << std::endl;
    }

    return 0;
}