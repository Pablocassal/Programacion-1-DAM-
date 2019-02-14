/* Ejemplo de numeros primos con funciones */

#include <iostream>
#include <cmath>

using namespace std;

/*
 @brief Calcula si un numero \a n es primo o no
 @param n Numero al que ver si es primo o no
 @pre n > 0
 @post ninguna
 @return booleano que califica si es primo o no \a n
 @autor Pablo
 @version 1.0 FP DAM
 */
bool primo(int n) {

	int contador = 1, veces_0 = 0;
	bool finalizador = true, resultado = true;
	double res = 0.0;
	

	while (finalizador){	
		if (pow(contador,2) > n){
			finalizador = false;
			if (veces_0 == 1){
				resultado = true;
			}else{
				resultado = false;
			}
		}
		res = n % contador;
		if (res == 0){
			veces_0++;
		}
		contador++;
	}
	return resultado;
}

int main (){
	int numero = 1;
	bool result = true; //Expresa si el resultado es primo o no
	do {
		cout << "Introduce un valor entero: ";
		cin >> numero;
		if (numero <= 0){
			cout << "Un numero solo podra ser primo si es mayor que 0." << endl;
		}
	} while (numero <= 0);
	
	result = primo(numero);
	if (result) {
		cout << numero << " - Es primo." << endl;
	}else{
		cout << numero << " - No es primo." << endl;
	}

}
