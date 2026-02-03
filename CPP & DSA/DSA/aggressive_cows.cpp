#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    
    bool checker(vector<int>&stalls, int k, int dist){
        int count = 1;
        int prev = stalls[0];
        
        for(int i=1; i<stalls.size(); i++){
            if(stalls[i] - prev >= dist){
                count++;
                prev = stalls[i];
            }
        }
        
        return (count>=k);
        
    }
    
    int aggressiveCows(vector<int> &stalls, int k) {
        // code here
        sort(stalls.begin(), stalls.end());
        
        int minDist = 1;
        int maxDist = stalls.back()-stalls[0];
        
        int result = 0;
        int mid;
        
        while(minDist <= maxDist){
            mid = (minDist+maxDist)/2;
            if(checker(stalls, k, mid)){
                result = mid;
                minDist = mid+1;
            }else{
                maxDist = mid-1;
            }
        }
        
        return result;
    }
};


int main(){


    return 0;
}