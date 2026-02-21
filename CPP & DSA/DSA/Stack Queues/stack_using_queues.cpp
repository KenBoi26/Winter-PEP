#include<bits/stdc++.h>
using namespace std;

class MyStack {
public:
    queue<int> stack;
    queue<int> temp;
    MyStack() {
        
    }
    
    void push(int x) {
        temp.push(x);
        while(!stack.empty()){
            temp.push(stack.front());
            stack.pop();
        }
        swap(stack, temp);
    }
    
    int pop() {
        int temp = stack.front();
        stack.pop();
        return temp;
    }
    
    int top() {
        return stack.front();
    }
    
    bool empty() {
        return stack.empty();
    }
};

// using one queue
class MyStack {
public:
    queue<int> stack;
    MyStack() {
        
    }
    
    void push(int x) {
        stack.push(x);
        int size = stack.size()-1;
        while(size--){
            int temp = stack.front();
            stack.pop();
            stack.push(temp);
        }
    }
    
    int pop() {
        int temp = stack.front();
        stack.pop();
        return temp;
    }
    
    int top() {
        return stack.front();
    }
    
    bool empty() {
        return stack.empty();
    }
};

int main(){


    return 0;
}