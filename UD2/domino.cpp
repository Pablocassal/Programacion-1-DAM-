/* Este programa dice todas las posibles fichas del domino */

#include <iostream>

using namespace std;

int main() {
	
	//DECLARACIÓN DE VARIABLES
	int contador = 0;

	//BUCLE
	for (int i = 0; i <= 6; contador++) {
		cout << "(" << i << "," << contador << ")" << endl;
		if (contador == 6) {
			contador = i;
			i++;
		}
	} 
}
