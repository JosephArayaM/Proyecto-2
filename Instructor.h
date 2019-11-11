#ifndef Instructor_h
#define Instructor_h

#include"Expediente.h"
#include "Persona.h"

using namespace std;

class Instructor :public Persona {
private:
	string numeroTelefono;
	int puntaje;
	Expediente* expe;

public:
	Instructor();
	Instructor(string, string, string, string, int, Expediente* expe);
	int getPuntaje();
	string getNumeroTelefono();
	void setNumeroTelefono(string);
	void setPuntaje(int);
	virtual ~Instructor();
	Expediente* getExpe();
	void setExpe(Expediente*);


	string toString();


};

#endif

