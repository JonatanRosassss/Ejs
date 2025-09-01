#include "clasePersonaEst.h"
#include <cstring>
#include <iostream>

void Estudiante::setEdad(int edad){
    if(edad > 0) this->edad = edad;
}


void Estudiante::setNombre(const char* nombre){
    strcpy(this->nombre, nombre);
}

void Estudiante::setLegajo(int legajo){
    if(legajo > 0 ) this->legajo = legajo;
}

int Estudiante::getEdad(){
    return edad;
}

const char* Estudiante::getNombre(){
    return nombre;
}

int Estudiante::getLegajo(){
    return legajo;
}

void Estudiante::mostrar(){
    std::cout << "NOMBRE DEL ALUMNO: " << nombre << std::endl;
    std::cout << "EDAD DEL ALUMNO: " << edad << std::endl;
    std::cout << "LEGAJO  " << legajo << std::endl;

}
