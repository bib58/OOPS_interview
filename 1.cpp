#include <iostream>
#include<iomanip>
using namespace std;

// int a_c=100;

// int main() {
    
//     cout<<"The size of 35.5 is "<< sizeof(35.5) <<endl;   /* By default takes double */
//     cout<<"The size of 35.5 is "<< sizeof(35.5f) <<endl; 
//     cout<<"The size of 35.5 is "<< sizeof(35.5F)<<endl; 
    
//     int a_c=200;
//     cout<<"The value of a_c is "<<a_c<<endl;
//     cout<<"The global value of a_c is "<<::a_c << endl; 
    
//     int p=3;
//     int q=33;
//     int r=333;
//     int s=3333;
    
//     cout<<p<<endl;
//     cout<<q<<endl;
//     cout<<r<<endl;
//     cout<<s<<endl;

//     cout<<setw(4)<<p<<endl;
//     cout<<setw(4)<<q<<endl;
//     cout<<setw(4)<<r<<endl;
//     cout<<setw(4)<<s<<endl;
    
//     return 0;
// }





/* Inline function replaces a function call with the actual code of the function reducing the overhead of function calls, especially for small, frequently called functions. code of the function gets inserted into the caller's code at compile-time, effectively eliminating the function call mechanism.

* not to be used for recursion, loops  and static variables.
* it is a request to the compiler and it's not a guarantee that the compiler will inline the function. */


// inline int product(int a,int b) {
//     return a * b;
// }

// int main() {
//     cout << product(3,5) << endl;
//     cout << product(3,5) << endl;
//     cout << product(3,5) << endl;
//     return 0;
// } 







float moneyreceived(int currentmoney,float factor=1.04) {
    return currentmoney*factor;
}
int main() {
    int money=1000;
    cout << "money received after one year :-" << moneyreceived(money) << endl;
    cout << "money received for bank employees :-" << moneyreceived(money,1.08)<<endl;

    return 0;
}




/*Function Overloading*/
class Print {
public:
    void show(int x) {
        cout<<"int: "<<x<<endl;
    }
    void show(char ch) {
        cout<<"char: "<<ch<<endl;
    }
};
int main() {
    Print p1;
    p1.show(107);

    Print p2;
    p2.show('&');

    return 0;
}