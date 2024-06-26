#include <iostream>
using namespace std;


// Function to shift elements of an array to the left
void shiftLeft(int arr[], int size, int shiftBy) {
    for (int i = 0; i < shiftBy; i++) {
        int temp = arr[0];
        for (int j = 0; j < size - 1; j++) {
            arr[j] = arr[j + 1];
        }
        arr[size - 1] = temp;
    }
}

// Function to shift elements of an array to the right
void shiftRight(int arr[], int size, int shiftBy) {
    for (int i = 0; i < shiftBy; i++) {
        int temp = arr[size - 1];
        for (int j = size - 1; j > 0; j--) {
            arr[j] = arr[j - 1];
        }
        arr[0] = temp;
    }
}

// Function to display the elements of an array
void displayArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

int main() {
    int array[] = { 1, 2, 3, 4, 5 };
    int size = sizeof(array) / sizeof(array[0]);
    int shiftBy = 2;

    std::cout << "Original Array: ";
    displayArray(array, size);

    // Shifting elements to the left
    shiftLeft(array, size, shiftBy);
    std::cout << "Array after shifting left by " << shiftBy << " positions: ";
    displayArray(array, size);

    // Shifting elements to the right
    shiftRight(array, size, shiftBy);
    std::cout << "Array after shifting right by " << shiftBy << " positions: ";
    displayArray(array, size);





    //int ar[] = {3,2,543,63};
    //int length = 4;
    //for (int i = 0; i < 2; i++) {
    //    int temp = ar[0];
    //    for (int j = 0; j <= 4; j++) {
    //        cout << j << " ";
    //   }
    //    cout <<"\n" << temp << endl;
    //}



    return 0;
}