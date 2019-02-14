/* Tabla de multiplicar del 7 */

#include <iostream>

using namespace std;

int main() {

	int multiplo = 0;
	int resultado = 0;

	cout << endl << "Tabla de mutiplicar del 7" << endl << endl;
	
	do {	
		resultado = multiplo * 7;
		cout << "7 * " << multiplo << " = " << resultado << endl;
		multiplo = multiplo + 1;
	}while (resultado < 70);
} 
