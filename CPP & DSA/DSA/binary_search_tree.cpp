#include<bits/stdc++.h>
using namespace std;

/*
- Special type of Binary Tree
- Every node has at most 2 children
- all values on the left of every node will be smaller than the node
- all values on the right of every node will be larger than the node

- Inorder traversal of a BST is always sorted.
*/

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

TreeNode* searchBST(TreeNode* root, int val) {
    if(root == nullptr || root->val == val){
        return root;
    }

    if(root->val < val){
        return searchBST(root->right, val);
    }else{
        return searchBST(root->left, val);
    }
    
}

int main(){


    return 0;
}