#ifndef Instructor_h
#define Instructor_h

#include"Expediente.h"
#include "Persona.h"

using namespace std;

class Instructor :public Persona {
private:
	int puntaje;
	ListaSocios* soc;
public:
	Instructor();
	Instructor(string, string, int, ListaSocios* soci);
	int getPuntaje();
	void setPuntaje(int);
	virtual ~Instructor();

	 string toString();


};

#endif