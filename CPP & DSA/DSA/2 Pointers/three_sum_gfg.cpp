#include <bits/stdc++.h>
using namespace std;

bool hasTripletSum(vector<int> &arr, int target) {
    sort(arr.begin(), arr.end());
    for(int i = 0; i + 2 < (int)arr.size(); i++){
        int j = i + 1, k = (int)arr.size() - 1;
        int remaining = target - arr[i];
        while(j < k){
            int s = arr[j] + arr[k];
            if(s == remaining) return true;
            else if(s < remaining) j++;
            else k--;
        }
    }
    return false;
}

int main(){
    vector<int> arr = {1, 4, 45, 6, 10, 8};
    int target = 22;
    cout << (hasTripletSum(arr, target) ? "Yes" : "No") << '\n';
    return 0;
}