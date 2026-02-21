#include<bits/stdc++.h>
using namespace std;

int findKthLargest(vector<int>& nums, int k) {
    priority_queue<int, vector<int>, greater<int>> pq;

    for(int i:nums){
        pq.push(i);

        if(pq.size() > k){
            pq.pop();
        }
    }

    return pq.top();
}

int main(){


    return 0;
}