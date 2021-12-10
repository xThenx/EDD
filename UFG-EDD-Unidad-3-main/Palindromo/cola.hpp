#include "listagenerica.hpp"
#include <string>
//Jonathan Velasquez


template<typename TypeD>
class Queue : private Lista<TypeD>{
	public:
		//Constructor
		Queue();
		enqueue(TypeD item);
		TypeD dequeue();
		bool emptyQueue();
		string StringQueue();
		
};

template<typename TypeD>
Queue<TypeD>::Queue(){
	Lista<TypeD> Lista;
}

template<typename TypeD>
Queue<TypeD>::enqueue(TypeD item){
	this->Attach(item);
}

template<typename TypeD>
TypeD Queue<TypeD>::dequeue(){
	return this->Remove(0);
}

template<typename TypeD>
bool Queue<TypeD>::emptyQueue(){
	return this->emptyQueue();
}

template<typename TypeD>
string Queue<TypeD>::StringQueue(){
	return this->StringQueue();
}


