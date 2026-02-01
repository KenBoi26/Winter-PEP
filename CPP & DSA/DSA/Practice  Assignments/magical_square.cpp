#include<bits/stdc++.h>
using namespace std;


long long countPerfectSquaresInRange(long long L, long long R) {
    long long left = ceil(sqrt(L));
    long long right = floor(sqrt(R));

    if(left > right) return 0;
    return right-left+1;
}

int main(){

    cout << countPerfectSquaresInRange(1, 10);

    return 0;
}