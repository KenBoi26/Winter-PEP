#include <bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int>& numbers, int target) {
    int l = 0;
    int r = (int)numbers.size() - 1;
    while(l < r){
        int s = numbers[l] + numbers[r];
        if(s == target) return {l+1, r+1};
        else if(s > target) r--;
        else l++;
    }
    return {-1, -1};
}

int main(){
    vector<int> numbers = {2,7,11,15};
    int target = 9;
    auto res = twoSum(numbers, target);
    cout << res[0] << " " << res[1] << '\n';
    return 0;
}