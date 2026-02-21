#include<bits/stdc++.h>
using namespace std;

void merge(int arr[], int l, int r){
    int mid = (l+r)/2;

    int length1 = mid - l + 1;
    int length2 = r - mid;

    int *arr1 = new int[length1];
    int *arr2 = new int[length2];

    int k = l;

    // copying 1st half elements to arr1
    for(int i=0; i<length1; i++){
        arr1[i] = arr[k++];
    }
    
    k=mid+1;

    // copying 2nd half elements to arr2
    for(int i=0; i<length2; i++){
        arr2[i] = arr[k++];
    }

    int i=0;
    int j=0;

    k = l;

    // sorting elements of the 2 arrays
    while(i<length1 && j<length2){
        if(arr1[i] < arr2[j]) arr[k++] = arr1[i++];
        else arr[k++] = arr2[j++];
    }

    // adding remaining elements of array 1
    while(i<length1){
        arr[k++] = arr1[i++];
    }

    // adding remaining elements of array 2
    while(j<length2){
        arr[k++] = arr2[j++];
    }

    delete []arr1;
    delete []arr2;


}

void mergeSort(int arr[], int l, int r){
    if(l == r) return;
    int mid = (l+r)/2;

    mergeSort(arr, l, mid);
    mergeSort(arr, mid+1, r);

    merge(arr, l, r);
}


int main(){

    int arr[18] = {1,3,2,1,2,3,4,5,6,5,4,3,4,6,6,6,6,666};
    
    mergeSort(arr, 0, 18);

    for(auto i:arr){
        cout << i << " ";
    }


    return 0;
}