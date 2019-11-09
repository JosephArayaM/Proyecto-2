
#ifndef Expediente_h
#define Expediente_h

#include <sstream>
#include <iostream>

using namespace std;

class Expediente {


private:

	float peso = 0;
	float masaMusc = 0;
	float grasaCor = 0;

public:
	Expediente() {}
	Expediente(float, float, float);
	virtual ~Expediente();
	void SetGrasaCor(float grasaCor);
	float GetGrasaCor();
	void SetMasaMusc(float masaMusc);
	float GetMasaMusc();
	void SetPeso(float peso);
	float GetPeso();


};
#endif