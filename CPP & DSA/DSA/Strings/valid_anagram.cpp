#include <bits/stdc++.h>
using namespace std;

bool isAnagram(string s, string t) {
    if(s.length() != t.length()) return false;
    vector<int> freq(26, 0);
    for(int i = 0; i < (int)s.length(); i++){
        freq[s[i]-'a']++;
        freq[t[i]-'a']--;
    }
    for(int v: freq) if(v != 0) return false;
    return true;
}

int main(){
    cout << (isAnagram("anagram","nagaram") ? "true" : "false") << '\n';
    cout << (isAnagram("rat","car") ? "true" : "false") << '\n';
    return 0;
}