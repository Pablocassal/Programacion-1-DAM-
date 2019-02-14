/* Programa que resuelve el ejercicio 3.5.2 (pi³/32) */

#include <iostream>
#include <math.h>

using namespace std;

int main() {
	
	//DECLARACIÓN DE VARIABLES
	double operacion = 0.0, operacion2 = 0.0;
	double contador = 0;
	int numero = 0;
		

	cout << "Indique la precisión de pi deseada: ";
	cin >> numero;

	//BUCLE
	for (contador = 0; contador <= numero; contador++){
		operacion = (pow (-1,contador)) / pow(((2 * contador) + 1),3) + operacion;
		operacion2 = pow(32 * operacion, 1.0/3.0);
		cout << contador << " --> " << operacion2 << endl;
	}
	//Queremos llegar a 4 decimales, es decir: 3.1415
	/*
	* A partir de la numero 21 salen los 4 primeros decimales (3.1415)
	*/
}
