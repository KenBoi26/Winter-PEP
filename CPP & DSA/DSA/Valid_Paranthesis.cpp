#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for(char i:s){
            if(i == '(' || i == '[' || i == '{'){
                st.push(i);
            }else{
                if(!st.empty() && ((i == ')' && st.top() == '(') || (i == ']' && st.top() == '[') || (i == '}' && st.top() == '{'))){
                    st.pop();
                }else{
                    return false;
                }
            }
        }

        return st.empty();
        
    }
};


int main(){


    return 0;
}