#include "listagenerica.hpp"
#include <string>
//Jonathan Velasquez


template <typename TypeD>
class Pila : private Lista<TypeD>{
	public:
		Pila();
		push(TypeD item);
		TypeD pop();
		TypeD extract();
		bool emptyStack();
		string stackString();
};

template<typename TypeD>
Pila<TypeD>::Pila(){
	Lista<TypeD> Lista;
}

template<typename TypeD>
Pila<TypeD>::push(TypeD item){
	this->Attach(item);
}

template<typename TypeD>
TypeD Pila<TypeD>::pop(){
	return this->Remove(this->tamano()-1);
}

template<typename TypeD>
bool Pila<TypeD>::emptyStack(){
	return this->isEmpty();
}

template<typename TypeD>
string Pila<TypeD>::stackString(){
	return this->asString();
}

template<typename TypeD>
TypeD Pila<TypeD>::extract(){
	return this->obtener(this->tamano()-1);
}
