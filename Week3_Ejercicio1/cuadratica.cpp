//
// Created by Sebastian Q.B on 9/7/2019.
//
#include <cmath>
class Cuadratica{
private:
    float a;
    float b;
    float c;
public:
    Cuadratica(float a, float b, float c) : a(a), b(b), c(c) {

    }

    float getA() const {
        return a;
    }

    void setA(float a) {
        Cuadratica::a = a;
    }

    float getB() const {
        return b;
    }

    void setB(float b) {
        Cuadratica::b = b;
    }

    float getC() const {
        return c;
    }

    void setC(float c) {
        Cuadratica::c = c;
    }


    float calcularX1() {
        float result = (-b + (sqrt(pow(b, 2) - (4 * a * c)))) / (2 * a);

        return result;
    }
    float calcularX2() {
        float result = (-b - (sqrt(pow(b,2)-(4*a*c))))/(2*a);
        return result;
    }
    bool calcularDiscriminante(){
        float discriminante=(pow(b,2)-(4*a*c));
        if (discriminante>=0){
            return true;
        }
        else{
            return false;
        }
    }
};