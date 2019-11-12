#ifndef ListaSocios_h
#define ListaSocios_h

#include <iostream>
#include <sstream>

#include "NodoSocio.h"

using namespace std;

class ListaSocios {
private:

	NodoSocio* primero;
	NodoSocio* actual;


public:
	ListaSocios();
	ListaSocios( ListaSocios* orig);
	virtual ~ListaSocios();
	NodoSocio* getPrimero();
	void setPrimero(NodoSocio* primero);
	NodoSocio* getActual() ;
	void setActual(NodoSocio* actual);
	string toString();
        Socio* Encontrar();
	void insertarSocio(Socio* socio);
	bool eliminarSocio();
	int totalSocios();



};

#endif
