#include "classSistEmpl.h"

EmpleadoFijo::EmpleadoFijo(){
    sueldo = 0;
}

float EmpleadoFijo::calcularSueldo(){
        return sueldo = 800000;
}

float EmpleadoPorHoras::calcularSueldo(int pagoPorHora, int cantHoras)
{

    sueldo = pagoPorHora * cantHoras;
    return sueldo;
}

