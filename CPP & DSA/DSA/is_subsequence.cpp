#include <bits/stdc++.h>
using namespace std;

bool isSubsequence(string s, string t) {
    int l = 0, r = 0;
    while(l < (int)s.length() && r < (int)t.length()){
        if(s[l] == t[r]) l++;
        r++;
    }
    return l == (int)s.length();
}

int main(){
    cout << (isSubsequence("abc", "ahbgdc") ? "true" : "false") << '\n';
    cout << (isSubsequence("axc", "ahbgdc") ? "true" : "false") << '\n';
    return 0;
}