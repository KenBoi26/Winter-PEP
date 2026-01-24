#include<bits/stdc++.h>
using namespace std;


int main(){
    
    // int n;
    // cin >> n;
    // int arr[n];

    // Traversal
    vector<int> arr = {10,10,10};

    // for(int i = 0; i<5; i++){
    //     cout << arr[i] << " ";
    // }

    // for(int i=4; i>=0; i--){
    //     cout << arr[i] << " ";
    // }

    // int length = arr.size()-1;
    // for(int i=0; i<=length/2; i++){
    //     swap(arr[i],arr[length-i]);
    // }
    // int sum = 0;
    // for(auto i:arr){
    //     sum += i;
    // }

    // cout << sum << endl;

    int largest = max(arr[0],arr[1]);
    int second_largest = min(arr[0],arr[1]);

    if(largest == second_largest){
        second_largest = -1;
    }

    for(int i=0;i<arr.size();i++){
        if(arr[i] > largest){
            second_largest = largest;
            largest = arr[i];
        }else if(arr[i] < largest && arr[i] > second_largest){
            second_largest = arr[i];
        }
    }

    cout << largest << second_largest << endl;

    for(auto i : arr){
        cout << i << " ";
    }

    return 0;
}


/*
Checking whether the array is sorted...

for(int i=0; i<arr.size()-1; i++){
    if(arr[i] <= arr[i+1]){
        continue;
    }else{
        return false;
    }
}
*/

/*
Largest element in the array...
int largest_element = -1;
for(int i:arr){
    if(i > largest_element){
        largest_element = i;
    }
}

return largest_element;
*/

