/* Ejemplo de paso por referencia total, a traves de un vector */

#include <iostream>

using namespace std;

/*
 @brief Esta función saca por pantalla los valores predeterminados del vector \a v[]
 @param int v[] (E/S) Vector con valores predeterminados
 @param int util_v (E) capacidad util del vector /a v[] 
 @return nada
 @pre libreria iostream activa
 @post ninguna
 @autor Pablo
 @version 1.0 Fp DAM
*/
void funcion (int [], int);


int main(){

	const int capacidad = 5;
	int vectores[capacidad] = {3, 5, 7};
	int util_v = 3;

	funcion(vectores, util_v);
	for (int i = 0; i < util_v; i++){
		cout << "Vector (main)";
		cout << vectores[i] << endl;
	} 
}

void funcion (int v[], int util_v) {

	for (int i = 0; i < util_v; i++){
		cout << "Vector (función)";
		cout << v[i] << endl;
	} 
}
