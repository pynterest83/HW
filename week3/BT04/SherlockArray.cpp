#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <math.h>
#include <vector>

using namespace std;

int n;
int a[100010];

int main()
{
    int t;
    cin >> t;
    while(t > 0)
    {
        cin >> n;
        for(int i = 0 ; i < n ; i++)
            cin >> a[i];
        int s1 = 0, s2 = 0;
        for(int i = 0 ; i < n ; ++i)
            s2 += a[i];
        
        bool check = 0;
        for(int i = 0 ; i < n ; i++)
        {
            s2 -= a[i];
            if (s2==s1){
                cout << "YES" << endl;
                check=1;
                break;
            }
            s1 += a[i];
        }
        
        if (!check)
            cout << "NO\n";
        
        t--;
    }
    
    return 0;
}