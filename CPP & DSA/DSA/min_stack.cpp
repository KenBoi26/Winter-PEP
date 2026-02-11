#include<bits/stdc++.h>
using namespace std;

class MinStack {
public:
    stack<int> s1;
    stack<int> s2;

    MinStack() {
        s2.push(INT_MAX);    
    }
    
    void push(int val) {
        s1.push(val);
        s2.push(min(val, s2.top()));
    }
    
    void pop() {
        s1.pop();
        s2.pop();
    }
    
    int top() {
        return s1.top();
    }
    
    int getMin() {
        return s2.top();
    }
};

int main(){


    return 0;
}