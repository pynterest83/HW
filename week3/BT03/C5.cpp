#include <bits/stdc++.h>
using namespace std;
const int ROW=100
const int COL=100
int main()
{
	int a[ROW][COL]={0};
	int m,n;
	cin >> m >> n;
    int b[m * n];
    for (int i=0; i<m*n; i++){
        b[i]=i+1;
    }
    int z = 0;
    int e = 0;
    int d = 0;
    int x = m;
    int y = n;

    while (e<x && d<y){
        // 1. Duyệt dòng đầu tiên của ma trận B
        for (int i = d; i < y; i++)
        {
            a[e][i] = b[z];
            z++;
        }

        e++;

        // 2. Duyệt cột cuối cùng của ma trận B
        for (int i = e; i < x; i++)
        {
            a[i][y - 1] = b[z];
            z++;
        }

        y--;

        // 3. Duyệt dòng cuối cùng của ma trận B
        if (e < x)
        {
            for (int i = y - 1; i >= d; i--)
            {
                a[x - 1][i] = b[z];
                z++;
            }
            x--;
        }

        // 4. Duyệt dòng còn lại của ma trận B
        if (d < y)
        {
            for (int i = x - 1; i >= e; i--)
            {
                a[i][d] =b[z];
                z++;
            }
            d++;
        }

    }
    
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}
