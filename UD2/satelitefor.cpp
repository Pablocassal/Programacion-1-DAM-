/* Ejercicio satelite (for) */

#include <iostream>

using namespace std;

int main() {
	
	//DECLARACIÓN DE VARIABLES
	int numero = 0;
	int control = 0;
	bool limite = false;
	int contador = 1;
	//BUCLE
	for (control = 1; ((control >= 0) && (!limite)) ; control = numero ) {
		cout << "Introduce un valor entero: ";
		cin >> numero;
		if (numero >= 0) {
			cout << "Recibido" << endl;
		}else{
			cout << "FIN DE TRANSMISIÓN" << endl;
		}
		if (contador == 20){
			cout << "(CUOTA MAXIMA ACUMULADA)" << endl << "FIN DE TRANSMISIÓN" << endl;
			limite = true;
		}
		contador++;
	}
}
