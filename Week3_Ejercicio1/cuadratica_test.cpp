//
// Created by Sebastian Q.B on 9/7/2019.
//
#include "catch.hpp"
#include "cuadratica.cpp"
#define CATCH_CONFIG_MAIN

TEST_CASE("Ecuacion Cuadratica"){

    //Arrange General
    float A=5,B=4,C=-1;
    Cuadratica* cuadratica = new Cuadratica(A, B, C);
    SECTION("Debe saber crearse con los terminos A,B, C"){
        //Act

        //Assert: comprobar la correcta ejecucion del metodo
        REQUIRE(A== cuadratica->getA());
        REQUIRE(B== cuadratica->getB());
        REQUIRE(C== cuadratica->getC());
    }
    SECTION("Debe calcular raiz X1"){
        //Arrange

        //Act
        float x1=cuadratica->calcularX1();
        //Assert
        float expectedX1 = 0.2f;
        REQUIRE(x1 == expectedX1);
    }
    SECTION("Debe calcular raiz X2"){
        //Act
        float x2=cuadratica->calcularX2();
        //Assert
        float expectedX2=-1;
        REQUIRE(x2==expectedX2);
    }
    SECTION("Comprobar discriminante <= 0") {
        //Act
        bool expected = cuadratica->calcularDiscriminante();
        //Assert

        REQUIRE(expected);
    }
}
