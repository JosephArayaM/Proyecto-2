#include<sstream>
#include<iostream>
#include "Persona.h"
#include "Instructor.h"
#include "ListaInstructores.h"
using namespace std;

int main() {


	Expediente* expediente1 = new Expediente(60.5,35.3,25.8);
	Expediente* expediente2 = new Expediente(75.0, 30.2, 22.3);
	Expediente* expediente3 = new Expediente(65.3, 31.7, 23.6);
	Expediente* expediente4 = new Expediente(80.6, 37.4, 24.9);
	Expediente* expediente5 = new Expediente(64.4, 40.1, 26.5);

	Instructor* instructor1 = new Instructor("Pablo","7-02234","8446-5460","pablito67@gmail.com",expediente1);
	Instructor* instructor2 = new Instructor("Daniel", "3-2221", "7665-3221", "danielvg@gmail.com", expediente2);
	Instructor* instructor3 = new Instructor("Sofia", "1-6786", "8318-9654", "soperez@gmail.com", expediente3);
	Instructor* instructor4 = new Instructor("Erick", "1-43564", "8778-3487", "eg8919@gmail.com", expediente4);
	Instructor* instructor5 = new Instructor("Ester", "4-2389t", "7331-1773", "moreste45@gmail.com", expediente5);


	ListaInstructores* listaInstructores = new ListaInstructores();

	listaInstructores->insertarInicio(instructor1);
	listaInstructores->insertarInicio(instructor2);
	listaInstructores->insertarInicio(instructor3);
	listaInstructores->insertarInicio(instructor4);
	listaInstructores->insertarInicio(instructor5);

	cout << "Lista de Instructores [" << listaInstructores->totalInstructores() << "] \n" << listaInstructores->toString() << endl;

	// Se elimina el primer nodo
	listaInstructores->eliminarInicio();
	cout << "Lista de instructores [" << listaInstructores->totalInstructores() << "] \n" << listaInstructores->toString() << endl;

	// Se inserta al final de la lista
	listaInstructores->insertarFinal(instructor5);
	cout << "Lista de Instructores [" << listaInstructores->totalInstructores() << "] \n" << listaInstructores->toString() << endl;

	// Se elimina toda la lista
	delete(listaInstructores);
	cout << "Lista de Instructores [" << listaInstructores->totalInstructores() << "] \n" << listaInstructores->toString() << endl;





	return 0;
}