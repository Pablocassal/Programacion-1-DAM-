/* El usuario introduce un nuvero y se crea la tabla de multiplicar correspondiente */

#include <iostream>

using namespace std;

int main() {
	
	//DECLARACIÓN DE VARIABLES
	int contador = 0;
	int numero = 0;
	int resultado = 0;

	//INTRODUCCIÓN
	cout << "Introduce un valor entero: ";
	cin >> numero;
	cout << "TABLA DE MULTIPLICAR DEL " << numero << endl;	
	
	//BLUCLE
	for (contador = 0; contador <= 10; contador = contador + 1) {
		resultado = numero * contador;
		cout << numero << " * " << contador << " = " << resultado << endl;
	}
}
