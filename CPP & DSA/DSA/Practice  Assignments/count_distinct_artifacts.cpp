#include<bits/stdc++.h>
using namespace std;

int countDistinctArtifacts(vector<int>& ids) {
    // add your code here
    set<int> s;
    for(auto i:ids){
        s.insert(i);
    }

    return s.size();
}

int main(){


    return 0;
}