/* Calcuar la media de notas introducidas dentro de un vector con el uso de una variable util */

#include <iostream>

using namespace std;

int main () {

	const int DIM_v = 100;
	double v[DIM_v] = {0};
	int util_v = 0;
	double media = 0;

	do {

		cout << "Introduzca el numero de notas que tiene: ";
		cin >> util_v;

	}while ((util_v < 1) && (util_v > 100));

	for (int i = 0; i < util_v; i++){

		cout << "Nota nº" << i + 1 << ": ";
		cin >> v[i];
	}

	cout << "Las notras introducidas son: ";

	for (int i = 0; i < util_v; i++){

		if (i + 1 == util_v){
			cout << v[i];
		}else {
			cout << v[i] << ", ";
		}

		media += v[i];
	}
	media /= util_v;

	cout << "\n La media total es: " << media << endl;
	
}
