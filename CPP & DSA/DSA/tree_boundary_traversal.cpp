#include<bits/stdc++.h>
using namespace std;

class Node {
  public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};

void traverseLeft(Node* root, vector<int> &ans){
    if(!root || (!root->left && !root->right)) return;
    
    ans.push_back(root->data);
    
    if(root->left) traverseLeft(root->left, ans);
    else traverseLeft(root->right, ans);
}

void traverseRight(Node* root, vector<int> &ans){
    if(!root || (!root->left && !root->right)) return;
    
    if(root->right) traverseRight(root->right, ans);
    else traverseRight(root->left, ans);
    
    ans.push_back(root->data);
}

void traverseLeaf(Node* root, vector<int> &ans){
    if(!root) return;
    
    if(!root->left && !root->right){
        ans.push_back(root->data);
        return;
    }
    
    traverseLeaf(root->left, ans);
    traverseLeaf(root->right, ans);
    
    
}

vector<int> boundaryTraversal(Node *root) {
    // code here
    vector<int> result;
    
    if(!root) return result;
    
    result.push_back(root->data);
    
    traverseLeft(root->left, result);
    traverseLeaf(root->left, result);
    traverseLeaf(root->right, result);
    traverseRight(root->right, result);
    
    return result;
    
}


int main(){


    return 0;
}