//Kamil Gajewski


#ifndef SPARSE_ARRAY_SPARSEARRAY_H
#define SPARSE_ARRAY_SPARSEARRAY_H
#include <iostream>
#include <map>
#include <stdlib.h>
#include <stdexcept>

using namespace std;

template <class V, unsigned D>
class SparseArray {
public:

    class Index{
    private:
        unsigned int *indexArray;
        int counter;
    public:
        Index(){
            indexArray = (unsigned *)calloc(D, sizeof(unsigned));
            counter = 0;
        }

        Index(const Index& ind){
            counter = ind.counter;
            unsigned *arr = (unsigned *)calloc(D, sizeof(D));
            for(int i = 0; i<D; i++){
                arr[i] = ind.indexArray[i];
            }
            delete indexArray;
            indexArray = arr;
        }
        ~Index(){
            indexArray;
        }

        unsigned& operator[](int id){
            return indexArray[id];
        }
        unsigned operator[](int id) const{
            return indexArray[id];
        }

        Index& operator,(unsigned a){
            counter++;
            indexArray[this->counter] = a;
            if(counter+1 > D){
                throw runtime_error("Index overflow");
            }
            return *this;
        }

        Index& operator=(int a){
            counter = 0;
            for(unsigned i = 0; i<D; i++){
                indexArray[i] = 0;
            }
            indexArray[0] = a;
            return *this;
        }

        Index& operator=(const Index& ind){
            if(this == &ind)
                return *this;

            unsigned *arr = (unsigned *)calloc(D, sizeof(D));
            for(int i = 0; i<D; i++){
                arr[i] = indexArray[i];
            }

            delete indexArray;
            indexArray = arr;
            return *this;
        }

        bool operator==(const Index& ind){
            for(int i = 0; i<D; i++){
                if(indexArray[i] != ind.indexArray[i]){
                    return false;
                }
            }
            return true;
        }

        friend bool operator<(const Index& ind1, const Index& ind2){
            for(int i = 0; i<D; i++){
                if(ind1[i] < ind2.indexArray[i]){
                    return true;
                }
                if(ind1[i]> ind2.indexArray[i]){
                    return false;
                }
            }
            return false;
        }

        friend ostream& operator<<(ostream& o, const Index& ind) {
            o<<"{";
            for(int i = 0; i<D-1; i++){
                o<<ind.indexArray[i]<<",";
            }
            o<<ind.indexArray[D-1];
            o<<"}";
            return o;
        }
    };
    V& operator[](const Index& ind){
        if(!mapa.count(ind)) {
            V *v1 = new V();
            mapa[ind] = *v1;
            return mapa[ind];
        } else{
            return mapa[ind];
        }
    }



    SparseArray(){}
    ~SparseArray(){
        mapa.clear();
    }
    map<Index, V> mapa;

    void show() {
        V *v = new V();
        bool oneOrMore = false;
        typename std::map<Index, V>::iterator it = mapa.begin();

        while (it!=mapa.end()) {
            if (it->second == *v) {
                it++;
                continue;
            } else {
                oneOrMore = true;
                cout << it->first << " = " << it->second << endl;
                ++it;
            }
        }
        if(!oneOrMore || mapa.begin() == mapa.end()){
            cout<<"Pusta tablica"<<endl;
        }
        delete v;

        cout<<endl;
    }

};


#endif //SPARSE_ARRAY_SPARSEARRAY_H
