#include <iostream>
#include <sstream>

#include "Nodo.h"

using namespace std;

class ListaSocios {
private:
	Nodo* primero;
	Nodo* actual;
public:
	ListaSocios();
	ListaSocios( ListaSocios* orig);
	virtual ~ListaSocios();
	Nodo* getPrimero();
	void setPrimero(Nodo* primero);
	Nodo* getActual() ;
	void setActual(Nodo* actual);
	string toString();

};
