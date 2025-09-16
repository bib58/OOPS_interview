#include <iostream>
using namespace std;

class Room {
    float mWidth;
    float mLength;

public:
    Room() : mWidth(0), mLength(0) {}
    Room(float w, float h) : mWidth(w), mLength(h) {}

    // Conversion function
    operator float() {
        return mWidth * mLength;
    }

    float getWidth() { return mWidth; }
    float getLength() { return mLength; }
};

int main() {
    Room objRoom1(2.5, 2.5);
    float fTotalArea;

    fTotalArea = objRoom1;
    /* Here, the compiler sees a mismatch:
    Left side: float, Right side: Room
    To resolve, it looks for a conversion function inside Room.*/

    cout << fTotalArea;

    return 0;
}











/* Polar ↔ Rectangle Conversion */
#include <iostream>
#include <cmath>
using namespace std;

class Rectangle;

class Polar {
    float r, a;
public:
    Polar() : r(0), a(0) {}
    Polar(float radius, float angle) : r(radius), a(angle) {}

    /* Conversion: Polar → Rectangle */
    operator Rectangle() {
        float x = r * cos(a);
        float y = r * sin(a);
        return Rectangle(x, y);
    }

    void display() { cout << "Polar: r=" << r << ", angle=" << a << endl; }
};

class Rectangle {
    float x, y;
public:
    Rectangle() : x(0), y(0) {}
    Rectangle(float a, float b) : x(a), y(b) {}

    /* Conversion: Rectangle → Polar */
    operator Polar() {
        float r = sqrt(x * x + y * y);
        float angle = atan2(y, x);
        return Polar(r, angle);
    }

    void display() { cout << "Rectangle: x=" << x << ", y=" << y << endl; }
};

int main() {
    Polar p(5, 0.785);    // 45°
    Rectangle r = p;      // Polar → Rectangle
    r.display();

    Rectangle r2(3, 4);
    Polar p2 = r2;        // Rectangle → Polar
    p2.display();

    return 0;
}
