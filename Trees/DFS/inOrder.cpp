// Inorder Traversal of a Binary Tree

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

void inOrder(vector<int>& vp, TreeNode* node) {
        if (node == nullptr)
            return;

        inOrder(vp, node->left);
        vp.push_back(node->val);
        inOrder(vp, node->right);
    }

    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> res;
        inOrder(res, root);
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

    vector<int> ans = inorderTraversal(root);

    for (int x : ans) {
        cout << x << " ";
    }

    return 0;
}