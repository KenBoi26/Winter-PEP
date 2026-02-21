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


vector<vector<int>> levelOrder(TreeNode* root) {
    vector<vector<int>> result;
    queue<TreeNode*> q;

    if(root == nullptr) return result;

    q.push(root);

    while(!q.empty()){
        int size = q.size();
        vector<int> temp;

        for(int i=0; i<size;i++){
            TreeNode* frontNode = q.front();
            
            temp.push_back(frontNode->val);
            q.pop();

            if(frontNode->left) q.push(frontNode->left);
            if(frontNode->right) q.push(frontNode->right);
        }

        result.push_back(temp);
    }

    return result;
}

void levelOrderWithNull(TreeNode* root) {
    vector<vector<int>> result;
    queue<TreeNode*> q;

    if(root == nullptr) return;

    q.push(root);
    q.push(nullptr);

    while(!q.empty()){
        
        TreeNode* frontNode = q.front();

        if(frontNode){
            cout << frontNode->val << " ";

            if(frontNode->left) q.push(frontNode->left);
            if(frontNode->right) q.push(frontNode->right);
        }else if(!q.empty()){
            q.push(nullptr);
        }
    }
}


int main(){


    return 0;
}