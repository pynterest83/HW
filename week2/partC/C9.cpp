#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a,b;
    int mina=INT_MAX;
    int minb=INT_MAX;
    for (int i=0; i<n; i++){
        cin >> a >> b;
        if (a<mina) mina=a;
        if (b<minb) minb=b;
    }
    cout << mina*minb;
}