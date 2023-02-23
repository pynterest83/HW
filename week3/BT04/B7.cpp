#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;

void gen(string inp, int length, string cnt, vector<string> &res){
    if (cnt.length()==length){
        res.push_back(cnt);
        return;
    }

    for (int i=0; i<inp.length(); i++){
        gen(inp, length, cnt + inp[i], res);
    }
}
int main(){
    string inp;
    int length;
    cin >> inp;
    vector<string> res;
    for (int length=2; length <=3; length++){
        gen(inp, length, "", res);
    }

    for (int i=0; i<res.size(); i++){
        cout << res[i] << " ";
    }
    return 0;   
}

