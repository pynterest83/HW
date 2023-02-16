#include <iostream>

using namespace std;

int main() {
    int a = 10;
    int &b = a;

    cout << &a << endl;
    cout << &b << endl;

    return 0;
}
// 2 biến có thể coi như 1 vì có cùng địa chỉ vùng nhớ và giá trị, chỉ có tên gọi là khác nhau
// không thể
// có thể 
