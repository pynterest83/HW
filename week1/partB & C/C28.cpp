#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<string> hours{"midnight","am","noon","pm"};
    int cnt=0;
    int j=0;
    cout << 12 << " " << hours[cnt] << endl;
    cnt++;
    for (int i=1;i<24;i++)
    {
        if (i==12)
        {
            cout << i << hours[cnt+1] <<endl;
            cnt+=2;
            j++;
        }
        cout << i-j*12 << hours[cnt] << endl;
    }
}