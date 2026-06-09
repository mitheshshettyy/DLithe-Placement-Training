// Program to implement tree data structure

#include <iostream>
#include <vector>
using namespace std;

// Tree node structure
class TreeNode {
public:
    int data;
    vector<TreeNode*> children;

    TreeNode(int value) {
        data = value;
    }
};

// Function to add a child to a tree node
void addChild(TreeNode* parent, TreeNode* child) {
    parent->children.push_back(child);
}

// Function to print the tree in pre-order traversal
void preOrderTraversal(TreeNode* node) {
    if (node == nullptr) {
        return;
    }
    cout << node->data << " ";
    for (TreeNode* child : node->children) {
        preOrderTraversal(child);
    }
}

int main() {
    // Create root node
    TreeNode* root = new TreeNode(1);

    // Create child nodes
    TreeNode* child1 = new TreeNode(2);
    TreeNode* child2 = new TreeNode(3);
    TreeNode* child3 = new TreeNode(4);
    TreeNode* child4 = new TreeNode(5);

    // Build the tree
    addChild(root, child1);
    addChild(root, child2);
    addChild(child1, child3);
    addChild(child1, child4);

    // Print the tree in pre-order traversal
    cout << "Pre-order Traversal: ";
    preOrderTraversal(root);
    cout << endl;

    // Clean up memory (delete nodes)
    delete root;
    delete child1;
    delete child2;
    delete child3;
    delete child4;

    return 0;
}