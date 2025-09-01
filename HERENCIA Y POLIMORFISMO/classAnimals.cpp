#include "classAnimals.h"
#include <iostream>
void Animal::hablar(){
    std::cout << "Estoy hablando, hola" << std::endl;
}

void Gato::hablar(){
    std::cout << "MIAU, MIAU " << std::endl;
}

void Perro::hablar(){
    std::cout << "GUAU GUAU" << std::endl;
}
