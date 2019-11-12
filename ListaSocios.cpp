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

void ListaSocios::salvarSocios() {
	//1-crear un archivo de salida para grabar
	ofstream os("ListadeSocios.txt", ios::out);

	//2- Ver si se pudo abrir
	if (os) {//si se pudo abrir
		actual = primero;
		while (actual != nullptr) {
			os << actual->getSocio()->getNombre();
			os << actual->getSocio()->getId();
			os << actual->getSocio()->getCorreo();
			os << actual->getSocio()->getNumeroTelefono();
			os << actual->getSocio()->getVigente();
			os << actual->getSocio()->getInstructor();
		}
		os.close(); //Cerrar el archivo una vez grabado


	}
	else {

		cout << "No se pudo abrir" << endl;
	}

}

void ListaSocios::recuperarSocios() {


	this->eliminarSocio(); 

	Socio soc;
	ifstream is("ListadeSocios.txt", ios::in);
	if (is) {
		is >> soc;
		while (!is.eof()) {

			Socio* so = new Socio(soc.getNombre(), soc.getId(), soc.getCorreo(),soc.getNumeroTelefono(),soc.getVigente(),soc.getInstructor());
			this->insertarSocio(so);
			is >> soc;
		}
		is.close();
	}
	else {
		cout << "No se pudo abrir para lectura...." << endl;


	}

}