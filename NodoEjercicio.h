#ifndef NodoEjercicio_h
#define NodoEjercicio_h

#include "Ejercicio.h"

using namespace std;

class NodoEjercicio {
	NodoEjercicio* siguiente;
	Ejercicio* ejercicio;

public:
	NodoEjercicio();
	NodoEjercicio(Ejercicio*, NodoEjercicio*);
	virtual ~NodoEjercicio();
	Ejercicio* getEjercicio();
	void setEjercicio(Ejercicio* eje);
	NodoEjercicio* getSiguiente();
	void setSiguiente(NodoEjercicio* _siguiente);

	string toString();
};
#endif
