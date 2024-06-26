#include <iostream>
#include <fstream>
#include <string>

struct Header {
    int version;
};

struct DataBlock {
    int id;
    double value;
};

int main() {
    std::ofstream file("data.txt");

    Header header;
    header.version = 1;

    DataBlock block1;
    block1.id = 1;
    block1.value = 3.14;

    DataBlock block2;
    block2.id = 2;
    block2.value = 2.71828;

    // Writing header and data blocks to the text file
    file << "Header," << header.version << std::endl;
    file << "DataBlock," << block1.id << "," << block1.value << std::endl;
    file << "DataBlock," << block2.id << "," << block2.value << std::endl;

    file.close();

    std::ifstream readFile("data.txt");

    // Reading header from the text file
    Header readHeader;
    std::string line;
    if (std::getline(readFile, line)) {
        size_t commaPos = line.find(',');
        readHeader.version = std::stoi(line.substr(commaPos + 1));
    }

    // Reading data blocks from the text file
    DataBlock readBlock1;
    DataBlock readBlock2;

    if (std::getline(readFile, line)) {
        size_t commaPos1 = line.find(',');
        size_t commaPos2 = line.find(',', commaPos1 + 1);
        readBlock1.id = std::stoi(line.substr(commaPos1 + 1, commaPos2 - commaPos1 - 1));
        readBlock1.value = std::stod(line.substr(commaPos2 + 1));
    }

    if (std::getline(readFile, line)) {
        size_t commaPos1 = line.find(',');
        size_t commaPos2 = line.find(',', commaPos1 + 1);
        readBlock2.id = std::stoi(line.substr(commaPos1 + 1, commaPos2 - commaPos1 - 1));
        readBlock2.value = std::stod(line.substr(commaPos2 + 1));
    }

    std::cout << "Header Version: " << readHeader.version << std::endl;
    std::cout << "Block 1 - ID: " << readBlock1.id << ", Value: " << readBlock1.value << std::endl;
    std::cout << "Block 2 - ID: " << readBlock2.id << ", Value: " << readBlock2.value << std::endl;

    readFile.close();

    return 0;
}