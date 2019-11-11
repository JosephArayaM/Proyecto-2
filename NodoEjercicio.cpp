#include "NodoEjercicio.h"

NodoEjercicio::NodoEjercicio()
{
}

NodoEjercicio::NodoEjercicio(Ejercicio* ejercicio, NodoEjercicio* siguiente) {
	this->ejercicio;
	this->siguiente;
}

NodoEjercicio::~NodoEjercicio()
{
}

Ejercicio* NodoEjercicio::getEjercicio() {
	return ejercicio;
}


void NodoEjercicio::setEjercicio(Ejercicio* eje) {
	NodoEjercicio::ejercicio = eje;
}

NodoEjercicio* NodoEjercicio::getSiguiente() {
	return siguiente;
}

void NodoEjercicio::setSiguiente(NodoEjercicio* _siguiente) {
	NodoEjercicio::siguiente = _siguiente;
}

string NodoEjercicio::toString() {
	return ejercicio->toString();
}