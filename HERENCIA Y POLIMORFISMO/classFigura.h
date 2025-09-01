#ifndef CLASSFIGURA_H_INCLUDED
#define CLASSFIGURA_H_INCLUDED

class Figura{
protected:
    int base;
    int lado;
public:
    virtual void area() = 0;
    virtual void perimetro() = 0;

};

class Rectangulo : public Figura{
private:
    int lado;
    int base;
public:
    void area();
    void perimetro();
    void pedir(int, int);
};

class Circulo : public Figura{
private:
    int lado;
    int base;
public:
    void area();
    void perimetro();
    void pedir(int, int);
};


#endif // CLASSFIGURA_H_INCLUDED
