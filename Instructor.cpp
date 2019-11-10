#include "Instructor.h"
#include "Persona.h"

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

void Instructor::DetPunt(float data){
    soc->setActual(soc->getPrimero());
    while(soc->getActual() != NULL){
        if(soc->getActual()->getSocio()->determinarProg(data) == true){
            puntaje++;
        }
        soc->setActual(soc->getActual()->getSiguiente());
    }
}