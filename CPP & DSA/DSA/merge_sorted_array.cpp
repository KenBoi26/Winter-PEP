// My method
#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<int> nums1 = {1,2,3,0,0,0};
    int m = 3;
    vector<int> nums2 = {2,5,6}; 
    int n = 3;

    int i = m-1;
    int j = n-1;
    int k = n+m-1;

    while(j>=0){
        if(i>=0 && nums1[i] > nums2[j]){
            nums1[k--] = nums1[i--];
        }else{
            nums1[k--] = nums2[j--];
        }
    }

    for(auto i:nums1){
        cout << i << " ";
    }
    
    

    return 0;
}