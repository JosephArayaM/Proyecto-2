#ifndef Socio_h
#define Socio_h

#include"Persona.h"
#include"Rutina.h"
#include"Instructor.h"
#include<iostream>
#include<sstream>


using namespace std;

class Socio: public Persona {
private:
    string correo;
    string numeroTelefono;
    Instructor* inst;
    Rutina* Vigente;
public:
    Socio();
    Socio(string nom , string  ide, string numTel, string cor, Rutina* rut, Instructor* ins);
    ~Socio();
    string getCorreo();
    string getNumeroTelefono();
    void setCorreo(string);
    void setNumeroTelefono(string);
    bool determinarProg(float);
    string toString();
	



};
#endif