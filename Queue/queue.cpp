// Program to perform basic operations on a queue data structure

#include <iostream>
#include <queue>
using namespace std;

int main() {
    queue<int> q;
    int choice, value;

    do {
        cout << "\n----- Queue Operations -----\n";
        cout << "1. Enqueue\n";
        cout << "2. Dequeue\n";
        cout << "3. Peek (Front Element)\n";
        cout << "4. Display Queue\n";
        cout << "5. Check if Empty\n";
        cout << "6. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter value to enqueue: ";
                cin >> value;
                q.push(value);
                cout << value << " inserted into queue.\n";
                break;

            case 2:
                if (q.empty()) {
                    cout << "Queue Underflow! Queue is empty.\n";
                } else {
                    cout << q.front() << " deleted from queue.\n";
                    q.pop();
                }
                break;

            case 3:
                if (q.empty()) {
                    cout << "Queue is empty.\n";
                } else {
                    cout << "Front element: " << q.front() << endl;
                }
                break;

            case 4:
                if (q.empty()) {
                    cout << "Queue is empty.\n";
                } else {
                    queue<int> temp = q;
                    cout << "Queue elements: ";
                    while (!temp.empty()) {
                        cout << temp.front() << " ";
                        temp.pop();
                    }
                    cout << endl;
                }
                break;

            case 5:
                if (q.empty()) {
                    cout << "Queue is empty.\n";
                } else {
                    cout << "Queue is not empty.\n";
                }
                break;

            case 6:
                cout << "Exiting program...\n";
                break;

            default:
                cout << "Invalid choice!\n";
        }

    } while (choice != 6);

    return 0;
}