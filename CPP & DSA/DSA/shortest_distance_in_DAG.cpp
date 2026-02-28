#include<bits/stdc++.h>
using namespace std;

void dfs(int node, vector<vector<pair<int,int>>> &adj, vector<int> &visited, stack<int> &st){
    visited[node] = 1;

    for(auto &i : adj[node]){
        int neighbour = i.first;

        if(!visited[neighbour]) dfs(neighbour, adj, visited, st);
    }

    st.push(node);
}

vector<int> shortestPathInDAG(int n, int m, vector<vector<int>> &edges)
{
    // Write your code here
    vector<vector<pair<int,int>>> adj(n);

    for(int i=0; i<m; i++){
        int u = edges[i][0];
        int v = edges[i][1];
        int w = edges[i][2];

        adj[u].push_back({v,w});
    }

    vector<int> visited(n,0);
    stack<int> st;

    for(int i=0; i<n; i++){
        if(!visited[i]){
            dfs(i, adj, visited, st);
        }
    }

    vector<int> distance(n, INT_MAX);
    distance[0] = 0;

    while(!st.empty()){
        int node = st.top();
        st.pop();

        if(distance[node] != INT_MAX){
            for(auto &edge : adj[node]){
            int neighbour = edge.first;
            int weight = edge.second;

            if(distance[node] + weight < distance[neighbour]){
                distance[neighbour] = distance[node] + weight;
            }
        }
        }
        
    }

    for(int i=0; i<n; i++){
        if(distance[i] == INT_MAX) distance[i] = -1;
    }

    return distance;


}


int main(){


    return 0;
}