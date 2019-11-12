#include "Salon.h"

Salon::Salon(){}

Salon::Salon(string nombreS, string cod, int capa, int parti) {
	nombreSalon = nombreS;
	codigo = cod;
	cantidad = capa;
        part = parti;
}

Salon::~Salon(){}

string Salon::getNombreSalon() {
	return nombreSalon;
}

string Salon::getCodigo() {
	return codigo;
}

int Salon::getCantidad() {
	return cantidad;
}

void Salon::setPart(int part) {
    this->part = part;
}

int Salon::getPart(){
    return part;
}

void Salon::setNombreSalon(string nombreS) {
	nombreSalon = nombreS;
}

void Salon::setCodigo(string cod) {
	codigo = cod;
}

void Salon::setCantidad(int capa) {
	cantidad = capa;
}

string Salon::toString(){
	stringstream s;
	s << "Nombre del Salon: " << nombreSalon << endl;
	s << " Codigo del Salon: " << codigo << endl;
	s << "Capacidad del Salon: " << cantidad << endl;
        s << "Cantidad de participantes: " << part <<endl;
        s << listaC->toString();
	return s.str();
}

void Salon::insertClase(Clase* clas1){
    if(part <= cantidad){
        listaC->insertarClase(clas1);
        part++;
    }
    else
        cout << "Ya no hay mas campos" << endl;
}

ostream& operator<<(ostream& out, const Salon& sal) {
	return out << sal.nombreSalon << endl << sal.codigo << endl << sal.cantidad<<sal.part << endl;
}

istream& operator>>(istream& in, Salon& sal) {
	return in >> sal.nombreSalon >> sal.codigo >> sal.cantidad>>sal.part;
}