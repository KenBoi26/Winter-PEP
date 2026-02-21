#include<bits/stdc++.h>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

int sumOfLeftLeaves(TreeNode* root, bool flag = false) {
    if(root == nullptr) return 0;
    if(flag && root->left == nullptr && root->right == nullptr) return root->val;
    if(!flag && root->left == nullptr && root->right == nullptr) return 0;

    return sumOfLeftLeaves(root->left, true) + sumOfLeftLeaves(root->right, false);
}


int main(){


    return 0;
}