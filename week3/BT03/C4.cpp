#include <bits/stdc++.h>
using namespace std;
const int MAXN = 15;
int n, m;
char mapMine[MAXN][MAXN];
int dx[8] = {-1, -1, -1, 0, 1, 1, 1, 0};
int dy[8] = {-1, 0, 1, 1, 1, 0, -1, -1};

void inp(){
    cin >> m >> n;
    for (int i=0; i<m; i++){
        for (int j=0; j<n; j++){
            cin >> mapMine[i][j];
        }
    }
}
int cnt_mine (int x, int y){
    int cnt=0;
    for (int i=0; i<8; i++){
        int px=x+dx[i];
        int py=y+dy[i];
        if (px>=0 && px<m && py>=0 && py<n && mapMine[px][py]=='*') cnt++; 
    }
    return cnt;
}

void print(){
    for (int i=0; i<m; i++){
        for (int j=0; j<n; j++){
            if (mapMine[i][j]=='*') cout << "* ";
            else cout << cnt_mine(i,j) << " ";
        }
        cout << endl;
    }
}
int main(){
    inp();
    print();
    return 0;
}