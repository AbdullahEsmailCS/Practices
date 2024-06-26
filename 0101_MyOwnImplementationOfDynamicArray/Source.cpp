#include <iostream>

template <typename T>
class MyOwnDynamicArray {
private:
    T* array;
    int size;
    int capacity;

public:
    MyOwnDynamicArray() : array(nullptr), size(0), capacity(0) {}

    ~MyOwnDynamicArray() {
        delete[] array;
    }

    /*void pushBack(const T& item) {
        if (size >= capacity) {
            int newCapacity = (capacity == 0) ? 1 : capacity * 2;
            T* newArray = new T[newCapacity];

            for (int i = 0; i < size; i++) {
                newArray[i] = array[i];
            }

            delete[] array;
            array = newArray;
            capacity = newCapacity;
        }

        array[size++] = item;
      
    }*/

    void pushBack(const T& item) {
        if (size >= capacity) {
            int newCapacity = (capacity == 0) ? 1 : capacity * 2;
            T* newArray = new T[newCapacity];

            for (int i = 0; i < size; i++) {
                newArray[i] = array[i];
            }

            delete[] array;
            array = newArray;
            capacity = newCapacity;
        }

        array[size++] = item;
    }





    T& operator[](int index) {
        if (index < 0 || index >= size) {
            throw std::out_of_range("Index out of range");
        }

        return array[index];
    }

    int getSize() const {
        return size;
    }
};

int main() {
    MyOwnDynamicArray<int> dynamicArray;

    dynamicArray.pushBack(10);
    dynamicArray.pushBack(20);
    dynamicArray.pushBack(30);

    for (int i = 0; i < dynamicArray.getSize(); i++) {
        std::cout << dynamicArray[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}