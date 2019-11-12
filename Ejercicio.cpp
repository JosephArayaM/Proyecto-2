#include "Ejercicio.h"

Ejercicio::Ejercicio(string nomEje, string repe, double pes){
	nombreEjercicio = nomEje;
	repeticiones = repe;
	peso = pes;

}

Ejercicio::Ejercicio(){
	nombreEjercicio = "";
	repeticiones = "";
	peso = 0.0;
}

Ejercicio::~Ejercicio(){}

string Ejercicio::getNombreEjercicio() {
	return nombreEjercicio;
}

string Ejercicio::getRepeticiones() {
	return repeticiones;
}

double Ejercicio::getPeso() {
	return peso;
}


void Ejercicio::setNombreEjercicio(string nomEje) {
	nombreEjercicio = nomEje;
}

void Ejercicio::setRepeticiones(string repe) {
	repeticiones = repe;
}

void Ejercicio::setPeso(double pes) {
	peso = pes;
}

string Ejercicio::toString(){
	stringstream s;
	s << "Nombre del Ejercicio: " << nombreEjercicio << endl;
	s << "Numero de Repeticiones: " << repeticiones << endl;
	s << "Peso: " << peso << endl;
	return s.str();

}

ostream& operator<<(ostream& out, const Ejercicio& ejer) {
	return out << ejer.nombreEjercicio << endl << ejer.repeticiones << endl << ejer.peso << endl;
}

istream& operator>>(istream& in, Ejercicio& ejer) {
	return in >> ejer.nombreEjercicio >> ejer.repeticiones >> ejer.peso;
}