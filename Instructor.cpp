#include "Instructor.h"
#include "Persona.h"


Instructor::Instructor() {

}
Instructor::Instructor(string nom, string ide, string numTel, int punt) {
	setNombre(nom);
	setId(ide);
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



string Instructor::toString() {
	stringstream s;
	s << Persona::toString();
	s << endl;
	return s.str();
}

ostream& operator<<(ostream& out, const Instructor& ins) {
	return out << ins.nombre << endl << ins.id << endl << ins.numeroTelefono << endl << ins.puntaje << endl;
}

istream& operator>>(istream& in, Instructor& ins) {
	return in >> ins.nombre >> ins.id >> ins.numeroTelefono >> ins.puntaje;
}
