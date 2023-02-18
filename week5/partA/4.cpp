#include <iostream>
#include <cmath>

using namespace std;

int search(int *a, int key, int low, int high){
    if ( low > high ) return -1;
    int mid=(low+high)/2;
    if (*(a+mid)==key) return mid;
    if (*(a+mid) > key) search(a,key,low,mid-1);
    return search(a,key,mid+1,high);
}

int main(){
    int a[5]={1,2,3,4,5};
    int key=3;
    cout << search(a,key,0,4);
    return 0;
}