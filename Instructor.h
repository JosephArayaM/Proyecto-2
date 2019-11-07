#include "ListaSocios.h"
#include"Expediente.h"
#include "Persona.h"

using namespace std;

class Instructor :public Persona {
private:
	string numeroTelefono;
	string correo;
	Expediente* expe;

public:
	Instructor();
	Instructor(string, string, string,string, Expediente* expe);
	string getNumeroTelefono();
	string getCorreo();
	void setNumeroTelefono(string);
	void setCorreo(string);
	virtual ~Instructor();

	 string toString();


};