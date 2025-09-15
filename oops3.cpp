#include<iostream>
using namespace std;

class Complex;

class Calculator {
public:
    int sum_real_complex(Complex , Complex);
    int sum_comp_complex(Complex , Complex);
};

class Complex {
    int a,b;
    friend int Calculator :: sum_real_complex(Complex o1 , Complex o2);
    friend int Calculator :: sum_comp_complex(Complex o1 , Complex o2);
    
    friend class Calculator;
public:
    void setdata(int a,int b) {
        this->a = a;
        this->b = b;
    }
    
    void display() {
        cout<<"Your complex number is "<<a<<" + "<<b<<"i"<<endl;
    }
};

int Calculator :: sum_real_complex(Complex o1 , Complex o2) {
    return (o1.a + o2.a);
}

int Calculator :: sum_comp_complex(Complex o1 , Complex o2) {
    return (o1.b + o2.b);
}

int main() {
    Complex c1,c2,sum;

    c1.setdata(3,4);
    c1.display();
    c2.setdata(6,8);
    c2.display();

    Calculator calc;
    int res1 = calc.sum_real_complex(c1,c2);
    int res2 = calc.sum_comp_complex(c1,c2);

    cout << "The sum of real parts is "<< res1 << endl;
    cout << "The sum of complex parts is "<< res2 <<"i" << endl;

    return 0;
}