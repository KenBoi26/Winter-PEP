#include<bits/stdc++.h>
using namespace std;

vector<int> topoSort(vector<vector<int>>& adj) {
    int n = adj.size();
    vector<int> indegree(n,0);
    queue<int> q;

    for(int i=0; i<n; i++){
        for(int j:adj[i]){
            indegree[j]++;
        }
    }

    for(int i=0; i<n; i++){
        if(indegree[i] == 0) q.push(i);
    }

    vector<int> result;

    while(!q.empty()){
        int top = q.front();
        q.pop();
        result.push_back(top);

        for(int i : adj[top]){
            indegree[i]--;
            if(indegree[i] == 0) q.push(i);
        }
    }

    return result;
}

int main(){


    return 0;
}