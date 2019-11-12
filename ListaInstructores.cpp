#include "ListaInstructores.h"

ListaInstructores::ListaInstructores() {
	primero = nullptr;
	actual = nullptr;
}

ListaInstructores::ListaInstructores(ListaInstructores* orig) {
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

NodoInstructor* ListaInstructores::getPrimero() {
	return primero;
}

void ListaInstructores::setPrimero(NodoInstructor* primero) {
	ListaInstructores::primero = primero;
}

NodoInstructor* ListaInstructores::getActual() {
	return actual;
}

void ListaInstructores::setActual(NodoInstructor* actual) {
	ListaInstructores::actual = actual;
}


void ListaInstructores::insertarInstructor(Instructor* instructor) {
	actual = new NodoInstructor(instructor, nullptr);
	if (primero == nullptr) {
		primero = actual;
	}
	else {
		actual->setSiguiente(primero);
		primero = actual;
	}
}



bool ListaInstructores::eliminarInstructor() {
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

Instructor* ListaInstructores::Encontrar(string nomb) {
	actual = primero;
	while (actual != nullptr) {
		if (actual->getInstructor()->getNombre() == nomb) {
			return actual->getInstructor();
		}
		actual = actual->getSiguiente();
	}
}

Instructor* ListaInstructores::MejorResul() {
	Instructor* ins1 = actual->getInstructor();
	actual = primero;
	while (actual != nullptr) {
		if (ins1->getPuntaje() < actual->getInstructor()->getPuntaje()) {
			ins1 = actual->getInstructor();
		}
		actual = actual->getSiguiente();
	}
	return ins1;
}

void ListaInstructores::salvarInstructores() {
	//1-crear un archivo de salida para grabar
	ofstream os("ListadeInstructores.txt", ios::out);

	//2- Ver si se pudo abrir
	if (os) {//si se pudo abrir
		actual = primero;
		while (actual != nullptr) {
			os << actual->getInstructor()->getNombre();
			os << actual->getInstructor()->getId();
			os << actual->getInstructor()->getNumeroTelefono();
			os << actual->getInstructor()->getPuntaje();
		}
		os.close(); //Cerrar el archivo una vez grabado


	}
	else {

		cout << "No se pudo abrir" << endl;
	}

}

void ListaInstructores::recuperarInstructores() {


	this->eliminarInstructor();  // este metodo auto-limpia el contened.

	Instructor ins;
	ifstream is("ListadeInstructores.txt", ios::in);
	if (is) {
		is >> ins;
		while (!is.eof()) {

			Instructor* instr = new Instructor(ins.getNombre(), ins.getId(), ins.getNumeroTelefono(),ins.getPuntaje());
			this->insertarInstructor(instr);
			is >> ins;
		}
		is.close();
	}
	else {
		cout << "No se pudo abrir para lectura...." << endl;


	}

}