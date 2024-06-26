#include <iostream>

#define TABLE_SIZE 10

class HashTable {
private:
    int arr[TABLE_SIZE];

public:
    HashTable() {
        for (int i = 0; i < TABLE_SIZE; ++i) {
            arr[i] = -1;  // Initialize all elements to -1 (empty)
        }
    }

    int hashFunction(int key) {
        return key % TABLE_SIZE;
    }

    void insert(int key, int value) {
        int index = hashFunction(key);
        while (arr[index] != -1) {
            index = (index + 1) % TABLE_SIZE;  // Linear probing
        }
        arr[index] = value;
    }

    int search(int key) {
        int index = hashFunction(key);
        int initialIndex = index;
        while (arr[index] != key) {
            if (arr[index] == -1 || index == initialIndex) {
                return -1;  // Key not found
            }
            index = (index + 1) % TABLE_SIZE;  // Linear probing
        }
        return arr[index];
    }

    void remove(int key) {
        int index = hashFunction(key);
        int initialIndex = index;
        while (arr[index] != key) {
            if (arr[index] == -1 || index == initialIndex) {
                return;  // Key not found
            }
            index = (index + 1) % TABLE_SIZE;  // Linear probing
        }
        arr[index] = -1;  // Mark the slot as empty
    }
};




int main() {
    HashTable myHashTable;

    myHashTable.insert(10, 100);
    myHashTable.insert(20, 20);
    myHashTable.insert(30, 300);

    int value = myHashTable.search(20);
    if (value != -1) {
        std::cout << "Value found: " << value << std::endl;
    }
    else {
        std::cout << "Value not found" << std::endl;
    }

    myHashTable.remove(20);

    return 0;
}