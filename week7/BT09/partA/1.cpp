#include <iostream>
#include <cstring>
using namespace std;

char *concat(const char*str1, const char* str2){
    int len1= strlen(str1);
    int len2= strlen(str2);

    char *res= new char[len1+len2+1];
    strcpy(res, str1);
    strcpy(res + len1, str2);

    return res;
}

int main(){
    const char* s1 = "huy";
    const char* s2 = "quang";
    
    cout << concat(s1,s2);

    return 0;
}