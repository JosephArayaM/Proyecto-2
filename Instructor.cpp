#include "Instructor.h"
#include "Persona.h"


Instructor::Instructor() {

}
Instructor::Instructor(string nom, string ide, string numTel, int punt) {
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



string Instructor::toString() {
	stringstream s;
	s << Persona::toString();
	s << endl;
	return s.str();
}

//Grabar sobre archivo en el disco duro
ostream& operator<<(ostream& out, const Instructor& ins) {
	return out << ins.nombre << endl << ins.id << endl << ins.numeroTelefono << endl << ins.puntaje << endl;
}

istream& operator>>(istream& in, Instructor& ins) {
	return in >> ins.nombre >> ins.id >> ins.numeroTelefono >> ins.puntaje;
}

