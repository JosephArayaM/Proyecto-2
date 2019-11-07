#include<iostream>
#include<sstream>
#include"Persona.h"
using namespace std;

class Socio: public Persona {

	private:
		string correo;
		string numeroTelefono;			
		Rutina* Vigente;

	public:

		Socio(string, Instructor* , Rutina*, string, string, string);
		Socio();
		~Socio();
		string getCorreo();
		string getNumeroTelefono();
		void setCorreo(string);
		void setNumeroTelefono(string);
		string toString();

		void insertarSocio();
		void eliminarSocio();

};
