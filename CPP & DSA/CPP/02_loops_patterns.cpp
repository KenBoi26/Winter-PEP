#include<bits/stdc++.h>
using namespace std;


int main(){

    for(int i=1; i<=5; i++){
        for(int j=1; j <= 5; j++){
            if(i == 1 || i == 5){
                cout << "*" << " ";
                continue;
            }

            if(j == 1 || j == 5){
                cout << "*" << " ";
            }else{
                cout << " " << " ";
            }
        }
        cout << endl;
    }

    int i = 0;
    while(i < 10){
        cout << i << " ";
        i++;
    }

    do{
        cout << i << " ";
        i++;
    }while(i<20);
    cout << endl;

    int pin = 1234;
    int inp;
    cout << "Enter your pin: ";
    cin >> inp;

    while(inp != pin){
        cout << "Try Again!\nEnter your pin again" << endl;
        cin >> inp;
    }

    cout << "Welcome!";

    return 0;
}