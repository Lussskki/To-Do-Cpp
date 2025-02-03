#include <iostream>
#include <vector>

using namespace std;

// Function to display tasks
void showTasks(const vector<string>& tasks) {
    if (tasks.empty()) {
        cout << "No tasks available.\n";
        return;
    }

    cout << "Your To-Do List:\n";
    for (size_t i = 0; i < tasks.size(); i++) {
        cout << i + 1 << ". " << tasks[i] << endl;
    }
}

// Function to add a task
void addTask(vector<string>& tasks) { 
    cout << "Enter Task: ";
    string task;
    cin.ignore();
    getline(cin, task);
    tasks.push_back(task); 
    cout << "Task added!\n"; 
}

int main() {
    vector<string> tasks;
    int choice;

    cout << "\n1. Add Task\nChoose an option: ";
    cin >> choice;

    switch (choice) {
        case 1: addTask(tasks); break; 
        default: cout << "Invalid option!\n";
    }

    return 0;
}
