#include "Rutina.h"

Rutina::Rutina(){
}

Rutina::Rutina(string ven, string in, Expediente* dat, string cod) {
	fechaVen = ven;
	fechaIn = in;
	randCod = cod;
	datos = dat;
}

Rutina::~Rutina(){}


void Rutina::SetFechaIn(string fechaIn) {
	this->fechaIn = fechaIn;
}

string Rutina::GetFechaIn()  {
	return fechaIn;
}

void Rutina::SetFechaVen(string fechaVen) {
	this->fechaVen = fechaVen;
}

string Rutina::GetFechaVen()  {
	return fechaVen;
}

void Rutina::SetRepeticiones(string repeticiones) {
	this->GetRepeticiones() = repeticiones;
}
string Rutina:: GetRepeticiones()  {
	return repeticiones;
}


void Rutina::SetRandCod(string randCod) {
	this->randCod = randCod;
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