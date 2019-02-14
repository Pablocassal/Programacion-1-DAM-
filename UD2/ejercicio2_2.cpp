/* Este programa calcula la paridad de un numero entero */

#include <iostream>
#include <cmath>

using namespace std;

int main () {
	
	//DECLARACIÓN DE VARIABLES
	int valor = 0;
	
	//INTRODUCCIÓN
	cout << "Este programa calcula la paridad de un numero entero." << endl;
	cout << "Introduce un valor entero: ";
	cin >> valor;

	//CONDICIONALES Y RESULTADOS	
	if (valor == 0) {
	cout << "El valor introducido no se considera par o impar." << endl;
	}
	else 	if ( valor%2 == 0 ) {
		cout << "El valor introducido es par." << endl;
		}

		else  {
		cout << "El valor introducido es impar." << endl;
		}
}
