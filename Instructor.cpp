#include "Instructor.h"

Instructor::Instructor(string nom, string ide, int punt){
    Persona(nom, ide);
    puntaje = punt;
    soc = new ListaSocios();
}

int Instructor::getPuntaje() {
	return puntaje;
}

void Instructor::setPuntaje(int punt) {
	puntaje = punt;
}

Void instructor::fijarListaSocios(listaSocios* ls){
Soc=ls;
}

Instructor::~Instructor(){}

string Instructor::toString(){
	stringstream s;
	s << Persona::toString();
        s << endl;
 	return s.str();
}

/*void Instructor::DetPunt(){
    soc->setActual(soc->getPrimero());
    while(soc->getActual() != NULL){
        if(soc->getActual()->getSocio()->determinarProg(data) == true){
            puntaje++;
        }
        soc->setActual(soc->getActual()->getSiguiente());
    }
}*/