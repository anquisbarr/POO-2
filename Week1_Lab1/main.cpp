#include <iostream>
#include "area_compuesta.cpp"
using namespace std;

int main() {
    //Figura * figura = new Figura();
    Figura * figura = new Rectangulo(0,0,positivo,5,5);
    //Aplicacion correcta del polimorfismo
    cout<<figura->calcularArea() <<endl;
    return 0;
}