#include "ListaSocios.h"

ListaSocios::ListaSocios() {
	primero = nullptr;
	actual = nullptr;
}

ListaSocios::ListaSocios( ListaSocios* orig) {
}

ListaSocios::~ListaSocios() {
	while (primero != nullptr) {
		actual = primero;
		primero = primero->getSiguiente();
		delete(actual);
	}
}

string ListaSocios::toString() {
	string resultado;
	actual = primero;

	while (actual != nullptr) {
		resultado += actual->toString();
		actual = actual->getSiguiente();
	}

	return resultado;
}

NodoSocio* ListaSocios::getPrimero()  {
	return primero;
}



void ListaSocios::setPrimero(NodoSocio* primero) {
	this->primero = primero;
}

NodoSocio* ListaSocios::getActual()  {
	return actual;
}

void ListaSocios::setActual(NodoSocio* actual) {
	this->actual = actual;
}

void ListaSocios::insertarSocio(Socio* socio) {
	primero = new NodoSocio(socio, primero);

}

bool ListaSocios::eliminarSocio(){
	if (primero == nullptr) {
		return false;
	}
	else {
		actual = primero;
		primero = primero->getSiguiente();
		delete actual;
		return true;
	}
}

int ListaSocios::totalSocios() {
	int totalSocios = 0;
	actual = primero;

	while (actual != nullptr) {
		totalSocios++;
		actual = actual->getSiguiente();
	}

	return totalSocios;
}


