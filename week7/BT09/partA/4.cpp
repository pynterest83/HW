#include <iostream>

using namespace std;

int main() {
int a = 10;
int* p = &a;
delete p; // giải phóng con trỏ p
// sau khi giải phóng con trỏ p, vùng nhớ mà nó trỏ tới (địa chỉ của biến a) sẽ bị giải phóng.
// địa chỉ của biến a là không xác dịnh sẽ dẫn tới 1 só lỗi
return 0;
}