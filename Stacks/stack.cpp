// Stack implementation using C++ STL stack

#include <iostream>
#include <stack>
using namespace std;

int main() {
    stack<int> s;
    int choice, value;

    do {
        cout << "\n----- Stack Operations -----\n";
        cout << "1. Push\n";
        cout << "2. Pop\n";
        cout << "3. Peek (Top Element)\n";
        cout << "4. Display Stack\n";
        cout << "5. Check if Empty\n";
        cout << "6. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter value to push: ";
                cin >> value;
                s.push(value);
                cout << value << " inserted into stack.\n";
                break;

            case 2:
                if (s.empty()) {
                    cout << "Stack Underflow! Stack is empty.\n";
                } else {
                    cout << s.top() << " deleted from stack.\n";
                    s.pop();
                }
                break;

            case 3:
                if (s.empty()) {
                    cout << "Stack is empty.\n";
                } else {
                    cout << "Top element: " << s.top() << endl;
                }
                break;

            case 4:
                if (s.empty()) {
                    cout << "Stack is empty.\n";
                } else {
                    stack<int> temp = s;
                    cout << "Stack elements (Top to Bottom): ";
                    while (!temp.empty()) {
                        cout << temp.top() << " ";
                        temp.pop();
                    }
                    cout << endl;
                }
                break;

            case 5:
                if (s.empty()) {
                    cout << "Stack is empty.\n";
                } else {
                    cout << "Stack is not empty.\n";
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