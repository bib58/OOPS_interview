/* Intialisation-list in constructors */

#include<iostream>
using namespace std;

class Test_1 {
    int a,b;
public:
    Test_1(int i , int j) : a(i) , b(i+j) {
        cout << "Value of a is " << a << endl;
        cout << "Value of b is " << b << endl;
    }
};

class Test_2 {
    int a,b;
public:
    Test_2(int i , int j) : b(a*j) , a(i) {
        cout << "Value of a is " << a << endl;
        cout << "Value of b is " << b << endl;
    }
};

class Test_3 {
    int a,b;
public:
    Test_3(int i , int j) : b(j) , a(i+b) {
        cout << "Value of a is " << a << endl;
        cout << "Value of b is " << b << endl;
    }
};

class Test_4 {
    int b,a;
public:
    Test_4(int i , int j) : b(j) , a(i+b) {
        cout << "Value of a is " << a << endl;
        cout << "Value of b is " << b << endl;
    }
};

int main() {
    Test_1(4,7);
    Test_2(4,7);
    Test_3(4,7);  /*garbage value of a as a should be initialised first */
    Test_4(4,7);
    
    return 0;
}
