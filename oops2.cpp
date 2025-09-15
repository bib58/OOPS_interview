#include<iostream>
using namespace std;

class Complex {
    int a,b;
public:
    void setdata(int a,int b) {
        this->a = a;
        this->b = b;
    }
    void setsum(Complex o1,Complex o2) {
        a = o1.a + o2.a;
        b = o1.b + o2.b;
    }
    void display() {
        cout<<"Your complex number is "<<a<<" + "<<b<<"i"<<endl;
    }
};

int main() {
    Complex c1,c2,c3;

    c1.setdata(3,4);
    c2.setdata(6,8);
    
    c3.setsum(c1,c2);
    c3.display();

    return 0;
}