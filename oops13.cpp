/* When a base class declares a function as virtual, it tells the compiler to support dynamic dispatch (runtime method resolution) for that function. Otherwise it runs that of base class as decided during compile-time and memory is allocated accordingly */

#include<iostream>
using namespace std;

class Base {
public:
    int var_base = 6;
    virtual void display() {
        cout << "Displaying base class variable " << var_base << endl;
    }
};

class Derived : public Base {
public:
    int var_der = 1;
    void display() {
        cout << "Displaying base class variable in derived class " << var_base << endl;
        cout << "Displaying derived class variable " << var_der << endl;
    }
};

int main() {
    Base *base_ptr;
    Base obj_base;
    Derived obj_derived;
    base_ptr = &obj_derived;
    
    /* using virtual keyword, we can make the display of derived class to run */
    base_ptr->display();
    
    return 0;
}
