#include "ListaInstructores.h"

ListaInstructores::ListaInstructores() {
	primero = nullptr;
	actual = nullptr;
}

ListaInstructores::ListaInstructores( ListaInstructores* orig) {
}

ListaInstructores::~ListaInstructores() {
	while (primero != nullptr) {
		actual = primero;
		primero = primero->getSiguiente();
		delete(actual);
	}
}


string ListaInstructores::toString() {
	string resultado;
	actual = primero;

	while (actual != nullptr) {
		resultado += actual->toString();
		actual = actual->getSiguiente();
	}

	return resultado;
}

NodoInstructor* ListaInstructores::getPrimero()  {
	return primero;
}

void ListaInstructores::setPrimero(NodoInstructor* primero) {
	ListaInstructores::primero = primero;
}

NodoInstructor* ListaInstructores::getActual()  {
	return actual;
}

void ListaInstructores::setActual(NodoInstructor* actual) {
	ListaInstructores::actual = actual;
}


void ListaInstructores::insertarInicio( Instructor* instructor) {
	actual = new NodoInstructor(instructor, nullptr);
	if (primero == nullptr) {
		primero = actual;
	}
	else {
		actual->setSiguiente(primero);
		primero = actual;
	}
}

void ListaInstructores::insertarFinal( Instructor* instructor) {
	actual = primero;
	if (primero == nullptr) {
		primero = new NodoInstructor(instructor, nullptr);
	}
	else {
		while (actual->getSiguiente() != nullptr) {
			actual = actual->getSiguiente();
		}
		actual->setSiguiente(new NodoInstructor(instructor, nullptr));
	}
}

bool ListaInstructores::eliminarInicio() {
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

int ListaInstructores::totalInstructores() {
	int totalInstructores = 0;
	actual = primero;

	while (actual != nullptr) {
		totalInstructores++;
		actual = actual->getSiguiente();
	}

	return totalInstructores;
}