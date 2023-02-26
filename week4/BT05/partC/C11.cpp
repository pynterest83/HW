#include <iostream>
#include <string>

using namespace std;

string to_binary(int n){
    string res = "";
    while (n!=0){
        int tmp = n%2;
        res = to_string(tmp) + res;
        n /= 2;
    }
    return res;
}

int to_decimal(string s){
    int dec = 0;
    for (int i=0; i<s.length(); i++){
        dec = dec*2 + (s[i]-'0');
    }
    return dec;
}

int main(){
    int n; cin >> n;
    string bin = to_binary(n);
    cout << bin << endl;
    cout << to_decimal(bin) << endl;
    return 0;
}