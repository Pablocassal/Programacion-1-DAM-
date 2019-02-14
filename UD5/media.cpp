/* Calcuar la media de notas introducidas dentro de un vector */

#include <iostream>

using namespace std;

int main () {

	const int DIM_v = 5;
	double v[DIM_v] = {0};
	double media = 0;

	for (int i = 0; i < DIM_v; i++){

		cout << "Nota nº" << i + 1 << ": ";
		cin >> v[i];
	}

	cout << "Las notras introducidas son: ";

	for (int i = 0; i < DIM_v; i++){

		if (i + 1 == DIM_v){
			cout << v[i];
		}else {
			cout << v[i] << ", ";
		}

		media += v[i];
	}
	media /= DIM_v;

	cout << "\nLa media total es: " << media << endl;
	
}
