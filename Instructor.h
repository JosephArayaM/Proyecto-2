#ifndef Instructor_h
#define Instructor_h

#include"Persona.h"
#include"ListaSocios.h"

using namespace std;

class Instructor: public Persona {
private:
    int puntaje;
    ListaSocios* soc;
public:
    Instructor();
    Instructor(string, string ,int ); 
    int getPuntaje();
    void fijar(ListaSocios* ls);
    void setPuntaje(int);
    virtual ~Instructor();
    void DetPunt();
    string toString();
};

#endif