#include "Socio.h"

using namespace std;

class Nodo {
	Nodo* siguiente;
	Socio* socio;

public:
	Nodo();
	Nodo(Socio* socio, Nodo* siguiente);
	virtual ~Nodo();
	 Socio* getSocio() ;
	void setSocio( Socio* soc);
	Nodo* getSiguiente() ;
	void setSiguiente(Nodo* _siguiente);
	string toString();
};
