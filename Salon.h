#ifndef Salon_h
#define Salon_h

#include <sstream>
#include <iostream>
#include <fstream>
#include "ListaClases.h"

using namespace std;

class Salon {

	private:
		string nombreSalon;
		string codigo;
		int cantidad;
                int part;
                ListaClases* listaC;

	public:	
		Salon();
		Salon(string, string, int, int);
		~Salon();

		string getNombreSalon();
		string getCodigo();
		int getCantidad();
                void setPart(int part);
                int getPart();

		void setNombreSalon(string);
		void setCodigo(string);
		void setCantidad(int);
		void insertClase(Clase* clas1);
		string toString();
                friend ostream& operator<<(ostream&, const Salon&);
		friend istream& operator>>(istream&, Salon&);


};
#endif