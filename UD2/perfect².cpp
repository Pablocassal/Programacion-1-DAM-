/* Este programa calcula si un numero es un cuadrado perfecto (entero) */

#include <iostream>

using namespace std;

int main() {

	//DECLARECIÓN DE VARIABLES
	int numero = 0;
	bool condicion = true, perfecto = true;

	//INTRODUCCIÓN
	do {
		cout << "Introduce un numero entero para ver si es un cuadrado perfecto: ";
		cin >> numero;
		if (numero < 0) {
			cout << "El valor introducido no es posible." << endl;
		} 
	}while (numero < 0);

	//BUCLE
	for (int i = 0; condicion; i++){
		if (i*i == numero) {
			condicion = false;
		}else if (i*i > numero) {
			condicion = false;
			perfecto = false;
		}
	}

	//FINAL DE PROGRAMA
	if (perfecto == false){
		cout << "El numero introducido no es un cuadrado perfecto " << endl;
	}else{
		cout << "El numero introducido es un cuadrado perfecto " << endl;
	}
}
