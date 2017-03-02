#include "Doubler.hpp"

#include <iostream>

int main() {
    std::cout << doubler(21) << std::endl;
    std::cout << doubler(21.f) << std::endl;

    int *p = new int[2];
    *p = 4;
    int *ptr , *ptr2;
    ptr = p;
    std::cout << "L'adresse est :" << p << std::endl;
    std::cout << "La valeur est :" << *ptr << std::endl;
    ptr2 = p;
    *ptr = 4;
    std::cout << "La valeur de pointeur 2 est" << *ptr2 << std::endl;
    std::cout << "La valeur de pointeur 1 est :" << *ptr << std::endl;
    delete [] ptr;    
    
    return 0;
}

