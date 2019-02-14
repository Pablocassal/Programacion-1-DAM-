/* Este programa hace la tabla de multiplicar de un numero n (desde su multiplo 1 hasta su multiplo 10) */

#include <iostream>

using namespace std;

int main() {

	//DECLARACIÓN DE VARIABLES
	int  numero , res;
	
	//INTRODUCCIÓN
	cout << "Introduce un numero entero y se te mostrara a continuación su tabla de multiplicar del 1 al 10" << endl;
	cout << "Numero entero: ";	
	cin >> numero;
	cout << endl << endl;	

	//CALCULOS Y RESPUESTAS
	cout << "TABLA DE MULTIPLICAR DEL " << numero << endl;
	cout << numero << " x " << "1" << " = " << numero * 1 << endl;
	cout << numero << " x " << "2" << " = " << numero * 2 << endl;
	cout << numero << " x " << "3" << " = " << numero * 3 << endl;
	cout << numero << " x " << "4" << " = " << numero * 4 << endl;
	cout << numero << " x " << "5" << " = " << numero * 5 << endl;
	cout << numero << " x " << "6" << " = " << numero * 6 << endl;
	cout << numero << " x " << "7" << " = " << numero * 7 << endl;
	cout << numero << " x " << "8" << " = " << numero * 8 << endl;
	cout << numero << " x " << "9" << " = " << numero * 9 << endl;
	cout << numero << " x " << "10" << " = " << numero * 10 << endl;
}
