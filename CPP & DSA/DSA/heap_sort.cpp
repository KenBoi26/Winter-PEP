#include<bits/stdc++.h>
using namespace std;

void heapify(vector<int> &arr, int size, int index){
    int largest = index;
    int left = 2*index + 1;
    int right = 2*index + 2;

    if(left < size && arr[left] > arr[largest]){
        largest = left;
    }

    if(right < size && arr[right] > arr[largest]){
        largest = right;
    }

    if(largest != index){
        swap(arr[index], arr[largest]);
        heapify(arr, size, largest);
    }
}

void heapSort(vector<int>& arr) {

    int size = arr.size();

    for(int i=size/2-1; i >= 0; i--){
        heapify(arr, size, i);
    }

    for(int i=size-1; i>=0;  i--){
        swap(arr[0], arr[i]);
        heapify(arr, i, 0);
    }

}

int main(){


    return 0;
}