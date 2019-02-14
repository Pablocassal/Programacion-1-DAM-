/* Hace el factorial de un numero */

#include <iostream>

using namespace std;

int main() {

	//DECLARACIÓN DE VARIABLES
	int contador = 0;
	int numero = 0;
	int operacion = 1;
	
	//INTRODUCCIÓN
	cout << "Introduce un valor entero: ";
	cin >> numero;

	//FILTRO (numero = 0)
	if (numero == 0){
		cout << "Factorial de " << numero << " = 1" << endl;
	}else{
		//Bucle
		for (contador = 1; contador <= numero; contador = contador + 1) {
			operacion = operacion * contador;
		}
		cout << "Factorial de " << numero << " = " << operacion << endl;
	}
}
