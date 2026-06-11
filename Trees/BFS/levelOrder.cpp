// Given a binary tree, return the level order traversal of its nodes values.

#include <iostream>
#include <vector>
#include <queue>
using namespace std;

class TreeNode {
public:
    int val;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int x) {
        val = x;
        left = nullptr;
        right = nullptr;
    }
};

vector<vector<int>> levelOrder(TreeNode* root) {
    vector<vector<int>> ans;

    if (root == nullptr)
        return ans;

    queue<TreeNode*> q;
    q.push(root);

    while (!q.empty()) {
        int size = q.size();
        vector<int> level;

        for (int i = 0; i < size; i++) {
            TreeNode* node = q.front();
            q.pop();

            level.push_back(node->val);

            if (node->left != nullptr)
                q.push(node->left);

            if (node->right != nullptr)
                q.push(node->right);
        }

        ans.push_back(level);
    }

    return ans;
}

int main() {
    //         1
    //       /   \
    //      2     3
    //     / \   / \
    //    4   5 6   7

    TreeNode* root = new TreeNode(1);

    root->left = new TreeNode(2);
    root->right = new TreeNode(3);

    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);

    root->right->left = new TreeNode(6);
    root->right->right = new TreeNode(7);

    vector<vector<int>> ans = levelOrder(root);

    for (auto level : ans) {
        for (int x : level) {
            cout << x << " ";
        }
        cout << endl;
    }

    return 0;
}