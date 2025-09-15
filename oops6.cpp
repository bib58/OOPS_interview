#include<iostream>
using namespace std;

int count = 0;
class Number {
    int a;
public:
    Number() {
        count++;
        cout << "Constructor called " << count <<" time"<< endl;
    }
    ~Number() {
        cout << "Destructor called" << endl;
    }
};


int main() {
    cout << "Creating first object n1"<<endl;
    Number n1;

    {
        cout<<"Entering the block"<<endl;
        Number n2,n3;
        cout<<"Exiting the block"<<endl;
    }
    
    cout<<"Back to main()"<<endl;
    return 0;
}
