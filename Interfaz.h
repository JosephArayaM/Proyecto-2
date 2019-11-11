#ifndef Interfaz_h
#define Interfaz_h


#include <iostream>
#include <sstream>

using namespace std;

class Interfaz {

	public:
	
		Interfaz();
		~Interfaz();
		void imprimeMenu();
		void imprimeInscrip();
		void imprimeIns();
		void imprimeSoc();
		void imprimeCla();
		void imprimeRut();
		void imprimeSal();
		int validar();
		int menu();



};
#endif