#include <iostream>
#include "SparseArray.h"
#include "Z3.h"

void foo(const SparseArray<int,3>& a){
    for( SparseArray<int,3>::const_iterator r = a.begin();r!=a.end();r++)
    {cout << r.key() << " : " << r.value() << endl;}

    cout << a.size() << endl;
//    a.realShow();

    SparseArray<int,3>::Index i;
    i = 1,2,3;

    cout<<"======"<<endl;
    SparseArray<int,3>::const_reference r = a[i];
    int liczba = r;
    cout<<liczba<<endl;
    a.realShow();

}
int main() {
    SparseArray<int,3> tablica;
    SparseArray<int,3>::Index i;
    SparseArray<int,3>::Index j;
    SparseArray<int,3>::Index k;
    SparseArray<int,3>::Index a;
    SparseArray<int,3>::Index b;
    SparseArray<int,3>::Index c;
    i = 1,2,1;
    j = 0,5,7;
    k = 3,4,1;
    a = 4,0,0;
    b = 5,1,1;
    c = 6,0,0;
    tablica[i] = 10;
    tablica[j] = 6;
    tablica[k] = 8;
    tablica[a] = 9;
    tablica[b] = 10;
    tablica[c] = 11;
    tablica[j] = int();
    tablica[i] = int();
    tablica[j] = int();
    tablica[k] = int();
    tablica[a] = int();
    tablica[b] = int();
    tablica[c] = int();
    tablica[i] = 10;
    tablica[j] = 6;
    tablica[k] = 8;
    tablica[a] = 9;
    tablica[b] = 10;
    tablica[c] = 11;

    foo(tablica);



    return 0;
}

