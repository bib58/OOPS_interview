#include<iostream>
using namespace std;

class Base1 {
public:
    void greet() {
        cout << "Namaste" << endl;
    }
};

class Base2 {
public:
    void greet() {
        cout << "kaise ho" << endl;
    }
};

class Derived : public Base1 , public Base2{ 
public:
    void greet() {
        Base1 :: greet();
    }
};




class B {
public:
    void say() {
        cout << "Hello World" << endl;
    }
};

class D : public B {
public:
    void say() {
        cout << "Hello Universe" << endl;
    }
};
int main() {

    Derived d;
    d.greet();

    D obj;
    obj.say();
    
    return 0;
}