#include <cstdlib>
#include <sstream>
#include<iostream>
#include "Interfaz.h"
using namespace std;

Interfaz::Interfaz(){}

Interfaz::~Interfaz(){}

void Interfaz::imprimeMenu() {
    system("cls");
    cout << "----------------------------------------------------" << endl;
    cout << "-------------Bienvenido a Vital Salud---------------" << endl;
    cout << "----------------------------------------------------" << endl;
    cout << "1) - Iscripcion" << endl;
    cout << "2) - Instructores" << endl;
    cout << "3) - Socios" << endl;
    cout << "4) - Clases" << endl;
    cout << "5) - Salones" << endl;
    cout << "6) - Salir " << endl;
    cout << "----------------------------------------------------" << endl;
    cout << "------A cual sistema desea entrar ?-----------------" << endl;
    cout << "----------------------------------------------------" << endl;
    cout << endl;
    
}

void Interfaz::imprimeInscrip(){
    system("cls");
    cout << "----------------------------------------------------" << endl;
    cout << "-------Bienvenido al sistema de inscripciones-------" << endl;
    cout << "----------------------------------------------------" << endl;
    cout << "1) - Inscribir un nuevo socio" << endl;
    cout << "2) - Salir " << endl;
    cout << "----------------------------------------------------" << endl;
    cout << "----------------Que desea hacer ?-------------------" << endl;
    cout << "----------------------------------------------------" << endl;
    cout << endl;
}

void Interfaz::imprimeIns() {
    system("cls");
    cout << "----------------------------------------------------" << endl;
    cout << "-------------Menu de Instructores-------------------" << endl;
    cout << "----------------------------------------------------" << endl;
    cout << "1) - Contratar  un Instructor" << endl;
    cout << "2) - Mostrar la lista de Instructores" << endl;
    cout << "3) - Ingresar al menu de rutinas" << endl;
    cout << "4) - Mostrar el instructor con mejores resultados" << endl;
    cout << "5) - Salir " << endl;
    cout << "----------------------------------------------------" << endl;
    cout << "-------------Que desea hacer ?----------------------" << endl;
    cout << "----------------------------------------------------" << endl;
    cout << endl;
}

void Interfaz::imprimeSoc() {
    system("cls");
    cout << "----------------------------------------------------" << endl;
    cout << "-----------------Menu de Socios---------------------" << endl;
    cout << "----------------------------------------------------" << endl;
    cout << "1) - Mostrar la lista de Socios" << endl;
    cout << "2) - Mostrar un socio" << endl;
    cout << "3) - Mostrar la rutina de un socio" << endl;
    cout << "4) - Salir " << endl;
    cout << "----------------------------------------------------" << endl;
    cout << "----------------Que desea hacer ?-------------------" << endl;
    cout << "----------------------------------------------------" << endl;
    cout << endl; 
}

void Interfaz::imprimeCla() {
    system("cls");
    cout << "----------------------------------------------------" << endl;
    cout << "----------------Menu de Clases----------------------" << endl;
    cout << "----------------------------------------------------" << endl;
    cout << "1) - Crear una clase" << endl;
    cout << "3) - Incribir socios a clases" << endl;
    cout << "4) - Ver socios inscritos a una clase" << endl;
    cout << "5) - Salir " << endl;
    cout << "----------------------------------------------------" << endl;
    cout << "----------------Que desea hacer ?-------------------" << endl;
    cout << "----------------------------------------------------" << endl;
    cout << endl; 
}

void Interfaz::imprimeRut() {
    system("cls");
    cout << "----------------------------------------------------" << endl;
    cout << "-----------------Menu de Rutinas--------------------" << endl;
    cout << "----------------------------------------------------" << endl;
    cout << "1) - Ver rutinas" << endl;
    cout << "2) - Renovar rutina " << endl;
    cout << "3) - Salir " << endl;
    cout << "----------------------------------------------------" << endl;
    cout << "----------------Que desea hacer ?-------------------" << endl;
    cout << "----------------------------------------------------" << endl;
    cout << endl; 
}

void Interfaz::imprimeSal(){
    system("cls");
    cout << "----------------------------------------------------" << endl;
    cout << "-----------------Menu de Salones--------------------" << endl;
    cout << "----------------------------------------------------" << endl;
    cout << "1) - Ver salones" << endl;
    cout << "2) - Ver las clases de un salon" << endl;
    cout << "3) - Salir " << endl;
    cout << "----------------------------------------------------" << endl;
    cout << "----------------Que desea hacer ?-------------------" << endl;
    cout << "----------------------------------------------------" << endl;
    cout << endl; 
}

int Interfaz::validar() {
	int opc;
	bool c = true;
	while (c) {
            cout << "Opcion > ";
            if (!(cin >> opc)) { //revisa si falla
                cout << "Error!";
                cin.clear();
                cin.ignore(1024, '\n');
            }
            else if (opc < 0 || opc >6) { 
                cout << "Error!";
                cin.clear();
                cin.ignore(1024, '\n');
            }
            else { c = false; }
	}
	return opc;
}

int Interfaz::menu() { //cuantas opciones hay en el menu
	int opc;
	opc = validar();
	return opc;
}

