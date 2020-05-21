#include <iostream>
#include "SparseArray.h"
#include "Z3.h"
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
    i = 124,12414,124;

    SparseArray<Z3, 3> tabZ;
    SparseArray<Z3, 3>:: Index j;
    j = 4,2,3;
    tabZ[j] = Z3(4);
    j = 1,4,1;
    tabZ[j] = Z3(2);
    j = 2,4,1;
    tabZ[j] = Z3(1);
    tabZ.show();
    cout<<tabZ[j]<<endl;
    j = 1,4,1;
    cout<<tabZ[j]<<endl;


    return 0;
}
