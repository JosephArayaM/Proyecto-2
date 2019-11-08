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

Nodo* ListaSocios::getPrimero()  {
	return primero;
}

void ListaSocios::setPrimero(Nodo* primero) {
	ListaSocios::primero = primero;
}

Nodo* ListaSocios::getActual()  {
	return actual;
}

void ListaSocios::setActual(Nodo* actual) {
	ListaSocios::actual = actual;
}