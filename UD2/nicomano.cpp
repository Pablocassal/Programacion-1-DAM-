/* Este programa esta relacionado con el ejercicio de Nicomano */

#include <iostream>

using namespace std;

int main() {

	//DECLARACIÓN DE VARIABLES
	int resultado = 0;
	int contador = 0; //acumulador
	bool impares_completado = true; //condicionante
	int impar = 0; //condicionante

	//BUCLE
	for (int i = 1; i <= 100; i++){
		for (int i2 = 1, impares_completado = true, contador = 0; impares_completado; i2++){

			if ( ((i2 % 2) != 0) && (i2 > impar)){
				impar = i2;
				resultado = i2 + resultado;
				contador++;
			}
			if (contador == i) {
				impares_completado = false;
			}
		} 	
		cout << i << "³ = " << resultado << endl;
		resultado = 0;
	}
}
