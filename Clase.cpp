#include <iostream>
#include <sstream>
#include "Clase.h"



Clase::Clase()
{
}

Clase::Clase(int horaI, int horaF) {
	horaInicio = horaI;
	horaFinal = horaF;
}
Clase::~Clase(){}

int Clase::getHoraInicio() {
	return horaInicio;
}
int Clase::getHoraFinal() {
	return horaFinal;
}
void Clase::setHoraInicio(int horaI) {
	horaInicio = horaI;
}
void Clase::setHoraFinal(int horaF) {
	horaFinal = horaF;
}
string Clase:: toString(){
	stringstream s;
	s << "Hora de Inicio de Clase: " << horaInicio << endl;
	s << "Hora Final de Clase: " << horaFinal << endl;
	return s.str();
}

ostream& operator<<(ostream& out, const Clase& cl) {
	return out << cl.horaInicio << endl << cl.horaFinal << endl;
}

istream& operator>>(istream& in, Clase& cl) {
	return in >> cl.horaInicio >> cl.horaFinal;
}