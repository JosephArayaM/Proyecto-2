#ifndef Clase_h
#define Clase_h

#include <iostream>
#include <sstream>
#include <fstream>

using namespace std;

class Clase {

	private:
		int horaInicio;
		int horaFinal;

	public:
		Clase();
		Clase(int, int);
		~Clase();
		int getHoraInicio();
		int getHoraFinal();
		void setHoraInicio(int);
		void setHoraFinal(int);
		string toString();

		friend ostream& operator<<(ostream&, const Clase&);
		friend istream& operator>>(istream&, Clase&);

};

#endif