#include "lista_generica.hpp"
#include <string>
//Jonathan Velasquez VP100717

template <typename TIPODATO>
class Pila : private Lista<TIPODATO> {
	public:
		//Constructot
		Pila();
		//Agregar un elemento en la pate superior
		push(TIPODATO item);
		//Remover un elemto de la parte superior
		TIPODATO pop();
		bool estaPilaVacia();
		string pilaComoCadena();		
};

template <typename TIPODATO>
Pila<TIPODATO>::Pila(){
	Lista<TIPODATO> Listas;
}

template <typename TIPODATO>
Pila<TIPODATO>::push(TIPODATO item){
	this->adjuntar(item);
}

template <typename TIPODATO>
TIPODATO Pila<TIPODATO>::pop(){
	return this->remover(this->tamano() - 1);
}

template <typename TIPODATO>
bool Pila<TIPODATO>::estaPilaVacia(){
	return this->estaVacia();
}

template <typename TIPODATO>
string Pila<TIPODATO>::pilaComoCadena (){
	return this->comoCadena();
}










