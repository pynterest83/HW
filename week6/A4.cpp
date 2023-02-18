#include <iostream>

using namespace std;

struct Point {
    int x;
    int y;
};

int main(){
    Point p;
    cout << &p << endl;
    cout << &p.x << endl;
    cout << &p.y << endl;
}

// địa chỉ biến p cùng địa chỉ biến p.x và địa chỉ biến y cách 1 khoảng bằng độ lớn của kiểu int