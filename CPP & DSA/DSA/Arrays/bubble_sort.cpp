#include<bits/stdc++.h>
using namespace std;


void bubbleSort(vector<int> &arr){
    int n = arr.size();

    for(int i=0; i<n; i++){
        for(int j=0; j<n-i-1; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }

}


void print(vector<int> arr){
    for(int i:arr){
        cout << i << " ";
    }
}


int main(){

    vector<int> arr = {3,2,4,5,1,3,2,1,4};

    bubbleSort(arr);

    print(arr);

    return 0;
}