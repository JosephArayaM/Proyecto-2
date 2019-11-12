#ifndef ListaInstructores_h
#define ListaInstructores_h

#include <iostream>
#include <sstream>

#include "NodoInstructor.h"

using namespace std;

class ListaInstructores {
private:
	NodoInstructor* primero;
	NodoInstructor* actual;
public:
	ListaInstructores();
	ListaInstructores(ListaInstructores* orig);
	virtual ~ListaInstructores();
	NodoInstructor* getPrimero();
	void setPrimero(NodoInstructor* primero);
	NodoInstructor* getActual();
	void setActual(NodoInstructor* actual);
	string toString();
	void insertarInstructor(Instructor* instructor);
	bool eliminarInstructor();
	int totalInstructores();
	Instructor* Encontrar(string nomb);
	Instructor* MejorResul();

	virtual void  salvarInstructores(); //Escribir en archivo
	virtual void recuperarInstructores(); //Leer de Archivo
};
#endif
