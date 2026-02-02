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

void wavePrint(int arr[4][4]){
    bool flag = false;
    for(int i=0; i<4; i++){
        flag = !flag;
        int sum = 0;
        if(flag){
            for(int  j=0; j<4; j++){
                cout << arr[j][i] << " ";
            }
        }else{
            for(int  j=3; j>=0; j--){
                cout << arr[j][i] << " ";
            }
        }
        
    }
}

int main(){

    // int arr[3][4] = {{1,2,3,4},
    //                  {5,6,7,8},
    //                  {9,10,11,12}
    //                 };
    int arr[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};


    // for(int i=0; i<4; i++){
    //     for(int j=0; j<4; j++){
    //         cin >> arr[i][j];
    //     }
    // }

    // cout << isFound(arr,9,4) << endl;

    int max_sum = -1;
    int index = 0;

    for(int i=0; i<4; i++){
        int sum = 0;
        for(int  j=0; j<3; j++){
            sum += arr[j][i];
        }

        cout << "Coulumn " << i+1 << "'s sum: " << sum << endl;

        if(sum > max_sum){
            max_sum = sum;
            index = i;
        };
    }

    cout << "Max sum: " << max_sum << ", on index: " << index << endl;
    int arr1[4][4] = {{1,7,14,6},{11,15,5,10},{2,4,16,3},{9,13,8,12}};

    wavePrint(arr1);

    


    
    
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