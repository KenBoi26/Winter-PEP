#include<bits/stdc++.h>
using namespace std;

int evaluatePostfix(vector<string>& arr) {
    stack<int> st;
    int n = arr.size()-1;
    while(n >= 0){
        if(arr[n] >= "0" && arr[n] <= "9"){
            int num = stoi(arr[n]);
            st.push(num);
        }else{
            int num1 = st.top();
            st.pop();
            int num2 = st.top();
            st.pop();
            if(arr[n] == "+"){
                st.push(num1+num2);
            }else if(arr[n] == "-"){
                st.push(num1-num2);
            }else if(arr[n] == "*"){
                st.push(num1*num2);
            }else{
                st.push((int)(num1/num2));
            }
        }
        n--;
    }
    return st.top();
}

int main(){


    return 0;
}