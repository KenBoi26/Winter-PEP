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

vector<int> topView(TreeNode *root) {
    vector<int> result;
    if(!root) return result;
    map<int, int> mp;
    queue<pair<TreeNode*, int>> q;
    q.push(make_pair(root,0));
    while(!q.empty()){
        auto frontPair = q.front();
        q.pop();
        if(mp.find(frontPair.second) == mp.end()){
            mp[frontPair.second] = frontPair.first->val;
        }
        if(frontPair.first->left) q.push({frontPair.first->left, frontPair.second-1});
        if(frontPair.first->right) q.push({frontPair.first->right, frontPair.second+1});
    }
    for(auto &i: mp) result.push_back(i.second);
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

vector<int> topView(Node *root) {
    // code here
    vector<int> result;
    
    if(!root) return result;
    
    map<int, int> mp;
    queue<pair<Node*, int>> q;
    
    q.push(make_pair(root,0));
    
    while(!q.empty()){
        pair<Node*,int> frontPair = q.front();
        q.pop();
        if(mp.find(frontPair.second) == mp.end()){
            mp[frontPair.second] = frontPair.first->data;
        }
        if(frontPair.first->left) q.push({frontPair.first->left,frontPair.second-1});
        if(frontPair.first->right) q.push({frontPair.first->right, frontPair.second+1});
        
    }
    
    for(auto i:mp){
        result.push_back(i.second);
    }
    
    return result;
}


int main(){


    return 0;
}