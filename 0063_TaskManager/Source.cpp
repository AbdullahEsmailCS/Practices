#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct Task {
    string description;
    bool completed;
};

void DisplayText(const string& text) {
    cout << text << endl;
}

string ReadString(const string& message) {
    DisplayText(message);
    string input;
    getline(cin, input);
    return input;
}

void AddTask(vector<Task>& tasks, const string& description) {
    Task newTask;
    newTask.description = description;
    newTask.completed = false;
    tasks.push_back(newTask);
    DisplayText("Task added successfully.");
}

void MarkTaskAsCompleted(vector<Task>& tasks, int index) {
    if (index >= 0 && index < tasks.size()) {
        tasks[index].completed = true;
        DisplayText("Task marked as completed.");
    }
    else {
        DisplayText("Invalid task index.");
    }
}

void PrintTasks(const vector<Task>& tasks) {
    if (tasks.empty()) {
        DisplayText("No tasks found.");
    }
    else {
        DisplayText("To-Do List:");
        for (size_t i = 0; i < tasks.size(); i++) {
            const Task& task = tasks[i];
            cout << "[" << (task.completed ? "X" : " ") << "] " << i + 1 << ". " << task.description << endl;
        }
    }
}

int main() {
    vector<Task> tasks;
    
    while (true) {
        DisplayText("Select an option:");
        DisplayText("1. Add a task");
        DisplayText("2. Mark a task as completed");
        DisplayText("3. Print tasks");
        DisplayText("4. Exit");

        string option = ReadString("Enter your choice: ");

        if (option == "1") {
            string description = ReadString("Enter task description: ");
            AddTask(tasks, description);
        }
        else if (option == "2") {
            int taskIndex = stoi(ReadString("Enter task index: ")) - 1;
            MarkTaskAsCompleted(tasks, taskIndex);
        }
        else if (option == "3") {
            PrintTasks(tasks);
        }
        else if (option == "4") {
            break;
        }
        else {
            DisplayText("Invalid option. Please try again.");
        }

        DisplayText("");
    }

    return 0;
}