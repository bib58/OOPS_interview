/*SINGLE LEVEL INHERITANCE*/

#include<iostream>
using namespace std;

class Person {   
public:
    string name;
    int age;

    Person(string name,int age) {
        cout<< "Parent constructor"<<endl;
        this->name = name;
        this->age = age;
    }
    ~Person() {
        cout<<"Parent destructor"<<endl;
    }
};

class Student : private Person {
    int rollno;
public:
    Student(string name,int age,int rollno) : Person(name,age) {
        cout << "Child constructor" << endl;
        this->rollno=rollno;
    }
    ~Student() {
        cout<<"Child destuctor"<<endl;
    }
    void getInfo() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Roll No: " << rollno << endl;
    }
};

int main() {

    Student s1("Saransh",21,123);
    s1.getInfo();

    return 0;
}
