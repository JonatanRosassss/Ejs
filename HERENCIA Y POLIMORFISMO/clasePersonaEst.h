#ifndef CLASEPRUEBA_H_INCLUDED
#define CLASEPRUEBA_H_INCLUDED

class Persona{
protected:
    char nombre[25];
    int edad;

};

class Estudiante : private Persona{
private:
    int legajo;
public:
    void setNombre(const char* nombre);
    void setEdad(int edad);
    void setLegajo(int legajo);
    const char* getNombre();
    int getEdad();
    int getLegajo();
    void mostrar();


};


#endif // CLASEPRUEBA_H_INCLUDED
