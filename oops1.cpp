#include<iostream>
using namespace std;

class Teacher {
public:
    string name;
    string dept;
    int age;

    Teacher() {
        cout<<"Hi I am a Non-parameterized constructor\n";
        dept = "Computer Science";
    }
    
    Teacher(string name, string dept, int age){
        cout<<"Hi I am a parameterized constructor\n";
        this->name = name ;
        this->age = age;
        this->dept = dept;
    }

    void getInfo() {
        cout<<"The name is "<<name<<", age is "<<age<<" and department is "<<dept<<endl;
    }

    /* copy constructor */
    Teacher(Teacher &t) {
        name = t.name;
        dept = t.dept;
        age = t.age;
    }
};


int main() {
    Teacher t1;
    t1.name = "Bibhu";
    t1.getInfo(); 

    Teacher t2("Singh","ECE",30);
    t2.getInfo();
    
    Teacher t3(t2); 
    t3.name = "Kumar"; 
    t3.getInfo();

    return 0;
}
