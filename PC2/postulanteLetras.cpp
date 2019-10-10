//
// Created by Sebastian Q.B on 10/9/2019.
//
#include "postulante.h"

class postulanteLetras :public Postulante{
public:
    postulanteLetras(const string &facultad, const string &nombreCompleto, const string &dni, unsigned int lectura,
                     unsigned int redaccion, unsigned int matematica) : Postulante(facultad, nombreCompleto, dni,
                                                                                   lectura, redaccion, matematica) {}

    double calificacion() override {
        double nota = 0;
        nota = (7.5*getRedaccion())+(7.5*getLectura())+(10*getMatematica());
        return nota;

    }
};
