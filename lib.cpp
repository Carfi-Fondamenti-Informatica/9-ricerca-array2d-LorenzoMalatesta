//
// Created by Lorenzo Malatesta on 12/05/22.
//

#include "lib.h"

int ricerca (char lista[10][20], char nome[20]) {
    int risultato=-1;
    for (int i=0; i<10; i++) {
        int c=0;
        for (int j=0; j<20; j++) {
            if (lista[i][j]==nome[j]) {
                c++;
            } else {
                break;
            }
        }
        if (c==20) {
            risultato=i;
        }
    }
    return risultato;
}
