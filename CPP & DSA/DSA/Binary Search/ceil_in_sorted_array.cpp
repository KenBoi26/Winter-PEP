#include <bits/stdc++.h>
using namespace std;

int findCeil(vector<int>& arr, int x) {
    int start = 0, end = (int)arr.size() - 1;
    int ans = -1;
    while(start <= end){
        int mid = start + (end - start) / 2;
        if(arr[mid] >= x){
            ans = mid;
            end = mid - 1;
        }else{
            start = mid + 1;
        }
    }
    return ans;
}

int main(){
    vector<int> arr = {1,2,8,10,11,12,19};
    cout << findCeil(arr, 5) << '\n';
    cout << findCeil(arr, 0) << '\n';
    return 0;
}