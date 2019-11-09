#include "Control.h"

Control::Control() {
    //Objetos Predeterminados

}

void Control::opciones() {
    bool cicloPrincipal = true;
    while (cicloPrincipal) {
        i->imprimeMenu();
        int opc = i->menu();
	
        if (opc == 1) {
            system("cls");
            opcInscrip();
            system("pause");
        }
        else if (opc == 2) {
            system("cls");
            opcIns();
            system("pause");
        }
        else if (opc == 3) {
            system("cls");
            opcSoc();
            system("pause");
        }
        else if (opc == 4) {
            system("cls");
            opcCla();	
            system("pause");
        }
        else if (opc == 5) {
            system("cls");
            opcSal();	
            system("pause");
        }
        else {
            cicloPrincipal = false;
        }
    }
}

Control::~Control() {
}

void Control::opcInscrip() {
    bool cicloPrincipal = true;
    int pos=1;
    while (cicloPrincipal) {
        i->imprimeInscrip();
        int opc = i->menu();
        if(opc == 1){
            system("cls");
            cout << "Funciona" << endl;
            system("pause");
        } else {
            cicloPrincipal = false;
        }
    }
}

void Control::opcIns() {
    bool cicloPrincipal = true;
    int pos=1;
    while (cicloPrincipal) {
        i->imprimeInscrip();
        int opc = i->menu();
        if(opc == 1){
            system("cls");
            cout << "Funciona" << endl;
            system("pause");
        } else {
            cicloPrincipal = false;
        }
    }
}

void Control::opcSoc() {
	
}

void Control::opcRut() {
	
}

void Control::opcCla() {
	
}

void Control::opcSal() {
}


