#include <iostream>
#include <cstring>

using namespace std;

int count(char *a, char *b){
    int lena = strlen (a);
    int lenb = strlen (b);
    int cnt=0;

    for (int i=0; i<lenb-lena+1; i++){
        if (strncmp(b+i,a,lena)==0) cnt++;
    }

    return cnt;
}

int main(){
    char *a = "hello";
    char *b = "hellohello";

    cout << count(a,b);
    return 0;
}