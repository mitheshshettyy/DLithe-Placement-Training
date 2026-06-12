// Program to implement iterative preorder traversal for the tree

#include <iostream>
#include <vector>
#include <stack>
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

vector<int> preorderTraversal(TreeNode* root) {
    vector<int> preorder;

    if (root == nullptr)
        return preorder;

    stack<TreeNode*> st;
    st.push(root);

    while (!st.empty()) {
        root = st.top();
        st.pop();

        preorder.push_back(root->val);

        if (root->right != nullptr)
            st.push(root->right);

        if (root->left != nullptr)
            st.push(root->left);
    }

    return preorder;
}

int main() {
    /*
            1
           / \
          2   3
         / \
        4   5
    */

    TreeNode* root = new TreeNode(1);

    root->left = new TreeNode(2);
    root->right = new TreeNode(3);

    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);

    vector<int> result = preorderTraversal(root);

    cout << "Preorder Traversal: ";
    for (int x : result) {
        cout << x << " ";
    }

    return 0;
}