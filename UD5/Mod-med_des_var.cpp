/* Calcula la media, desviación media y varianza de unas notas introducidas por el usuario (con modulos) */

#include <iostream>
#include <cmath>

using namespace std;

/*
 @brief Esta función pide al usuario el numero de alumnos 
 @return el numero de alumnos
 @pre libreria iostream activa
 @post numeor de alumnos no negativos o = 0
 @autor Pablo
 @version 1.0 Fp DAM
*/
int NumeroAlumnos();

/*
 @brief Esta función pide al usuario la nota de cada alumno y la guarda
 @param int v[] (E/S) Vector con valores predeterminados
 @param int util_v (E) capacidad util del vector /a v[] 
 @return nada
 @pre libreria iostream activa
 @post ninguna
 @autor Pablo
 @version 1.0 Fp DAM
*/
void PideNotas(int[], int);

/*
 @brief Esta función calcula el resultado de la media
 @param int v[] (E/S) Vector con valores predeterminados
 @param int util_v (E) capacidad util del vector /a v[] 
 @return el resultado de la media
 @pre valores dentro del vector
 @post ninguna
 @autor Pablo
 @version 1.0 Fp DAM
*/
double Media(int [], int);

/*
 @brief Esta función calcula el resultado de la desviacion media
 @param int v[] (E/S) Vector con valores predeterminados
 @param int util_v (E) capacidad util del vector /a v[] 
 @return el resultado de la Desviación media
 @pre valores dentro del vector
 @post ninguna
 @autor Pablo
 @version 1.0 Fp DAM
*/
double Desviacion(int [], int, int);

/*
 @brief Esta función calcula el resultado de la Varianza
 @param int v[] (E/S) Vector con valores predeterminados
 @param int util_v (E) capacidad util del vector /a v[] 
 @return el resultado de la Varianza
 @pre valores dentro del vector
 @post ninguna
 @autor Pablo
 @version 1.0 Fp DAM
*/
double Varianza(int [], int, int);

/*
 @brief Esta función saca por pantalla los valores resultantes del calculo de la media, desviación y varianza
 @param int media (E) resultado de la media
 @param int des_med (E) resultado de la Desviación media
 @param int varianza (E) resultado de la Varianza
 @return nada
 @pre calculo de la media, desviación y varianza
 @post ninguna
 @autor Pablo
 @version 1.0 Fp DAM
*/
void Resultados(double, double, double);

int main () {

	const int n_alumnos = 100;
	int alumnos[n_alumnos] = {0};
	int alumnos_util = 0;
	double media = 0;
	double des_med = 0;
	double varianza = 0;

	alumnos_util = NumeroAlumnos();
	PideNotas(alumnos, alumnos_util);
	media = Media(alumnos, alumnos_util);
	des_med = Desviacion(alumnos, alumnos_util, media);
	varianza = Varianza(alumnos, alumnos_util, media);
	Resultados(media, des_med, varianza);
}

int NumeroAlumnos () {

	int numero_alumnos = 0;
	cout << "Introduzca el numero de alumnos: ";
	cin >> numero_alumnos;
	return numero_alumnos;
}

void PideNotas (int v[], int util_v) {
	
	for (int i = 0; i < util_v; i++) {

		cout << "Nota del alumno nº" << i + 1 << ": ";
		cin >> v[i];
	}
}

double Media (int v[], int util_v) {
	
	double media = 0.0;

	for (int i = 0; i < util_v; i++) {
		
		media += v[i];
	}
	media /= util_v;

	return media;
}

double Desviacion (int v[], int util_v, int media) {
	
	double desviacion = 0.0;

	for (int i = 0; i < util_v; i++) {

		desviacion += fabs(v[i] - media);
	}
	desviacion /= util_v;

	return desviacion;
}

double Varianza (int v[], int util_v, int media) {
	
	double varianza = 0.0;

	for (int i = 0; i < util_v; i++) {	

		varianza += pow((v[i] - media), 2);
	}
	varianza /= util_v;

	return varianza;
}

void Resultados (double media, double des_med, double varianza) {

	cout << "Media: " << media << endl;
	cout << "Desviación media: " << des_med << endl;
	cout << "Varianza: " << varianza << endl;
}
