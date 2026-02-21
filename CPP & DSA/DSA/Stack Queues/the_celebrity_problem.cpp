#include<bits/stdc++.h>
using namespace std;

int celebrity(vector<vector<int>>& mat) {
    // code here
    int n = mat.size();
    stack<int> st;
    
    // first we push all the people into the stack.
    for(int i=0; i<n; i++){
        st.push(i);
    }
    
    while(st.size() > 1){
        int person1 = st.top();
        st.pop();
        int person2 = st.top();
        st.pop();
        
        if(mat[person1][person2] == 1){
            st.push(person2);
        }else{
            st.push(person1);
        }
    }
    
    for(int i=0; i<n; i++){
        if(i == st.top()){
            continue;
        }
        if(mat[st.top()][i] == 1) return -1;
        if(mat[i][st.top()] == 0) return -1;
    }
    
    return st.top();
}

int main(){


    return 0;
}