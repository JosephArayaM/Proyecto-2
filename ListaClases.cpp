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

void ListaClases::salvarClases() {
	//1-crear un archivo de salida para grabar
	ofstream os("ListadeClases.txt", ios::out);

	//2- Ver si se pudo abrir
	if (os) {//si se pudo abrir
		actual = primero;
			while(actual != nullptr) {
				os << actual->getClase()->getHoraInicio();
				os << actual->getClase()->getHoraFinal();
		}
		os.close(); //Cerrar el archivo una vez grabado


	}
	else {

		cout << "No se pudo abrir" << endl;
	}

}

void ListaClases::recuperarClases() {


	this->eliminarClase();  // este metodo auto-limpia el contened.

	Clase cl;
	ifstream is("ListaClases.txt", ios::in);
	if (is) {
		is >> cl;
		while (!is.eof()) {

			Clase* cla = new Clase(cl.getHoraInicio(), cl.getHoraFinal());
			this->insertarClase(cla);
			is >> cl;
		}
		is.close();
	}
	else {
		cout << "No se pudo abrir para lectura...." << endl;


	}

}