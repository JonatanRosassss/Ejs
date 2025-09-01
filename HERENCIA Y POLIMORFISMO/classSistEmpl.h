#ifndef CLASSSISTEMPL_H_INCLUDED
#define CLASSSISTEMPL_H_INCLUDED

class Empleado{
protected:
        int sueldo;
public:
    virtual float calcularSueldo(){return 0;}
    virtual float calcularSueldo(int, int){return 0;}
    ~Empleado(){}
};

class EmpleadoFijo : public Empleado{
public:
    float calcularSueldo()override;
   // using Empleado::calcularSueldo(int, int);
    EmpleadoFijo();
};

class EmpleadoPorHoras : public Empleado{

public:
    float calcularSueldo(int, int) override;
    //using Empleado::calcularSueldo;
};

#endif // CLASSSISTEMPL_H_INCLUDED
