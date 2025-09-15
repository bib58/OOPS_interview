#include<iostream>
using namespace std;

class ABC {
public:
    ABC () {
        cout<<"Constructor"<<endl;
    }
    ~ABC () {
        cout<<"Destructor"<<endl;
    }
};

int main() {
    if(true){
        ABC obj;
    }
    cout<<"End of main function"<<endl;
    return 0;    
}
/*Constructor
Destructor
End of main function*/

/* using static the object persists for lifetime in our memory till destructor is called */


int main() {
    if(true){
        static ABC obj;
    }
    cout<<"End of main function"<<endl;
    return 0;    
}
/*Constructor
End of main function
Destructor*/
