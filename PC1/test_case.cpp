
#include "catch.hpp"
#include "calc.cpp"


#include <string>


TEST_CASE("Calculadora") {


    SECTION("Debe crearse sin parametros") {

        // Arrange Local

        // Act
        Calc* calc= new Calc();
        // Assert

        // TODO: Calcular el total de items leidos del archivo
        int nro_elementos = calc->obtenerNumeroElementos();
        int expected_nroelementos =0;
        REQUIRE(nro_elementos==expected_nroelementos);
        delete calc;
    }

    SECTION("Debe registrar elementos") {

        // Arrange Local
        Calc* calc= new Calc();

        // Act
        calc->registrarElemento(2.5);
        // Assert
        REQUIRE(calc->obtenerNumeroElementos() ==  1);
        delete calc;
    }


    SECTION("Debe obtener el elemento mayor") {
        // Arrange Local
        Calc* calc= new Calc();

        calc->registrarElemento(2.5);
        calc->registrarElemento(2.7);
        calc->registrarElemento(2.6);
        calc->registrarElemento(2.3);
        // Act & Assert

        float mayor = calc->obtenerElementoMayor();
        float expected_mayor=2.7f;
        REQUIRE(mayor == expected_mayor);
        delete calc;

    }

    SECTION("Debe obtener el elemento menor") {
        // Arrange Local
        Calc* calc= new Calc();

        calc->registrarElemento(2.5);
        calc->registrarElemento(2.7);
        calc->registrarElemento(2.6);
        calc->registrarElemento(2.3);
        // Act & Assert

        float menor = calc ->obteneElementoMenor();
        float expected_menor=2.3;
        REQUIRE(menor==expected_menor);
        delete calc;

    }

    SECTION("Debe calcular el promedio") {
        // Arrange
        Calc * calc = new Calc();

        //Act
        calc ->registrarElemento(2.5);
        calc ->registrarElemento(2.7);
        calc ->registrarElemento(2.6);
        calc ->registrarElemento(2.3);

        float expected_promedio=((2.5f+2.7f+2.6f+2.3f)/4);
        float promedio = calc->calcularPromedio();

        // Assert
        REQUIRE(expected_promedio==promedio);

    }

    SECTION("Debe calcular la mediana") {
        // Arrange
        Calc * calc = new Calc();

        // Act
        calc ->registrarElemento(2.5);
        calc ->registrarElemento(2.7);
        calc ->registrarElemento(2.6);
        calc ->registrarElemento(2.3);
        calc ->ordenarElementos();
        float mediana=calc->obtenerMediana();
        float expected_mediana=2.6;

        // Assert
        REQUIRE(mediana == expected_mediana);
    }

}

