#include<bits/stdc++.h>
using namespace std;

/*
**Terms:**

- Root → the node that starts everything i.e. the topmost node.
- Leaf → a node without any children
- Internal Node → if a node has a child.
- Siblings → 2 nodes that have the same parent.
- Cousins → when their parents are siblings OR when they have the same grandparent.
- Path → the way to reach from one node to another.
- Length of a Path → number of nodes - 1

*/

class Node{
    public:
        int data;
        Node* right;
        Node* left;
    
    Node(int val){
        data = val;
        right = nullptr;
        left = nullptr;
    }

};

// Inorder traveral
void inorder(Node* root){
    if(root == nullptr) return;

    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

// preorder traversal
void preorder(Node* root){
    if(root == nullptr) return;

    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}

// postorder traversal
void postorder(Node* root){
    if(root == nullptr) return;

    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}

int main(){
    Node* root = new Node(1);

    root->left = new Node(2);
    root->right = new Node(3);

    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);

    cout << "Inorder traversal: ";
    inorder(root);
    cout << endl;

    cout << "Preorder traversal: ";
    preorder(root);
    cout << endl;

    cout << "Postorder traversal: ";
    postorder(root);

    return 0;
}