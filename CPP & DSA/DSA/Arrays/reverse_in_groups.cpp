#include <bits/stdc++.h>
using namespace std;

void reverseSegment(vector<int>& arr, int l, int r){
    while(l < r) swap(arr[l++], arr[r--]);
}

void reverseInGroups(vector<int> &arr, int k) {
    int l = 0;
    int r = l + k - 1;
    while(r < (int)arr.size()){
        reverseSegment(arr, l, r);
        l += k; r += k;
    }
    reverseSegment(arr, l, (int)arr.size() - 1);
}

int main(){
    vector<int> arr = {1,2,3,4,5,6,7};
    reverseInGroups(arr, 3);
    for(int x: arr) cout << x << " ";
    cout << '\n';
    return 0;
}