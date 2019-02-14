/* Tabla de multiplicar del 7 */

#include <iostream>

using namespace std;

int main() {

	//DECLARACIÓN DE VARIABLES
	double multiplo = 0;
	int resultado = 0, res_max = 0 ;
	int numero = 0;

	//INTRODUCCIÓN
	cout << "Introduce un numero entero para hacerle una tabla de multiplicar: ";
	cin >> numero;
	cout << endl << "Tabla de mutiplicar del " << numero << endl << endl;

	//BUCLE (MULTIPLICACIÓN)
	do {	
		resultado = multiplo * numero;
		cout << multiplo << " * " << numero << " = " << resultado << endl;
		multiplo = multiplo + 1.0;
	}while (multiplo < 10.1);
} 
