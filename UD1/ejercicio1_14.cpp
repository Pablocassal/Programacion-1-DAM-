/* Programa que calcula la media y la desviación tipica */

#include <iostream>
#include <cmath>

using namespace std;

int main() {
	
	//DECLARACIÓN DE VARIABLES
	double x1, x2, x3, media, desviacion;
	double a, b, c;

	//INTRODUCCIÓN
	cout << "Este programa calcula la media y desviacion tipica de entre tres numeros" << endl;
	cout << "Introduzca el primer numero: "; 
	cin >> x1;
	cout << "Introduzca el segundo numero: ";
	cin >> x2;
	cout << "Introduzca el tercer numero: ";
	cin >> x3; 

	//CALCULOS
	media = (x1 + x2 + x3) / 3;
	a = (x1 - media);
	b = (x2 - media);
	c = (x3 - media);
	desviacion = (sqrt( (pow(a, 2)) + (pow(b, 2)) + (pow(c, 2)) )) / 3;

	//RESPUESTAS
	cout << "La media total es: " << media << endl;	
	cout << "La desviación tipica es: " << desviacion << endl;

	return 0;
}
