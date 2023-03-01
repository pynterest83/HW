#include <bits/stdc++.h>
using namespace std;
string read(int n){
    vector<string> unit{"zero","one","two","three","four","five","six","seven","eight","nine"};
    vector<string> dozen{"ten","eleven","twelve","thirteen","fourteen","fifteen","sixteen","seventeen","eighteen","nineteen"};
    vector<string> ty{"zero","ten","twenty","thirty","forty","fifty","sixty","seventy","eighty","ninety"};
    string res="";
    if (n>100) {
        res+=unit[n/100];
        res+=" hundred ";
    }
    n=n%100;
    if (n>=10 && n<20){
        res+=dozen[n%10];
        return res;
    }
    if (n>20) {
        res+=ty[n/10];
        res+="-";
    }
    n=n%10;
    if (n==0) return res;
    else {
        res+=unit[n];
    }
    return res;
}
int main(){
    long long n;
    cin >> n;
    string res="";
    if (n<0) {
        res+="negative ";
        n=-n;
    }
    if (n>=1000000){
        int a=n/1000000;
        res+=read(a);
        res+=" million ";
        int b=n%1000000/1000;
        res+=read(b);
        if (b>0) res+=" thousand ";
        int c=n%1000;
        res+=read(c);
    }
    if (n>=1000&&n<1000000){
        int a=n/1000;
        res+=read(a);
        res+=" thousand ";
        int b=n%1000;
        res+=read(b);
    }
    if (n<1000) res+=read(n);
    cout << res;
}