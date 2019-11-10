#ifndef Instructor_h
#define Instructor_h

#include "ListaSocios.h"
#include "Persona.h"

using namespace std;

class Instructor :public Persona {
private:
	int puntaje;
	ListaSocios* soc;
public:
	Instructor(string, string, int, ListaSocios* soci); 
	int getPuntaje();
	void setPuntaje(int);
	virtual ~Instructor();
        void DetPunt();
	string toString();


};

#endif