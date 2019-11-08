#include "Expediente.h"

using namespace std;

class Rutina {
private:
	string fechaIn;
	string fechaVen;
	int objetivo; // 1 para bajar grasa corporal y 2 para subir masa muscular
	Expediente* datos;
	string randCod;
	string repeticiones;

public:
	Rutina();
	Rutina(string ven, string in, Expediente* dat, string cod);
	virtual ~Rutina();
	void SetFechaIn(string fechaIn);
	string GetFechaIn() ;
	void SetFechaVen(string fechaVen);
	string GetFechaVen() ;
	void SetRepeticiones(string repeticiones);
	string GetRepeticiones() ;
	void SetRandCod(string randCod);
	string GetRandCod() ;
	string MostrarRutina();
	void GenerarCod();
	bool determinarProg();
};
