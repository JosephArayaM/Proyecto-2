#include "ListaSalones.h"


ListaSalones::ListaSalones() {
	primero = nullptr;
	actual = nullptr;
}

ListaSalones::ListaSalones(ListaSalones* orig){
}

ListaSalones:: ~ListaSalones(){
	while (primero != nullptr) {
		actual = primero;
		primero = primero->getSiguiente();
		delete(actual);
	}
}

NodoSalon* ListaSalones::getPrimero() {
	return primero;
}

NodoSalon* ListaSalones::getActual() {
	return actual;
}


void ListaSalones::setPrimero(NodoSalon* primero) {
	ListaSalones::primero = primero;
}

void ListaSalones::setActual(NodoSalon* actual) {
	ListaSalones::actual = actual;
}

void ListaSalones::insertarSalon(Salon* salon) {
	primero = new NodoSalon(salon, primero);
}

bool ListaSalones::eliminarSalon(){
	if (primero == nullptr) {
		return false;
	}
	else
		actual = primero;
		primero = primero->getSiguiente();
		delete actual;
		return true;
}

int ListaSalones::totalSalones() {
	int totalSalones = 0;
	actual = primero;
	while (primero != nullptr) {
		totalSalones++;
		actual = actual->getSiguiente();
	}
	return totalSalones;


}


string ListaSalones::toString() {
	NodoSalon* p = primero;
	stringstream s;
	while (p != nullptr) {
		s << p->getSalon()->toString() << endl << endl;
		p = p->getSiguiente();

	}
	return s.str();

}

void ListaSalones::mostrarSalon(string nomb){
    actual = primero;
    while(actual != NULL){
        if(actual->getSalon()->getNombreSalon() == nomb){
            cout << actual->getSalon()->toString();
        }
        actual = actual->getSiguiente();
    }
}

void ListaSalones::insertarClase(Clase* clas1, string nomb){
    actual = primero;
    while(actual != NULL){
        if(actual->getSalon()->getNombreSalon() == nomb){
            actual->getSalon()->insertClase(clas1); 
        }
//        actual = actual->getSiguiente();
    }
}

void ListaSalones::salvarSalones() {
	//1-crear un archivo de salida para grabar
	ofstream os("ListadeSalones.txt", ios::out);

	//2- Ver si se pudo abrir
	if (os) {//si se pudo abrir
		actual = primero;
		while (actual != nullptr) {
			os << actual->getSalon()->getNombreSalon();
			os << actual->getSalon()->getCodigo();
			os << actual->getSalon()->getCantidad();
		}
		os.close(); //Cerrar el archivo una vez grabado


	}
	else {

		cout << "No se pudo abrir" << endl;
	}

}

void ListaSalones::recuperarSalones() {


	this->eliminarSalon();  // este metodo auto-limpia el contened.

	Salon sal;
	ifstream is("ListadeSalones.txt", ios::in);
	if (is) {
		is >> sal;
		while (!is.eof()) {

			Salon* salo = new Salon(sal.getNombreSalon(), sal.getCodigo(),sal.getCantidad);
			this->insertarSalon(salo);
			is >> sal;
		}
		is.close();
	}
	else {
		cout << "No se pudo abrir para lectura...." << endl;


	}

}