/* Programa que resuelve el ejercicio 3.13 (numero -> e) */

#include <iostream>
#include <math.h>

using namespace std;

int main () {

	//DECLARACIÓN DE VARIABLES
	double factorial = 0.0;
	double operacion = 0.0;

	//BUCLE
	for (int i = 0; i <= 20; i++){
		if (i == 0){
			factorial = 1;
		}else{
			factorial = i * factorial;
		}
		operacion = (1 / factorial) + operacion;
		cout << i << " - " << operacion << endl;
	}
	//Queremos llegar a 4 decimales, es decir: 2,7182
	/*
	* A partir de la numero 7 salen los 4 primeros decimales (2.71825)
	*/

}
