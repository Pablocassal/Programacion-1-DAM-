/* Calcula de entre dos valores cual es el más grande */

#include <iostream>
#include <cmath>

using namespace std;

int main() {

	//DECLARACIÓN DE VARIABLES
	double valor1 = 0;
	double valor2 = 0;

	//INTRODUCCIÓN
	cout << "Este programa Calcula de entre dos valores cual es el más grande" << endl;
	cout << "Introduzca el primer valor: ";
	cin >> valor1;
	cout << "Introduzca el segundo valor: ";
	cin >> valor2;
	
	//CONDICIONALES Y RESPUESTAS
	if (valor1 < valor2) {
	cout << "El segundo valor es mayor que el primero" << endl;
	}

	if (valor2 < valor1) {
	cout << "El primer valor es mayor que el segundo." << endl;
	}

	if (valor1 == valor2) {
	cout << "El primer valor y el segundo son iguales." << endl;
	}

}
