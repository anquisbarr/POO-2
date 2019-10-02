//
// Created by Sebastian Q.B on 9/21/2019.
//
#include <iostream>
#include <vector>
using namespace std;
template <class T>

class Conjunto{
private:
    vector<T>* elementos;
public:
    Conjunto(vector<T> *elementos){
        this->elementos=elementos;

    }

    Conjunto(){
        elementos = new vector<T>;
    }

    vector<T> *getElementos() const {
        return elementos;
    }

    void setElementos(vector<T> *elementos) {
        Conjunto::elementos = elementos;

    }
    //void addElementos(vector<T> * elementos2){
    //    for (int i = 0; i < elementos2->size(); ++i) {
    //        elementos -> push_back(elementos2->at(i));
    //    }
    //}

    bool existeElemento(T e){
        for (T elemento: *elementos)
            if (elemento == e)
                return true;
            else
                return false;
    }


    void addElementos(vector<T> * elementos2){
        for(T e: *elementos2){
            if(! existeElemento(e))
            elementos -> push_back(e);
        }
    }

    Conjunto<T>* unionElementos(Conjunto<T>* c ){
        Conjunto<T> * nuevoConjunto = new Conjunto<T>();
        nuevoConjunto ->addElementos(elementos);
        nuevoConjunto ->addElementos(c->getElementos());
        return nuevoConjunto;
    }

    Conjunto<T>* interseccionElementos(Conjunto<T> * c){
        Conjunto<T>* nuevoConjunto = new Conjunto<T>();
        for (T e: *c->getElementos())
            if (existeElemento(e))
                nuevoConjunto->getElementos()->push_back(e);
        /*for (T e: *elementos)
            if(c->existeElemento(e))
                nuevoConjunto->getElementos()->push_back(e);
        */
        return nuevoConjunto;
    }

    Conjunto<T>* diferenciaElementos(Conjunto<T>* c){
        Conjunto<T>* nuevoConjunto = new Conjunto<T>();
        for(T e: *elementos){
            if (!c->existeElemento(e))
                nuevoConjunto->getElementos()->push_back(e);
        }
        return nuevoConjunto;
    }

    void mostrarElementos(){
        cout<<"{";
        for (T e : *elementos)
            cout<<e<<",";
        cout <<"}"<<endl;
    }

    virtual ~Conjunto() {
        /*for (T e: *elementos)
            delete elementos;
    }*/
    delete elementos;
    }
};
