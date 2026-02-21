#include<bits/stdc++.h>
using namespace std;

void hello(){
    cout << "Hello" << endl;
}

void hello2(){
    hello();
}

int add(int a, int b){
    return a+b;
}

float subtract(float a, float b){
    return a-b;
}


int main(){
    
    // hello2();
    // add();
    // cout << add();

    float a = 10;
    float b = 1.1;

    cout << subtract(a,b);

    return 0;
}