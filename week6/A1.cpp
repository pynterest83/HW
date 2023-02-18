#include <bits/stdc++.h>

using namespace std;

struct Point{
    int x;
    int y;
    void print();
};

void Point::print(){
    cout << "( " << x << ", " << y << " )";
}

int main(){
    Point a;
    a.x=1;
    a.y=1;
    a.print();
}