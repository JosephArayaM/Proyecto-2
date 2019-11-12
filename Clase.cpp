#include <iostream>
#include <sstream>
#include "Clase.h"



Clase::Clase()
{
}

Clase::Clase(string nomcla, int part1, int max1, int horaI, int horaF) {
        nombreC = nomcla;
        part = part1;
        max = max1;
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

void Clase::setMax(int max) {
    this->max = max;
}

int Clase::getMax() {
    return max;
}

void Clase::setPart(int part) {
    this->part = part;
}

int Clase::getPart(){
    return part;
}

void Clase::setInst(Instructor* inst) {
    this->inst = inst;
}

void Clase::setNombreC(string nombreC) {
    this->nombreC = nombreC;
}

string Clase::getNombreC(){
    return nombreC;
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

void Clase::InsertarSoc(Socio* soc1){
    if(part <= max){
        soc->insertarSocio(soc1);
        part++;
    }
    else
        cout << "Ya no hay mas campos" << endl;
}

ostream& operator<<(ostream& out, const Clase& cl) {
	return out << cl.horaInicio << endl << cl.horaFinal << endl;
}

istream& operator>>(istream& in, Clase& cl) {
	return in >> cl.horaInicio >> cl.horaFinal;
}