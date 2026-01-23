#include<iostream>
using namespace std;

int main(){
    int age = 5.5; // does type conversions
    float num1 = 5.5;

    cout << age << endl;
    cout << num1 << endl;

    // OPERATORS
    // Arithmetic --> + - / * %

    int a = 5;
    int b = 10;

    cout << a+b << endl;

    cout << a++ << endl; // post-increment
    cout << ++a << endl; // pre-increment

    cout << a++ + ++b << endl;


    // Relational --> > >= < <= == !=
    cout << (10 > 5) << endl; // 1 == True, 0 == False

    // Logical
    int age1 = 25;
    bool hasID = true;

    if(age1 < 1 && hasID){

    }

    // IF-ELSE Practice

    int p,r,t;
    cin >> p >> r >> t;
    float SI = (p*r*t)/100;
    cout << "The SI is " << SI << endl;

    if(SI > 50){
        cout << "Valid";
    }else{
        cout << "Invalid";
    }
    



}