/* SHALLOW COPY */

#include<iostream>
using namespace std;

class Student {
public:
    string name;
    float *cgpaptr;

    Student(string name,float cgpa) {
        this->name = name;
        cgpaptr = new float;
        *cgpaptr=cgpa;
    }
    Student(Student &obj) {
        this->name=obj.name;
        this->cgpaptr=obj.cgpaptr;
    }
    void getInfo(){
        cout<<"Name is "<<name<<endl;
        cout<<"CGPA is "<<*cgpaptr<<endl;
    }
};

int main() {
    Student s1("Rahul", 8.5);
    Student s2(s1);

    s1.getInfo();
    s2.getInfo();

    *(s2.cgpaptr)=9.4;

    s1.getInfo();
    s2.getInfo();
    
    return 0;

}
/*OUTPUT*/
/*Name is Rahul
CGPA is 8.5
Name is Rahul
CGPA is 8.5
Name is Rahul
CGPA is 9.4
Name is Rahul
CGPA is 9.4
*/




/* DEEP COPY */

#include<iostream>
using namespace std;

class Student {
public:
    string name;
    float *cgpaptr;

    Student(string name,float cgpa) {
        this->name = name;
        cgpaptr = new float;
        *cgpaptr=cgpa;
    }
    Student(Student &obj) {  /* Deep copy constructor */
        name = obj.name;
        cgpaptr = new float;  /* Allocate new memory */
        *cgpaptr = *(obj.cgpaptr);  /* Copy the actual value */
    }
    void getInfo() {
        cout<<"Name is "<<name<<endl;
        cout<<"CGPA is "<<*cgpaptr<<endl;
    }
};

int main() {
    Student s1("Rahul", 8.5);
    Student s2(s1);

    s1.getInfo();
    s2.getInfo();

    *(s2.cgpaptr)=9.4;

    s1.getInfo();
    s2.getInfo();
    
    return 0;

}

/*OUTPUT*/
/*Name is Rahul
CGPA is 8.5
Name is Rahul
CGPA is 8.5
Name is Rahul
CGPA is 8.5
Name is Rahul
CGPA is 9.4 */