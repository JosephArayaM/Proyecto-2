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
                void insertarClase(Clase* clas1, string nomb);
		void insertarSalon(Salon* salon);
                void mostrarSalon(string nomb);
		bool eliminarSalon();

		int totalSalones();

		string toString();
                virtual void  salvarSalones(); //Escribir en archivo
		/*virtual void recuperarSalones(); //Leer de Archivo*/






};
#endif