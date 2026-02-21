#include<bits/stdc++.h>
using namespace std;

int findGrimoire(vector<int>& ids, int target) {
    // add your code here
    int low = 0;
    int high = ids.size()-1;
    int mid;

    while(low<=high){
        mid = (low+high)/2;
        if(ids[mid] == target){
            return 1;
        }else if(ids[mid] < target){
            low = mid+1;
        }else{
            high = mid-1;
        }
    }

    return 0;
}

int main(){


    return 0;
}