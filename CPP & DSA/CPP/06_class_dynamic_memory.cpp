// name, class, course
#include<bits/stdc++.h>
using namespace std;

class Student{
    public:
    string name;
    string classroom;
    string course;

    Student(string name, string classroom, string course){
        this->name = name;
        this->classroom = classroom;
        this->course = course;
    };

    void print(){
        cout << "Name: " << this->name << endl;
        cout << "Class: " << this->classroom << endl;
        cout << "Course: " << this->course<< endl;
    }

};


int main(){
    
    Student *student1 = new Student("Kenneth", "423WR", "PEP");

    student1->print();

    delete student1;


    return 0;
}