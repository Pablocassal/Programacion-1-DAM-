/* Calculo de posición de circunferencias */

#include <iostream>
#include <cmath>

using namespace std;

int main(){

	//DECLARACIÓN DE VARIABLES
	double x = 0.0, y = 0.0, x1 = 0.0, y1 = 0.0;
	double radio = 0.0, radio1 = 0.0;
	double modulo = 0.0, modulo1 = 0.0;
	double distancia_puntos = 0.0;
	double radio_magico =0.0;

	//INTRODUCCIÓN
	cout << "Introduce las coordenadas (en metros) de el centro de la primera circunferencia." << endl;	
	cout << "x: ";
	cin >> x;
	cout << "y: ";
	cin >> y;
	cout << "Introduce su radio en metros: ";
	cin >> radio;
	cout << "Introduce las coordenadas (en metros) de el centro de la segunda circunferencia." << endl;
	cout << "x1: ";
	cin >> x1;
	cout << "y1: ";
	cin >> y1;
	cout << "Introduce su radio en metros: ";
	cin >> radio1;
	cout << endl;

	//CALCULOS PREVIOS
	distancia_puntos = sqrt(pow(((x1) - (x)), 2) + pow(((y1) - (y)), 2));
	modulo = radio;
	modulo1 = radio1;
	if (radio < radio1){
	radio_magico = (radio1 - radio);
	}
	else {
	radio_magico = (radio - radio1);
	}

	//CONDICIONALES Y RESPUESTAS
	//filtro de radios negativos
	if  ((radio <= 0) || (radio1 <= 0)){
		if (radio <= 0){	
		cout << "El primer radio introducido es imposible." << endl;	
		}
		if (radio1 <= 0){	
		cout << "El segundo radio introducido es imposible." << endl;
		}
	}
	else {
		//puntos iguales
		if ((x == x1) && (y == y1)) {
			if (radio == radio1) {
				cout << "Las circunferencias son identicas. Tienen infinitos puntos de corte." << endl;
			}
			else if (radio < radio1) {
				cout << "La primera circunferencia esta contenida en la segunda circunferencia. No tienen ningun punto de corte." << endl;		
			}
			else if (radio > radio1) {
				cout << "La segunda circunferencia esta contenida en la primera circunferencia. No tienen ningun punto de corte." << endl;		
			}
		}
		//puntos dispares
		if ((x != x1) || (y != y1)) {
			if ((modulo + modulo1) == distancia_puntos) {
				cout << "Las circunferencias son tangentes en uno de sus puntos, ninguna esta dentro de la otra." << endl;
			}
			if ((modulo + modulo1) < distancia_puntos) {
				cout << "Las circunferencias no se cortan, ninguna esta dentro de la otra." << endl;
			}
			if ((modulo + modulo1) > distancia_puntos) {
				if ( ((distancia_puntos + radio1) == modulo) || ((modulo  > y1) && ((distancia_puntos + radio1) == modulo)) ) {
					cout << "La segunda circunferencia esta contenida en la primera circunferencia. Son tangentes en un punto." << endl;
				}
				else if ( ((distancia_puntos + radio) == modulo1) || ((modulo1  > y) && ((distancia_puntos + radio) == modulo1)) ) {
					cout << "La primera circunferencia esta contenida en la segunda circunferencia. Son tangentes en un punto." << endl;
				}
				else if (distancia_puntos < (radio_magico)) {
					cout << "Una circunferencia esta contenida en la otra circunferencia. No se cortan." << endl;
				}	
				else {
					cout << "Se cortan en dos puntos." << endl;
				}
			}		
		}
	}
}
