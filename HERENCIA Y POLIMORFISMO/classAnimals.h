#ifndef CLASSANIMALS_H_INCLUDED
#define CLASSANIMALS_H_INCLUDED

class Animal{
public :
    virtual void hablar();
    virtual ~Animal(){}
};

class Gato : public Animal{
public:
    void hablar();
    ~Gato(){}
};

class Perro : public Animal{
public:
    void hablar();
    ~Perro(){}
};


#endif // CLASSANIMALS_H_INCLUDED
