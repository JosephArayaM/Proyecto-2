#ifndef Ejercicio_h
#define Ejercicio_h
#include <iostream>
#include <fstream>
#include <sstream>
using namespace std;

class Ejercicio {

	private:
		string nombreEjercicio;
		string repeticiones;
		float peso;


	public:

		Ejercicio(string, string, float);
		Ejercicio();
		virtual~Ejercicio();

		string getNombreEjercicio();
		string getRepeticiones();
		float getPeso();

		void setNombreEjercicio(string);
		void setRepeticiones(string);
		void setPeso(float);

		string toString();
                
		friend ostream& operator<<(ostream&, const Ejercicio&);
		friend istream& operator>>(istream&, Ejercicio&);










};
#endif