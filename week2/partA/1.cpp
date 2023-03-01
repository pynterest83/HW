#include <iostream>
#include <cmath>

using namespace std;

int main(){
    // a
    for (int i = 2; i <= 100; i += 2) {
        cout << i << endl;
    }

    // b
    int i = 2;
    while (i <= 100) {
        cout << i << endl;
        i += 2;
    }

    // c
    int i = 2;
    while (i <= 100) {
        if (i % 2 == 0) {
            cout << i << endl;
        }
    }
    i++;

    // d
    for (int i = 2; i <= 100; i++) {
        if (i % 2 != 0) {
            continue;
        }
        cout << i << endl;
        if (i >= 100) {
            break;
        }
    }

    // e
    for (int i = 1; i <= 100; i++) {
        if (i % 2 != 0) {
            continue;
        }
        cout << i << endl;
    }


}
