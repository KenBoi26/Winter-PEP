#include<bits/stdc++.h>
using namespace std;

int binarySearch(vector<int> &arr, int l, int r, int key){
    if(l>r) return -1;
    int mid = (l+r)/2;

    if(arr[mid] > key) return binarySearch(arr, l, mid-1, key);
    else if(arr[mid] < key) return binarySearch(arr, mid+1, r, key);
    else return mid;
}


int main(){

    vector<int> arr = {3,5,7,8,9,12,14,17,20,22};
    cout << binarySearch(arr, 0, 9, 17);

    return 0;
}