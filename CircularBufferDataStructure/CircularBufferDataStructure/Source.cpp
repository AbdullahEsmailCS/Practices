#include <iostream>
#include <vector>

template<typename T>
class CircularBuffer {
private:
    std::vector<T> buffer;
    std::size_t head;
    std::size_t tail;
    std::size_t size;
    std::size_t capacity;

public:
    explicit CircularBuffer(std::size_t capacity)
        : buffer(capacity), head(0), tail(0), size(0), capacity(capacity) {}

    void enqueue(const T& element) {
        if (isFull()) {
            std::cout << "Circular buffer is full. Element cannot be enqueued." << std::endl;
            return;
        }

        buffer[tail] = element;
        tail = (tail + 1) % capacity;
        size++;
    }

    T dequeue() {
        if (isEmpty()) {
            std::cout << "Circular buffer is empty. Returning default-constructed element." << std::endl;
            return T();
        }

        T element = buffer[head];
        head = (head + 1) % capacity;
        size--;
        return element;
    }

    bool isEmpty() const {
        return size == 0;
    }

    bool isFull() const {
        return size == capacity;
    }

    std::size_t getSize() const {
        return size;
    }

    std::size_t getCapacity() const {
        return capacity;
    }
};

int main() {
    CircularBuffer<int> buffer(5);

    buffer.enqueue(10);
    buffer.enqueue(20);
    buffer.enqueue(30);

    std::cout << "Size: " << buffer.getSize() << std::endl;

    std::cout << "Dequeuing: " << buffer.dequeue() << std::endl;
    std::cout << "Dequeuing: " << buffer.dequeue() << std::endl;

    buffer.enqueue(40);
    buffer.enqueue(50);
    buffer.enqueue(60);

    std::cout << "Is full? " << (buffer.isFull() ? "Yes" : "No") << std::endl;

    while (!buffer.isEmpty()) {
        std::cout << "Dequeuing: " << buffer.dequeue() << std::endl;
    }

    std::cout << "Is empty? " << (buffer.isEmpty() ? "Yes" : "No") << std::endl;

    return 0;
}