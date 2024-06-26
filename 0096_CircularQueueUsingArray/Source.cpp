#include <iostream>

#define MAX_SIZE 100

class CircularQueue {
private:
    int arr[MAX_SIZE];
    int front;
    int rear;

public:
    CircularQueue() {
        front = -1;
        rear = -1;
    }

    bool isEmpty() {
        return (front == -1 && rear == -1);
    }

    bool isFull() {
        return ((rear + 1) % MAX_SIZE == front);
    }

    void enqueue(int element) {
        if (isFull()) {
            std::cout << "Circular Queue Overflow\n";
            return;
        }
        else if (isEmpty()) {
            front = rear = 0;
        }
        else {
            rear = (rear + 1) % MAX_SIZE;
        }
        arr[rear] = element;
    }

    int dequeue() {
        if (isEmpty()) {
            std::cout << "Circular Queue Underflow\n";
            return -1;
        }
        int dequeuedElement = arr[front];
        if (front == rear) {
            front = rear = -1;
        }
        else {
            front = (front + 1) % MAX_SIZE;
        }
        return dequeuedElement;
    }

    int peek() {
        if (isEmpty()) {
            std::cout << "Circular Queue is empty\n";
            return -1;
        }
        return arr[front];
    }
};


int main() {


    CircularQueue myCircularQueue;

    myCircularQueue.enqueue(10);
    myCircularQueue.enqueue(20);
    myCircularQueue.enqueue(30);

    int frontElement = myCircularQueue.peek();
    std::cout << "Front element: " << frontElement << std::endl;

    myCircularQueue.dequeue();
    myCircularQueue.enqueue(40);

    while (!myCircularQueue.isEmpty()) {
        int dequeuedElement = myCircularQueue.dequeue();
        std::cout << "Dequeued element: " << dequeuedElement << std::endl;
    }



    return 0;
}