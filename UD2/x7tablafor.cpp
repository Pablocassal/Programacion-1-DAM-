/* Tabla del 7 (for) */

#include <iostream>

using namespace std;

int main() {

	//DECLARACIÓN DE VARIABLES
	int contador = 0;
	int multiplicacion = 0;

	//INTRODUCCIÓN
	cout << "TABLA DE MULTIPLICAR DEL 7" << endl;

	//BUCLE
	for (contador = 0; contador <= 10; contador = contador + 1) {
		multiplicacion = contador * 7;
		cout << "7 * " << contador << " = " << multiplicacion << endl;
	}
}
