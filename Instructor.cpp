#include "Instructor.h"
#include "Persona.h"


Instructor::Instructor() {

}
Instructor::Instructor(string nom, string ide, string numTel, string cor, int punt, Expediente* expe) {
	setNombre(nom);
	setId(ide);
	numeroTelefono = numTel;
	puntaje = punt;
	cout << "Nombre: " << getNombre() << endl;
	cout << "Identificacion: " << getId() << endl;
	cout << "Numero de Telefono:" << getNumeroTelefono() << endl;
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
