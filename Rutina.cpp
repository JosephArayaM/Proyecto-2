#include "Rutina.h"
#include "NodoEjercicio.h"


Rutina::Rutina() {

}

Rutina::Rutina(int obje, string racod, Expediente* exped) {
	objetivo = obje;
	randCod = racod;
	datos = exped;
}

Rutina::~Rutina() {}

int Rutina::getObjetivo() {
	return objetivo;
}

void Rutina::setObjetivo(int obje) {
	objetivo = obje;
}

void Rutina::SetRandCod(string racod) {
	randCod = racod;
}

string Rutina::GetRandCod() {
	return randCod;
}

Expediente* Rutina::getDatos() {
	return datos;
}

void Rutina::setDatos(Expediente* datos) {
	this->datos;
}


void Rutina::GenerarCod() {
	int num = 0;
	srand(time(NULL));

	for (int i = 1; i <= 100; i++) {
		num = 1 + rand() % (101 - 1);
		cout << num << " ";
	}
}



string Rutina::toString() {
	stringstream s;
	s << "Objetivo:" << objetivo << endl;
	s << "Codigo: " << randCod << endl;

	return s.str();
}

void Rutina::LlenarList(){
    string nom, rep;
    float pes;
    list->setActual(list->getPrimero());
    while(list->getActual() != NULL){
        system("cls");
        cout<<"Digite los datos del ejercicio: "<<endl;
        cout<<endl;
        cout<<"Nombre del ejercicio: "<<endl;
        cin>>nom;
        cout<<"Cantidad de repeticiones: "<<endl;
        cin>>rep;
        cout<<"Peso que debe utilizar: "<<endl;
        cin>>pes;
        cout<<endl;
        list->getActual()->getEjercicio()->setNombreEjercicio(nom);
        list->getActual()->getEjercicio()->setRepeticiones(rep);
        list->getActual()->getEjercicio()->setPeso(pes);
        list->setActual(list->getActual()->getSiguiente());
    }
}