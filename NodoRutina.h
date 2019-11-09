#ifndef NodoRutina_h
#define NodoRutina_h

#include "Rutina.h"

using namespace std;

class NodoRutina {
	NodoRutina* siguiente;
	Rutina* rutina;

public:
	NodoRutina();
	NodoRutina(Rutina*, NodoRutina*);
	virtual ~NodoRutina();
	Rutina* getRutina();
	void setRutina(Rutina* ruti);
	NodoRutina* getSiguiente();
	void setSiguiente(NodoRutina* _siguiente);

	string toString();
};
#endif