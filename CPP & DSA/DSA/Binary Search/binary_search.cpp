#include<bits/stdc++.h>
using namespace std;

int binarySearch(vector<int> arr, int key){
    int s = 0;
    int e = arr.size()-1;

    while(s <= e){
        int mid = (s+e)/2;
        if(arr[mid] == key){
            return mid;
        }

        if(key < arr[mid]){
            e = mid - 1;
        }else{
            s = mid + 1;
        }
    }

    return -1;
}


int main(){

    vector<int> arr = {2,4,5,8,10,12,15,20};
    int key = 15;

    int index = binarySearch(arr,key);

    if(index != -1){
        cout << "Element found at index: " << index << endl;
    }else{
        cout << "Element not found!" << endl;
    }


    return 0;
}