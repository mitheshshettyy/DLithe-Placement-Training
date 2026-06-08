// Doubly Linked List implementation in C++
#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node* prev;

    Node(int val) {
        data = val;
        next = nullptr;
        prev = nullptr;
    }
};

class DoublyLinkedList {
private:
    Node* head;
    Node* tail;

public:
    DoublyLinkedList() {
        head = nullptr;
        tail = nullptr;
    }

    void insertFront(int val) {
        Node* newNode = new Node(val);

        if (head == nullptr) {
            head = tail = newNode;
            return;
        }

        newNode->next = head;
        head->prev = newNode;
        head = newNode;
    }

    void insertEnd(int val) {
        Node* newNode = new Node(val);

        if (head == nullptr) {
            head = tail = newNode;
            return;
        }

        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
    }

    void deleteFront() {
        if (head == nullptr) {
            cout << "List is empty\n";
            return;
        }

        Node* temp = head;

        if (head == tail) {
            head = tail = nullptr;
        } else {
            head = head->next;
            head->prev = nullptr;
        }

        delete temp;
    }

    void deleteEnd() {
        if (tail == nullptr) {
            cout << "List is empty\n";
            return;
        }

        Node* temp = tail;

        if (head == tail) {
            head = tail = nullptr;
        } else {
            tail = tail->prev;
            tail->next = nullptr;
        }

        delete temp;
    }

    void displayForward() {
        Node* curr = head;

        while (curr != nullptr) {
            cout << curr->data << " ";
            curr = curr->next;
        }

        cout << endl;
    }

    void displayBackward() {
        Node* curr = tail;

        while (curr != nullptr) {
            cout << curr->data << " ";
            curr = curr->prev;
        }

        cout << endl;
    }
};

int main() {
    DoublyLinkedList dll;
    int choice, val;

    do {
        cout << "\n1. Insert Front";
        cout << "\n2. Insert End";
        cout << "\n3. Delete Front";
        cout << "\n4. Delete End";
        cout << "\n5. Display Forward";
        cout << "\n6. Display Backward";
        cout << "\n0. Exit";
        cout << "\nEnter choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            cout << "Enter value: ";
            cin >> val;
            dll.insertFront(val);
            break;

        case 2:
            cout << "Enter value: ";
            cin >> val;
            dll.insertEnd(val);
            break;

        case 3:
            dll.deleteFront();
            break;

        case 4:
            dll.deleteEnd();
            break;

        case 5:
            dll.displayForward();
            break;

        case 6:
            dll.displayBackward();
            break;

        case 0:
            cout << "Exiting...\n";
            break;

        default:
            cout << "Invalid choice\n";
        }

    } while (choice != 0);

    return 0;
}