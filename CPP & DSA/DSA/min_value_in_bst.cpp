#include<bits/stdc++.h>
using namespace std;

class Node {
  public:
    int data;
    Node* left;
    Node* right;

    Node(int x) {
        data = x;
        left = nullptr;
        right = nullptr;
    }
};

int minValue(Node* root) {
    // code here
    if(root->left == nullptr) return root->data;
    return minValue(root->left);
}

int main(){


    return 0;
}