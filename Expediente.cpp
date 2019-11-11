#include"Expediente.h"
using namespace std;


Expediente::Expediente(float pe, float mm, float gc) {
	peso = pe;
	masaMusc = mm;
	grasaCor = gc;
}

Expediente::~Expediente(){}


void Expediente::SetGrasaCor(float grasaCor) {
	this->grasaCor = grasaCor;
}

float Expediente::GetGrasaCor()  {
	return grasaCor;
}

void Expediente::SetMasaMusc(float masaMusc) {
	this->masaMusc = masaMusc;
}

float Expediente::GetMasaMusc()  {
	return masaMusc;
}

void Expediente::SetPeso(float peso) {
	this->peso = peso;
}

float Expediente::GetPeso()  {
	return peso;
}
string Expediente::toString() {
	stringstream s;
	s << "Peso: " << peso << endl;
	s << "Masa Muscular: " << masaMusc << endl;
	s << "Grasa Corporal: " << grasaCor << endl;
	return s.str();
}