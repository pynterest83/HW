#include <bits/stdc++.h>
using namespace std;

template<class T>

void swapNumber(T & x, T & y){
    T temp = x;
    x = y;
    y = temp;
}

struct SV{
    int id;
    double toan;
    double ly;
    double anh;
    double tb(){
        return (toan+ly+anh)/3;
    }
};

int main(){
    int n;
    cin >> n;
    SV a[n];
    for (int i=0; i<n; i++){
        cin >> a[i].id >> a[i].toan >> a[i].ly >> a[i].anh;
    }
    for (int i=0; i<n-1; i++){
        for (int j=i+1; j<n; j++){
            if (a[i].toan>a[j].toan) swap(a[i],a[j]);
        }
    }
    for (int i=0; i<n-1; i++){
        for (int j=i+1; j<n; j++){
            if (a[i].ly>a[j].ly) swap(a[i],a[j]);
        }
    }
    for (int i=0; i<n-1; i++){
        for (int j=i+1; j<n; j++){
            if (a[i].tb()>a[j].tb()) swap(a[i],a[j]);
        }
    }
}
