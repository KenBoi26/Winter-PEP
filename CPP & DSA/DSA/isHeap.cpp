#include<bits/stdc++.h>
using namespace std;

class Node {
   public:
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};

int countNodes(Node* root){
    if(root == nullptr) return 0;
    
    return 1 + countNodes(root->left) + countNodes(root->right);
}

bool CBT(Node* root, int index, int count){
    if(!root) return true;
    
    if(index >= count) return false;
    
    bool right = CBT(root->left, 2*index + 1, count);
    bool left = CBT(root->right, 2*index + 2, count);
    
    return left && right;
}

bool maxHeap(Node* root){
    if(root->left == nullptr && root->right == nullptr) return true;
    
    if(root->right == nullptr) return root->data > root->left->data;
    
    if(root->left == nullptr) return root->data > root->right->data;
    
    bool left = maxHeap(root->left);
    bool right = maxHeap(root->right);
    return left && right && (root->data > root->left->data && root->data > root->right->data);
}

bool isHeap(Node* root) {
    // code here
    int count = countNodes(root);
    
    return CBT(root, 0, count) && maxHeap(root);
}

int main(){


    return 0;
}