#include<bits/stdc++.h>
using namespace std;

vector<int> bfs(vector<vector<int>> &adj) {
    // code here
    queue<int> q;
    vector<bool> visited(adj.size(), false);
    visited[0] = true;
    
    q.push(0);
    vector<int> result;
    
    while(!q.empty()){
        int index = q.front();
        q.pop();
        result.push_back(index);
        
        for(auto j:adj[index]){
            if(!visited[j]){
                q.push(j);
                visited[j] = true;
            }
        }
    }
    
    return result;
}

int main(){


    return 0;
}