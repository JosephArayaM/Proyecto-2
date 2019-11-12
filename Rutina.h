#ifndef Rutina_h
#define Rutina_h

#include <iostream>
#include<sstream>
#include <stdlib.h>
#include <time.h>
#include "Expediente.h"
#include "ListaEjercicios.h"
#include "Expediente.h"

using namespace std;

class Rutina {
private:

	int objetivo; // 1 para bajar grasa corporal y 2 para subir masa muscular
	string randCod;
	Expediente* datos;
        ListaEjercicios* list;

public:
	Rutina();
	Rutina(int, string, Expediente*);
	virtual ~Rutina();
	
	int getObjetivo();
	void setObjetivo(int);
	void SetRandCod(string randCod);
	string GetRandCod() ;
	Expediente* getDatos();
	void setDatos(Expediente* datos);

	void GenerarCod();
        void LlenarList();
	string toString();
};

#endif
