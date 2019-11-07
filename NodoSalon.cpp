#include "NodoSalon.h"

NodoSalon::NodoSalon()
{
}

NodoSalon::NodoSalon( Salon& socio, NodoSalon* siguiente) {

}
NodoSalon:: ~NodoSalon(){}

Salon* NodoSalon::getSalon()
{
	return salon;
}


void NodoSalon::setSalon(Salon& soc) {
	NodoSalon::salon = salon;
}

NodoSalon* NodoSalon::getSiguiente() const {
	return siguiente;
}

void NodoSalon::setSiguiente(NodoSalon* _siguiente) {
	NodoSalon::siguiente = _siguiente;
}

std::string NodoSalon::toString() {
	return salon->toString();
}