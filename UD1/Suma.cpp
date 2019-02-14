/* Este programa hace la suma de dos numeros enteros y la muestra por pantalla */

#include <iostream>

using namespace std;

int main () {

	//DECLARACIÓN DE VARIABLES
	int a, b, result;

	//INTRODUCCIÓN
	cout << "Este programa suma dos numeros enteros" << endl;
	cout << "Introduce el primer numero:";
	cin >> a;
	cout << "Introduce el segundo numero:";
	cin >> b;

	//CALCULOS
	result = a + b;

	//RESPUESTAS	
	cout << "La suma de estos numeros es igual a " << result << endl;
}
