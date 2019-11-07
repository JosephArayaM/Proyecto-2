#include <sstream>
#include <iostream>

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



};