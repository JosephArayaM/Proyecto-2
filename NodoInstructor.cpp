#include "NodoInstructor.h"


NodoInstructor::NodoInstructor()
{
}

NodoInstructor::NodoInstructor(Instructor* ds, NodoInstructor*loca)
{
	this->siguiente = loca;
	this->instructor = ds;
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
