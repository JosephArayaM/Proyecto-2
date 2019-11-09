#include "ListaSalones.h"


ListaSalones::ListaSalones() {
	primero = nullptr;
	actual = nullptr;
}

ListaSalones::ListaSalones(ListaSalones* orig){
}

ListaSalones:: ~ListaSalones(){
	while (primero != nullptr) {
		actual = primero;
		primero = primero->getSiguiente();
		delete(actual);
	}
}

NodoSalon* ListaSalones::getPrimero() {
	return primero;
}

NodoSalon* ListaSalones::getActual() {
	return actual;
}


void ListaSalones::setPrimero(NodoSalon* primero) {
	ListaSalones::primero = primero;
}

void ListaSalones::setActual(NodoSalon* actual) {
	ListaSalones::actual = actual;
}

void ListaSalones::insertarSalon(Salon* salon) {
	primero = new NodoSalon(salon, primero);
}

bool ListaSalones::eliminarSalon(){
	if (primero == nullptr) {
		return false;
	}
	else
		actual = primero;
		primero = primero->getSiguiente();
		delete actual;
		return true;
}

int ListaSalones::totalSalones() {
	int totalSalones = 0;
	actual = primero;
	while (primero != nullptr) {
		totalSalones++;
		actual = actual->getSiguiente();
	}
	return totalSalones;


}


string ListaSalones::toString() {
	NodoSalon* p = primero;
	stringstream s;
	while (p != nullptr) {
		s << p->getSalon()->toString() << endl << endl;
		p = p->getSiguiente();

	}
	return s.str();

}