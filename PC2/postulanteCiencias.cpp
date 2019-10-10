//
// Created by Sebastian Q.B on 10/9/2019.
//
#include "postulante.h"

class postulanteCiencias: public Postulante{
public:
    postulanteCiencias(const string &facultad, const string &nombreCompleto, const string &dni, unsigned int lectura,
                       unsigned int redaccion, unsigned int matematica) : Postulante(facultad, nombreCompleto, dni,
                                                                                     lectura, redaccion, matematica) {}

    double calificacion() override {
        double nota = 0;
        nota = (10*getRedaccion())+(10*getLectura())+(7.5*getMatematica());
        return nota;
    }
};
