#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(string s) {
    int l = 0, r = (int)s.length() - 1;
    while(l < r){
        while(l < r && !isalnum((unsigned char)s[l])) l++;
        while(l < r && !isalnum((unsigned char)s[r])) r--;
        if(tolower((unsigned char)s[l]) != tolower((unsigned char)s[r])) return false;
        l++; r--;
    }
    return true;
}

int main(){
    cout << (isPalindrome("A man, a plan, a canal: Panama") ? "true" : "false") << '\n';
    cout << (isPalindrome("race a car") ? "true" : "false") << '\n';
    return 0;
}