#include "Persona.h"

Persona::Persona() {
	nombre = " ";
	string id = " ";
}

Persona::Persona(string nom, string ide) {
	nombre = nom;
	id=ide;
}


Persona::~Persona(){}

void Persona::setNombre(string nombre) {
	this->nombre = nombre;
}

string Persona::getNombre()  {
	return nombre;
}

void Persona::setId(string id) {
	this->id = id;
}

string Persona::getId()  {
	return id;
}

string Persona::toString() {
	stringstream s;
	s << " Nombre: " << nombre << endl;
	s << " ID: " << id << endl;
	return s.str();
}