#include<bits/stdc++.h>
using namespace std;

bool pairInSortedRotated(vector<int>& arr, int target) {
    int smallest_index = 0;
    for(int i = 0; i<arr.size()-1; i++){
        if(arr[i]>arr[i+1]){
            smallest_index = i+1;
            break;
        }
    }
    
    int start = smallest_index;
    int end = start-1;
    int counter = 0;
    
    while(counter < arr.size()){
        if(end < 0) end = arr.size()-1;
        if(start > arr.size()-1) start = 0;
        if(arr[start] + arr[end] == target && start!=end) return true;
        
        if(arr[start] + arr[end] > target){
            end--;
        }else{
            start++;
        }
        
        counter++;
    }
    
    return false;
}

int main(){

    vector<int> arr = {7, 9, 1, 3, 5};
    int target = 6;

    cout << pairInSortedRotated(arr,target);


    return 0;
}