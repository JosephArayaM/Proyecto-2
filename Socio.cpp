#include"Socio.h"
#include "Persona.h"
#include <iostream>
#include <sstream>
using namespace std;


Socio::Socio(string nom, string  ide, string numTel, string cor, Rutina* rut, Instructor* ins){
	Persona(nom, ide);
	numeroTelefono = numTel;
	correo = cor;
	Vigente = rut;
	instructor = ins;
}

Socio::Socio(){}

Socio::~Socio() {}


string Socio::getCorreo()
{
	return correo;
}

string Socio::getNumeroTelefono()
{
	return numeroTelefono;
}


void Socio::setCorreo(string cor1) {
	correo = cor1;
}

void Socio::setNumeroTelefono(string numTel) {
	numeroTelefono = numTel;
}

Rutina* Socio::getVigente() {
	return Vigente;
}

Instructor* Socio::getInstructor() {
	return instructor;
}

void Socio::setVigente(Rutina* Vigente) {
	this->Vigente = Vigente;
}

void Socio::setInstructor(Instructor* instructor) {
	this->instructor = instructor;
}


bool Socio::determinarProg(float dat) {
	if (Vigente->getObjetivo() == 1) {
		if (Vigente->getDatos()->GetGrasaCor() < dat)
			return true;
		else
			return false;
	}
	else
		if (Vigente->getObjetivo() == 2) {
			if (Vigente->getDatos()->GetMasaMusc() < dat)
				return true;
			else
				return false;
		}
}



string Socio::toString() {
	stringstream s;
	s << Persona::toString();
	s << "Correo Electronico: " << correo << endl;
	s << "Numero de Telefono: " << numeroTelefono << endl;
	s << endl;
	return s.str();

}
