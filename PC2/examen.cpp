//
// Created by Sebastian Q.B on 10/9/2019.
//
#include <vector>
#include <string>
#include <fstream>
#include <sstream>
#include "postulante.h"
#include <iostream>

using namespace std;
template <class P>
class Examen {
private:
    vector<P *>* postulantes;
public:
    Examen(string nombreArchivoPostulantes) {
        postulantes = new vector<P*>();
        string datosPostulante;

        fstream* archivo = new fstream(nombreArchivoPostulantes,ios_base::in);
        if(archivo){
            while(getline(*archivo,datosPostulante)){
                //P * nuevoPostulante = new P(nuevoPostulante);
                //string temp = (getline(*archivo,datosPostulante,','));
                postulantes -> push_back(datosPostulante);
            }
            archivo -> close();
        }
        delete archivo;
    }

    void ordenar() {

    }
    void imprimir(){
        for(P* Postulante:*postulantes)
            cout << Postulante->getNombreCompleto() <<endl;
    }
    void listarIngresantesCiencias(string nombreArchivoPostulantes) {
        postulantes = new vector<P*>();


    }

    void listarIngresantesLetras(string nombreArchivoPostulantes) {

    }

    ~Examen(){
        for (auto postulante:*postulantes)
            delete postulante;
        delete postulantes;
    }
};

