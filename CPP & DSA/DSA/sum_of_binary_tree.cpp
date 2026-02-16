#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int x){
        data = x;
        left = right = NULL;
    }
};


int sumBT(Node* root) {
    // code here
    if(root == nullptr) return 0;
    
    return root->data + sumBT(root->left) + sumBT(root->right);
}


int main(){


    return 0;
}