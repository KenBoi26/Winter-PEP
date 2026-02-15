#include<bits/stdc++.h>
using namespace std;



class Solution {
  public:
    int precedence(char c){
        if(c == '^') return 3;
        else if(c == '*' || c == '/') return 2;
        else if(c == '+' || c == '-') return 1;
        return -1;
    }
    string infixToPostfix(string& s) {
        // code here
        stack<char> st;
        string str = "";
        for(char i:s){
            if(isalnum(i)){
                str+=i;
            }else if(i == '('){
                    st.push(i);
            }else if(i == ')'){
                while(!st.empty() && st.top() != '('){
                    str+=st.top();
                    st.pop();
                }
                st.pop();
            }else{
                while(!st.empty() && precedence(st.top()) >= precedence(i) && !(i == '^' && st.top() == '^') ){
                    str+=st.top();
                    st.pop();
                }
                st.push(i);
            }
            
        }
        
        while(!st.empty()){
            str += st.top();
            st.pop();
        }
        
        return str;
    }
};

int main(){


    return 0;
}