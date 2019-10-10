#include <iostream>
#include "examen.cpp"


int main() {
    cout << "Archivo" <<endl;
    auto postulantes = new Examen<string>("postulantes.csv");
    postulantes -> imprimir();
}