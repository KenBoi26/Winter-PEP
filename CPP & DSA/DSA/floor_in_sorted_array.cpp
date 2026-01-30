#include <bits/stdc++.h>
using namespace std;

int findFloor(vector<int>& arr, int x) {
    int start = 0, end = (int)arr.size()-1;
    int ans = -1;
    while(start <= end){
        int mid = start + (end - start) / 2;
        if(arr[mid] == x){
            ans = mid;
            start = mid + 1;
        }else if(arr[mid] > x){
            end = mid - 1;
        }else{
            ans = mid;
            start = mid + 1;
        }
    }
    return ans;
}

int main(){
    vector<int> arr = {1,2,8,10,11,12,19};
    cout << findFloor(arr, 5) << '\n'; // expected 1 (value 2)
    cout << findFloor(arr, 20) << '\n'; // expected 6 (value 19)
    return 0;
}