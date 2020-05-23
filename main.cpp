#include <iostream>
#include "SparseArray.h"
#include "Z3.h"

void foo(const SparseArray<int,3>& a){
    cout<<"<<>>"<<endl;
    SparseArray<int, 3>:: Index iCR;
    iCR = 1,2,3;
    SparseArray<int,3>::const_reference cr = a[iCR];
    SparseArray<int,3>::const_reference cr2 = *a.begin();
    SparseArray<int,3>::const_iterator ci = a.begin();
    ci++;



}
int main() {


    SparseArray<int,3> tablica;
    SparseArray<int,3>::Index i;
    i[0] = 1;
    i[1] = 2;
    i[2] = 7;
    tablica[i] = 20;
    tablica[i] = 0;
    tablica.realShow();

    cout<<"====="<<endl;

    SparseArray<int,4> tablicaR;
    SparseArray<int,4>::Index iR;
    iR = 1,2,1,2;
    SparseArray<int,4>::reference r = tablicaR[iR]; // (*)
    tablicaR.realShow();
    int liczba = r; // (**)
    cout << liczba << endl; // wypisze na ekran zero
    r = 0; // (***)
    r = 5; // (****)
    cout<<(int)r<<endl;
    tablicaR.realShow();
    r = 0;
    tablicaR.realShow();

    cout<<"====="<<endl;

    SparseArray<int, 3> tabCR;
    SparseArray<int, 3>:: Index iCR;
    iCR = 1,2,3;
    tabCR[iCR] = 2;
    iCR = 5,2,1;
    tabCR[iCR] = 50;
    iCR = 51,22,21;
    tabCR[iCR] = 121;
    tabCR.show();

    foo(tabCR);
    cout<<"====="<<endl;

    SparseArray<int,5> tablica_IT;
    SparseArray<int,5>::Index i_IT;
    i_IT = 1,2,1,2,4;
    tablica_IT[i_IT] = 7;
    i_IT = 1,2,4,5,6;
    tablica_IT[i_IT] = 21;


    SparseArray<int,5>::iterator b = tablica_IT.begin();
    cout << b.key() << " " << b.value() << endl;
    SparseArray<int,5>::reference r_It = *b;
    ++b;
    cout << b.key() << " " << b.value() << endl;
    ++b;

    SparseArray<int,1> tab10;

    //    ++b10;

    return 0;
}

//SparseArray<int,3> tablica;
//SparseArray<int,3>::Index i;
//i[0] = 1;
//i[1] = 2;
//i[2] = 7;
//tablica[i] = 124;
//i = 1,5,7;
//i = 2,4,1;
//i = 2,1;
//i = 1,4;
//i = 2124,124,124;
//i = 2141,124;
//tablica[i] = 16;
//tablica[i] = 0;
//tablica.realShow();
//i = 124,12414,124;
//
//SparseArray<Z3, 3> tabZ;
//SparseArray<Z3, 3>:: Index j;
//j = 4,2,3;
//tabZ[j] = Z3(4);
//j = 1,4,1;
//tabZ[j] = Z3(2);
//j = 2,4,1;
//tabZ[j] = Z3(1);
//tabZ.show();
//cout<<tabZ[j]<<endl;
//j = 1,4,1;
//cout<<tabZ[j]<<endl;
//
//j = 1,2;
//j = 1;
//j = 1,2,4;
//tabZ[j] = Z3(3);
//tabZ.show();
//tabZ.realShow();
//tabZ.size();
//

