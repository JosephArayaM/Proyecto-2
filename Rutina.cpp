#include "Rutina.h"


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

void Rutina::LlenarVec(){
    string nom, rep;
    float pes;
    system("cls");
    for(int i= 0; i < 12; i++){
        cout<<"Digite los datos del ejercicio: "<<endl;
        cout<<endl;
        cout<<"Nombre del ejercicio: "<<endl;
        cin>>nom;
        cout<<"Cantidad de repeticiones: "<<endl;
        cin>>rep;
        cout<<"Peso que debe utilizar: "<<endl;
        cin>>pes;
        cout<<endl;
        vec[i]->setNombreEjercicio(nom);
        vec[i]->setRepeticiones(rep);
        vec[i]->setPeso(pes);
    }
}