#include <iostream>
using namespace std;

struct Point {
    int x;
    int y;
};

void passByValue(Point p) {
    cout << &p << endl;
}

void passByReference(Point& p) {
    cout << &p << endl;
}

int main() {
    Point p1;
    
    p1.x=1;
    p1.y=2;

    cout << &p1 << endl;
    
    passByValue(p1);
    
    passByReference(p1);

    return 0;
}
