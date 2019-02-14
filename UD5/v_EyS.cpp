/* Vector de entrada que sale por pantalla a tra ves de otro vector pero de salida */

#include <iostream>

using namespace std;

/**
 * @brief Este Modulo intercambia los valores de un vector de entrada a un vector de salida, y saca este ultimo por pantalla
 * @param int v1[]	(E) Vector que lleva los valores de entrada al modulo
 * @param int v2[]	(S) Vector que lleva los valores de entrada al modulo
 * @param int DIM	(E) Constante que tiene la dimension total de componentes de los modulos  
 * @param int util_v1	(E) Valor que representa el numero de celdas que estan siendo usadas por el vector /a v1 en cada momento
 * @param int util_v2	(E/S) Valor que representa el numero de celdas que estan siendo usadas por el vector /a v2 en cada momento
 * @pre Valores de entrada preestablecidos
 * @post Ninguna
 * @autor Pablo
 * @version 1.0 Fp DAM
 */
void SalidaVector (const int[], int[], int, int, int &);

int main () {

	const int DIM = 10;
	int v1[DIM] = {3,2,6}, v2[DIM] = {0};
	int util_v1 = 3, util_v2 = 0;

	SalidaVector(v1, v2, DIM, util_v1, util_v2);
}

void SalidaVector (const int v1[], int v2[], int DIM, int util_v1, int &util_v2){

	for (int i = 0; (i < util_v1) && (i < DIM); i++){
		v2[i] = v1[i];
		util_v2++;
	}
	
	for (int i = 0; (i < util_v2) && (i < DIM); i++){
		cout << "(v2)Posición nº" << i + 1 << ": " << v2[i] << endl;
	}
}
