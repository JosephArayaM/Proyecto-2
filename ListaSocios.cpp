#include "ListaSocios.h"

ListaSocios::ListaSocios() {
	primero = nullptr;
	actual = nullptr;
}

ListaSocios::ListaSocios(const ListaSocios& orig) {
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

Nodo* ListaSocios::getPrimero() const {
	return primero;
}

void ListaSocios::setPrimero(Nodo* primero) {
	ListaSocios::primero = primero;
}

Nodo* ListaSocios::getActual() const {
	return actual;
}

void ListaSocios::setActual(Nodo* actual) {
	ListaSocios::actual = actual;
}