// Program to implement tree data structure

#include <iostream>
#include <vector>
using namespace std;

class Node {
public:
    int data;
    vector<Node*> children;

    Node(int x) {
        data = x;
    }
};

// Function to add child to the node
void addChild(Node *parent, Node *child) {
    parent->children.push_back(child);
}

// Function to print children of each node
void printParent(Node *node, Node *parent) {
    if (parent == nullptr)
        cout << node->data << " -> NULL" << endl;
    else
        cout << node->data << " -> " << parent->data << endl;

    for (auto child : node->children)
        printParent(child,node);
}

// Function to print children of each node
void printChildren(Node* node) {
    cout << node->data << " -> ";
    for(auto child : node->children) {
        cout << child->data << " "; 
    }
    cout << endl;

    for (auto child : node->children)
        printChildren(child);
}

// Function to print leaf nodes
void printLeafNodes(Node* node) {
    if(node->children.empty()) {
        cout << node->data << " ";
        return;
    }
    for (auto child : node->children)
        printLeafNodes(child);
}

// Function to print degrees of each node 
void printDegrees(Node* node) {
    cout << node->data << " -> " << node->children.size() << endl;

    for(auto child : node->children) {
        printDegrees(child);
    }
}

int main() {
    Node* root = new Node(1); 
    Node* n2 = new Node(2); 
    Node* n3 = new Node(3); 
    Node* n4 = new Node(4); 
    Node* n5 = new Node(5); 

    addChild(root,n2);
    addChild(root,n3);
    addChild(n2,n4);
    addChild(n2,n5);

    cout << "Parents of each node: " << endl;
    printParent(root, nullptr);

    cout << "Children of each node: " << endl;
    printChildren(root);

    cout << "Leaf nodes: " << endl;
    printLeafNodes(root);
    cout << endl;

    cout << "Degrees of nodes:" << endl;
    printDegrees(root);

    return 0;
}