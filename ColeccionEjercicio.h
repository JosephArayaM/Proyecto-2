#include "Ejercicio.h"

class ColeccionEjercicio {


	private:
		Ejercicio* vec[12];
		int cantidad;
		int tamano;


	public:

		ColeccionEjercicio();
		virtual ~ColeccionEjercicio();
		virtual string toString();
		virtual bool insertarEjercicio(Ejercicio* e);
		virtual void eliminarEjercicio();




};
