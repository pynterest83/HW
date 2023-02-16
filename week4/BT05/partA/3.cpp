#include <iostream>

using namespace std;

void print(int a, int& b){
    cout << &a << endl;
    cout << &b << endl;
}

int main(){
    int a,b;
    cout << &a << endl;
    cout << &b << endl;

    print(a,b);
}

//  0x90619ff7fc
//  0x90619ff7f8
//  0x90619ff7d0
//  0x90619ff7f8
// 2 biến b có cùng địa chỉ còn 2 biến a khác địa chỉ