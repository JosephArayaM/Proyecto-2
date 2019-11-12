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
            cout << endl;
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
            Expediente* Exp1 = new Expediente();
            Exp1->SetGrasaCor(gras);
            Exp1->SetMasaMusc(mas);
            Exp1->SetPeso(pes1);
            Rutina* rut1 = new Rutina();
            rut1->GenerarCod();
            rut1->setDatos(Exp1);
            rut1->setObjetivo(obj);
            rut1->GenerarCod();
            rut1->LlenarList();
            Instructor* ins1 = new Instructor();
            ins1 = ListaIns->Encontrar(nom2);
            Socio* soc1 = new Socio(nom1, ide, num, cor, rut1, ins1);
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
        i->imprimeIns();
        int opc = i->menu();
        if(opc == 1){
            system("cls");
            string nom, ide, num;
            cout << "Digite los datos del nuevo Instructor " << endl;
            cout << endl;
            cout << "Nombre: "<<endl;;
            cin >> nom;
            cout << "ID: "<< endl;
            cin >> ide;
            cout << "Numero de telefono: "<< endl;
            cin >> num;
            Instructor* inst = new Instructor();
            inst->setNombre(nom);
            inst->setId(ide);
            inst->setNumeroTelefono(num);
            ListaIns->insertarInstructor(inst);
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
        i->imprimeSoc();
        int opc = i->menu();
        if(opc == 1){
            system("cls");
            cout << "Funciona" << endl;
            system("pause");
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
    bool cicloPrincipal = true;
    int pos=1;
    while (cicloPrincipal) {
        i->imprimeRut();
        int opc = i->menu();
        if(opc == 1){
            system("cls");
            string nom1;
            float pes1, mas, gras;
            cout << ListaSoc->toString();
            cout << endl;
            cout << "Digite el nombre del socio: "<<endl;;
            cin >> nom1;
            ListaSoc->setActual(ListaSoc->getPrimero());
            while (ListaSoc->getActual() != nullptr) {
                if(ListaSoc->getActual()->getSocio()->getNombre() == nom1){
                    cout << "Peso: "<<endl;
                    cin >> pes1;
                    cout << "Masa muscular: "<<endl;
                    cin >> mas;
                    cout << "Grasa: "<<endl;
                    cin >> gras;
                    Rutina* rut1 = new Rutina();
                    Expediente* Exp1 = new Expediente();
                    Exp1->SetGrasaCor(gras);
                    Exp1->SetMasaMusc(mas);
                    Exp1->SetPeso(pes1)
                    rut1->GenerarCod();
                    rut1->setDatos(Exp1);
                    rut1->GenerarCod();
                    rut1->LlenarList();
                    if(ListaSoc->getActual()->getSocio()->getVigente()->getObjetivo() == 1){
                        ListaSoc->getActual()->getSocio()->determinarProg(gras);
                    }else{
                        ListaSoc->getActual()->getSocio()->determinarProg(mas);
                    }
                    ListaSoc->getActual()->getSocio()->determinarProg()
                    ListaSoc->getActual()->getSocio()->ActualizarDatos(rut1);
                }
                ListaSoc->setActual(ListaSoc->getActual()->getSiguiente());
            }
        } else {
            cicloPrincipal = false;
        }
    }
}

void Control::opcCla() {
    bool cicloPrincipal = true;
    int pos=1;
    while (cicloPrincipal) {
        i->imprimeCla();
        int opc = i->menu();
        if(opc == 1){
            system("cls");
            string nom1, nom2, nom3;
            int in, fin, cap;
            cout << "Digite los datos de la clase " << endl;
            cout << endl;
            cout << "Nombre de la clase: "<<endl;;
            cin >> nom1;
            cout << "Hora a la que inicia: "<< endl;
            cin >> in;
            cout << "Hora a la que finaliza: "<< endl;
            cin >> fin;
            cout << "Capacidad: "<< endl;
            cin >> cap;
            cout << "Nombre del instructor que impartira la clase: "<<endl;;
            cin >> nom2;
            cout << endl;
            Clase* Class1 = new Clase();
            Class1->setNombreC(nom1);
            Class1->setHoraInicio(in);
            Class1->setHoraFinal(fin);
            Class1->setMax(cap);
            Instructor* ins = new Instructor();
            ins = ListaIns->Encontrar(nom2);
            Class1->setInst(ins);
            system("cls");
            cout << ListaSal->toString();
            cout << endl;
            cout << "Digite el nombre del salon donde se dara la clase: " << endl;
            cin >> nom3;
            ListaSal->insertarClase(Class1, nom3);
            system("pause");
        } else if(opc == 2){
            system("cls");
            
            system("pause");
        } else {
            cicloPrincipal = false;
        }
    }
}

void Control::opcSal() {
    bool cicloPrincipal = true;
    int pos=1;
    while (cicloPrincipal) {
        i->imprimeSal();
        int opc = i->menu();
        if(opc == 1){
            system("cls");
            string nomb, cod;
            int cap;
            cout << "Digite los datos del nuevo Salon " << endl;
            cout << endl;
            cout << "Nombre del salon: "<<endl;;
            cin >> nomb;
            cout << "Codigo del salon: "<< endl;
            cin >> cod;
            cout << "Capacidad del salon: "<< endl;
            cin >> cap;
            Salon* sal1 = new Salon();
            sal1->setNombreSalon(nomb);
            sal1->setCodigo(cod);
            sal1->setCantidad(cap);
            sal1->setPart(0);
            ListaSal->insertarSalon(sal1);
            system("pause");
        } else if(opc == 2){
            system("cls");
            cout << ListaSal->toString();
            system("pause");
        } else if(opc == 3){
            system("cls");
            string nom;
            cout << ListaSal->toString();
            cout << "Digite el nombre del salon" << endl;
            cout << endl;
            cin >> nom;
            cout << endl;
            ListaSal->mostrarSalon(nom);
            system("pause");
        } else {
            cicloPrincipal = false;
        }
    }
}


