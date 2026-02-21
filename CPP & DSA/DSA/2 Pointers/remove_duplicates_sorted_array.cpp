#include <bits/stdc++.h>
using namespace std;

int removeDuplicates(vector<int>& nums) {
    if(nums.empty()) return 0;
    int j = 0;
    for(int i = 1; i < (int)nums.size(); i++){
        if(nums[i] != nums[j]){
            j++;
            nums[j] = nums[i];
        }
    }
    return j + 1;
}

int main(){
    vector<int> nums = {1,1,2};
    int k = removeDuplicates(nums);
    cout << "New length: " << k << "\n";
    for(int i = 0; i < k; i++) cout << nums[i] << " ";
    cout << '\n';
    return 0;
}