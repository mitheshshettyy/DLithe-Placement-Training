// C++ program to convert a linked list to a number

#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = nullptr;
    }
};

int linkedListToNumber(Node* head) {
    int number = 0;
    Node* current = head;

    while(current != nullptr) {
        number = number * 10 + current->data;
        current = current->next;
    }

    return number;
}

int main() {
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);

    int result = linkedListToNumber(head);
    cout << "The number represented by the linked list is: " << result << endl;

    // Clean up memory
    delete head->next->next;
    delete head->next;
    delete head;

    return 0;

}