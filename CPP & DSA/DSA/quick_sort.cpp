#include<bits/stdc++.h>
using namespace std;

int partition(int arr[], int start, int end){

    int pivot = arr[start];
    int count = 0;

    for(int i=start+1; i<= end; i++){
        if(arr[i]<=pivot) count++;
    }

    int pivotIndex = start + count;
    swap(arr[pivotIndex], arr[start]);

    int i=start, j=end;

    while(i<pivotIndex && j>pivotIndex){
        while(arr[i] < pivot) i++;
        while(arr[j] > pivot) j--;
        swap(arr[i],arr[j]);
    }

    return pivotIndex;
}

void quickSort(int arr[], int start, int end){
    if(start >= end) return;

    int p = partition(arr, start, end);

    quickSort(arr, start, p-1);
    quickSort(arr, p+1, end);
}


int main(){

    int arr[7] = {4,5,2,1,7,3,8};

    quickSort(arr, 0, 7);

    for(auto i:arr) cout << i << " ";


    return 0;
}