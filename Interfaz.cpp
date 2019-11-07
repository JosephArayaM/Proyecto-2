#include <cstdlib>
#include <sstream>
#include<iostream>
#include "Interfaz.h"
using namespace std;



Interfaz::Interfaz(){}

Interfaz::~Interfaz(){}

void Interfaz::MainMenu() {
	int opcion1;
	do {
		cout << "----------------------------------------------------------------------------------------" << endl;
		cout << "   * Bienvenido a Vital salud, a cual sistema desea entrar?: *" << endl;
		cout << "----------------------------------------------------------------------------------------" << endl;
		cout << "   * 1. Mantenimiento " << endl;
		cout << "   * 2. Instructores " << endl;
		cout << "   * 3. Socios" << endl;
		cout << "   * 4. Clases" << endl;
		cout << "   * 5. Salir del sistema" << endl;
		cout << "-----------------------------------------------------------------------------------------" << endl;
		cin >> opcion1;
		cout << endl;
		switch (opcion1) {
		case 1: menuMan();
			break;
		case 2: menuIns();
			break;
		case 3: menuSoc();
			break;
		case 4: menuCla();
			break;
		default:
			cout << "-----------------------------------------------------------------------------" << endl;
			cout << " * Ingreso un numero que no corresponde a ninguna de las opciones posibles," << endl;
			cout << "   Vuelva a intentarlo" << endl;
			cout << "-----------------------------------------------------------------------------" << endl;
			cout << endl;
			break;
		}
	} while (opcion1 != 6);
}

void Interfaz::menuMan() {
	int opcion2;
	do {
		cout << "----------------------------------------------------------------------------------------" << endl;
		cout << "   * Bienvenido al sistema de mantenimiento, que desea hacer?: *" << endl;
		cout << "----------------------------------------------------------------------------------------" << endl;
		cout << "   * 1. Ingresar socios " << endl;
		cout << "   * 2. Ingresar instructores " << endl;
		cout << "   * 3. Ingresar socios" << endl;
		cout << "   * 4. Ingresar clases" << endl;
		cout << "   * 5. Regresar al sistema principal" << endl;
		cout << "----------------------------------------------------------------------------------------" << endl;
		cin >> opcion2;
		cout << endl;
		switch (opcion2) {
		case 1:

			break;
		case 2:

			break;
		case 3:

			break;
		case 4:

			break;
		default:
			cout << "-----------------------------------------------------------------------------" << endl;
			cout << " * Ingreso un numero que no corresponde a ninguna de las opciones posibles," << endl;
			cout << "   Vuelva a intentarlo" << endl;
			cout << "-----------------------------------------------------------------------------" << endl;
			cout << endl;
			break;
		}
	} while (opcion2 != 5);
}

void Interfaz::menuIns() {
	int opcion3;
	do {
		cout << "----------------------------------------------------------------------------------------" << endl;
		cout << "   * Bienvenido al sistema de Instructores, que desea hacer?: *" << endl;
		cout << "----------------------------------------------------------------------------------------" << endl;
		cout << "   * 1. Actualizar los datos de un socio " << endl;
		cout << "   * 2. Ingresar al sitema de rutinas " << endl;
		cout << "   * 3. " << endl;
		cout << "   * 4. Ingresar clases" << endl;
		cout << "   * 5. Regresar al sistema principal" << endl;
		cout << "----------------------------------------------------------------------------------------" << endl;
		cin >> opcion3;
		cout << endl;
		switch (opcion3) {
		case 1:

			break;
		case 2: menuRut();
			break;
		case 3:

			break;
		case 4:

			break;
		default:
			cout << "-----------------------------------------------------------------------------" << endl;
			cout << " * Ingreso un numero que no corresponde a ninguna de las opciones posibles," << endl;
			cout << "   Vuelva a intentarlo" << endl;
			cout << "-----------------------------------------------------------------------------" << endl;
			cout << endl;
			break;
		}
	} while (opcion3 != 5);
}

void Interfaz::menuRut() {
	cout << "2;";
}

void Interfaz::menuSoc() {
	cout << "2;";
}

void Interfaz::menuCla() {
	cout << "2;";
}
