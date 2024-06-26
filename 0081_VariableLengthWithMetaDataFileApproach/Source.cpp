#include <iostream>
#include <fstream>
#include <string>

struct Employee {
    int id;
    std::string name;
};

int main() {
    std::ofstream file("data.txt");

    Employee employee1;
    employee1.id = 1;
    employee1.name = "Alice";

    file << employee1.name.size() << "," << employee1.name << "," << employee1.id << std::endl;

    file.close();

    std::ifstream readFile("data.txt");

    Employee employee2;
    std::string line;
    if (std::getline(readFile, line)) {
        size_t commaPos1 = line.find(',');
        size_t commaPos2 = line.find(',', commaPos1 + 1);
        size_t nameLength = std::stoi(line.substr(0, commaPos1));

        employee2.name = line.substr(commaPos1 + 1, nameLength);
        employee2.id = std::stoi(line.substr(commaPos2 + 1));
    }

    std::cout << "ID: " << employee2.id << std::endl;
    std::cout << "Name: " << employee2.name << std::endl;

    readFile.close();

    return 0;
}