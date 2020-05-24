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
    SparseArray<int,3>::const_iterator ci2 = a.begin();
    ci++;
    cout<<ci.key()<<" "<<ci.value()<<endl;
    ci++;
    cout<<ci.key()<<" "<<ci.value()<<endl;
    cout<<(int)*ci<<endl;
//    ci++;
//    cout<<ci.key()<<" "<<ci.value()<<endl;
//    a.realShow();
    //    ci++;

}
int main() {
  

    return 0;
}

