#ifndef Fecha_h
#define Fecha_h

#include <iostream>
#include <sstream>

using namespace std;

class Fecha {


	private:
		string dia;
		string mes;
		string annio;


	public:

		Fecha();
		Fecha(string, string, string);
		~Fecha();
		string getDia();
		string getMes();
		string getAnnio();
		void setDia(string);
		void setMes(string);
		void setAnnio(string);
		string toString();



};

#endif
