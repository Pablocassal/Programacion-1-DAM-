/* Este programa invierte los valores de un vector */

#include <iostream>
#define RESTORE "\033[1;0m"
#define DEBUG "\033[1;31m"

using namespace std;

/**
 * @brief Esta función saca por pantalla los valores predeterminados del vector \a v[], de manera inversa
 * @param int v[] (E/S) Vector con valores predeterminados
 * @param const int DIM (E) capacidad total del vector
 * @return nada
 * @pre vector predefinido con centinelas
 * @post ninguna
 * @autor Pablo
 * @version 1.0 Fp DAM
 */
void IntercambiaVectores(const int DIM, const char v[]);

int main () {

	const int DIM = 10;
	char v[DIM] = {'a','b','c','d','e','\0'};

	IntercambiaVectores(DIM, v);
}

void IntercambiaVectores(const int DIM, const char v[]){

	int i = 0;
	const int DIM_2 = 10;
	char trade[DIM_2] = {0};
	int util_trade = 0;

	cout << "(antes) El vector era: ";
	do{
		cout << v[i] << " ";
		i++;	
	}while (v[i] != '\0' && i<DIM);
	cout << endl;

	i = 0;
	do{
		i++;
	}while (v[i] != '\0' && i<DIM);
	//cout << DEBUG << "debug = i: " << i << RESTORE << endl;
	i--;

	do {
		trade[util_trade] = v[i];
		util_trade++;
		i--;
	}while (i >= 0);
	//cout << DEBUG << "debug = util_trade: " << util_trade << RESTORE << endl;
	trade[util_trade] = '\0';
	util_trade++;

	i = 0;
	cout << "(despues) El vector es: ";
	do{
		cout << trade[i] << " ";
		i++;	
	}while (trade[i] != '\0' && i<DIM_2);
	cout << endl;
}
