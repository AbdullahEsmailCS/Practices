#include <iostream>
using namespace std;

const int BUFFER_SIZE = 512; // Size of the disk buffer

class DiskBuffer {
private:
    char buffer[BUFFER_SIZE];

public:
    // Initialize the buffer
    DiskBuffer() {
        for (int i = 0; i < BUFFER_SIZE; i++) {
            buffer[i] = '\0';
        }
    }

    // Read data from the buffer
    void read() {
        cout << "Reading data from the disk buffer: " << buffer << endl;
    }

    // Write data to the buffer
    void write(const char* data) {
        for (int i = 0; i < BUFFER_SIZE; i++) {
            buffer[i] = data[i];
        }
        cout << "Data written to the disk buffer." << endl;
    }
};

int main() {
    DiskBuffer diskBuffer;

    // Write data to the buffer
    const char* data = "Hello, Disk Buffer!";
    diskBuffer.write(data);

    // Read data from the buffer
    diskBuffer.read();

    return 0;
}