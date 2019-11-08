#include"Socio.h"
#include "Persona.h"
#include <iostream>
#include <sstream>
using namespace std;




Socio::Socio(){

}

Socio::~Socio() {}


string Socio::getCorreo()
{
	return correo;
}

string Socio::getNumeroTelefono()
{
	return numeroTelefono;
}


void Socio::setCorreo(string cor1){
	correo = cor1;
}

void Socio::setNumeroTelefono(string numTel){
	numeroTelefono = numTel;
}


void Socio::insertarSocio(){}


void Socio::eliminarSocio(){}



string Socio::toString(){
	stringstream s;
	s << "Correo Electronico: " << correo << endl;
	s << "Numero de Telefono: " << numeroTelefono << endl;
	return s.str();
	
}
