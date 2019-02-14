/* Ejercicio 3.2.3 (sumatoria de numeros introducidos) */

#include <iostream>

using namespace std;

int main() {

	//DECLARACIÓN DE VARIABLES
	int numero = 0, numero_total = 0;
	
	//INTRODUCCIÓN
	cout << "Introduce un numero entero:";
	cin >> numero;

	//BUCLE	+ media
	while (numero != 0){
		numero_total = numero_total + numero;
		cout << "Recibido." << endl << "Introduce otro numero entero:";
		cin >> numero;
	}

	//FIN DE PROGRAMA
	cout << endl << "La suma total es:" << numero_total << endl << endl;
}
