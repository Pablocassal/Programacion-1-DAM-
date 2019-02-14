/* Este programa calcula la velocidad a la que debe ir un corredor de una corrida de toros */

#include <iostream>

using namespace std;

int main() {
	
	//DECLARACIÓN DE VARIABLES
	int cantidad_toros = 0;
	int velocidad = 0;
	int velocidad_max = 0;
	
	//Introducción
	do {
		cout << "Introduzca el numero de toros: ";
		cin >> cantidad_toros;
		if (cantidad_toros <= 0){
			cout << "El numero de toros introducido es imposible. Try again." << endl;
		}
	}while (cantidad_toros <= 0);
	
	//BUCLE
	for (int i = 1; i <= cantidad_toros; i++){
		do{
			cout << "Introduce la velocidad del toro numero " << i << " : ";
			cin >> velocidad;
			if ( (velocidad < 0) || (velocidad > 10e+9) ) {
				cout << "La velocidad introducida es imposible. Try again." << endl;
			}
		} while ( (velocidad < 0) || (velocidad > 10e+9) );
		if (velocidad > velocidad_max){
			velocidad_max = velocidad;
		}	
	}
	
	//FINAL DE PROGRAMA
	cout << "La velocidad del corredor ha de ser de: " << velocidad_max << endl;
}
