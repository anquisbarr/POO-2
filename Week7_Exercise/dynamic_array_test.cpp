//
// Created by Sebastian Q.B on 9/28/2019.
//
#include "catch.hpp"
#include "dynamic_array.cpp"
using namespace std;

TEST_CASE("Arreglo dinámico"){
    SECTION("Crear un arreglo dinamico vacio"){
        //Arrange & Act
        auto array_1 = new DynamicArray<int,5>();
        unsigned int expectedSize = 0;
        unsigned int actualSize = array_1 ->getSize();
        //Assert
        REQUIRE(expectedSize == actualSize);
        delete array_1;
    }
    SECTION("Agregar items al dynamic_array"){
        //Arrange
        auto array_1 = new DynamicArray<int,5>();
        int dato_1 = 100,dato_2=50;
        //Act
        array_1 -> addItem(dato_1);
        array_1 -> addItem(dato_2);
        //Assert
        unsigned int expectedSize =2;
        unsigned int actualSize = array_1 -> getSize();
        REQUIRE(expectedSize==actualSize);
        REQUIRE(dato_1 == array_1 -> getItem(0));
        REQUIRE(dato_2 == array_1 -> getItem(1));
        delete array_1;
    }
    SECTION("Agregar 5 elementos"){
        //Arrange
        auto array_1 = new DynamicArray<int,5>();
        int dato0=10,dato1=20,dato2=3,dato3=5,dato4=19;
        //Act
        array_1 -> addItem(dato0);
        array_1 -> addItem(dato1);
        array_1 -> addItem(dato2);
        array_1 -> addItem(dato3);
        array_1 -> addItem(dato4);

        //Arrange
        unsigned int expectedSize=5;
        unsigned int actualSize = array_1 -> getSize();
        REQUIRE(expectedSize==actualSize);
        REQUIRE(dato0 == array_1 -> getItem(0));
        REQUIRE(dato1 == array_1 -> getItem(1));
        REQUIRE(dato2 == array_1 -> getItem(2));
        REQUIRE(dato3 == array_1 -> getItem(3));
        REQUIRE(dato4 == array_1 -> getItem(4));

        delete array_1;
    }
    SECTION("Agregar mas de 5 elementos"){
        //Arrange
        auto array_1 = new DynamicArray<int,5>();
        int dato0=10,dato1=20,dato2=3,dato3=5,dato4=19,dato5= 13,dato6=3,dato7=8,dato8=17,dato9=0;
        //Act
        array_1 -> addItem(dato0);
        array_1 -> addItem(dato1);
        array_1 -> addItem(dato2);
        array_1 -> addItem(dato3);
        array_1 -> addItem(dato4);
        array_1 -> addItem(dato5);
        array_1 -> addItem(dato6);
        array_1 -> addItem(dato7);
        array_1 -> addItem(dato8);
        array_1 -> addItem(dato9);
        //Assert
        unsigned int expectedSize =10;
        unsigned int actualSize = array_1 ->returnReserved();
        REQUIRE(expectedSize == actualSize);
        REQUIRE(dato0 == array_1 -> getItem(0));
        REQUIRE(dato1 == array_1 -> getItem(1));
        REQUIRE(dato2 == array_1 -> getItem(2));
        REQUIRE(dato3 == array_1 -> getItem(3));
        REQUIRE(dato4 == array_1 -> getItem(4));
        REQUIRE(dato5 == array_1 -> getItem(5));
        REQUIRE(dato6 == array_1 -> getItem(6));
        REQUIRE(dato7 == array_1 -> getItem(7));
        REQUIRE(dato8 == array_1 -> getItem(8));
        REQUIRE(dato9 == array_1 -> getItem(9));
        delete array_1;
    }
}