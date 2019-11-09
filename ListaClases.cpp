#include "ListaClases.h"


ListaClases::ListaClases(){
	primero = nullptr;
	actual = nullptr;
}

ListaClases::ListaClases(ListaClases* orig){

}

ListaClases::~ListaClases(){
	while (primero != nullptr) {
		actual = primero;
		primero = primero->getSiguiente();
		delete (actual);
	}
}

NodoClase* ListaClases::getPrimero() {
	return primero;
}

NodoClase* ListaClases::getActual() {
	return actual;
}

void ListaClases::setPrimero(NodoClase* primero) {
	ListaClases::primero = primero;
}

void ListaClases::setActual(NodoClase* actual) {
	ListaClases::actual = actual;
}

string ListaClases::toString(){
	string resultado;
	actual = primero;

	while (actual != nullptr) {
		resultado += actual->toString();
		actual = actual->getSiguiente();
	}

	return resultado;
}

void ListaClases::insertarClase(Clase* clase) {
	primero = new NodoClase(clase, primero);
}

bool ListaClases::eliminarClase(){
	if (primero == nullptr) {
		return false;
	}
	else
		actual = primero;
	primero = primero->getSiguiente();
	delete actual;
	return true;

}

int ListaClases::totalClases(){
	int totalClases = 0;
	actual = primero;
	while (actual != nullptr) {
		totalClases++;
		actual = actual->getSiguiente();
	}
	return totalClases;
}