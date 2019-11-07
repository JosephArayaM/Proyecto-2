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
	ListaSocios(const ListaSocios& orig);
	virtual ~ListaSocios();
	Nodo* getPrimero() const;
	void setPrimero(Nodo* primero);
	Nodo* getActual() const;
	void setActual(Nodo* actual);
	string toString();

};
