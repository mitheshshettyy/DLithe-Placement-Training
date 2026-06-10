#include<iostream>
using namespace std;

class Node {
public:
    int data;
    Node *left, *right;

    Node(int val) {
        data=val;
        left=nullptr;
        right=nullptr;
    }
};

bool ifExists(Node* root, int key) {
    if (root == nullptr) 
        return false;

    if(root->data == key)
        return true;

    //recur on left subtree
    bool res1=ifExists(root->left, key);
    if(res1) return true;

    //recur on right subtree
    bool res2=ifExists(root->right, key);
    if(res2) return true;
}

int main() {
    // Binary tree  
    //          0
    //        /  \
    //       1    2
    //      / \   / \
    //     3   4 5   6
    //    /   / \
    //   7   8   9
    Node* root = new Node(0);
    root->left = new Node(1);
    root->left->left = new Node(3);
    root->left->left->left = new Node(7);
    root->left->right = new Node(4);
    root->left->right->left = new Node(8);
    root->left->right->right = new Node(9);
    root->right = new Node(2);
    root->right->left = new Node(5);
    root->right->right = new Node(6);

    int key = 4;

    if(ifExists(root, key)){
        cout << "Element found";
    } else {
        cout << "Element not found";
    } 

    return 0;
}