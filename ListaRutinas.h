#ifndef ListaRutinas_h
#define ListaRutinas_h

#include <iostream>
#include <sstream>

#include "NodoRutina.h"

using namespace std;

class ListaRutinas {
private:

	NodoRutina* primero;
	NodoRutina* actual;
public:
	ListaRutinas();
	ListaRutinas(ListaRutinas* orig);
	virtual ~ListaRutinas();
	NodoRutina* getPrimero();
	void setPrimero(NodoRutina* primero);
	NodoRutina* getActual();
	void setActual(NodoRutina* actual);
	string toString();

	void insertarRutina(Rutina* rutina);
	bool eliminarRutina();
	int totalRutinas();

};

#endif
