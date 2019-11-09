#include "Rutina.h"


Rutina::Rutina(){
	
}

Rutina::Rutina(int obje, string racod, Expediente* , Ejercicio* ) {
	objetivo = obje;
	randCod = racod;
}



Rutina::~Rutina(){}

int Rutina::getObjetivo() {
	return objetivo;
}

void Rutina::setObjetivo(int obje) {
	objetivo = obje;
}

void Rutina::SetRandCod(string racod) {
	randCod = racod;
}

string Rutina::GetRandCod()  {
	return randCod;
}

Expediente* Rutina::getDatos() {
	return datos;
}

void Rutina::setDatos(Expediente* datos){
	this->datos;
}


void Rutina::GenerarCod() {
		int num=0;
		srand(time(NULL));

		for (int i = 1; i <= 100; i++) {
			num = 1 + rand() % (101 - 1);
			cout << num << " ";
		}
}



string Rutina::toString() {
	stringstream s;
	s << "" << endl;

	return s.str();
}