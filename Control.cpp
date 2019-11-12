#include <valarray>

#include"Control.h"

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
    while (cicloPrincipal) {
        i->imprimeInscrip();
        int opc = i->menu();
        if(opc == 1){
            system("cls");
            string nom1, nom2, nom3, ide, cor, num, randC, rep1;
            float pes1, mas, gras, pes2;
            int obj;
            cout << "Digite los datos del nuevo socio " << endl;
            cout << "Nombre: "<<endl;;
            cin >> nom1;
            cout << "ID: "<< endl;
            cin >> ide;
            cout << "Numero de telefono: "<< endl;
            cin >> num;
            cout << "Correo electronico: "<< endl;
            cin >> cor;
            cout << "Peso: "<<endl;
            cin >> pes1;
            cout << "Masa muscular: "<<endl;
            cin >> mas;
            cout << "Grasa: "<<endl;
            cin >> gras;
            cout << "Cual va a ser el objetivo ?: "<<endl;
            cout << "(1 para bajar grasa y  2 para subir masa muscular)"<<endl;
            cin >> obj;
            system("cls");
            cout<<"Los instructores son: "<<endl;
            cout<<ListaIns->toString();
            cout<<"Digite el nombre del instructor a asignar al socio"<<endl;
            cin >> nom2;
            Expediente* Exp1 = new Expediente(pes1, mas, gras);
            Rutina* rut1 = new Rutina();
            rut1->SetRandCod(randC);
            rut1->setDatos(Exp1);
            rut1->setObjetivo(obj);
            rut1->GenerarCod();
            rut1->LlenarList();
            Instructor* ins1 = new Instructor();
            ins1 = ListaIns->Encontrar(nom2);
            Persona* soc1 = new Socio(nom1, ide, num, cor, rut1, ins1);
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
        } else if(opc == 2){
            system("cls");
            cout << ListaIns->toString();
            system("pause");
        }else if(opc == 3){
            system("cls");
            opcRut();
            system("pause");
        }else if(opc == 4){
            system("cls");
            Instructor* inst;
            inst = ListaIns->MejorResul();
            cout << inst->toString();
            system("pause");
        } else {
            cicloPrincipal = false;
        }
    }
}

void Control::opcSoc() {
    bool cicloPrincipal = true;
    int pos=1;
    while (cicloPrincipal) {
        i->imprimeInscrip();
        int opc = i->menu();
        if(opc == 1){
            system("cls");
            cout << "Funciona" << endl;
            system("cls");
        } else if(opc == 2){
            system("cls");
            Instructor* inst;
            inst = ListaIns->MejorResul();
            cout << inst->toString();
            system("pause");
        } else if(opc == 3){
            system("cls");
            Instructor* inst;
            inst = ListaIns->MejorResul();
            cout << inst->toString();
            system("pause");
        } else {
            cicloPrincipal = false;
        }
    }
}

void Control::opcRut() {
	
}

void Control::opcCla() {
	
}

void Control::opcSal() {
}


