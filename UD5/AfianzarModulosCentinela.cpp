/* Programa para verificar los conocimientos aprendidos de los módulos de cadena de caracteres: imprimeCadena, longitudCadena, concateCadena, quitaEspacios */

#include <iostream>

using namespace std;

/**
 * @brief Esta función saca por pantalla los valores predeterminados del vector \a v[]
 * @param int v[] (E/S) Vector con valores predeterminados
 * @param const int DIM (E) capacidad total del vector
 * @return nada
 * @pre vector predefinido con centinelas
 * @post ninguna
 * @autor Pablo
 * @version 1.0 Fp DAM
 */
void imprimeCadena(const int DIM, char v[]);

/**
 * @brief Esta función saca por pantalla la longitud del vector \a v[]
 * @param int v[] (E/S) Vector con valores predeterminados
 * @param const int DIM (E) capacidad total del vector
 * @return nada
 * @pre vector predefinido con centinelas
 * @post ninguna
 * @autor Pablo
 * @version 1.0 Fp DAM
 */
void longitudCadena(const int DIM, char v[]);

/**
 * @brief Esta función saca por pantalla una combinación de un nuevo vector mas el vector \a v[]
 * @param int v[] (E/S) Vector con valores predeterminados
 * @param const int DIM (E) capacidad total del vector
 * @return nada
 * @pre vector predefinido con centinelas
 * @post ninguna
 * @autor Pablo
 * @version 1.0 Fp DAM
 */
void concateCadena(const int DIM, char v[]);

/**
 * @brief Esta función saca por pantalla un nuevo vector derivado del vector \a v[], pero sin espacios
 * @param int v[] (E/S) Vector con valores predeterminados
 * @param const int DIM (E) capacidad total del vector
 * @return nada
 * @pre vector predefinido con centinelas
 * @post ninguna
 * @autor Pablo
 * @version 1.0 Fp DAM
 */
void quitaEspacios(const int DIM, char v[]);



int main () {

	const int DIM = 20;
	char v[DIM] = {'h','o',' ','l','a','\0'};
	
	imprimeCadena(DIM, v);   // "ho la"
	longitudCadena(DIM, v);  // "5"
	concateCadena(DIM, v); // "ho lamundo"
	quitaEspacios(DIM, v);   // 'hola'
}



void imprimeCadena(const int DIM, char v[]){

	int i = 0; //iterator

	cout << "vector: ";
	do{

		cout << v[i];

		i++;
	}while (v[i] != '\0' && i < DIM);
	cout << endl;
}

void longitudCadena(const int DIM, char v[]){

	int i = 0; //iterator (contador)

	cout << "Longitud del vector: ";
	do{
		i++;
	}while (v[i] != '\0' && i < DIM);
	cout << i << endl;

}

void concateCadena(const int DIM, char v[]){

	int i = 0;
	const int DIM2 = 10;
	char v2[DIM2] = {'m','u','n','d','o','\0'};
	int util_v2 = 0;
	int n_centinelas = 0;
	
	do{
		i++;
		
	}while (v[i] != '\0' && i < DIM);
	n_centinelas++;
	do{
		v[i] = v2[util_v2];
		i++;
		util_v2++;
		if (v[i] != '\0'){
			n_centinelas++;
		}
	}while (n_centinelas != 2 && i < DIM);

	cout << "vectorConcate: ";
	i = 0;
	do{

		cout << v[i];

		i++;
	}while (v[i] != '\0' && i < DIM);
	cout << endl;

}

void quitaEspacios(const int DIM, char v[]){

	int i = 0; //iterator
	char v_s[10] = {0}; // vector con la frase o palabra (sin espacios) la cual se vera si es palindroma o no 
	int util_v_s = 0; //Dimension utilizada por el vector de salida y nº de siguente celda libre

	do{

		if (v[i] != ' '){
			v_s[util_v_s] = v[i];
			util_v_s++;
		}
		i++;

	}while (v[i] != '\0' && i < DIM);

	imprimeCadena(10, v_s);
}

