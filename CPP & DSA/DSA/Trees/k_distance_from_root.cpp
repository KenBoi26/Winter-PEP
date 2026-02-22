#include <bits/stdc++.h>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

vector<int> Kdistance(TreeNode *root, int k) {
    vector<int> result;
    if(!root) return result;
    queue<TreeNode*> q;
    q.push(root);
    int count = 0;
    while(!q.empty()){
        int size = q.size();
        for(int i=0; i<size; i++){
            TreeNode* frontNode = q.front();
            q.pop();
            if(count == k) result.push_back(frontNode->val);
            if(frontNode->left) q.push(frontNode->left);
            if(frontNode->right) q.push(frontNode->right);
        }
        if(count == k) break;
        count++;
    }
    return result;
}

int main(){
    return 0;
}
#include<bits/stdc++.h>
using namespace std;

class Node {
  public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = nullptr;
        right = nullptr;
    }
};

vector<int> Kdistance(Node *root, int k) {
    queue<Node*> q;
    
    q.push(root);
        
    vector<int> result;
    int count = 0;
    
    while(!q.empty()){
        int size = q.size();
        
        for(int i=0; i<size; i++){
            Node* frontNode = q.front();
            if(count == k){
                result.push_back(frontNode->data);
            }
            q.pop();
            
            if(frontNode->left) q.push(frontNode->left);
            if(frontNode->right) q.push(frontNode->right);
        }
        
        count++;
        
    }
    
    return result;
}


int main(){


    return 0;
}