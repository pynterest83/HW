#include <bits/stdc++.h>

using namespace std;

int n;
int a[100][100]; // bien luu toan bo truong hop
int x[100]; // bien luu vi tri cua tung truong hop
bool c[100]; // check cot
bool c1[2*100-1]; // check duong cheo chinh
bool c2[2*100-1]; // check duong cheo phu

bool check(int i, int j){
    if (c[j]==false || c1[i-j+n-1]==false || c2[i+j-2]==false) {
        return false;
    }
    return true;
}

int k=0;
void NQueen (int i){
    for (int j=1; j<=n; j++){
        if (check(i,j)){
            x[i]=j;
            c[j]=false;
            c1[i-j+n-1]=false;
            c2[i+j-2]=false;
            
            if (i==n){
                for (int i=1; i<=n; i++){
                    a[k][i]=x[i];
                }
            }
            else NQueen(i+1);

            k++;
            
            c[j]=true;
            c1[i-j+n-1]=true;
            c2[i+j-2]=true;
        }
    }
}

int main(){
    cin >> n; // nhap n
    memset(c,1,sizeof(c));
    memset(c1,1,sizeof(c1));
    memset(c2,1,sizeof(c2));
    NQueen(1);
    
    cout << k << endl;

    for (int z=0; z<k; z++){
        for (int i=1; i<=n; i++){
            for (int j=1; j<=n; j++){
                cout << (j == a[z][i]) << " ";
                if (j % n == 0)
                    cout << endl;
            }
        }
        cout << endl;
    }

    return 0;
}