#include <bits/stdc++.h>
using namespace std;

int maxProfit(vector<int>& prices) {
    if(prices.empty()) return 0;
    int minPrice = prices[0];
    int maxProf = 0;
    for(int i = 1; i < (int)prices.size(); i++){
        if(prices[i] < minPrice) minPrice = prices[i];
        else maxProf = max(maxProf, prices[i] - minPrice);
    }
    return maxProf;
}

int main(){
    vector<int> prices = {7,1,5,3,6,4};
    cout << maxProfit(prices) << '\n';
    return 0;
}