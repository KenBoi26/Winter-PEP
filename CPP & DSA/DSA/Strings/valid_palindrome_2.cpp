#include <bits/stdc++.h>
using namespace std;

bool isPalindromeRange(const string &s, int l, int r){
    while(l < r){
        if(s[l] != s[r]) return false;
        l++; r--;
    }
    return true;
}

bool validPalindrome(string s) {
    int l = 0, r = (int)s.length() - 1;
    while(l < r){
        if(s[l] == s[r]){ l++; r--; }
        else return isPalindromeRange(s, l+1, r) || isPalindromeRange(s, l, r-1);
    }
    return true;
}

int main(){
    cout << (validPalindrome("abca") ? "true" : "false") << '\n';
    cout << (validPalindrome("abc") ? "true" : "false") << '\n';
    return 0;
}