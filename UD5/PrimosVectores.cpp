/* Programa que lee un intervalo y devuelve los primos correspondiente a esta (MODULARIZADO y con VECTORES) */

#include <iostream>
#include <math.h>

using namespace std;


/**
 * @brief Esta función Lee el numero final de la serie [1, n]
 * @param int (S) parm El numero n final de la serie 
 * @pre Ninguna
 * @post parm > 1
 * @autor Pablo
 * @version 1.0 FP DAM
 */
void DeclaraIntervalo (int &parm){

	cout << "Introduzca el n numero (final) de la serie \"[1,n]\" : ";
	cin >> parm;
}

/**
 * @brief Verifica cuales de los numeros de la serie son numeros primos y los guarda en un vector
 * @param int (S) parm El numero n final de la serie 
 * @param int (S) v[] El vector que contendra cada primo en una celda
 * @param int (S) util_v Capacidad utilizada por el vector en cada momento y señalizado de la siguiente celda disponible
 * @pre parm > 1
 * @post Ninguna
 * @autor Pablo
 * @version 1.0 FP DAM
 */
void CalculaPrimos (int parm, int v[], int &util_v){

	for (int j = 1; j <= parm; j++ ){

		bool primo = true; //Controla cuando un numero no es primo 
		int cuenta_0 = 0; //Cuenta las veces que da el resto 0 cuando se esta calculando el numero primo 
		bool salidarapida = false; //Sale del bucle una vez el numero no es primo
	
		for (int i = 2; (pow(i,2) <= j) && (!(salidarapida)); i++){

			if ((j % i) == 0){
				cuenta_0++;
			}
			if (cuenta_0 == 1){
				salidarapida = true;
				primo = false;
			}

		}
		if (primo && j <= parm){
			v[util_v] = j;
			util_v++;
		}
	}	
}


/**
 * @brief Saca por pantalla los numeros primos detectados
 * @param int (S) v[] El vector que contendra cada primo en una celda
 * @param int (S) util_v Capacidad utilizada por el vector en cada momento y señalizado de la siguiente celda disponible
 * @pre Ninguna
 * @post Ninguna
 * @autor Pablo
 * @version 1.0 FP DAM
 */
void SalidaTotalPrimos(int v[], int util_v){

	cout << "Los primos descubiertos son: ";
	for (int i = 0; i < util_v; i++){
		cout << v[i] << ", ";
	}
	cout << "end. "<< endl;

}

int main (){

	int a = 0;
	const int DIM = 100;
	int v[DIM] = {0};
	int util_v = 0;
	
	DeclaraIntervalo(a);
	CalculaPrimos(a, v, util_v);
	SalidaTotalPrimos(v, util_v);
}
