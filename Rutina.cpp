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

string Rutina::MostrarRutina() {
	return "";
}

void Rutina::GenerarCod() {

}

bool Rutina::determinarProg() {
	return true;
}

string Rutina::toString() {
	stringstream s;
	s << "" << endl;

	return s.str();
}