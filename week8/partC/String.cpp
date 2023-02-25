#include <iostream>
#include <cstring>

using namespace std;

struct String{
    char* str;
    int len;
    String(const char* s){
        len = strlen(s);
        str = new char[len + 1];
        strcpy(str, s);
    }
    
    ~String(){
        delete[] str;
    }

    void print(){
        cout << str << endl;
    }

    void append(const char* s){
        //create a new string with the new length
        int newLen = len + strlen(s);
        char* tmp = new char[newLen + 1];
        
        //copy the old string into the new string
        strcpy(tmp, str);
        strcat(tmp, s);
        
        //delete the old string
        delete[] str;

        //upadte the pointer
        str = tmp;
        len = newLen;
    }
};

int main(){
    String s("Chu Huy");
    s.print();
    s.append(" Quang");
    s.print();

    return 0;
}