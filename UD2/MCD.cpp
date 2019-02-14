/* Este programa calcula el Maximo comun divisor de entre dos numeros */

#include <iostream>

using namespace std;

int main() {

	//DECLARACIÓN DE VARIABLES
	int numero = 0, numero2 = 0, numerito = 0, numerito2 = 0;
	double operacion = 0.0, operacion2 = 0.0;
	bool  da0 = true, condicion = true;

	//INTRODUCCIÓN
	cout << "Introduce dos numeros enteros (separados por un espacio) para ver el maximo comun divisor que tienen en comun: ";
	cin >> numero >> numero2;

	//BUCLE

	while (da0) {
		if (numero >= numero2){
			do {
				operacion = numero % numero2;
				if (operacion == 0){
					da0 = false;
				}else {
					for (numerito2 = numero2 - 1; condicion; numerito2--){
							operacion2 = numero2 % numerito2;
						if (operacion2 == 0 ){
							numero2 = numerito2;
							condicion = false;	
						}
					}
				}
			}while (da0);
		}else{
			do {
				operacion = numero2 % numero;
				if (operacion == 0){
					da0 = false;
				}else{
					for (numerito = numero - 1; condicion; numerito--){
							operacion2 = numero % numerito;
						if (operacion2 == 0 ){
							numero = numerito;
							condicion = false;	
						}
					}
				}
			}while (da0);
		}
	}

	//FINAL DE PROGRAMA
	if (numero >= numero2){
		cout << "El MCD, de los numeros introducidos es: " << numero2 << endl;
	}else{
		cout << "El MCD, de los numeros introducidos es: " << numero << endl;
	}
}
