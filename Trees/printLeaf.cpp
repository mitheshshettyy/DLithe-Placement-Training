// Program to print all leaf nodes in a tree

//Structure of the tree used in this program:
//         1
//       /   \
//      2     3
//     / \
//    4   5

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

// Function to print all leaf nodes in the tree
void printLeafNodes(TreeNode* node) {
    if (node == nullptr) {
        return;
    }
    // If the node has no children, it's a leaf node
    if (node->children.empty()) {
        cout << node->data << " ";
    }
    // Recursively check for leaf nodes in the children
    for (TreeNode* child : node->children) {
        printLeafNodes(child);
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

    // Print all leaf nodes in the tree
    cout << "Leaf Nodes: ";
    printLeafNodes(root);
    cout << endl;

    // Clean up memory (delete nodes)
    delete root;
    delete child1;
    delete child2;
    delete child3;
    delete child4;

    return 0;
}