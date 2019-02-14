/* Ejemplo de satelite (nºenteros) */

#include <iostream>
#include <cmath>

using namespace std;

int main() {

	//DECLARACIÓN DE VARIABLES
	int dato = 0;

	//BUCLE DE "DATO"
	do {
		cout << "Introduzca un valor entero: ";	
		cin >> dato;
		
		if (dato >= 0){
			cout << dato << " ha sido recibido." << endl;
		}else{
			cout << "FIN DE TRANSMISIÓN" << endl;
		}

	} while (dato >= 0);
}
