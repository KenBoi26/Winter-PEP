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
    
    
    return 0;
}