#include<bits/stdc++.h>
using namespace std;


int main(){

    int n; // number of vertices
    int m ; // number of edges

    cout << "Enter the number of vertices: \n";
    cin >> n;

    cout << "Enter the number of edges: \n";
    cin >> m;

    map<int, list<pair<int,int>>> adjList;

    for(int i=0; i<m; i++){
        int u,v;
        cin >> u >> v;

        int weight;
        cin >> weight;

        // only becuase it's an undriected graph
        adjList[u].push_back({v,weight});
        adjList[v].push_back({u, weight});
    }

    cout << "Adjacency List: " << endl;

    for(auto i:adjList){
        cout << i.first << ": ";
        for(auto j:i.second){
            cout << "(" << j.first << ", " << j.second << ") ";
        }
        cout << endl;
    }

    return 0;
}