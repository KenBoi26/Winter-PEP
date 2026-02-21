#include<bits/stdc++.h>
using namespace std;

stack<int> insertAtBottom(stack<int> st, int x) {
    if(st.empty()){
        st.push(x);
        return st;
    }

    int temp = st.top();
    st.pop();
    st = insertAtBottom(st, x);
    st.push(temp);
    return st;

}


int main(){

    stack<int> st;
    st.push(3);
    st.push(2);
    st.push(7);
    st.push(5);
    


    return 0;
}