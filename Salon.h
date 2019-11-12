#ifndef Salon_h
#define Salon_h

#include <sstream>
#include <iostream>
#include <fstream>

using namespace std;

class Salon {

	private:
		string nombreSalon;
		string codigo;
		int capacidad;


	public:	
		Salon();
		Salon(string, string, int);
		~Salon();

		string getNombreSalon();
		string getCodigo();
		int getCapacidad();

		void setNombreSalon(string);
		void setCodigo(string);
		void setCapacidad(int);
		
		string toString();

		friend ostream& operator<<(ostream&, const Salon&);
		friend istream& operator>>(istream&, Salon&);

};
#endif