#ifndef listagenerica_hpp
#define listagenerica_hpp
#include <iostream>
#include <string>
#include <sstream>
//Jonathan Velasquez


using std::string;
using std::ostringstream;
using std::cout;
using std::endl;

template <typename TypeD>
class Lista{
	
	private:
		int count;
		int capacity;
		TypeD *items;
		void agrandar();
	public:
		Lista(int capacity);
		Lista();
		~Lista();
		Lista(const Lista &otra);
		bool isEmpty();
		int tamano();
		void Insert(int indice, TypeD item);
		void Attach(TypeD item);
		TypeD obtener(int indice);
		bool contiene (TypeD item);
		TypeD Remove(int indice);
		string asString();
};

template <typename TypeD>
Lista<TypeD>::Lista(int capacity){
	this->count = 0;
	this->capacity = capacity;
	this->items = new TypeD[capacity];	
}

template <typename TypeD>
Lista<TypeD>::Lista() : Lista(4){}


template <typename TypeD>
Lista<TypeD>::~Lista(){
	delete[] items;
}

template <typename TypeD>
Lista<TypeD>::Lista(const Lista<TypeD> &otra){
	this->count = otra.count;
	this->capacity = otra.capacity;
	this->items = new TypeD[capacity];
	for (int i = 0; i <this->count; i++)
	this->items[i] = otra.items[i];	
}	

template <typename TypeD>
bool Lista<TypeD>::isEmpty(){
	return this->count == 0;
}

template <typename TypeD>
int Lista<TypeD>::tamano(){
	return this->count;
}


template <typename TypeD>
void Lista<TypeD>::agrandar(){
	TypeD *temp = this->items;
	this->capacity *=2;
	this->items = new TypeD[capacity];
	for (int i=0; i<count; i++)
	this->items[i] = temp[i];
	delete [] temp;
}

template <typename TypeD>
void Lista<TypeD>::Insert (int indice,TypeD item){
	if (indice <0 || indice >this->count) throw "indice fuera de rango";
	
	if (this->count >=this->capacity) this->agrandar();
	for (int i = count - 1; i>=indice; i--){
		cout << "desplazando elemento " << items [i] << "del indice";
		cout <<i<< "al indice" << (i+1) << endl;
		this->items[i+1] = this->items[i];
	}
	this->items[indice] = item;

	this->count++;
}

template <typename TypeD>
void Lista<TypeD>::Attach(TypeD item){
	this->Insert(this->count, item);
}

template <typename TypeD>
TypeD Lista<TypeD>::obtener(int indice){
	
	if (indice < 0 || indice >= this->count) throw "Indice fuera de rango";
	if (this->isEmpty()) throw "Registro no recuperado, lista se encuentra vacia";
	
	return this->items[indice];
	}


template <typename TypeD>
bool Lista <TypeD>::contiene(TypeD item){
	for (int i =0; i <this->count; i++){
		if (this->items[i] == item)
		return true;
	}
	
	return false;
}


template <typename TypeD>
TypeD Lista<TypeD>::Remove(int indice){

	if (this->isEmpty()) throw "Lista se encuentra vacia";
	if (indice < 0 ||indice >=this->count) throw "Indice fuera de rango";

	TypeD value = this->items[indice];
	for (int i = indice; i <count -1;i++){

		this->items[i] = this->items[i+1];
	}
	
	this->count--;
	return value;
}

template <typename TypeD>
string Lista<TypeD>::asString(){
	ostringstream s;
	s<< "[";
	for (int i =0; i<(this->count);i++){
		s << this->items[i];
		if (i < this->count-1)
		s <<", ";
	}
	s << "]";
	return s.str();
}
	
#endif 
