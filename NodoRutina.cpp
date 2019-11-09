#include "NodoRutina.h"

NodoRutina::NodoRutina()
{
}

NodoRutina::NodoRutina(Rutina* rutina, NodoRutina* siguiente) {
	this->rutina;
	this->siguiente;
}

NodoRutina::~NodoRutina()
{
}

Rutina* NodoRutina::getRutina() {
	return rutina;
}


void NodoRutina::setRutina(Rutina* ruti) {
	NodoRutina::rutina = ruti;
}

NodoRutina* NodoRutina::getSiguiente() {
	return siguiente;
}

void NodoRutina::setSiguiente(NodoRutina* _siguiente) {
	NodoRutina::siguiente = _siguiente;
}

string NodoRutina::toString() {
	return rutina->toString();
}
