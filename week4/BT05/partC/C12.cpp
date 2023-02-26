#include <bits/stdc++.h>
using namespace std;
int C(int k, int n) {
    if (k==0 || k==n)return 1;
    if (k==1) return n;
    return C(k-1, n-1)+C(k, n-1);
}

int main(){
    int n,k;
    do{
    cin >> n >> k;
    if (n<0||k<0) return 0;
        cout << C(k,n) << endl;
    } while (n!=-1&&k!=-1);
}