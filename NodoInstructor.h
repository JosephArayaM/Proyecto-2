#include "Instructor.h"

using namespace std;

class NodoInstructor {
	NodoInstructor* siguiente;
	Instructor* instructor;

public:
	NodoInstructor();
	NodoInstructor( Instructor* , NodoInstructor* );
	virtual ~NodoInstructor();
	Instructor* getInstructor() ;
	void setInstructor( Instructor* instruc);
	NodoInstructor* getSiguiente() ;
	void setSiguiente(NodoInstructor* _siguiente);
	string toString();
};
