#ifndef NodoClase_h
#define NodoClase_h

#include "Clase.h"
#include<iostream>
#include <sstream>
using namespace std;

class NodoClase {

	private:
		Clase* clase;

		NodoClase* siguiente;
	
	public:
		NodoClase();
		NodoClase(Clase*, NodoClase* );
		virtual~NodoClase();
		Clase* getClase();
		NodoClase* getSiguiente();
		void setClase(Clase* clas);
		void setSiguiente(NodoClase* _siguiente);
		string toString();


};
#endif