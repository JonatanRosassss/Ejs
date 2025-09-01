#include "classFigura.h"
#include <iostream>
using namespace std;
void Rectangulo::pedir(int lado, int base){
    this->lado = lado;
    this->base = base;
}

void Circulo::pedir(int lado, int base){
    this->lado = lado;
    this->base = base;
}

void Circulo::area(){
    int area = base * lado;
    std::cout << area << endl;
}

void Rectangulo::area(){
    int area = base * lado;
    std::cout << area << endl;
}

void Rectangulo::perimetro(){
    int perimetro = 2*(base * lado);
    std::cout << perimetro << endl;
}

void Circulo::perimetro(){
    int perimetro = 2*(base * lado);
    std::cout << perimetro << endl;
}
