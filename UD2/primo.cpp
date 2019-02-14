/* Calculadora de numeros primos */

#include <iostream>
#include <cmath>

using namespace std;

int main() {

	//DECLARACIÓN DE VARIABLES
	int numero = 0;
	int contador = 1, veces_0 = 0;
	bool finalizador = true;
	double res = 0.0;

	//INTRODUCCIÓN + filtro
	do {
		cout << "Introduce un valor entero: ";
		cin >> numero;
		if (numero <= 0){
			cout << "Un numero solo podra ser primo si es mayor que 0." << endl;
		}
	} while (numero <= 0);

	//BUCLE
	while (finalizador){	
		if (pow(contador,2) > numero){
			finalizador = false;
			if (veces_0 == 1){
				cout << numero << " - Es primo." << endl;
			}else{
				cout << numero << " - No es primo." << endl;
			}
		}
		res = numero % contador;
		if (res == 0){
			veces_0++;
		}
		contador++;
	}
}
