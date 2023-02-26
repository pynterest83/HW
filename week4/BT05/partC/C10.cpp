#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

bool isDivisible(int a, int b, int c){
    return (a+b+c)%25==0;
}

int main(){
    srand(time(NULL));

    int N; cin >> N;
    int a[10];
    for(int i=0; i<N; i++){
        a[i] = rand()%50;
    }
    for (int i=0; i<N-2; i++){
        for (int j=i+1;j<N-1; j++){
            for (int k=j+1; k<N; k++){
                if (isDivisible(a[i], a[j], a[k])){
                    cout << a[i] << " " << a[j] << " " << a[k] << endl;
                }
            }
        }
    }

    return 0;

}