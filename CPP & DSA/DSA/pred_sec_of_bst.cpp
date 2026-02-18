#include<bits/stdc++.h>
using namespace std;

class Node {
   public:
    int data;
    Node *left;
    Node *right;

    Node(int x){
        data = x;
        left = NULL;
        right = NULL;
    }
};

vector<Node*> find(Node* root, int key){
  Node* pred = nullptr;
  Node* suc = nullptr;
  Node* node = root;
  
  while(node){
      if(node->data < key){
          pred = node;
          node = node->right;
      }else if(node->data > key){
          suc = node;
          node = node->left;
      }else{
          break;
      }
  }
  
  if(!node) return {pred, suc};
  
  if(node->left){
      Node* temp = node->left;
      while(temp->right){
          temp = temp->right;
      }
      pred = temp;
  }
  
  if(node->right){
      Node* temp = node->right;
      while(temp->left){
          temp = temp->left;
      }
      suc = temp;
  }
  
  
  return {pred,suc};
}

vector<Node*> findPreSuc(Node* root, int key) {
  // code here
  return find(root, key);
  
}


int main(){


    return 0;
}