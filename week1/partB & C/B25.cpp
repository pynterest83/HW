#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a[5];
    cin >> a[0] >> a[1] >> a[2] >> a[3] >> a[4];
    for (int i=0; i<5;i++)
    {
        int less=0, greater=0;
        for (int j=0;j<5;j++)
        {
            if (j!=i&&a[j]>a[i]) greater++;
            if (j!=i&&a[j]<a[i]) less++;
        }
        if (less==2 && greater==2)
        {
            cout << a[i];
            break;
        }
    }
}