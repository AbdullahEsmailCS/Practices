#include <iostream>

#define MAX_SIZE 100

class Queue {
private:
    int arr[MAX_SIZE];
    int front;
    int rear;

public:
    Queue() {
        front = -1;
        rear = -1;
    }

    bool isEmpty() {
        return (front == -1 && rear == -1);
    }

    bool isFull() {
        return (rear == MAX_SIZE - 1);
    }

    void enqueue(int element) {
        if (isFull()) {
            std::cout << "Queue Overflow\n";
            return;
        }
        else if (isEmpty()) {
            front = rear = 0;
        }
        else {
            rear++;
        }
        arr[rear] = element;
    }

    int dequeue() {
        if (isEmpty()) {
            std::cout << "Queue Underflow\n";
            return -1;
        }
        int dequeuedElement = arr[front];
        if (front == rear) {
            front = rear = -1;
        }
        else {
            front++;
        }
        return dequeuedElement;
    }

    int peek() {
        if (isEmpty()) {
            std::cout << "Queue is empty\n";
            return -1;
        }
        return arr[front];
    }
};

int main() {

    Queue myQueue;

    myQueue.enqueue(10);
    myQueue.enqueue(20);
    myQueue.enqueue(30);

    int frontElement = myQueue.peek();
    std::cout << "Front element: " << frontElement << std::endl;

    while (!myQueue.isEmpty()) {
        int dequeuedElement = myQueue.dequeue();
        std::cout << "Dequeued element: " << dequeuedElement << std::endl;
    }

    return 0;
}