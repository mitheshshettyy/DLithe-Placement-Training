// Linked List Implementation in C++

#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = nullptr;
    }
};

Node* createLL() {
    int n;
    cout << "Enter number of nodes: ";
    cin >> n;

    Node *head = nullptr, *tail = nullptr;

    for (int i = 0; i < n; i++) {
        int val;
        cout << "Enter data: ";
        cin >> val;

        Node* newNode = new Node(val);

        if (head == nullptr) {
            head = tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
    }

    return head;
}

void traverse(Node* head) {
    if (head == nullptr) {
        cout << "List is empty\n";
        return;
    }

    Node* temp = head;

    while (temp != nullptr) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }

    cout << "NULL\n";
}

void deleteLL(Node*& head) {
    Node* temp;

    while (head != nullptr) {
        temp = head;
        head = head->next;
        delete temp;
    }

    cout << "Linked List Deleted Successfully\n";
}

int main() {
    Node* head = nullptr;

    int choice;

    do {
        cout << "\n1. Create Linked List\n";
        cout << "2. Traverse Linked List\n";
        cout << "3. Delete Linked List\n";
        cout << "4. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                head = createLL();
                break;

            case 2:
                traverse(head);
                break;

            case 3:
                deleteLL(head);
                break;

            case 4:
                cout << "Exiting...\n";
                break;

            default:
                cout << "Invalid Choice\n";
        }

    } while (choice != 4);

    return 0;
}