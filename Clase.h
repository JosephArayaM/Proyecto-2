#ifndef Clase_h
#define Clase_h

#include <iostream>
#include <sstream>

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

};

#endif