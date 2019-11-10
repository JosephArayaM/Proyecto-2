#ifndef Instructor_h
#define Instructor_h

#include"Expediente.h"
#include "Persona.h"

using namespace std;

class Instructor :public Persona {
private:
	string numeroTelefono;
	string correo;
	int puntaje;
	Expediente* expe;

public:
	Instructor();
	Instructor(string, string, string,string,int, Expediente* expe);
	string getNumeroTelefono();
	string getCorreo();
	int getPuntaje();
	void setNumeroTelefono(string);
	void setCorreo(string);
	void setPuntaje(int);
	virtual ~Instructor();
	Expediente* getExpe();
	void setExpe(Expediente*);

	 string toString();


};

#endif