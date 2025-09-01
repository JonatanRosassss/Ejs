#include <iostream>
#include "clasePersonaEst.h"
#include "classAnimals.h"
#include "classFigura.h"
#include "classSistEmpl.h"
#include <cstring>
using namespace std;

int main()
{
    /*
    Estudiante est;
    int leg, edad;
    char nom[20];
    cin >> leg >> edad >> nom;
    est.setEdad(edad);
    est.setLegajo(leg);
    est.setNombre(nom);
    cout << est.getEdad() << endl << est.getLegajo() << endl << est.getNombre() ;
    est.mostrar(); */

    /*
    Animal* ptrDog = new Perro;
    Animal* ptrCat = new Gato;
    ptrCat->hablar();

    delete ptrCat;
    delete ptrDog; */
    /*
    char pedidoFigura[25];
    cout << "QUE FIGURA QUIERE CREAR" << endl;
    cin >> pedidoFigura;
    if(strcmp(pedidoFigura, "RECTANGULO") == 0)
    {
        cout << "FIGURA RECTANGULO";
        Rectangulo rec;
        //DESARROLLO FUNCIONES
    }
    else if(strcmp(pedidoFigura, "CIRCULO") == 0)
    {
        //DESARROLLO FUNCIONES
        cout << "FIGURA CIRCULO";
    }
    */
    ///MAIN
    Empleado* ptrEmp = new EmpleadoPorHoras;
    cout << ptrEmp->calcularSueldo(8000,4);
    delete ptrEmp;
    return 0;
}
