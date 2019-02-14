/* Este programa coge una entrada de segundos y las distribuye en dias/horas/minutos/segundos */

#include <iostream>

using namespace std;

/*
 @brief Pide al usuario un numero de segundos
 @return Numero de segundos dado por el usuario
 @pre Salidas y entradas predeterminadas activas
 @post ninguna
 @autor Pablo
 @version 1.0 FP DAM
 */
int EntradaSegundos();

/*
 @brief Calcula a través de \a EntradaSegundos la cantidad total que deriva de eso en formato \a dias, \a horas, \a minutos y \a segundos
 @param EntradaSegundos Numero de segundos dado por el usuario
 @param dias Numero de dias finales
 @param horas Numero de horas finales
 @param minutos Numero de minutos finales
 @param segundos Numero de segundos finales
 @pre ninguna
 @post ninguna
 @autor Pablo
 @version 1.0 FP DAM
 */
void CalculoTiempo(int, int &, int &, int &, int &);

/*
 @brief Imprime por pantalla el resultado final
 @param dias Numero de dias finales
 @param horas Numero de horas finales
 @param minutos Numero de minutos finales
 @param segundos Numero de segundos finales
 @pre ninguna
 @post ninguna
 @autor Pablo
 @version 1.0 FP DAM
 */
void SalidaResultado(int, int, int, int);

int main (){

	/* Datos necesitados para la salida */
	int dias = 0;
	int horas = 0;
	int minutos = 0;
	int segundos = 0;

	CalculoTiempo(EntradaSegundos(), dias, horas, minutos, segundos);
	SalidaResultado(dias, horas, minutos, segundos);
}

int EntradaSegundos () {
//87901
	int segundos = 0;

	cout << "Introduzca el numero de segundos que desee: ";
	cin >> segundos;

	return segundos;
}

void CalculoTiempo (int EntradaSegundos, int &dias, int &horas, int &minutos, int &segundos) {

	dias = EntradaSegundos / 86400;
	EntradaSegundos = EntradaSegundos % 86400;
	horas = EntradaSegundos / 1440;
	EntradaSegundos = EntradaSegundos % 1440;
	minutos = EntradaSegundos / 60;
	EntradaSegundos = EntradaSegundos % 60;
	segundos = EntradaSegundos;
}

void SalidaResultado ( int dias, int horas, int minutos, int segundos) {

	cout << "El resultado seria: \n" << "--> " << dias << " Dias\n" << "--> " << horas << " Horas\n"  << "--> " << minutos << " Minutos\n" << "--> " << segundos << " Segundos\n";
}
