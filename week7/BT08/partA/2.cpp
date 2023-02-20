#include <iostream>

using namespace std;

int main( )
{ 
//    char a[4] = "abc"; 
//    for (char *cp = a; (*cp) != '\0'; cp++) {
//       cout << (void*) cp << " : " << (*cp) << endl;
//    } 
//    return 0;

// int a[4] = {1, 2, 3, 4};
// for (int *cp = a; cp < a+4; cp++) {
//     cout << (void*) cp << " : " << (*cp) << endl;
// }

double a[4]={1.1, 2.1, 3.1, 4.1};
for (double *cp = a; cp < a+4; cp+=2){
    cout << (void*) cp << ": " << (*cp) << endl; 
}

}
// 0x9b983ff7d4 : a
// 0x9b983ff7d5 : b
// 0x9b983ff7d6 : c
// kiểu char cách nhau 1 byte 

// 0x1338fffa90 : 1
// 0x1338fffa94 : 2
// 0x1338fffa98 : 3
// 0x1338fffa9c : 4
// kiểu int cách nhau 4 byte 

// 0xdbed3ffe20: 1.1
// 0xdbed3ffe28: 2.1
// 0xdbed3ffe30: 3.1
// 0xdbed3ffe38: 4.1
// kiểu double cách nhau 8 byte

// cách nhau 16 byte 