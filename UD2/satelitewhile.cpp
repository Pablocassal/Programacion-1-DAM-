/* Ejemplo de satelite (while + media) */

#include <iostream>

using namespace std;

int main() {

	//DECLARACIÓN DE VARIABLES
	int numero = 0, numero_total = 0;
	double media = 0.0, cuenta = 0.0;
	
	//INTRODUCCIÓN
	cout << "Introduce un numero entero:";
	cin >> numero;

	//BUCLE	+ media
	while (numero >= 0){
		numero_total = numero_total + numero;
		cuenta = 1 + cuenta;
		cout << "Recibido." << endl << "Introduce otro numero entero:";
		cin >> numero;
	}

	//FIN DE PROGRAMA + media
	media = numero_total / cuenta;
	cout << endl << "La media es:" << media << endl << endl;
	cout << "FIN DE LA TRANSMISIÓN" << endl;
}
