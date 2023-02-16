#include <iostream>

using namespace std;

int main(){
    int a[10];
    char b[10];
    int x,y;
    
    for (int i=0; i<3; i++){
        cout << &a[i] << " " << endl;
    }
    // mỗi phần tử cách nhau 4, bằng với độ lớn dữ liệu int
    cout << endl;

    for (int i=0; i<3; i++){
        cout << (void *)&b[i] << " " << endl;
    }
    // mỗi phần tử cách nhau 1, bằng với độ lớn dữ liệu char 
    cout << endl;
    
    cout << &x << endl;
    cout << &a << endl;
    cout << &b << endl;
    cout << &y << endl;
    // Biến x sẽ có địa chỉ gần nhất với địa chỉ của mảng a, và biến y sẽ có địa chỉ xa nhất so với mảng a.
}