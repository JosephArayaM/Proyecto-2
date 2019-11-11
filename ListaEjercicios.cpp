#include "ListaEjercicios.h"

ListaEjercicios::ListaEjercicios() {
	primero = nullptr;
	actual = nullptr;
}

ListaEjercicios::ListaEjercicios(ListaEjercicios* orig) {
}

ListaEjercicios::~ListaEjercicios() {
	while (primero != nullptr) {
		actual = primero;
		primero = primero->getSiguiente();
		delete (actual);
	}
}

NodoEjercicio* ListaEjercicios::getPrimero() {
	return primero;
}

void ListaEjercicios::setPrimero(NodoEjercicio* primero) {
	ListaEjercicios::primero = primero;
}

NodoEjercicio* ListaEjercicios::getActual() {
	return actual;
}

void ListaEjercicios::setActual(NodoEjercicio* actual) {
	ListaEjercicios::actual = actual;
}

string ListaEjercicios::toString() {
	NodoEjercicio* p = primero;
	stringstream s;
	while (p != nullptr) {
		s << p->getEjercicio()->toString() << endl << endl;
		p = p->getSiguiente();

	}
	return s.str();

}

void ListaEjercicios::insertarEjercicio(Ejercicio* ejercicio) {
	primero = new NodoEjercicio(ejercicio, primero);
}

bool ListaEjercicios::eliminarEjercicio() {
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

int ListaEjercicios::totalEjercicios() {
	int totalEjercicios = 0;
	actual = primero;
	while (actual != nullptr) {
		totalEjercicios++;
		actual = actual->getSiguiente();
	}
	return totalEjercicios;

}