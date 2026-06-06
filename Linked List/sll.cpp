// Singly Linked List implementation in C++

#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = NULL;
    }
};

class LinkedList {
private:
    Node* head;

public:
    LinkedList() {
        head = NULL;
    }

    // Insert at beginning
    void insertAtBeginning(int val) {
        Node* newNode = new Node(val);
        newNode->next = head;
        head = newNode;
    }

    // Insert at end
    void insertAtEnd(int val) {
        Node* newNode = new Node(val);

        if (head == NULL) {
            head = newNode;
            return;
        }

        Node* temp = head;
        while (temp->next != NULL)
            temp = temp->next;

        temp->next = newNode;
    }

    // Insert at position (1-based indexing)
    void insertAtPosition(int pos, int val) {
        if (pos == 1) {
            insertAtBeginning(val);
            return;
        }

        Node* newNode = new Node(val);
        Node* temp = head;

        for (int i = 1; i < pos - 1 && temp != NULL; i++)
            temp = temp->next;

        if (temp == NULL) {
            cout << "Invalid Position\n";
            return;
        }

        newNode->next = temp->next;
        temp->next = newNode;
    }

    // Delete from beginning
    void deleteBeginning() {
        if (head == NULL) return;

        Node* temp = head;
        head = head->next;
        delete temp;
    }

    // Delete from end
    void deleteEnd() {
        if (head == NULL) return;

        if (head->next == NULL) {
            delete head;
            head = NULL;
            return;
        }

        Node* temp = head;

        while (temp->next->next != NULL)
            temp = temp->next;

        delete temp->next;
        temp->next = NULL;
    }

    // Delete by value
    void deleteValue(int val) {
        if (head == NULL) return;

        if (head->data == val) {
            deleteBeginning();
            return;
        }

        Node* temp = head;

        while (temp->next != NULL && temp->next->data != val)
            temp = temp->next;

        if (temp->next == NULL) {
            cout << "Value not found\n";
            return;
        }

        Node* delNode = temp->next;
        temp->next = temp->next->next;
        delete delNode;
    }

    // Search
    bool search(int key) {
        Node* temp = head;

        while (temp != NULL) {
            if (temp->data == key)
                return true;
            temp = temp->next;
        }

        return false;
    }

    // Count nodes
    int countNodes() {
        int count = 0;
        Node* temp = head;

        while (temp != NULL) {
            count++;
            temp = temp->next;
        }

        return count;
    }

    // Display
    void display() {
        Node* temp = head;

        while (temp != NULL) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }

        cout << "NULL\n";
    }
};

int main() {
    LinkedList ll;
    int choice, value, pos;

    do {
        cout << "\n===== LINKED LIST MENU =====\n";
        cout << "1. Insert at Beginning\n";
        cout << "2. Insert at End\n";
        cout << "3. Insert at Position\n";
        cout << "4. Delete from Beginning\n";
        cout << "5. Delete from End\n";
        cout << "6. Delete by Value\n";
        cout << "7. Search Element\n";
        cout << "8. Count Nodes\n";
        cout << "9. Display List\n";
        cout << "0. Exit\n";

        cout << "\nEnter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter value: ";
                cin >> value;
                ll.insertAtBeginning(value);
                break;

            case 2:
                cout << "Enter value: ";
                cin >> value;
                ll.insertAtEnd(value);
                break;

            case 3:
                cout << "Enter position: ";
                cin >> pos;
                cout << "Enter value: ";
                cin >> value;
                ll.insertAtPosition(pos, value);
                break;

            case 4:
                ll.deleteBeginning();
                cout << "Deleted from beginning.\n";
                break;

            case 5:
                ll.deleteEnd();
                cout << "Deleted from end.\n";
                break;

            case 6:
                cout << "Enter value to delete: ";
                cin >> value;
                ll.deleteValue(value);
                break;

            case 7:
                cout << "Enter value to search: ";
                cin >> value;

                if (ll.search(value))
                    cout << "Element Found\n";
                else
                    cout << "Element Not Found\n";
                break;

            case 8:
                cout << "Total Nodes = " << ll.countNodes() << endl;
                break;

            case 9:
                cout << "Linked List: ";
                ll.display();
                break;

            case 0:
                cout << "Exiting...\n";
                break;

            default:
                cout << "Invalid Choice!\n";
        }

    } while (choice != 0);

    return 0;
}