/* Este programa coje dos vectores desordenados y los ordena en uno (de mayor a menor) */

#include <iostream>
#define RESTORE "\033[1;0m"
#define DEBUG "\033[1;31m"
#define MARK "\033[1;34m"

using namespace std;


/**
 * @brief Es un Procedimiento que mezcla ordena dos vectores desordenados en un vector local y lo saca por pantalla
 * @param const int DIM (E) Número máximo de componentes del vector \a v_1 y \a v_2
 * @param const int v_1 (E) Vector que sera mezclado y ordenado con el v_2
 * @param int utilv_1 (E) Número que representa los componentes utilizados en el momento por v_1 y la siguiente posición libre del vector
 * @param const int v_2 (E) Vectore que sera mezclado y ordenado con el v_1
 * @param int utilv_2 (E) Número que representa los componentes utilizados en el momento por v_2 y la siguiente posición libre del vector
 * @return Nada
 * @pre Vector predefinido, utilv_1 > 0, utilv_1 < DIM, utilv_2 > 0, utilv_2 < DIM.
 * @post ninguna
 * @author Pablo
 * @version 1.0 Fp DAM
 */
void OrdenaVectores(const int DIM, const int v_1 [], const int v_2 [], int utilv_1, int utilv_2);



int main () {

	const int DIM = 20; //Número máximo de componentes de los vectores
	int vector_1 [DIM] = {1,2,3,0}; //Vector que sera mezclado y ordenado con el v_2
	int vector_2 [DIM] = {4,2,5,10,0}; //Vectore que sera mezclado y ordenado con el v_1
	int utilvector_1 = 4;// Número que representa los componentes utilizados en el momento por v_1 y la siguiente posición libre del vector
	int utilvector_2 = 5;// Número que representa los componentes utilizados en el momento por v_2 y la siguiente posición libre del vector

	OrdenaVectores(DIM, vector_1, vector_2, utilvector_1, utilvector_2);

}

void OrdenaVectores(const int DIM, const int v_1 [], const int v_2 [], int utilv_1, int utilv_2){

	const int DIM_s = 20; //Número máximo de componentes del vectores
	int v_s [DIM_s] = {}; //Vector en el que sera mezclado y ordenado el v_1 y el v_2.
	int utilv_s = 0; //Número que representa los componentes utilizados en el momento por v_s y la siguiente posición libre del vector

	int SumaUtiles = utilv_1 + utilv_2;

	for (int ite = 0; SumaUtiles != 0; ite++){
	
		for (int i = 0; i < utilv_1 && i < DIM  ; i++){
			if (v_1[i] == ite){
				v_s[utilv_s] = v_1[i];
				utilv_s++;
				SumaUtiles--;
			}
		}
		for (int i = 0; i < utilv_2 && i < DIM  ; i++){
			if (v_2[i] == ite){
				v_s[utilv_s] = v_2[i];
				utilv_s++;
				SumaUtiles--;
			}
		}
	}

	cout << "Vector mezclado y ordenado: ";
	for (int i = 0; i < utilv_s && i < DIM_s; i++){

		cout << v_s[i] << " ";
	}
	cout << endl;
}
