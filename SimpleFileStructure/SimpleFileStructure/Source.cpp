#include <iostream>
#include <string>
#include <vector>
using namespace std;

// File structure
struct File {
    string name;
    string content;

    File(const string& n, const string& c) : name(n), content(c) {}
};

// Directory structure
struct Directory {
    string name;
    vector<File> files;
    vector<Directory> subdirectories;

    Directory(const string& n) : name(n) {}
};

// Function to display the directory structure recursively
void displayDirectory(const Directory& dir, int level = 0) {
    // Display the current directory name
    for (int i = 0; i < level; i++) {
        cout << "  ";
    }
    cout << "- " << dir.name << endl;

    // Display the files in the current directory
    for (const File& file : dir.files) {
        for (int i = 0; i < level + 1; i++) {
            cout << "  ";
        }
        cout << "  " << file.name << endl;
    }

    // Recursively display subdirectories
    for (const Directory& subdirectory : dir.subdirectories) {
        displayDirectory(subdirectory, level + 1);
    }
}

int main() {
    // Create the root directory
    Directory root("root");

    // Create some files
    File file1("file1.txt", "This is the content of file1.");
    File file2("file2.txt", "This is the content of file2.");

    // Add files to the root directory
    root.files.push_back(file1);
    root.files.push_back(file2);

    // Create a subdirectory
    Directory subdirectory("subdirectory");

    // Create a file within the subdirectory
    File file3("file3.txt", "This is the content of file3.");

    // Add the file to the subdirectory
    subdirectory.files.push_back(file3);

    // Add the subdirectory to the root directory
    root.subdirectories.push_back(subdirectory);

    // Display the directory structure
    displayDirectory(root);

    return 0;
}