#include<bits/stdc++.h>
using namespace std;



int main(){

    priority_queue<int> max_heap;

    priority_queue<int, vector<int>, greater<int>> min_heap;

    max_heap.push(10);
    max_heap.push(5);
    max_heap.push(20);

    cout << max_heap.size() << endl;

    while(!max_heap.empty()){
        cout << max_heap.top() << " ";
        max_heap.pop();
    }


    return 0;
}