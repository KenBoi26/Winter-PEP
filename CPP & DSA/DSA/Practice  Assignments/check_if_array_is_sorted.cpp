#include<bits/stdc++.h>
using namespace std;

string isArraySorted(vector<int>& arr) {
    // add your code here
    for(int i=1; i<arr.size(); i++){
        if(arr[i] < arr[i-1]){
            return "NO";
        }
    }

    return "YES";
}

int main(){


    return 0;
}