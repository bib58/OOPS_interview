#include<iostream>
using namespace std;

class Base_1{
    int data_1;
public:
    Base_1(int data_1) {
        this->data_1 = data_1;
    }
    void display_data1() {
        cout<<"The value of data_1 is "<<data_1<<endl;
    }
};

class Base_2{
    int data_2;
public:
    Base_2(int data_2) {
        this->data_2 = data_2;
    }
    void display_data2() {
        cout << "The value of data_2 is " << data_2 << endl;
    }
};

class Derived : public Base_1 , public Base_2 { /* Base_1 ka constructor pehle ayega as declared pehle */
public:
    Derived(int a , int b) : Base_2(a) , Base_1(b){
    }
};

int main(){
    Derived d(10,20);
    d.display_data1();
    d.display_data2();

    return 0;
}