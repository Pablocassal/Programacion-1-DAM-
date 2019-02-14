/* Tabla de multiplicar 7 (while) */

#include <iostream>

using namespace std;

int main() {
	//DECLARACIÓN DE VARIABLES
	int contador = 0;
	int resultado = 0;

	//INTRODUCCIÓN
	cout << "TABLA DE MULTIPLICAR DEL 7" << endl;
	
	//CONDICIONAL
	while (contador <= 10){
		resultado = contador * 7;
		cout << "7 * " << contador << " = " << resultado << endl;
		contador = contador + 1;
	}
}
