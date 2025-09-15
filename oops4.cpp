#include<iostream>
using namespace std;

class c2;

class c1 {
    int val_1;
    friend void exchange(c1 & , c2 &);
public:
    void in_data(int val) {
        this->val_1 = val;
    }
    void display(void) {
        cout << val_1 <<endl;
    }
};


class c2 {
    int val_2;
    friend void exchange(c1 & , c2 &);
public:
    void in_data(int val) {
        this->val_2 = val;
    }
    void display(void) {
        cout << val_2 <<endl;
    }
};


void exchange(c1 &x , c2 &y) {
    swap(x.val_1 , y.val_2);
}

int main() {
    c1 obj1;
    c2 obj2;

    obj1.in_data(32);
    obj2.in_data(54);

    exchange(obj1,obj2);
    obj1.display();
    obj2.display();
    
    return 0;
}