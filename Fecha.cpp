#include "Fecha.h"


Fecha::Fecha(){
	dia = "";
	mes = "";
	annio = "";
}

Fecha::Fecha(string d, string m, string a){
	dia = d;
	mes = m;
	annio = a;
}

Fecha::~Fecha(){}

string Fecha::getDia() {
	return dia;
}

string Fecha::getMes() {
	return mes;
}

string Fecha::getAnnio() {
	return annio;
}

void Fecha::setDia(string d) {
	dia = d;
}

void Fecha::setMes(string m) {
	mes = m;
}

void Fecha::setAnnio(string a) {
	annio = a;
}

string Fecha::toString(){
	stringstream s;
	s << "Dia: " << dia << endl;
	s << "Mes: " << mes << endl;
	s << "Año: " << annio << endl;
	return s.str();
}