#include<bits/stdc++.h>
using namespace std;

bool isFound(int arr[][4], int key, int rows){
    for(int i=0; i<rows; i++){
        for(int j=0; j<4; j++){
            if(arr[i][j] == key) return true;
        }
    }

    return false;
}

int main(){

    // int arr[3][4] = {{1,2,3,4},
    //                  {5,6,7,8},
    //                  {9,10,11,12}
    //                 };
    // int arr[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};

    int arr[3][4];

    for(int i=0; i<4; i++){
        for(int j=0; j<4; j++){
            cin >> arr[i][j];
        }
    }

    cout << isFound(arr,9,4) << endl;


    
    
    // for(int i=0; i<3; i++){
    //     for(int j=0; j<4; j++){
    //         cout << arr[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    // for(auto &i:arr){
    //     for(int j:i){
    //         cout << j << " ";
    //     }
    //     cout << endl;
    // }


    return 0;
}