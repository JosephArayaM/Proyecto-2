#include "Salon.h"
#include <iostream>
#include <string>

using namespace std;

class NodoSalon {
	NodoSalon* siguiente;
	Salon* salon;

public:
	NodoSalon();
	NodoSalon( Salon& salon, NodoSalon* siguiente);
	virtual ~NodoSalon();
	Salon* getSalon() ;
	void setSalon( Salon& sal);
	NodoSalon* getSiguiente() const;
	void setSiguiente(NodoSalon* _siguiente);
	string toString();
};