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

void ListaEjercicios::salvarEjercicios() {
	//1-crear un archivo de salida para grabar
	ofstream os("ListadeEjercicios.txt", ios::out);

	//2- Ver si se pudo abrir
	if (os) {//si se pudo abrir
		actual = primero;
		while (actual != nullptr) {
			os << actual->getEjercicio()->getNombreEjercicio();
			os << actual->getEjercicio()->getRepeticiones();
			os << actual->getEjercicio()->getPeso();
		}
		os.close(); //Cerrar el archivo una vez grabado


	}
	else {

		cout << "No se pudo abrir" << endl;
	}

}

void ListaEjercicios::recuperarEjercicios() {


	this->eliminarEjercicio();  // este metodo auto-limpia el contened.

	Ejercicio ejer;
	ifstream is("ListadeEjercicios.txt", ios::in);
	if (is) {
		is >> ejer;
		while (!is.eof()) {

			Ejercicio* eje = new Ejercicio(ejer.getNombreEjercicio(), ejer.getRepeticiones(),ejer.getPeso());
			this->insertarEjercicio(eje);
			is >> ejer;
		}
		is.close();
	}
	else {
		cout << "No se pudo abrir para lectura...." << endl;


	}

}