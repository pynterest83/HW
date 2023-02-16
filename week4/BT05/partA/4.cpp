#include <iostream>
#include <string>
using namespace std;

void printArrayAddress(int *arr) {
    cout << arr << endl;
}

void printStringAddress(string str) {
    cout << &str << endl;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    cout << arr << endl;
    printArrayAddress(arr);

    cout << endl;

    string str = "Hello World";
    cout << &str << endl;
    printStringAddress(str);

    return 0;
}

// Kết quả:
// Địa chỉ của mảng trước khi truyền vào hàm là: 0x7ffed5fc2270
// Địa chỉ của mảng là: 0x7ffed5fc2270
// Địa chỉ của string trước khi truyền vào hàm là: 0x7ffed5fc2290
// Địa chỉ của string là: 0x7ffed5fc2238
// Comment:
// - Mảng được truyền theo cơ chế pass-by-reference vì địa chỉ của mảng được truyền vào hàm.
// - C++ string được truyền theo cơ chế pass-by-value vì địa chỉ của string bên trong hàm khác với địa chỉ của string trước khi truyền vào hàm.
