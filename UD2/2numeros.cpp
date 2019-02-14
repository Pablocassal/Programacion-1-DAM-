/* dos numeros necesariamente distintos de 0 y positivos */

#include <iostream>

using namespace std;

int main() {

	double numero1 = 0.0, numero2 = 0.0;

	do {
		cout << "Introduce dos numeros enteros separados por un espacio: ";
		cin >> numero1 >> numero2;
		
		if ((numero1 <= 0) || (numero2 <= 0)) {
				cout << "Error 404." << endl;	
			
			if ((numero1 > 0) && (numero2 <= 0)){
				cout << "El primer numero esta bien, pero el segundo no." << endl;	
			}
			else if ((numero1 <= 0) && (numero2 > 0)){
				cout << "El segundo numero esta bien, pero el primero no." << endl;
			}else if((numero1 <= 0) && (numero2 <= 0)) {
				cout << "Ambos numeros estan mal (son <= 0)." << endl;
			}
			cout << "Prueba de nuevo..." << endl << "		#~#~#~#~#~# RESTARTING #~#~#~#~#~#" << endl << endl;	
		}
	} while((numero1 <= 0) || (numero2 <= 0));
	
	cout << "¡ACERTASTE!" << endl;
}
