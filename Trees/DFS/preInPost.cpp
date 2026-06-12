// Program to implement preorder, inorder and postorder traversal in single traversal for a tree

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

void preInPostTraversal(TreeNode* root) {
    if (root == nullptr)
        return;

    vector<int> pre, in, post;

    stack<pair<TreeNode*, int>> st;
    st.push({root, 1});

    while (!st.empty()) {
        auto it = st.top();
        st.pop();

        // Preorder
        if (it.second == 1) {
            pre.push_back(it.first->val);

            it.second++;
            st.push(it);

            if (it.first->left != nullptr)
                st.push({it.first->left, 1});
        }

        // Inorder
        else if (it.second == 2) {
            in.push_back(it.first->val);

            it.second++;
            st.push(it);

            if (it.first->right != nullptr)
                st.push({it.first->right, 1});
        }

        // Postorder
        else {
            post.push_back(it.first->val);
        }
    }

    cout << "Preorder: ";
    for (int x : pre)
        cout << x << " ";
    cout << endl;

    cout << "Inorder: ";
    for (int x : in)
        cout << x << " ";
    cout << endl;

    cout << "Postorder: ";
    for (int x : post)
        cout << x << " ";
    cout << endl;
}

int main() {
    /*
             1
           /   \
          2     3
         / \   / \
        4   5 6   7
    */

    TreeNode* root = new TreeNode(1);

    root->left = new TreeNode(2);
    root->right = new TreeNode(3);

    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);

    root->right->left = new TreeNode(6);
    root->right->right = new TreeNode(7);

    preInPostTraversal(root);

    return 0;
}