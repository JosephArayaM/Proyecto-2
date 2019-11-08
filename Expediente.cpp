#include "Expediente.h"

Expediente::Expediente(float pe, float mm, float gc) {
	peso = pe;
	masaMusc = mm;
	grasaCor = gc;
}

Expediente::~Expediente(){}


void Expediente::SetGrasaCor(float grasaCor) {
	this->grasaCor = grasaCor;
}

float Expediente::GetGrasaCor() const {
	return grasaCor;
}

void Expediente::SetMasaMusc(float masaMusc) {
	this->masaMusc = masaMusc;
}

float Expediente::GetMasaMusc() const {
	return masaMusc;
}

void Expediente::SetPeso(float peso) {
	this->peso = peso;
}

float Expediente::GetPeso() const {
	return peso;
}