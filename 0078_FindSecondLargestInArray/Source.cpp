#include <iostream>

int findSecondLargest(int arr[], int size) {
    int largest = INT_MIN;  // Initialize the largest element to the smallest possible value
    int secondLargest = INT_MIN;  // Initialize the second largest element to the smallest possible value

    for (int i = 0; i < size; i++) {
        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        }
        else if (arr[i] > secondLargest && arr[i] < largest) {
            secondLargest = arr[i];
        }
    }

    return secondLargest;
}

int main() {
    int array[] = { 5, 9, 3, 7, 2, 8 };
    int size = sizeof(array) / sizeof(array[0]);

    int secondLargest = findSecondLargest(array, size);
    std::cout << "The second largest element is: " << secondLargest << std::endl;

    return 0;
}