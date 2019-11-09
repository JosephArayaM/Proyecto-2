#include "NodoSalon.h"

NodoSalon::NodoSalon(){
}

NodoSalon::NodoSalon( Salon* salon, NodoSalon* siguiente) {
	this->salon = salon;
	this->siguiente = siguiente;

}
NodoSalon:: ~NodoSalon(){}

Salon* NodoSalon::getSalon()
{
	return salon;
}


void NodoSalon::setSalon(Salon* soc) {
	NodoSalon::salon = salon;
}

NodoSalon* NodoSalon::getSiguiente()  {
	return siguiente;
}

void NodoSalon::setSiguiente(NodoSalon* _siguiente) {
	NodoSalon::siguiente = _siguiente;
}

std::string NodoSalon::toString() {
	return salon->toString();
}