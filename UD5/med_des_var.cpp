/* Calcula la media, desviación media y varianza de unas notas introducidas por el usuario */

#include <iostream>
#include <cmath>

using namespace std;

int main () {

	const int n_alumnos = 3;
	int alumnos[n_alumnos] = {0};
	double media = 0;
	double des_med = 0;
	double varianza = 0;

	for (int i = 0; i < n_alumnos; i++) {

		cout << "Nota del alumno nº" << i + 1 << ": ";
		cin >> alumnos[i];
	}

	for (int i = 0; i < n_alumnos; i++) {
		
		media += alumnos[i];
	}
	media /= n_alumnos;

	for (int i = 0; i < n_alumnos; i++) {

		des_med += fabs(alumnos[i] - media);
	}
	des_med /= n_alumnos;

	for (int i = 0; i < n_alumnos; i++) {	

		varianza += pow((alumnos[i] - media), 2);
	}
	varianza /= n_alumnos;

	cout << "Media: " << media << endl;
	cout << "Desviación media: " << des_med << endl;
	cout << "Varianza: " << varianza << endl;
}
