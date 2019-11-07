#include <sstream>
#include <iostream>

using namespace std;

class Expediente {
private:
	float peso;
	float masaMusc;
	float grasaCor;
public:
	Expediente(float, float, float);
	virtual ~Expediente();
	void SetGrasaCor(float grasaCor);
	float GetGrasaCor() const;
	void SetMasaMusc(float masaMusc);
	float GetMasaMusc() const;
	void SetPeso(float peso);
	float GetPeso() const;



};