#ifndef Socio_h
#define Socio_h

#include<iostream>
#include<sstream>
#include <fstream>
#include"Persona.h"
#include "Rutina.h"
#include "Instructor.h"
using namespace std;

class Socio : public Persona {

private:
	string correo;
	string numeroTelefono;
	Rutina* Vigente;
	Instructor* instructor;

public:

	Socio(string, string, string, string, Rutina*, Instructor*);
	Socio();
	~Socio();
	string getCorreo();
	string getNumeroTelefono();
	void setCorreo(string);
	void setNumeroTelefono(string);
	Rutina* getVigente();
	Instructor* getInstructor();
	void setVigente(Rutina*);
	void setInstructor(Instructor*);
        void ActualizarDatos(Rutina* nuevo);
	bool determinarProg(float);
	string toString();
        friend ostream& operator<<(ostream&, const Socio&);
	friend istream& operator>>(istream&, Socio&);


};
#endif