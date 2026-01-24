#include<bits/stdc++.h>
using namespace std;


int linearSearch(vector<int> array, int key){
    for(int i=0; i<array.size(); i++){
        if(array[i] == key){
            return i;
        }
    }
    return -1;
}


int main(){

    vector<int> arr = {2,7,5,4,10,12,8,3};
    int key = 12;

    int index = linearSearch(arr,key);

    if(key > 5 && index != -1){
        cout << index*2;
    }else if(index == -1){
        cout << "Not in the list";
    }else{
        cout << index/2;
    }

    return 0;
}