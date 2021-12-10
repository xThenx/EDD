#include "CuentaBancaria.h"
//Jonathan Velasquez VP100717

using namespace std;

int main(){
	 
	 //Creando cuenta Bancaria
	CuentaBancaria miCuenta("A-120451" , "Jonathan Velasquez ", 2900.00);
	cout << "Titular: " << miCuenta.getNombreTitular() << endl;
	cout << "# Cuenta: " << miCuenta.getNumeroCuenta() << endl;
	cout << "Saldo: $ " << miCuenta.getSaldo() << endl;
	cout << "----------------------------------------" << endl;
	
	CuentaBancaria cuentaAmigo("C-255384" , "Rene Escalante ", 784661.00);
	cout << "Titular: " << cuentaAmigo.getNombreTitular() << endl;
	cout << "# Cuenta: " << cuentaAmigo.getNumeroCuenta() << endl;
	cout << "Saldo: $ " << cuentaAmigo.getSaldo() << endl;
	cout << "----------------------------------------" << endl;
	
	CuentaBancaria cuentanoValida("A-755446" , "Rodrigo Rodriguez ", -5000.00);
	cout << "Titular: " << cuentanoValida.getNombreTitular() << endl;
	cout << "# Cuenta: " << cuentanoValida.getNumeroCuenta() << endl;
	cout << "Saldo: $ " << cuentanoValida.getSaldo() << endl;
	cout << "----------------------------------------" << endl;
	
	// Hacer un retido de la cuenta Mi cuenta
	cout << "Quiero Retirar $84 de la cuenta " << miCuenta.getNumeroCuenta() << endl;
	cout << "Saldo inicial: $ " << miCuenta.getSaldo() << endl;
	miCuenta.retirar(84);
	cout << "Saldo posterior a la operacion : $ " << miCuenta.getSaldo() << endl;
	cout << "----------------------------------------" << endl;
	
	// Hacer un retido de la cuenta Mi cuenta mayor al saldo que tengo
	cout << "Quiero Retirar $3500 de la cuenta " << miCuenta.getNumeroCuenta() << endl;
	cout << "Saldo inicial: $ " << miCuenta.getSaldo() << endl;
	miCuenta.retirar(3500);
	cout << "Saldo posterior a la operacion : $ " << miCuenta.getSaldo() << endl;
	cout << "----------------------------------------" << endl;
	
	// Hacer un retido de la cuenta Mi cuenta en numeros negativos
	cout << "Quiero Retirar -$725 de la cuenta " << miCuenta.getNumeroCuenta() << endl;
	cout << "Saldo inicial: $ " << miCuenta.getSaldo() << endl;
	miCuenta.retirar(-750);
	cout << "Saldo posterior a la operacion : $ " << miCuenta.getSaldo() << endl;
	cout << "----------------------------------------" << endl;
	
	// Hacer un deposito a la cuenta Mi cuenta
	cout << "Quiero Retirar $125000 de la cuenta " << miCuenta.getNumeroCuenta() << endl;
	cout << "Saldo inicial: $ " << miCuenta.getSaldo() << endl;
	miCuenta.depositar(125000);
	cout << "Saldo posterior a la operacion : $ " << miCuenta.getSaldo() << endl;
	cout << "----------------------------------------" << endl;
	
	// Hacer un deposito a la cuenta Mi cuenta en numeros negativos
	cout << "Quiero Retirar -$5000 de la cuenta " << miCuenta.getNumeroCuenta() << endl;
	cout << "Saldo inicial: $ " << miCuenta.getSaldo() << endl;
	miCuenta.depositar(-5000);
	cout << "Saldo posterior a la operacion : $ " << miCuenta.getSaldo() << endl;
	cout << "----------------------------------------" << endl;
}
