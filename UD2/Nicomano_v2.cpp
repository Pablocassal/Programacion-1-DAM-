/* Ejercicio Nicomano, pero con la selección del numero deseado por el usuario */

#include <iostream>

using namespace std;

int main() {
	
	int numero = 0; //The x³ number
	int valor = 0; //The start value used by the "For" loop 
	int res = 0; // It takes the value of the result 	

	cout << "Introduce el numero entero deseado para realizar con el el ejercicio \"Nicomano\": ";
	cin >> numero;
	
	valor = (numero * (numero - 1)) + 1;

	for (int i = 1; i <= numero; i++ ){
		res = res + valor;
		valor = valor + 2;
	}
	cout << "El resultado es: " << res << endl;
}
