//
// Created by Sebastian Q.B on 8/24/2019.
//

#include <cmath>
#include <vector>
using namespace std;
enum Signo{
    positivo=1,
    negativo=-1
};

class Centroide{
protected:
    float x;
    float y;
public:
    Centroide(float x, float y) : x(x), y(y) {}



    float getX() const {
        return x;
    }

    void setX(float x) {
        Centroide::x = x;
    }

    float getY() const {
        return y;
    }

    void setY(float y) {
        Centroide::y = y;
    }

};

class Figura{
protected:
    Signo signo;
    Centroide *centroide;
public:
    Figura(float x,float y,Signo signo){
        centroide = new Centroide(x,y);
    }

    //Creamos el metodo calcularArea y lo igualamos a 0 para no asignar parametros. Ademas para poder heredarla al ser una clase abstracta.

    virtual float calcularArea()=0;

    //Creamos el getter y el setter de Signo y Centroide

    Signo getSigno() const {
        return signo;
    }

    void setSigno(Signo signo) {
        Figura::signo = signo;
    }

    Centroide *getCentroide() const {
        return centroide;
    }

    virtual ~Figura() {
        delete centroide;
    }
};

class Circulo:public Figura{
protected:
    float r;
public:
    Circulo(float x, float y, Signo signo, float r) : Figura(x, y, signo), r(r) {}

    //Modificamos el metodo calcularArea() con la funcion overrida para poder asignarle la formula correspondiente

    float calcularArea() override {
        return M_PI *r*r;
    }

    float getR() const {
        return r;
    }

    void setR(float r) {
        Circulo::r = r;
    }
};

class Triangulo:public Figura{
protected:
    float b,h;
public:
    Triangulo(float x, float y, Signo signo, float b, float h) : Figura(x, y, signo), b(b), h(h) {}

    //Modificamos el metodo calcularArea() con la funcion overrida para poder asignarle la formula correspondiente

    float calcularArea() override {
        return (b*h)/2;
    }

    float getB() const {
        return b;
    }

    void setB(float b) {
        Triangulo::b = b;
    }

    float getH() const {
        return h;
    }

    void setH(float h) {
        Triangulo::h = h;
    }

};

class Rectangulo:public Triangulo{
public:
    Rectangulo(float x, float y, Signo signo, float b, float h) : Triangulo(x, y, signo, b, h) {}

    //Modificamos el metodo calcularArea() con la funcion overrida para poder asignarle la formula correspondiente

    float calcularArea() override {
        return b*h;
    }
};

class AreaCompuesta{
private:
    //vector <Triangulo*> triangulos;
    //vector <Rectangulo*> rectangulos;
    //vector <Circulo*> circulos;

    vector <Figura*> figuras;
public:

};