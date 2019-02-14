/* Cambia los valores introducidos en un vector a otro vector */

#include <iostream>

using namespace std;

int main () {

	const int capacidad = 4;
	int vector1[capacidad] = {0};
	int vector2[capacidad] = {0};
	
	for (int i = 0; i < capacidad; i++) {

		cout << "Nota del alumno nº" << i + 1 << ": ";
		cin >> vector1[i];
	}

	for (int i = 0; i < capacidad; i++) {

		vector2[i] = vector1[i];
	}

	for (int i = 0; i < capacidad; i++) {

		cout << vector2[i] << endl;
	}
}
