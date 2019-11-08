#include "Nodo.h"

Nodo::Nodo()
{
}

Nodo::Nodo(Socio* socio, Nodo* siguiente){
	this->socio;
	this->siguiente;
}

Nodo::~Nodo()
{
}

 Socio* Nodo::getSocio()  {
	return socio;
}


 void Nodo::setSocio( Socio* soc) {
	Nodo::socio = socio;
}

Nodo* Nodo::getSiguiente()  {
	return siguiente;
}

void Nodo::setSiguiente(Nodo* _siguiente) {
	Nodo::siguiente = _siguiente;
}

std::string Nodo::toString() {
	return socio->toString();
}