#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    int sum=0;
    for (int i=0;i<n;i++)
    {
        cin >> a[i];
        sum+=a[i];
    }
    int mean = sum*1.0/n;
    cout << mean << endl;
    int max=a[0], min=a[0];
    for (int i=0;i<n;i++)
    {
        if (a[i]>max) max=a[i];
        if (a[i]<min) min=a[i];
    }
    cout << max << endl;
    cout << min;
}