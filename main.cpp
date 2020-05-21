#include <iostream>
#include "SparseArray.h"
int main() {

    SparseArray<int,3> tablica;
    SparseArray<int,3>::Index i;
    i[0] = 1;
    i[1] = 2;
    i[2] = 7;
    tablica[i] = 124;
    i = 1,5,7;
    i = 2,4,1;
    i = 2,1;
    i = 1,4;
    i = 2124,124,124;
    i = 2141,124;
    tablica[i] = 16;
    tablica.show();

    return 0;
}
