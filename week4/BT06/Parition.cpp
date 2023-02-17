#include <bits/stdc++.h>

using namespace std;

void print(int n, vector<int> res){
    if (n==0){
        for (int i=0; i<res.size(); i++){
            cout << res[i] << " ";
        }
        cout << endl;
        return;
    }
    for (int i=1; i<=n; i++){
        if (res.empty() || i>=res.back()){
            res.push_back(i);
            print (n-i, res);
            res.pop_back();
        }
    }
}

int main(){
    int n;
    cin >> n;
    vector<int> res;
    print(n,res);
    
    return 0;
}