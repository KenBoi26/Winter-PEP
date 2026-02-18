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

vector<int> leftView(TreeNode *root) {
    vector<int> result;
    queue<TreeNode*> q;
    if(!root) return result;
    q.push(root);
    while(!q.empty()){
        int size = q.size();
        int first;
        bool flag = true;
        for(int i=0; i<size; i++){
            TreeNode* frontNode = q.front();
            q.pop();
            if(frontNode->left) q.push(frontNode->left);
            if(frontNode->right) q.push(frontNode->right);
            if(flag){
                first = frontNode->val;
                flag = false;
            }
        }
        result.push_back(first);
    }
    return result;
}

int main(){
    return 0;
}
