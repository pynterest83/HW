#include<iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    for(int i=0; i<n; i++) cin >> a[i];

    // Sắp xếp mảng a theo thứ tự tăng dần bằng thuật toán nổi bọt
    for(int i=0; i<n-1; i++)
    {
        for(int j=0; j<n-i-1; j++)
        {
            if(a[j] > a[j+1])
            {
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }

    // Tính tổng thời gian chờ đợi
    int sum = 0;
    for(int i=0; i<n; i++)
    {
        sum += a[i] * (n-i-1);
    }

    cout << sum << endl;
    return 0;
}
