#include <iostream>

using namespace std;

int main(){
    char* a = new char[10];
    char* c = a + 3;
    for (int i = 0; i < 9; i++) a[i] = 'a'; 
    a[9] = '\0';
    cerr <<"a: " << "-" << a << "-" << endl;
    cerr <<"c: " << "-" << c << "-" << endl;
    delete c; // sử dụng lệnh delete với 1 con trỏ không phải được cấp phát động, cần phải xóa a
    cerr << "a after deleting c:" << "-" << a << "-" << endl; // Sau khi thực hiện lệnh delete c, con trỏ a trỏ đến một vùng nhớ đã bị giải phóng nên sẽ không kiếm soát được
}