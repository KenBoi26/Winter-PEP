#include<bits/stdc++.h>
using namespace std;


int main(){
    
    // int n;
    // cin >> n;
    // int arr[n];

    // Traversal
    int arr[5] = {3,2,7,5,1};

    // for(int i = 0; i<5; i++){
    //     cout << arr[i] << " ";
    // }

    // for(int i=4; i>=0; i--){
    //     cout << arr[i] << " ";
    // }

    for(int i : arr){
        cout << i*2 << " ";
    }

    return 0;
}