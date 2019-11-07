

#ifndef Persona_h
#define Persona_h

#include<iostream>
#include<sstream>
#include <string>

using namespace std;

class Persona{
protected:
	string nombre;
	string id;

public:
	Persona() {	}
	Persona(string , string );
	void setNombre(string);
	string getNombre();
	void setId(string id);
	string getId();
	string toString();


};
#endif // !Persona_h