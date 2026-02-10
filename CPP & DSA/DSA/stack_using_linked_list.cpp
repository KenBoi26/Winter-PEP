#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
        int data;
        Node* next;

    Node(int val){
        data = val;
        next = nullptr;
    }
};

class MyStack{
    public:
        Node* top;
    
    MyStack(){
        top = nullptr;
    }

    void push(int val){
        Node* node = new Node(val);
        node->next = top;
        top = node;
    }

    void pop(){
        if(isEmpty()){
            cout << "Stack Underflow" << endl;
            return;
        }

        Node* temp = top;
        top = top->next;
        delete temp;
    }

    bool isEmpty(){
        if(top == nullptr){
            return true;
        }
        return false;
    }

    int peek(){
        if(isEmpty){
            cout << "Stack is empty" << endl;
            return -1;
        }

        return top->data;
    }
};


int main(){


    return 0;
}