#include<bits/stdc++.h>
using namespace std;

void selectionSort(vector<int> &arr){
    for(int i=0; i<arr.size()-1; i++){
        int smallest = i;
        for(int j=i+1; j<arr.size();j++){
            smallest = (arr[j] < arr[smallest]) ? j : smallest;
        }
        swap(arr[i],arr[smallest]);
    }
}

void print(vector<int> arr){
    for(int i:arr){
        cout << i << " ";
    }
}


int main(){

    vector<int> arr = {3,2,4,5,1,3,2,1,4};

    selectionSort(arr);

    print(arr);

    return 0;
}