/* Intercambia los valores entre dos vectores con la ayuda de otra función */

#include <iostream>
#define RESTORE "\033[1;0m"
#define DEBUG "\033[1;31m"
#define MARK "\033[1;34m"

using namespace std;

/**
 * @brief Esta función dicta si se puede realizar el ejercicio o si hay algún fallo de Dimensiones y posibles utiles de cada vector 
 * @param const int DIM_1 (E) capacidad total del vector_1
 * @param int util_v1 (E) capacidad util del vector /a v_1[] 
 * @param const int DIM_2 (E) capacidad total del vector_2
 * @param int util_v2 (E) capacidad util del vector /a v_2[] 
 * @return Un valor booleano que dicta si se puede llevar a cabo el ejercicio
 * @pre Ninguna
 * @post Ninguna
 * @autor Pablo
 * @version 2.0 Fp DAM
*/
bool CompruebaDIM(const int DIM_1, const int DIM_2, const int util_v1, const int util_v2);

/**
 * @brief Esta función intercambia los valores entre dos vectores con la ayuda de otra función y lo saca por pantalla 
 * @param const int DIM (E) capacidad total del vector
 * @param int v_1[] (E) Vector con valores predeterminados
 * @param int util_v1 (E) capacidad util del vector /a v_1[] 
 * @param int v_2[] (E/S) Vector con valores predeterminados
 * @param int util_v2 (E) capacidad util del vector /a v_2[] 
 * @return nada
 * @pre vector predefinido con centinelas, y las dimensiones no chocan con las posibles utiles de los vectores
 * @post ninguna
 * @autor Pablo
 * @version 2.0 Fp DAM
*/
void IntercambiaVectores_resultado(const int DIM, int v_1[] , int util_v1, int v_2[], int util_v2);



int main () {

	const int DIM_1 = 20;
	int v_1[DIM_1] = {1,2,3,4,5};
	int util_v1 = 5;
	const int DIM_2 = 4;
	int v_2[DIM_2] = {6,7,8,9};
	int util_v2 = 7;
	bool DIM_funcionales = false;

	cout << MARK << "(FUERA de la función)" << RESTORE << endl;
	cout << "Vector 1: ";
	for(int i = 0; i<DIM_1 && i<util_v1; i++){
		cout << v_1[i] << " ";
	}

	cout << endl << "Vector 2: ";
	for(int i = 0; i<DIM_2 && i<util_v2; i++){
		cout << v_2[i] << " ";
	}
	cout << endl;

	DIM_funcionales = CompruebaDIM(DIM_1, DIM_2, util_v1, util_v2);
	if (DIM_funcionales){
		IntercambiaVectores_resultado(DIM_1, v_1, util_v1, v_2, util_v2);
	}else{
		cout << DEBUG <<"Las dimensiones de los vectores chocan con las posibles utiles\n" << RESTORE;
	}
}



bool CompruebaDIM(const int DIM_1, const int DIM_2, const int util_v1, const int util_v2){

	bool DIM_funcionales = true;

	if (DIM_1 < util_v2 || DIM_2 < util_v1){
		DIM_funcionales = false;
	}

	return DIM_funcionales;
}

void IntercambiaVectores_resultado(const int DIM, int v_1[] , int util_v1, int v_2[], int util_v2){

	int copia_util_v1 = util_v1;
	int copia_util_v2 = util_v2;
	const int DIM_aux = 20;
	int v_aux[DIM_aux] = {0};
	int util_vaux = 0;
	int Suma_de_utiles = util_v1 + util_v2;

	for (int i = 0; (i<DIM && i<DIM_aux) && ((i<util_v1 || i<util_v2) || (util_v1 + util_v2 < Suma_de_utiles)); i++){ // Controla el espacio total, el maximo util y si falta alguna vuelta por dar cuando las utiles son iguales

		v_aux[util_vaux] = v_1[i];
		util_vaux++;

		v_1[i] = v_2[i];
		if (i+1 > copia_util_v1){
			util_v1++;
		}else if (util_v1 > util_v2){
			util_v1--;
		}

		v_2[i] = v_aux[i];
		if (i+1 > copia_util_v2){
			util_v2++;
		}else if (util_v1 < util_v2){
			util_v2--;
		}
		//cout << DEBUG << i << "debug = util_v1: " << util_v1 << "debug = util_v2: " << util_v2 << RESTORE << endl << endl;
	}

	cout << MARK << "(DENTRO de la función)" << RESTORE << endl;
	cout << "Vector 1: ";
	for(int i = 0; i<DIM && i<util_v1; i++){
		cout << v_1[i] << " ";
	}

	cout << endl << "Vector 2: ";
	for(int i = 0; i<DIM && i<util_v2; i++){
		cout << v_2[i] << " ";
	}
	cout << endl;
}
