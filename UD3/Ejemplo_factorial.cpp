/* Ejemplo de factorial con una función */

#include <iostream>

using namespace std;

/*
 @brief Calcula el factorial de \a n
 @param n número del que se calculará el factorial
 @pre n > 0
 @post ninguna
 @return El factorial de \a n
 @autor Pablo
 @version 1.0 FP DAM
 */
int funcionfactorial (int n){
	int resultado = 1;
	
	for (int i = 0; i <= n; i++){
		if (i == 0){
			resultado == 1;
		}else{
			resultado *= i;
		}
	}
	return resultado;	
}


int main () {

	int valor = 0;

	cout << "introduce un numero entero para un factorial: ";
	do{
		cin >> valor;
		if (valor <= 0){
			cout << "El numero introducido no tiene factorial. Introduce otro numero: ";
		}
	}while (valor <= 0);
	cout << "El resultado es: " << funcionfactorial(valor) << endl;
}
