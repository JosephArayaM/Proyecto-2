#include "Instructor.h"
#include "Persona.h"


Instructor::Instructor(){}
Instructor::Instructor(string nom, string ide, int punt, ListaSocios* soci){
    Persona(nom, ide);
    puntaje = punt;
	
}

int Instructor::getPuntaje() {
	return puntaje;
}

void Instructor::setPuntaje(int punt) {
	puntaje = punt;
}

Instructor::~Instructor(){}

string Instructor::toString(){
	stringstream s;
	s << Persona::toString();
        s << endl;
 	return s.str();
}
