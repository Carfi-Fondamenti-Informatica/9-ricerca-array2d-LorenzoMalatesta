#include <iostream>
#include "lib.h"
using namespace std;

int main() {
    char l[10][20], n[20];

    for (int i=0; i<10; i++) {
        for (int j=0; j<20; j++) {
            l[i][j] = ' ';
        }
    }
    for (int j=0; j<20; j++) {
        n[j] = ' ';
    }


    for (int i=0; i<10; i++) {
        cin >> l[i];
    }
    cin >> n;

    int x = ricerca(l, n);
    if (x>=0) {
        cout << x;
    } else {
        cout << "non presente";
    }

    return 0;
}
