#include <iostream>
#include <string>
//Jonathan Velasquez VP100717

using namespace std;

class CuentaBancaria {
	private:
		string numeroCuenta;
		string nombreTitular;
		double saldo;
	public:
		CuentaBancaria(string numeroCuenta, string nombreTitular, double saldo);
		double getSaldo();
		string getNumeroCuenta();
		string getNombreTitular();
		void depositar(double importeDeposito);
		void retirar(double importeRetiro);
};

//implementacion del constructor

CuentaBancaria::CuentaBancaria(string num, string titular, double saldo){
	//asignar saldo
	if (saldo < 0){
		this->saldo = 0.00;
	} else {
		this->saldo = saldo;
	}
	this->numeroCuenta = num;
	this->nombreTitular = titular;
}
	
double CuentaBancaria::getSaldo(){
	return this->saldo;	
}

string CuentaBancaria::getNumeroCuenta(){
	return this->numeroCuenta;
}

string CuentaBancaria::getNombreTitular(){
	return this->nombreTitular;
}

void CuentaBancaria::depositar(double importeDeposito){
	if (importeDeposito > 0){
		this->saldo += importeDeposito;
	} else {
		cout << "! - Importe no Valido " << endl;
	}
}

void CuentaBancaria::retirar(double importeRetiro){
	if (importeRetiro > 0 && importeRetiro <= this->saldo){
		this->saldo -= importeRetiro;
	} else {
		cout << "! - Retiro no Valido " << endl;
	}
}







