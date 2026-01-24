#include<iostream>
#include<vector>
using namespace std;


int main(){

    vector<int> vec1 = {1,2,3,4,5};

    // cout << vec1[6] << endl;
    // cout << vec1.at(6) << endl;

    vec1.push_back(6);
    cout << vec1.size() << " ";
    cout << vec1.at(5) << endl;

    vec1.pop_back();
    cout << vec1.size() << endl;

    

    return 0;
}