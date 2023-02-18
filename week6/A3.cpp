#include <iostream>

using namespace std;

struct Point {
    double x;
    double y;
};

Point mid_point(const Point& p1, const Point& p2) {
    Point mid_point;
    mid_point.x = (p1.x + p2.x) / 2;
    mid_point.y = (p1.y + p2.y) / 2;

    return mid_point;
}

int main() {
    Point p1;
    Point p2;

    cin >> p1.x >> p1.y >> p2.x >> p2.y;

    Point mid = mid_point(p1, p2);

    cout << "Mid-point: (" << mid.x << ", " << mid.y << ")" << endl;

    return 0;
}
