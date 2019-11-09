#include "ListaRutinas.h"

ListaRutinas::ListaRutinas() {
	primero = nullptr;
	actual = nullptr;
}

ListaRutinas::ListaRutinas(ListaRutinas* orig){
}

 ListaRutinas::~ListaRutinas(){
	 while (primero != nullptr) {
		 actual = primero;
		 primero = primero->getSiguiente();
		 delete (actual);
	 }
 }

 NodoRutina* ListaRutinas::getPrimero() {
	 return primero;
 }

 void ListaRutinas::setPrimero(NodoRutina* primero) {
	ListaRutinas::primero=primero;
 }

 NodoRutina* ListaRutinas::getActual() {
	 return actual;
 }

 void ListaRutinas::setActual(NodoRutina* actual) {
	 ListaRutinas::actual = actual;
 }

 string ListaRutinas::toString() {
	 NodoRutina* p = primero;
	 stringstream s;
	 while (p != nullptr) {
		 s << p->getRutina()->toString() << endl << endl;
		 p = p->getSiguiente();

	 }
	 return s.str();

 }

void ListaRutinas::insertarRutina(Rutina* rutina){
	primero = new NodoRutina(rutina, primero);
}

bool ListaRutinas::eliminarRutina() {
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

int ListaRutinas::totalRutinas(){
	int totalRutinas = 0;
	primero = actual;
	while (primero != nullptr) {
		totalRutinas++;
		actual = actual->getSiguiente();
	}
	return totalRutinas;

}