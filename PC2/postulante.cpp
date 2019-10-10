//
// Created by Sebastian Q.B on 10/9/2019.
//
#include <string>
using namespace std;


class Postulante{
private:
    string facultad;
    string nombreCompleto;
    string dni;
    unsigned int lectura;
    unsigned int redaccion;
    unsigned int matematica;
public:
     Postulante(const string &facultad, const string &nombreCompleto, const string &dni, unsigned int lectura,
               unsigned int redaccion, unsigned int matematica) : facultad(facultad),
                                                                  nombreCompleto(nombreCompleto), dni(dni),
                                                                  lectura(lectura), redaccion(redaccion),
                                                                  matematica(matematica) {}

    const string getFacultad() const {
        return facultad;
    }

    const string &getNombreCompleto() const {
        return nombreCompleto;
    }

    const string &getDni() const {
        return dni;
    }

    unsigned int getLectura() const {
        return lectura;
    }

    unsigned int getRedaccion() const {
        return redaccion;
    }

    unsigned int getMatematica() const {
        return matematica;
    }

    virtual double calificacion(){

    }
};
