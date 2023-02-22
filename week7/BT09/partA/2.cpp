#include <iostream>

using namespace std;

int main(){
    int* p = new int;
    int* p2 = p;
    *p = 10;
    delete p; 
    *p2 = 100;
    cout << *p2; // lỗi do p2 được trỏ đến p đã bị xóa bộ nhớ 
    delete p2;
}