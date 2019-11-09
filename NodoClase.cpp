#include "NodoClase.h"

NodoClase::NodoClase(){
}

NodoClase::NodoClase(Clase* clase, NodoClase* siguiente){
	this->clase = clase;
	this->siguiente = siguiente;
}

NodoClase::~NodoClase(){}

Clase* NodoClase::getClase() {
	return clase;
}

NodoClase* NodoClase::getSiguiente() {
	return siguiente;
}

void NodoClase::setClase(Clase* clas) {
	clase = clas;
}

void NodoClase::setSiguiente(NodoClase* _siguiente) {
	siguiente = _siguiente;
}

string NodoClase::toString() {
	return clase->toString();
}