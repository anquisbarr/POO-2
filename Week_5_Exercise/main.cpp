#include <iostream>
#include "conjunto.cpp"
#include "string"

int main() {
    vector<int>* elementosA = new vector <int>();
    elementosA->push_back(10);
    elementosA->push_back(20);
    elementosA->push_back(30);

    vector<int>* elementosB = new vector <int>();
    elementosB->push_back(100);
    elementosB->push_back(200);
    elementosB->push_back(10);

    Conjunto<int>* a = new Conjunto<int>(elementosA);
    Conjunto<int>* b = new Conjunto<int>(elementosB);
    cout <<"A = ";
    a->mostrarElementos();
    cout <<"B = ";
    b->mostrarElementos();
    cout <<"Union = ";
    a->unionElementos(b)->mostrarElementos();
    cout <<"Interseccion = ";
    a->interseccionElementos(b)->mostrarElementos();
    cout <<"Diferencia = ";
    a->diferenciaElementos(b)->mostrarElementos();

    delete a;
    delete b;
    return 0;
}