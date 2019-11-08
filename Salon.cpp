#include "Salon.h"

Salon::Salon(){}

Salon::Salon(string nombreS, string cod, int capa) {
	nombreSalon = nombreS;
	codigo = cod;
	capacidad = capa;
}

Salon::~Salon(){}

string Salon::getNombreSalon() {
	return nombreSalon;
}

string Salon::getCodigo() {
	return codigo;
}

int Salon::getCapacidad() {
	return capacidad;
}

void Salon::setNombreSalon(string nombreS) {
	nombreSalon = nombreS;
}

void Salon::setCodigo(string cod) {
	codigo = cod;
}

void Salon::setCapacidad(int capa) {
	capacidad = capa;
}

string Salon::toString(){
	stringstream s;
	s << "Nombre del Salon: " << nombreSalon << endl;
	s << " Codigo del Salon: " << codigo << endl;
	s << "Capacidad del Salon: " << capacidad << endl;
	return s.str();
}
