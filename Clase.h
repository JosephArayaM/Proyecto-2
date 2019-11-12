#ifndef Clase_h
#define Clase_h

#include <iostream>
#include <sstream>
#include "Instructor.h"
#include "ListaSocios.h"

using namespace std;

class Clase {

	private:
            string nombreC;
            int horaInicio;
            int horaFinal;
            Instructor* inst;
            ListaSocios* soc;
            int part;
            int max;

	public:
		Clase();
		Clase(string, int, int, int, int);
		~Clase();
		int getHoraInicio();
		int getHoraFinal();
                void setMax(int max);
                int getMax();
                void setPart(int part);
                int getPart();
                void setInst(Instructor* inst);
                void setNombreC(string nombreC);
                string getNombreC();
		void setHoraInicio(int);
		void setHoraFinal(int);
		string toString();
                void InsertarSoc(Socio* soc1);
                friend ostream& operator<<(ostream&, const Clase&);
		friend istream& operator>>(istream&, Clase&);
};

#endif