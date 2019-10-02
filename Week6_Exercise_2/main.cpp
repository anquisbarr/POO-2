#define CATCH_CONFIG_MAIN
#ifdef CATCH_CONFIG_MAIN
#include "catch.hpp"
#else
#include <iostream>

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}

#endif