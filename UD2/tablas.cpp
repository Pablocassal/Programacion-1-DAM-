/* Este programa saca por pantalla todas las tablas de multiplicar del 1 al 10 */

#include <iostream>

using namespace std;

int main() {

	//DECLARACIÓN DE VARIABLES
	int resultado = 0;

	//BUCLE + resultados
	for (int i = 1; i <= 10; i++){
		cout << "Tabla de multiplicar del " << i << endl;
		for (int i2 = 1; i2 <= 10 ; i2++){
			resultado = i * i2;
			cout << i << " * " << i2 << " = " << resultado << endl;
		}
		cout << endl;
	}
}
