#include<bits/stdc++.h>
using namespace std;


int main(){

    string s = "banana";
    vector<bool> arr(26,true);
    string f = "";

    for(int i=0; i<s.length(); i++){
        if(arr[s[i]-97]){
            f+=s[i];
            arr[s[i]-97] = false;
        }
    }

    cout << f;



    return 0;
}