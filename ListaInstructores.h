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
	NodoInstructor* getPrimero() ;
	void setPrimero(NodoInstructor* primero);
	NodoInstructor* getActual() ;
	void setActual(NodoInstructor* actual);
	string toString();
	void insertarInicio(Instructor* instructor);
	void insertarFinal(Instructor* instructor);
	bool eliminarInicio();
	int totalInstructores();
};
