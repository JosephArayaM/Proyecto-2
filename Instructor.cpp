#include "Instructor.h"
#include "Persona.h"


Instructor::Instructor() {

}
Instructor::Instructor(string nom, string ide, string numTel, int punt) {
	Persona(nom, ide);
	numeroTelefono = numTel;
	puntaje = punt;
	
}

string Instructor::getNumeroTelefono() {
	return numeroTelefono;
}


void Instructor::setNumeroTelefono(string numTel) {
	numeroTelefono = numTel;
}


int Instructor::getPuntaje() {
	return puntaje;
}

void Instructor::setPuntaje(int punt) {
	puntaje = punt;
}

Instructor::~Instructor() {}

Expediente* Instructor::getExpe() {
	return expe;
}

void Instructor::setExpe(Expediente* expe) {
	this->expe = expe;
}


string Instructor::toString() {
	stringstream s;
	s << Persona::toString();
	s << endl;
	return s.str();
}
