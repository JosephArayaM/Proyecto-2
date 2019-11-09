#include "NodoSocio.h"

NodoSocio::NodoSocio()
{
}

NodoSocio::NodoSocio(Socio* socio, NodoSocio* siguiente){
	this->socio;
	this->siguiente;
}

NodoSocio::~NodoSocio()
{
}

 Socio* NodoSocio::getSocio()  {
	return socio;
}


 void NodoSocio::setSocio( Socio* soc) {
	 NodoSocio::socio = socio;
}

 NodoSocio* NodoSocio::getSiguiente()  {
	return siguiente;
}

void NodoSocio::setSiguiente(NodoSocio* _siguiente) {
	NodoSocio::siguiente = _siguiente;
}

std::string NodoSocio::toString() {
	return socio->toString();
}