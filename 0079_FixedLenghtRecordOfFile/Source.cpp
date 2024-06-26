#include <iostream>
#include <fstream>
#include <string>
#include <vector>

struct Person {
    std::string name;
    int age;
};

int main() {
    std::ofstream file("data.txt");

    Person person1;
    person1.name = "Abdullah Abdo Mohammed";
    person1.age = 25;
    Person person3;
    person3.name = "Atef Abdo Mohammed";
    person3.age = 25;
    file << person1.name << "," << person1.age << std::endl;
    file << person3.name << "," << person3.age << std::endl;

    file.close();

 /*   std::ifstream readFile("data.txt");

    Person person2;
    std::string line;
    if (std::getline(readFile, line)) {
        size_t commaPos = line.find(',');
        person2.name = line.substr(0, commaPos);
        person2.age = std::stoi(line.substr(commaPos + 1));
    }

    std::cout << "Name: " << person2.name << std::endl;
    std::cout << "Age: " << person2.age << std::endl;

    readFile.close();*/
    std::ifstream readFile("data.txt");

    std::vector<Person> persons;
    std::string line;
    while (std::getline(readFile, line)) {
        size_t commaPos = line.find(',');
        Person person;
        person.name = line.substr(0, commaPos);
        person.age = std::stoi(line.substr(commaPos + 1));
        persons.push_back(person);
    }

    readFile.close();

    for (const auto& person : persons) {
        std::cout << "Name: " << person.name << std::endl;
        std::cout << "Age: " << person.age << std::endl;
        std::cout << std::endl;
    }







    return 0;
}