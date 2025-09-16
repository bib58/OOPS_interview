#include <iostream>
using namespace std;

class Room {
public:
    int width;
    int height;
    static int copyConsCount;

    Room() { width = 12; height = 8; }

    Room(Room &r) {
        width = r.width;
        height = r.height;
        copyConsCount++;
    }

    void dispCopyConsCount() {
        cout << copyConsCount;
    }
};
int Room::copyConsCount = 0;

int main() {
    Room objRoom1;                // (1) Default constructor
    Room objRoom2(objRoom1);      // (2) Copy constructor
    Room objRoom3 = objRoom1;     // (3) Copy constructor (another syntax)
    Room objRoom4;                // (4) Default constructor
    objRoom4 = objRoom3;          // (5) Assignment operator
    objRoom4.dispCopyConsCount();
}
