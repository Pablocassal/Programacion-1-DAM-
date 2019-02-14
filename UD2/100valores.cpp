/* Lee 100 valores y ve cual es el mas pequeño y el mas grande */

#include <iostream>

using namespace std;

int main() {
	
	//DECLARACIÓN DE VARIABLES
	int contador = 0;
	int valor = 0;
	int valor_max = 0, valor_min = 0;

	//INTRODUCCIÓN
	cout << "Introduce 10 numeros y el programa detectara el maximo y el minimo." << endl;
	cout << "Introduce un valor entero: ";
	cin >> valor;
	valor_min = valor;
	valor_max = valor;

	//BUCLE
	for (int i = 0; i <= 99; i++){
		cout << "Introduce un valor entero: ";
		cin >> valor;
		if (valor > valor_max){
			valor_max = valor;
		}
		if (valor < valor_min){
			valor_min = valor;
		}
		valor = valor + 1;
	}

	//FIN DE PROGRAMA
	cout << "El valor mas pequeño es: " << valor_min << endl;
	cout << "El valor mas grande es: " << valor_max << endl;
}
