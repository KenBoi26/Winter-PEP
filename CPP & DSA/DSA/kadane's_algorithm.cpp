#include<bits/stdc++.h>
using namespace std;


int main(){

    vector<int> nums = {-2,-1,-1,-1, -3};

    int current_sum = 0;
    int max_sum = nums[0];

    for(int i=0; i<nums.size(); i++){
        current_sum += nums[i];
        if(current_sum > max_sum){
            max_sum = current_sum;
        }
        if(current_sum < 0){
            current_sum = 0;
        }
    }

    cout << "The maximum sum is: " << max_sum << endl;


    return 0;
}