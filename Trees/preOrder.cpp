// Preorder Traversal of a Binary Tree

#include <iostream>
#include <vector>
using namespace std;

class TreeNode {
public:
    int val;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int x) {
        val = x;
        left = right = nullptr;
    }
};

void preOrder(vector<int>& vp, TreeNode* node) {
    if (node == nullptr)
        return;

    vp.push_back(node->val);
    preOrder(vp, node->left);
    preOrder(vp, node->right);
}

vector<int> preorderTraversal(TreeNode* root) {
    vector<int> res;
    preOrder(res, root);
    return res;
}

int main() {
    //        1
    //       / \
    //      2   3
    //     / \
    //    4   5

    TreeNode* root = new TreeNode(1);

    root->left = new TreeNode(2);
    root->right = new TreeNode(3);

    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);

    vector<int> ans = preorderTraversal(root);

    for (int x : ans) {
        cout << x << " ";
    }

    return 0;
}