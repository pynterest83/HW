#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    do
    {
        cin >> x;
        if (x>0 && x%5==0) cout << x/5 << endl;
        else cout << -1;
        
    } while (x!=-1);
}