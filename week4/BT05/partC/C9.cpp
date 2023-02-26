#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int rand_(int N){
    srand(time(NULL));
    return rand()%N;
}

int main(){
    int N;
    cin >> N;
    cout << rand_(N);
}