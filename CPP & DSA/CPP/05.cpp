#include<bits/stdc++.h>
using namespace std;

class Car{
    public:
        string name;
        int speed;
        string color;

        // Car(){
        //     cout << "Default constructor method is called!" << endl;
        // };

        Car(string name){
            this->name = name;
        };

        void increaseSpeed(){

        };

        void fly(){

        };
};


int main(){

    Car *c1 = new Car("Tata");

    cout << c1->name << endl;

    return 0;
}