#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>

using namespace std;

int *weird_sum(int a, int b){
    int c;
    c=a+b;
    return &c;
}

int main(int argc, char* argv[]){
    
    /*int *px=NULL;
    cout << px;
    cout << *px;
    *px=0;
    return 0;*/

    int a=20, b=25, *pg;
    {
        int g;
        pg=&g;
        g = gcd(a,b);
    }
    
    {
        int temp=100;
        cout << temp << endl;
    }

    cout << *pg;

    return 0;

    cout << weird_sum(a,b) << endl;

    //char c1 = 'a';
    //char *p1 = &a;
    //int *p2 = (int*) p1;
    //*p2 = 'b';

    int *ptr1 = new int;
    int *ptr2 = new int;
    ptr1 = ptr2;

    int* p = new int;
    int* p2 = p;
    *p = 10;
    delete p;
    cout << *p2;
}

// lỗi không kiểm soát được vùng nhớ truy nhập vào 
// lỗi truy cập vào địa chỉ 0 trong bộ nhớ
// không nên trả về biến địa phương 
// lỗi ép kiểu con trỏ char sang int 
// thất thoát bộ nhớ p1 khi cả 2 cùng chỉ vào địa chỉ của p2, địa chỉ vùng nhớ đã được cấp phát của ptr1 không được thu hồi
// tránh thu hồi bộ nhớ quá sớm vì p2 sẽ trỏ đến 1 vùng nhớ không còn hoạt động