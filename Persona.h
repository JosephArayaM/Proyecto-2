

#ifndef Persona_h
#define Persona_h

#include<iostream>
#include<sstream>
#include <string>

using namespace std;

class Persona {
protected:
	string nombre;
	string id;

public:
	Persona(string nom, string ide);
	Persona();
	virtual ~Persona();
	void setNombre(string);
	string getNombre();
	void setId(string id);
	string getId();
	virtual string toString();


};
#endif // !Persona_h