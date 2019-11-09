#ifndef ListaSalones_h
#define ListaSalones_h

#include "NodoSalon.h"

class ListaSalones {

	private:
		NodoSalon* primero;
		NodoSalon* actual;


	public:
		ListaSalones();
		ListaSalones(ListaSalones* orig);
		virtual~ListaSalones();
		NodoSalon* getPrimero();
		NodoSalon* getActual();

		void setPrimero(NodoSalon* primero);
		void setActual(NodoSalon* actual);

		void insertarSalon(Salon* salon);

		bool eliminarSalon();

		int totalSalones();

		string toString();






};
#endif