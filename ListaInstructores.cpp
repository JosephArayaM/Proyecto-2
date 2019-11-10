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


void ListaInstructores::insertarInstructor( Instructor* instructor) {
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
        if(actual->getInstructor()->getNombre() == nomb){
            return actual->getInstructor();
        }
        actual = actual->getSiguiente();
    }
}

Instructor* ListaInstructores::MejorResul(){
    Instructor* ins1 =actual->getInstructor();
    actual = primero;
    while (actual != nullptr) {
        if(ins1->getPuntaje()  < actual->getInstructor()->getPuntaje()){
            ins1 = actual->getInstructor();
        }
        actual = actual->getSiguiente();
    }
    return ins1;
}