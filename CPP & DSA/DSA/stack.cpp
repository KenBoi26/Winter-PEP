#include<bits/stdc++.h>
using namespace std;

class MyStack{
    public:
        int* arr;
        int top;
        int size;

        MyStack(int size){
            this->size = size;
            arr = new int[size];
            top = -1;
        }

        void push(int val){
            if(size-1 == top){
                cout << "Stack Overflow" << endl;
                return;
            }
            top++;
            arr[top] = val;
        }

        void pop(){
            if(isEmpty()){
                cout << "Stack Undeflow" << endl;
            }else{
                top--;
            }
        }

        int peek(){
            if(isEmpty()){
                cout << "No element in the stack." << endl;
                return -1;
            }
            return arr[top];
        }

        bool isEmpty(){
            if(top == -1){
                return true;
            }else{
                return false;
            }
        }
};



int main(){

    MyStack st(5);
    st.push(1);

    st.push(2);

    st.push(3);

    st.push(4);

    st.push(5);

    st.push(6);
    cout << st.peek() << endl;

    st.pop();
    st.pop();
    st.pop();
    st.pop();
    cout << st.peek() << endl;


    return 0;
}