#include<bits/stdc++.h>
using namespace std;


void helper(int node, vector<vector<int>> &adj, vector<bool> &visited, vector<int> &result){
    visited[node] = true;
    result.push_back(node);
    
    for(auto i:adj[node]){
        if(!visited[i]){
            helper(i, adj, visited, result);
        }
    }
}

vector<int> dfs(vector<vector<int>>& adj) {
    // Code here
    int n = adj.size();
    
    vector<bool> visited(n,false);
    vector<int> result;
    
    helper(0, adj, visited, result);
    return result;
}


int main(){


    return 0;
}