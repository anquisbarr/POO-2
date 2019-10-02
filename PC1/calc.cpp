#include <iostream>
#include <fstream>
#include <vector>
#include <functional>
#include <string>
#include <thread>
#include <sstream>
#include <future>

using namespace std;


class Calc{
private:
    vector<float> Elementos;
    int nro_elementos;
public:
    Calc() {
        nro_elementos=0;
    }

    void registrarElemento(float elemento){
        Elementos.push_back(elemento);
        nro_elementos = Elementos.size();
    }

    int obtenerNumeroElementos(){
        if (nro_elementos==0)
            return 0;
        else return nro_elementos;
    }

    float obtenerElementoMayor(){
    float mayor= Elementos[0];
    for (int i=0;i<nro_elementos;i++){
        if(mayor<Elementos[i]){
            mayor=Elementos[i];
        }
    }
    return mayor;


    }

    float obteneElementoMenor(){
        float menor= Elementos[0];
        for (int i=0;i<nro_elementos;i++){
            if(Elementos[i]<menor){
                menor=Elementos[i];
            }
        }
        return menor;
    }

    float calcularPromedio(){
        float suma,promedio;
        for (int i=0;i<nro_elementos;i++){
            suma = Elementos[i] + suma;
        }
        promedio = suma/nro_elementos;
        return promedio;
    }
    float obtenerMediana(){

        if (nro_elementos%2==0){
            int mitad = nro_elementos/2;
            float mediana = Elementos[mitad];
            return mediana;
        }else{
            return 1;
        }

    }
    void ordenarElementos(){
        for (int i=0; i<nro_elementos-1; i++)
        {
            for (int j=i+1; j<nro_elementos; j++)
            {
                if(Elementos[i]>Elementos[j])
                {
                    float aux = Elementos[i];
                    Elementos[i] = Elementos[j];
                    Elementos[j] = aux;
                }
            }
        }
    }

    ~Calc(){

   }



};
