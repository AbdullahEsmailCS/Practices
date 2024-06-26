#include <iostream>
#include <vector>




template <typename T>
class CircularBuffer {
private:
    std::vector<T> buffer;
    int head; // Index of the first element in the buffer
    int tail; // Index of the next available position in the buffer
    int bufferSize; // Maximum size of the buffer
    int count; // Number of elements currently stored in the buffer

public:
    CircularBuffer(int size) : buffer(size), head(0), tail(0), bufferSize(size), count(0) {}

    void enqueue(const T& item) {
        if (count == bufferSize) {
            std::cout << "Circular buffer is full!" << std::endl;
            return;
        }

        buffer[tail] = item;
        tail = (tail + 1) % bufferSize;
        count++;
    }

    T dequeue() {
        if (count == 0) {
            std::cout << "Circular buffer is empty!" << std::endl;
            return T();
        }

        T item = buffer[head];
        head = (head + 1) % bufferSize;
        count--;
        return item;
    }

    bool isEmpty() const {
        return count == 0;
    }

    bool isFull() const {
        return count == bufferSize;
    }
};

int main() {
    // Create a circular buffer of size 5
    CircularBuffer<int> cb(5);

    // Enqueue elements
    cb.enqueue(10);
    cb.enqueue(20);
    cb.enqueue(30);
    cb.enqueue(40);
    cb.enqueue(50);

    // Try to enqueue when the buffer is full
    cb.enqueue(60);

    // Dequeue elements
    while (!cb.isEmpty()) {
        int item = cb.dequeue();
        std::cout << item << " ";
    }
    std::cout << std::endl;

    return 0;
}