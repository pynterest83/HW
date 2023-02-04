#include <bits/stdc++.h>
using namespace std;

int main()
{
    int y,y0,x,x0,m,m0,d,d0;
    cin >> d >> m >> y;
    y0=y-(14-m)/12;
    x=y0+y0/4-y0/100+y0/400;
    m0=m+12*((14-m)/12)-2;
    d0=(d+x+31*m0/12)%7;
    if (d0==0) cout << "Sunday";
    else if (d0==1) cout << "Monday";
    else if (d0==2) cout << "Tuesday";
    else if (d0==3) cout << "Wednesday";
    else if (d0==4) cout << "Thursday";
    else if (d0==5) cout << "Friday";
    else if (d0==6) cout << "Saturday";
}
