#include<bits/stdc++.h>
using namespace std;

bool bfs(int start, vector<vector<int>> &adj, vector<bool> &visited){
    queue<int> q;
    unordered_map<int, int> parent;
    
    visited[start] = true;
    q.push(start);
    parent[start] = -1;
    
    while(!q.empty()){
        int node = q.front();
        q.pop();
        
        for(int i:adj[node]){
            if(!visited[i]){
                visited[i] = true;
                q.push(i);
                parent[i] = node; // set parent of neighbour
            }else if(parent[node] != i) return true;
        }
    }
    
    return false;
}

bool isCycle(int V, vector<vector<int>>& edges) {
    // Code here
    vector<vector<int>> adj(V);
    for(auto i:edges){
        int u = i[0];
        int v = i[1];
        
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    
    vector<bool> visited(V, false);
    for(int i=0; i<V; i++){
        if(!visited[i]){
            if(bfs(i, adj, visited)) return true;
        }
    }
    
    return false;
    
}

int main(){


    return 0;
}