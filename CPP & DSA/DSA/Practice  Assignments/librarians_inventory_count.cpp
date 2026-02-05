#include<bits/stdc++.h>
using namespace std;

int countOccurrences(vector<int> &arr, int target) {
     int low = 0, high = arr.size()-1, firstOcc =  -1, lastOcc=-1;

    while(low<=high){
        int mid = (low+high)/2;
        if(arr[mid] == target){
            firstOcc = mid;
            high = mid-1;
        }else if(arr[mid] < target){
            low = mid+1;
        }else{
            high = mid-1;
        }
    }

    low = 0;
    high = arr.size()-1;

    while(low<=high){
        int mid = (low+high)/2;
        if(arr[mid] == target){
            lastOcc = mid;
            low = mid+1;
        }else if(arr[mid] < target){
            low = mid+1;
        }else{
            high = mid-1;
        }
    }
    if(firstOcc == -1 || lastOcc == -1) return 0;

    return lastOcc-firstOcc+1;
}



int main(){


    return 0;
}