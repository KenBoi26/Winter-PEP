#include<bits/stdc++.h>
using namespace std;

void reverseQueue(queue<int> &q) {
    // code here
    stack<int> st;
    while(!q.empty()){
        st.push(q.front());
        q.pop();
    }
    while(!st.empty()){
        q.push(st.top());
        st.pop();
    }
    
}

// recursively

void reverseQueue(queue<int> &q) {
    // code here
    
    if(q.empty()){
        return;
    }
    
    int temp = q.front();
    q.pop();
    reverseQueue(q);
    q.push(temp);
    
}

int main(){


    return 0;
}