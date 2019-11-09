#ifndef CONTROL_H
#define CONTROL_H

#include "Interfaz.h"
#include "Clase.h"
#include "Expediente.h"
#include "Instructor.h"
#include "ListaInstructores.h"
#include "ListaSocios.h"
#include "Persona.h"
#include "Salon.h"
#include "Socio.h"

class Control {
public:

Interfaz* i = new Interfaz;
ListaInstructores* 

Control();
void opciones();
void opcInscrip();
void opcIns();
void opcSoc();
void opcCla();
void opcRut();
void opcSal();
~Control();

};
#endif /* CONTROL_H */

