#ifndef Ejercicio_h
#define Ejercicio_h
#include <iostream>
#include <sstream>
#include<fstream>
using namespace std;

class Ejercicio {

	private:
		string nombreEjercicio;
		string repeticiones;
		double peso;


	public:

		Ejercicio(string, string, double);
		Ejercicio();
		virtual~Ejercicio();

		string getNombreEjercicio();
		string getRepeticiones();
		double getPeso();

		void setNombreEjercicio(string);
		void setRepeticiones(string);
		void setPeso(double);

		string toString();


		friend ostream& operator<<(ostream&, const Ejercicio&);
		friend istream& operator>>(istream&, Ejercicio&);







};
#endif