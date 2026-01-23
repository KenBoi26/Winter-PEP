#include<bits/stdc++.h>
using namespace std;

void increment(int &a){
    a++;
    cout << "Inside Function: " << a << endl;
}


int main(){
    
    // int age = 5;
    // increment(age);

    // cout << "Inside main Function: " << age << endl;

    
    // int a = 5;
    // int &ref = a;
    // int *ptr = &a;

    // cout << &ref << endl;
    // cout << ptr << endl;

    // cout << ref << endl;
    // cout << *ptr << endl;


    // int x = 10;
    // int *ptr1 = &x;

    // *ptr1 = 20;

    // cout << *ptr1 << endl;

    int v = 100;
    int *p = &v;
    (*p)++;
    cout << *p << endl;



    return 0;
}