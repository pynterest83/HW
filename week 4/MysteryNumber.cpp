#include <bits/stdc++.h>
int a[100];
int b[100];
using namespace std;
int main(){
    int n;
    cin >> n;
    for (int i=0; i<n; i++) cin >> a[i];
    for (int i=0; i<n+1; i++) cin >> b[i];
    sort(a,a+n);
    sort(b,b+n+1);
    for (int i=0; i<n+1; i++){
        if (a[i]!=b[i]){
            cout << b[i];
            break;
        }
    }
}