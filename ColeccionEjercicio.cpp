#include "ColeccionEjercicio.h"



ColeccionEjercicio::ColeccionEjercicio(){
	cantidad = 0;
	tamano = 12;
	for (int i = 0; i < tamano; i++)
		vec[i] = NULL;
}

ColeccionEjercicio:: ~ColeccionEjercicio(){
	for (int i = 0; i < cantidad; i++)
		delete vec[i];
}

 string ColeccionEjercicio::toString(){
	 stringstream s;
	 s << "---------Lista de Ejercicios----------" << endl;
	 for (int i = 0; i < cantidad; i++)
		 s << vec[i]->toString() << endl;
	 return s.str();
 }

 bool ColeccionEjercicio::insertarEjercicio(Ejercicio* e){
	 if (cantidad < tamano) {
		 vec[cantidad++] = e;
		 return true;
	 }
	 else
		 return false;
 }

 void ColeccionEjercicio::eliminarEjercicio(){
	 for (int i = 0; i < cantidad; i++)
		 delete vec[i];
	 cantidad = 0;
 }
