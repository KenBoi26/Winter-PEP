#include<bits/stdc++.h>
using namespace std;

string reverseWords(string s) {
    int r = s.length()-1;
    string output = "";

    while(r>=0){
        string temp = "";
        while(r>=0 && s[r] == ' ') r--;

        if(r<0) break;
        
        while(s[r] != ' '){
            temp = s[r] + temp;
            r--;
            if(r < 0) break;
        }
        r--;
        
        
        if(!output.empty())output += ' ' ;
        output += temp;
    }

    return output;
}


int main(){
    cout << reverseWords("the sky is blue");

    return 0;
}