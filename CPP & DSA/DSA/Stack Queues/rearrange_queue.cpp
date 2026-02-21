#include<bits/stdc++.h>
using namespace std;

// my method using 2 queues
class Solution {
  public:
    void rearrangeQueue(queue<int> &q) {
        // code here
        queue<int> q1;
        queue<int> q2;
        int n = q.size()/2;
        bool flag = true;
        
        while(q.size() > n){
            q1.push(q.front());
            q.pop();
        }
        
        while(!q1.empty() || !q.empty()){
            if(flag){
                q2.push(q1.front());
                q1.pop();
            }else{
                q2.push(q.front());
                q.pop();
            }
            
            flag = !flag;
        }
        
        while(!q2.empty()){
            q.push(q2.front());
            q2.pop();
        }
    }
};

// Sir's method using 1 stack

void rearrangeQueue(queue<int> &q) {
    // code here
    // 11 12 13 14 15 16 17 18 19 20
    stack<int> st;
    int halfSize = q.size()/2;
    
    // push first half elements into the stack
    // queue: 16 17 18 19 20 || stack: 15 14 13 12 11
    
    for(int i=0; i<halfSize; i++){
        st.push(q.front());
        q.pop();
    }
    
    while(!st.empty()){
        q.push(st.top());
        st.pop();
    }
    
    // dequeue the first half elements of the queue and enqueue them back.
    // queue: 15 14 13 12 11 16 17 18 19 20
    
    for(int i=0; i<halfSize; i++){
        q.push(q.front());
        q.pop();
    }
    
    // again push the first half elements in stack
    // queue: 16 17 18 19 20 || stack: 11 12 13 14 15
    
    for(int i=0; i<halfSize; i++){
        st.push(q.front());
        q.pop();
    }
    
    // interleave the elements of queue and stack
    // queue : 11 16 12 17 13 18 14 19 15 20
    
    while(!st.empty()){
        q.push(st.top());
        st.pop();
        q.push(q.front());
        q.pop();
    }
}

int main(){


    return 0;
}