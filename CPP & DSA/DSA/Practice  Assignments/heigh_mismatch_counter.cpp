#include<bits/stdc++.h>
using namespace std;

int solve(vector<int>& nums) { // add your code here 
    vector<int> temp = nums;
    int count = 0;
    sort(temp.begin(), temp.end());
    for(int i=0; i<nums.size(); i++){
        if(temp[i] != nums[i]){
            count++;
        }
    }

    return count;
}

int main(){


    return 0;
}