/*
Problem Statement:
Give a staircase of N steps and you can either climb 1 or 2 steps at a give ntime. The task is to return the count of distinct ways to climb to the top.

Input: N = 3
Output: 3

[1,1,1], [1,2], [2,1]
*/

#include<bits/stdc++.h>
using namespace std;

int steps(int n, int &count){
    if(n==0){
        count++;
    }else if(n==1){
        steps(n-1,count);
    }else{
        steps(n-2,count);
        steps(n-1,count);
    }

    return count;
}


int main(){
    int count = 0;

    cout << steps(5,count);

    return 0;
}