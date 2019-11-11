#ifndef ListaEjercicios_h
#define ListaEjercicios_h

#include <iostream>
#include <sstream>

#include "NodoEjercicio.h"

using namespace std;

class ListaEjercicios {
private:

	NodoEjercicio* primero;
	NodoEjercicio* actual;
public:
	ListaEjercicios();
	ListaEjercicios(ListaEjercicios* orig);
	virtual ~ListaEjercicios();
	NodoEjercicio* getPrimero();
	void setPrimero(NodoEjercicio* primero);
	NodoEjercicio* getActual();
	void setActual(NodoEjercicio* actual);
	string toString();

	void insertarEjercicio(Ejercicio* ejercicio);
	bool eliminarEjercicio();
	int totalEjercicios();

};

#endif
