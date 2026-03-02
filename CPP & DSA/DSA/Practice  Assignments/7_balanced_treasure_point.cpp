#include<bits/stdc++.h>
using namespace std;

int balancedTreasurePoint(vector<int>& arr) { // add your code here
    int total_sum = 0;
    for(auto i:arr){
        total_sum += i;
    }
    int sum = 0;
    for(int i=0; i<arr.size(); i++){
        if(sum == total_sum-sum-arr[i]){
            return i;
        }
        sum += arr[i];
    }
    return -1;
}


int main(){


    return 0;
}