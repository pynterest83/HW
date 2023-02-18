#include <bits/stdc++.h>

using namespace std;

int count_even(int *a, int size){
    int cnt=0;
    for (int i=0; i<size; i++){
        if (a[i]%2==0) cnt++;
    }
    return cnt;
}

int main(){
    int a[6]={1,2,3,4,5,6};
    
    cout << count_even(a, 3) << endl;
    cout << count_even(&a[3], 3) << endl;
}