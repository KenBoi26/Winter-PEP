#include<bits/stdc++.h>
using namespace std;


int main(){

    string s = "hello";
    int l = 0;
    int r = s.length()-1;

    while(l<r){
        swap(s[l++],s[r--]);
    }

    cout << s;


    return 0;
}