#include <iostream>
#include <string>
#include <cctype>
#include <algorithm> 
//Resources
#include "pila.hpp"
#include "Queue.hpp"
//Jonathan Velasquez VP100717


using namespace std;

bool isPalindromo(string WordEvaluated);
bool validTxt(string mensaje);

int main(){
	string txt;
	string txtValue;
	cout << "Este programa evalua si una palabra es o no un palindromo" << endl << endl;
	cout << "Escriba una palabra para ser evaluada: ";
	getline(cin, txt);
	txtValue = txt;
	//Evaluations
	txtValue.erase(std::remove(txtValue.begin(), txtValue.end(), ' '), txtValue.end());
	
	//To Upper
	transform(txtValue.begin(), txtValue.end(), txtValue.begin(), [](unsigned char c){ return toupper(c); });

 for (int i = 0; i < txtValue.length(); i++) {
    
    txtValue[i] = toupper(txtValue[i]);
  }
	//word evaluation
	cout << endl;
	if(isPalindromo(txtValue)){
		cout << "La palabra que ha ingresado ('" << txt << "') es un Palindromo" << endl;
	}else{
		cout << "La palabra que ha ingresado ('" << txt << "') no es un Palindromo" << endl;
	}
	cout << endl;
	cout << endl;
	
	return 0;
}


//Palindromo function

bool isPalindromo(string WordEvaluated){
	
	char letra;
	string stackWord;
	string wordLetter;
	
	Pila<char> pilaLetra;
	Queue<char> queueLetter;
	//Pushing
	for(int i = 0; i < WordEvaluated.length(); i++){
		Letter = WordEvaluated[i];
		stackLetter.push(Letter);
		queueLetter.enqueue(Letter);
	}
	
	//Extract
	for(int i = 0; i < WordEvaluated.length(); i++){		
		stackWord += stackLetter.pop();
		wordLetter += queueLetter.dequeue();
	}
		if(stackWord == palabraLetra){
			cout << "Palabra de forma inversa: " << stackWord << endl;
			cout << "Palabra normal : " << palabraLetra << endl;
		return true;
	}else{
			cout << "Palabra de forma inversa: " << stackWord << endl;
			cout << "Palabra normal: " << palabraLetra << endl;
		return false;
	}
}
