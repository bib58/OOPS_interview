// #include<iostream>
// using namespace std;

// template <class Temp>
// class Vector {
// public: 
//     Temp *arr;
//     int size;
//     Vector(int s) {
//         size = s;
//         arr = new Temp[size];
//     }
//     Temp dot_product(Vector &v) {
//         Temp d= 0;
//         for(int i = 0 ; i < size ; i++) {
//             d += this->arr[i] * v.arr[i];
//         }
//         return d;
//     }
// };
// int main() {
//     Vector <float>v1(3);
//     v1.arr[0] = 4.7;
//     v1.arr[1] = 3.2;
//     v1.arr[2] = 1.4;

//     Vector <float>v2(3);
//     v2.arr[0] = 4.9;
//     v2.arr[1] = 2.5;
//     v2.arr[2] = 1.6;

//     float res = v1.dot_product(v2);
//     cout << res << endl;
        
//     return 0;
// }











// #include<iostream>
// using namespace std;

// template <class t1 = int , class t2 = float>
// class singh {
// public:
//     t1 a; t2 b;
//     singh(t1 a , t2 b) {
//         this->a = a;
//         this->b = b;
//     }
//     void display() {
//         cout << "The value of a is " << a << endl;
//         cout << "the value of b is " << b << endl;
//     } 
// };
// int main() {
//     singh <> s_1 (4.9 , 6.9);
//     s_1.display();
    
//     singh <float,char> s_2 (4 , 'f');
//     s_2.display() ;
    
//     return 0;
// }





// #include<iostream>
// using namespace std;

// template <class t1 , class t2>
// float average(t1 a , t2 b) {
//     float avg = (a+b)/2.0;
//     return avg;
// }

// int main() {
//     float ans = average(5.7 , 4);
//     printf("The average is %.3f" , ans);

//     return 0;
// }







// #include<iostream>
// using namespace std;

// template <class T>
// void swapp(T &a, T &b) {
//     T temp = a;
//     a = b;
//     b = temp;
// }

// int main() {
//     float x = 5.8;
//     float y = 6.3;
//     swapp(x, y);
//     cout << "X is " << x << " Y is " << y << endl;
//     return 0;
// }




/*Function Overloading*/
// #include<iostream>
// using namespace std;

// template<class T>
// class singh {
// public:
//     T data;
//     singh(T data) {
//         this->data = data;
//     }
//     void display();
// };

// template <class P>
// void singh<P> :: display() {
//     cout << data << endl;
// }

// void func(int a) {
//     cout << "I am first func() " << a << endl;
// }

// template <class Q>
// void func(Q g) {
//     cout << "I am func() with template " << g << endl;
// }

// int main() {
//     singh <int> s_1(6);
//     s_1.display();

//     func(4);   //Exact match takes the priority
//     func('d');

//     return 0;
// }