#include<iostream>
using namespace std;

class Base {
public:
    int var_base;
    void display() {
        cout << "Displaying base class variable " << var_base << endl;
    }
};

class Derived : public Base {
public:
    int var_der;
    void display() {
        cout << "Displaying base class variable in derived class " << var_base << endl;
        cout << "Displaying derived class variable " << var_der << endl;
    }
};

int main() {
    Base obj_b;
    Derived obj_d;
    Base * base_ptr = &obj_d;  //pointing base class pointer to derived class

    base_ptr->var_base = 34;
    //base_ptr->var_der = 67;  //throws error
    base_ptr->display();  /* base class ka pointer points to derived class, still the display of base class runs */

    Derived *Derived_ptr = &obj_d;
    Derived_ptr->var_base = 49;
    Derived_ptr->var_der = 92;
    Derived_ptr->display();
    
    return 0;
}