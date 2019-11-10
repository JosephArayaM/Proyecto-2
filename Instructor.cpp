#include "Instructor.h"
#include "Persona.h"


Instructor::Instructor(){}
Instructor::Instructor(string nom, string ide, string numTel, string cor,int punt, Expediente* expe){
	setNombre(nom);
	setId(ide);
	numeroTelefono = numTel;
	correo = cor;
	puntaje = punt;
	cout << "Nombre: " << getNombre() << endl;
	cout << "Identificacion: " << getId() << endl;
	cout << "Numero de Telefono:" << getNumeroTelefono() << endl;
	cout << "Correo Electronico: " << getCorreo() << endl;
}

string Instructor::getNumeroTelefono() {
	return numeroTelefono;
}
string Instructor::getCorreo() {
	return correo;
}

void Instructor::setNumeroTelefono(string numTel) {
	numeroTelefono = numTel;
}

void Instructor::setCorreo(string cor) {
	correo = cor;
}

int Instructor::getPuntaje() {
	return puntaje;
}

void Instructor::setPuntaje(int punt) {
	puntaje = punt;
}

Instructor::~Instructor(){}

Expediente* Instructor::getExpe() {
	return expe;
}

void Instructor::setExpe(Expediente* expe) {
	this->expe = expe;
}

string Instructor::toString(){
	stringstream s;
	s << "Numero de Telefono: " << numeroTelefono << endl;
	s << "Correo Electronico: " << correo << endl;
	return s.str();
}
