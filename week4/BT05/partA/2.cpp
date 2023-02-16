#include <iostream>

using namespace std;

int factorial(int x)
{
    if (x == 0) {
        return 1;
    } else {
        int f = x * factorial(x - 1);
        cout << "x = " << x << " at " << &x << endl;
        return f;
    }
}

int main()
{
    int N = 5;
    int result = factorial(N);
    cout << "Factorial of " << N << " is " << result << endl;

    return 0;
}

// mỗi lần gọi stack tốn 16 byte vì khoảng cách mỗi địa chỉ x là 16.