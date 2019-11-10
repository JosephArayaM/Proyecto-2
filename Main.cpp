#include<sstream>
#include<iostream>
#include "Control.h"

using namespace std;

int main() {
	Control* c1 = new Control();
	c1->opciones();

	//Expediente* expediente1 = new Expediente(60.5,35.3,25.8);
	//Expediente* expediente2 = new Expediente(75.0, 30.2, 22.3);
	//Expediente* expediente3 = new Expediente(65.3, 31.7, 23.6);
	//Expediente* expediente4 = new Expediente(80.6, 37.4, 24.9);
	//Expediente* expediente5 = new Expediente(64.4, 40.1, 26.5);

	//Instructor* instructor1 = new Instructor("Pablo","7-02234","8446-5460","pablito67@gmail.com",7.8,expediente1);
	//Instructor* instructor2 = new Instructor("Daniel", "3-2221", "7665-3221", "danielvg@gmail.com",8.1, expediente2);
	//Instructor* instructor3 = new Instructor("Sofia", "1-6786", "8318-9654", "soperez@gmail.com",9.6, expediente3);
	//Instructor* instructor4 = new Instructor("Erick", "1-43564", "8778-3487", "eg8919@gmail.com",8.5, expediente4);
	//Instructor* instructor5 = new Instructor("Ester", "4-2389t", "7331-1773", "moreste45@gmail.com",7.2, expediente5);


	//ListaInstructores* listaInstructores = new ListaInstructores();

	//listaInstructores->insertarInstructor(instructor1);
	//listaInstructores->insertarInstructor(instructor2);
	//listaInstructores->insertarInstructor(instructor3);
	//listaInstructores->insertarInstructor(instructor4);
	//listaInstructores->insertarInstructor(instructor5);

	//cout << "Lista de Instructores [" << listaInstructores->totalInstructores() << "] \n" << listaInstructores->toString() << endl;

	//// Se elimina el instructor
	//listaInstructores->eliminarInstructor();
	//cout << "Lista de instructores [" << listaInstructores->totalInstructores() << "] \n" << listaInstructores->toString() << endl;



	//// Se elimina toda la lista
	//delete(listaInstructores);
	//cout << "Lista de Instructores [" << listaInstructores->totalInstructores() << "] \n" << listaInstructores->toString() << endl;

	//-----------------------------------------------------------------------------------------------------------

	//Rutina* rutina1 = new Rutina(1,"11",expediente1,);
	//Rutina* rutina2 = new Rutina(2,"22",expediente2,);
	//Rutina* rutina3 = new Rutina(2,"33",expediente3,);
	//Rutina* rutina4 = new Rutina(1,"44",expediente4,);
	//Rutina* rutina5 = new Rutina(1,"55",expediente5,);

		//ListaRutinas* listaRutinas = new ListaRutinas();

	//listaRutinas->insertarRutina(rutina1);
	//listaRutinas->insertarRutina(rutina2);
	//listaRutinas->insertarRutina(rutina3);
	//listaRutinas->insertarRutina(rutina4);
	//listaRutinas->insertarRutina(rutina5);

	//cout << "Lista de Rutinas [" << listaRutinas->totalRutinas() << "] \n" << listaRutinas->toString() << endl;

	//// Se elimina el instructor
	//listaRutinas->eliminarRutina();
	//cout << "Lista de instructores [" << listaRutinas->totalRutinas() << "] \n" << listaRutinas->toString() << endl;



	//// Se elimina toda la lista
	//delete(listaRutinas);
	//cout << "Lista de Instructores [" << listaRutinas->totalRutinas() << "] \n" << listaRutinas->toString() << endl;


	////-------------------------------------------------------------------------------------------

	//Socio* socio1 = new Socio("Lucia","1111","luci12@gmail.com","7213-5445", rutina1, instructor1);
	//Socio* socio2 = new Socio("Peter", "1111", "peter456@gmail.com", "8665-8998", rutina2, instructor2);
	//Socio* socio3 = new Socio("Aldo", "1111", "agomez23@gmail.com", "8998-3476", rutina3, instructor3);
	//Socio* socio4 = new Socio("Raquel", "1111", "raque981@gmail.com", "8654-0989", rutina4, instructor4);
	//Socio* socio5 = new Socio("Santiago", "1111", "santi34@gmail.com", "8965-3475", rutina5, instructor5);

	//ListaSocios* listaSocios = new ListaSocios();

	//listaSocios->insertarSocio(socio1);
	//listaSocios->insertarSocio(socio2);
	//listaSocios->insertarSocio(socio3);
	//listaSocios->insertarSocio(socio4);
	//listaSocios->insertarSocio(socio5);

	//cout << "Lista de Socios [" << listaSocios->totalSocios() << "] \n" << listaSocios->toString() << endl;

	//// Se elimina el instructor
	//listaSocios->eliminarSocio();
	//cout << "Lista de instructores [" << listaSocios->totalSocios() << "] \n" << listaSocios->toString() << endl;



	//// Se elimina toda la lista
	//delete(listaSocios);
	//cout << "Lista de Instructores [" << listaSocios->totalSocios() << "] \n" << listaSocios->toString() << endl;





	//---------------------------------------------------------------------------------------------------------
	
	



	return 0;
}