/* Hace la sumatoria de un numero con respecto a una formula de las transparencias */

#include <iostream>

using namespace std;

int main() {

	//DECLARACIÓN DE VARIABLES
	double contador = 0.0;
	int numero = 0;
	double operacion = 0.0;
	
	//INTRODUCCIÓN
	cout << "Sumatoria avanzada: ((1-i)/i)" << endl;
	cout << "Introduce un valor entero: ";
	cin >> numero;

	//FILTRO (numero = 0)
	if (numero == 0){
		cout << "Sumatoria de " << numero << " = infinito" << endl;
	}else{
		//Bucle
		for (contador = 1; contador <= numero; contador++) {		
			operacion = operacion + ((1 - contador) /contador);
		}
		cout << "Sumatoria de " << numero << " = " << operacion << endl;
	}
}
