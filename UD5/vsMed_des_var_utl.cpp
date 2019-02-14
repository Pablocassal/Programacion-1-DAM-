/* Calcula la media, desviación media y varianza de unas notas introducidas por el usuario */

#include <iostream>
#include <cmath>

using namespace std;

int main () {

	const int n_alumnos = 100;
	int alumnos[n_alumnos] = {0};
	int alumnos_util = 0;
	double media = 0;
	double des_med = 0;
	double varianza = 0;

	cout << "Introduzca el numero de alumnos: ";
	cin >> alumnos_util;

	for (int i = 0; i < alumnos_util; i++) {

		cout << "Nota del alumno nº" << i + 1 << ": ";
		cin >> alumnos[i];
	}

	for (int i = 0; i < alumnos_util; i++) {
		
		media += alumnos[i];
	}
	media /= alumnos_util;

	for (int i = 0; i < alumnos_util; i++) {

		des_med += fabs(alumnos[i] - media);
	}
	des_med /= alumnos_util;

	for (int i = 0; i < alumnos_util; i++) {	

		varianza += pow((alumnos[i] - media), 2);
	}
	varianza /= alumnos_util;

	cout << "Media: " << media << endl;
	cout << "Desviación media: " << des_med << endl;
	cout << "Varianza: " << varianza << endl;
}
