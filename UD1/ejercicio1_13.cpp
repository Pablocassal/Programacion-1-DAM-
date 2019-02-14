/* Este programa calcula en dias, horas, minutos y segundos el tiempo introducido en segundos */

#include <iostream>

using namespace std;

int main() {
	
	//DECLARACIÓN DE VARIABLES
	int segundos_e, horas_e, minutos_e;
	int segundos_s, minutos_s, horas_s, dias;

	//INTRODUCCIÓN
	cout << "Este programa calcula los dias, horas, minutos y segundos que correspondan a la cantidad de segundos que quieras." << endl;
	cout << "Introduce la cantidad de segundos: ";	
	cin >> segundos_e;

	//CALCULOS
	dias = segundos_e / 86400 ;
	horas_e = segundos_e % 86400;
	horas_s = horas_e / 3600;
	minutos_e = horas_e % 3600;
	minutos_s = minutos_e / 60;
	segundos_s = minutos_e % 60;
	
	//RESPUESTAS
	cout<< "Nº de dias: "<< dias<< endl;
	cout<< "Nº de horas: "<< horas_s<< endl;
	cout<< "Nº de minutos: "<< minutos_s<< endl;	
	cout<< "Nº de segundos: "<< segundos_s<< endl;

	return 0;
}
