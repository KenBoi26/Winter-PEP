#include<bits/stdc++.h>
using namespace std;

bool isPossible(int N, int P, vector<pair<int, int> >& prerequisites) {
    // Code here
    vector<int> indegree(N, 0);
    vector<vector<int>> adj(N);
    
    for(int i=0; i<P; i++){
        indegree[prerequisites[i].first]++;
        adj[prerequisites[i].second].push_back(prerequisites[i].first);
    }
    
    queue<int> q;
    for(int i=0; i<N; i++){
        if(indegree[i] == 0) q.push(i);
    }
    
    int count = 0;
    
    while(!q.empty()){
        int top = q.front();
        q.pop();
        count++;
        
        for(int i : adj[top]){
            indegree[i]--;
            if(indegree[i] == 0) q.push(i);
        }
    }
    
    return N == count;
}

int main(){


    return 0;
}