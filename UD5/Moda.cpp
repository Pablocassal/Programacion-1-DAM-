/* Este programa sirve para calcular la "moda" de un conjunto de numeros enteros (Número que se repite mas veces) */

#include <iostream>
#define RESTORE "\033[1;0m"
#define DEBUG "\033[1;31m"
#define MARK "\033[1;34m"

using namespace std;

/**
 * @brief Es un Procedimiento que caulcula la moda de un vector de enteros (Número que se repite mas veces) y cuantas veces se ha repetido este
 * @param const int DIM (E) Número máximo de componentes del vector \a v_e
 * @param const int v_e (E) Vector con la cadena a la que buscar la moda (Número que se repite mas veces)
 * @param int util_v_e (E) Número que representa los componentes utilizados en el momento por \a v_e y la siguiente posición libre del vector
 * @param int moda (S) Número el cual es el mas repetido dentro del vector_e
 * @param int rep_moda (S) Número de veces que se repide la variable moda
 * @return La moda y su numero de veces repetida en des variables pasadas por referencia
 * @pre Vector predefinido, util_v_e > 0, util_v_e < DIM.
 * @post ninguna
 * @author Pablo
 * @version 1.0 Fp DAM
 */
void CalculoModa(const int DIM, const int v_e[], int util_v_e, int &moda, int &rep_moda);

/**
 * @brief Es un Procedimiento que saca por pantalla la "moda" y el numero de veces que esta se ha repetido
 * @param int moda (E) Contiene el numero que mas se ha repetido dentro del vector ya calculado
 * @param int rep_moda (E) Número de veces que se repitió la variable moda
 * @return Nada
 * @pre Ninguna
 * @post Ninguna
 * @author Pablo
 * @version 1.0 Fp DAM
 */
void ImprimeResultado(const int moda, const int rep_moda);




int main () {

	const int DIM = 20; //Número máximo de componentes del vector
	int vector_e [DIM] = {1,2,3,6,2,4,5,3,4,3,9}; //Vector con la cadena a la que buscar la moda (Número que se repite mas veces)
	int util_vector_e = 11; // Número que representa los componentes utilizados en el momento por v_e y la siguiente posición libre del vector
	int moda = 0; //Número el cual es el mas repetido dentro del vector_e
	int rep_moda = 0; //Número de veces que se repide la variable moda

	//1) Calcular la moda del vector
	CalculoModa(DIM, vector_e, util_vector_e, moda, rep_moda);
	//2) Sacar por pantalla el resultado
	ImprimeResultado(moda, rep_moda);
}

void CalculoModa(const int DIM, const int v_e[], int util_v_e, int &moda, int &rep_moda){

	int N_iteracion = 0;
	int N_rep_moda = 0;

	for (int i = 0; i<DIM && i < util_v_e; i++){
		
		N_rep_moda = 0;
		N_iteracion = v_e[i];
		for (int i = 0; i<DIM && i < util_v_e; i++){

			if (N_iteracion == v_e[i]){
				
				N_rep_moda++;
			}		
		}
		if (N_rep_moda > rep_moda){

			moda = N_iteracion;
			rep_moda = N_rep_moda;
		}
	}
}

void ImprimeResultado(const int moda, const int rep_moda){

	cout << "La moda es: " << moda << endl;
	cout << "Esta esta repetida " << rep_moda << " veces.\n";
}
