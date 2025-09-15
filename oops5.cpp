#include<iostream>
#include<cmath>
using namespace std;

class point{
    int a,b;
    friend int dist(point,point);
public:
    point(int a ,int b) {
        this->a = a;
        this->b = b;
    }
};

int dist(point o1, point o2) {
    int x = o2.a - o1.a;
    int y= o2.b - o1.b;
    return sqrt(x*x+y*y);
}

int main() {
    point p(4,7);  /* implicit call */
    point q = point(7,3) ; /* Explicit call */
    
    cout<<dist(p,q)<<endl;  

    return 0;
}