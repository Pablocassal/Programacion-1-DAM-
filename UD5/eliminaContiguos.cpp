/* Este programa Lee una serie de numeros de un vector y saca por pantalla el vector sin los numeros contiguos de este */

#include <iostream>

using namespace std;

/**
 * @brief Pasa al vector salida los numeros no contiguos del vector entrada y saca por pantalla el valor final del 
 * @param const int (E) DIM Capacidad maxima de los vectores
 * @param const int [] (E) vector_entrada Vector con una entrada constante de numeros enteros
 * @param int [] (S) vector_salida Vector con una salida de numeros no contiguos
 * @param const int (E) util_v_e Capacidad utilizada por el vector en cada momento y señalizado de la siguiente celda disponible
 * @param int (E) util_v_s Capacidad utilizada por el vector en cada momento y señalizado de la siguiente celda disponible
 * @pre Ninguna
 * @post Ninguna
 * @autor Pablo
 * @version 1.0 FP DAM
 */
void OmiteContiguos(const int, const int [], int [], const int, int);



int main () {

	const int DIM = 10;
	int vector_entrada[DIM] = {1,1,1,1,3,1,3};
	int vector_salida[DIM] = {0};
	int util_v_e = 7;
	int util_v_s = 0;
	
	OmiteContiguos(DIM, vector_entrada, vector_salida, util_v_e, util_v_s);
}

void OmiteContiguos (const int DIM, const int vector_entrada[], int vector_salida[], const int util_v_e, int util_v_s){

	for (int i = 0; i < util_v_e && i < DIM; i++){
	
		if (i == 0){
			
			vector_salida[util_v_s] = vector_entrada[i];
			util_v_s++;
		}else if (vector_entrada[i] != vector_entrada[(i - 1)]){

			vector_salida[util_v_s] = vector_entrada[i];
			util_v_s++;
		}
	}
	cout << "debug: " << util_v_s << endl;

	cout << "{";
	for (int i = 0; i < util_v_s && i < DIM; i++){

		cout << vector_salida[i];
		if (i + 1 != util_v_s){
			cout << ",";
		}
	}
	cout << "}" << endl;
}
