#ifndef Instructor_h
#define Instructor_h

#include "Persona.h"

using namespace std;

class Instructor :public Persona {
private:
	string numeroTelefono;
	int puntaje;

public:
	Instructor();
	Instructor(string, string, string, int);
	int getPuntaje();
	string getNumeroTelefono();
	void setNumeroTelefono(string);
	void setPuntaje(int);
	virtual ~Instructor();


	string toString();


};

#endif

