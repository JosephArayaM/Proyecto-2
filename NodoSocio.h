#ifndef NodoSocio_h
#define NodoSocio_h

#include "Socio.h"

using namespace std;

class NodoSocio {
	NodoSocio* siguiente;
	Socio* socio;

public:
	NodoSocio();
	NodoSocio(Socio* socio, NodoSocio* siguiente);
	virtual ~NodoSocio();
	 Socio* getSocio() ;
	void setSocio( Socio* soc);
	NodoSocio* getSiguiente() ;
	void setSiguiente(NodoSocio* _siguiente);
	string toString();
};
#endif
