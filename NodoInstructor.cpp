#include "NodoInstructor.h"


NodoInstructor::NodoInstructor()
{
}

NodoInstructor::NodoInstructor(Instructor* instructor, NodoInstructor* siguiente)
{
	this->siguiente = siguiente;
	this->instructor = instructor;
}

NodoInstructor::~NodoInstructor()
{
}

 Instructor* NodoInstructor::getInstructor()  {
	return instructor;
}

void NodoInstructor::setInstructor( Instructor* instruc) {
	instructor = instruc;
}

NodoInstructor* NodoInstructor::getSiguiente()  {
	return siguiente;
}

void NodoInstructor::setSiguiente(NodoInstructor* _siguiente) {
	NodoInstructor::siguiente = _siguiente;
}

std::string NodoInstructor::toString() {
	return instructor->toString();
}
