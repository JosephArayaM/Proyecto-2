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
#include "Ejercicio.h"
#include "ListaRutinas.h"
#include "ListaSalones.h"
#include "Fecha.h"
#include "ListaClases.h"
#include "ListaEjercicios.h"

class Control {
public:
    Interfaz* i = new Interfaz;
    ListaInstructores* ListaIns = new ListaInstructores();
    ListaSocios* ListaSoc = new ListaSocios();
    ListaRutinas* ListaRut = new ListaRutinas();
    ListaSalones* ListaSal = new ListaSalones();
    ListaClases* ListaCla = new ListaClases();
    ListaEjercicios* ListaEje = new ListaEjercicios();
    
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

