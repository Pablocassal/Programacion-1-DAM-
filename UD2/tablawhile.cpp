/* Calculadora de tablas seleccionadas por el usuario */

#include <iostream>

using namespace std;

int main() {

	//DECLARACIÓN DE VARIABLES
	int contador = 0;
	int resultado= 0;
	int  numero = 0;

	//INTRODUCCIÓN
	cout << "Introduce el numero a multiplicar:";
	cin >> numero;	
	cout << endl << "TABLCA DE MULTIPLICAR DEL " << numero << endl;

	//BUCLE
	while (contador <= 10) {
		resultado = numero * contador;		
		cout << numero << " * " << contador << " = " << resultado << endl;
		contador = contador + 1;
	}
}
