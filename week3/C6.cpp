#include <bits/stdc++.h>
using namespace std;
void printMatrix(const int& n){
    int a[n][n];

    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            a[i][j]=0;
        }
    }
    int row=n-1;
    int col=n/2;

    int num=2;
    a[row][col]=1;
    while (num<=n*n){
        if (a[(row+1)%n][(col+1)%n]==0){
            a[(row+1)%n][(col+1)%n]=num;
            num++;
            row=(row+1)%n;
            col=(col+1)%n;
        }
        else {
            a[(row-1)%n][col]=num;
            num++;
            row=(row-1)%n;
            col=col;
        }
    }

    for (int i = n-1; i >= 0; i--) {
        for (int j = 0; j < n; j++) {
            cout << a[i][j] << "\t";
        }
        cout << endl;
    }
}
int main(){
    int n;
    cin >> n;
    if (n%2==0) return 0;
    printMatrix(n);
}