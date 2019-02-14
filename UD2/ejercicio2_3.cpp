/* Este programa resuelve la duda propuesta por el ejercicio 2.3 */

#include <iostream>

using namespace std;

int main() {

	//DECLARACIÓN DE VARIABLES
	int dato;

	//INTRODUCCIÓN
	cout << "Introduzca un valor entero distinto de cero: ";
	cin >> dato;

	//CONDICIONALES Y RESULTADOS
	if (dato != 0) 
		cout << "Ha escrito " << dato << " que es distinto de cero" << endl;
	
		cout << "Es un alumno muy obediente" << endl;
	
		
	if (dato == 0) 
	cout << "Ups! que desobediente..." << endl;

	/* Saca por pantalla esto: 
	Es un alumno muy obediente
	Ups! que desobediente...*/
	
	// Esto ocurre dado que el "if" solo se aplicara la siguiente orden

}
