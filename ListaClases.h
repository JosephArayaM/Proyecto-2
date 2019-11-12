
#ifndef ListaClases_h
#define ListaClases_h

#include <iostream>
#include <sstream>
#include "NodoClase.h"

using namespace std;

class ListaClases {

	private:
		NodoClase* primero;
		NodoClase* actual;

	
	public:
		ListaClases();
		ListaClases(ListaClases* orig);
		virtual~ListaClases();
		NodoClase* getPrimero();
		NodoClase* getActual();

		void setPrimero(NodoClase* primero);
		void setActual(NodoClase* actual);

		string toString();

		void insertarClase(Clase* clase);
		bool eliminarClase();
		int totalClases();

		virtual void  salvarClases(); //Escribir en archivo
		virtual void recuperarClases(); //Leer de Archivo

};
#endif