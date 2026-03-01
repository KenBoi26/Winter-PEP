#include<bits/stdc++.h>
using namespace std;

bool dfs(int node, vector<vector<int>>&adj, vector<bool> &visited, vector<bool> &recorded){
    visited[node] = true;
    recorded[node] = true;
    
    for(int i:adj[node]){
        if(!visited[i]){
            if(dfs(i, adj, visited, recorded)) return true;
        }
        else if(recorded[i]) return true;
    }
    recorded[node]= false;
    return false;
}

bool isCyclic(int V, vector<vector<int>> &edges) {
    // code here
    vector<vector<int>> adj(V);
    for(auto i:edges){
        int u = i[0];
        int v = i[1];
        adj[u].push_back(v);
    }
    
    vector<bool> visited(V, false);
    vector<bool> recorded(V,false);
    
    for(int i=0; i<V; i++){
        if(!visited[i]){
            if(dfs(i, adj, visited, recorded)) return true;
        }
    }
    
    return false;
}

int main(){


    return 0;
}