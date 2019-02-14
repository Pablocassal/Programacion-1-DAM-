/* TIRO A PUERTA (MINIJUEGO) */

#include <iostream>
#include <cmath>
#include <stdlib.h>

using namespace std;

int main (){

	// DECLARACIÓN DE VARIABLES
	double x = 0.0, y = 0.0;
	double x_porteria = 0.0, y_porteria = 0.0;
	double x_porteria0 = 0.0, y_porteria0 = 0.0;
	double altura = 0.0, ancho = 0.0;
	char opcion;	
	double x_max = 0.0, y_max = 0.0, x_min = 0.0, y_min = 0.0;

	//PORTERÍA MEDIDAS
	cout << "Escoja las medidas minimas de la portería (x,y)m y las maximas (x0,y0)m ." << endl;
	cout << "* Cada palo tiene un grosor de 0.2m" << endl;	
	cout <<	"Introduce el valor de x deseado: "; 
	cin >> x_porteria0;
	cout << "Introduce el valor de y deseado: "; 
	cin >> y_porteria0;
	cout << "Introduce el valor de x0 deseado: ";
	cin >> x_porteria;
	cout << "Introduce el valor de y0 deseado: "; 
	cin >> y_porteria;

	//CALCULOS PREVIOS
	altura = abs((y_porteria) - (y_porteria0));	
	ancho = abs((x_porteria) - (x_porteria0));

	//IF (PORTERÍA 	POSIBLE)
	if ((x_porteria <= x_porteria0) || (y_porteria <= y_porteria0)) {		
		//PUNTO
		if ((y_porteria == y_porteria0) && (x_porteria == x_porteria0)) {
			cout << "La porteria diseñada es imposible.(Es un punto) " << endl;			
			cout << "¿Quieres continuar? [S]i / [N]o :";
			cin >> opcion;
			cout << endl;
			
			switch (opcion) {
			case 'S':
			case 's':

				//GRÁFICA REPRESENTATIVA (punto)
				cout << endl;               	
				cout << "    	   	 			Altura:	" << altura << "m." << endl;
				cout << "    	    y = " << y_porteria0 << endl;
				cout << "    	   ▲				Ancho: " << ancho << "m." << endl;
				cout << "    	   |				" << endl;
				cout << "    	   |	     ·			Grosor del palo: ?m" << endl;
				cout << "    	   |				" << endl;
				cout << "    	   ▼				Red a la vista: ?" << endl;
				cout << "        y = " << y_porteria << endl;
				cout << " 	   	  ◄------►	" << endl;
				cout << "	        x = " << x_porteria << "      x = " << x_porteria0 << endl;	
				
				//DISPARO A PUERTA
				cout << "Introduzca la coordenada donde se desea disparar el balón:" << endl;
				cout << "Introduce el valor de x deseado: ";
				cin >> x;
				cout << "Introduce el valor de y deseado: "; 
				cin >> y;

				if ( ((x == x_porteria) && (x == x_porteria0)) && ((y == y_porteria) && (y == y_porteria0)) ) {
					cout << "¡DA EN TODO EL PUNTO!"	<< endl;			
				}
				else {
					cout << "¡FALLA EL TIRO!" << endl;
				}
				break;
			case 'N':
			case 'n':
			cout << " Pruebe a dar mas distancia entre el larguero, el suelo y los palos." << endl << "*Pista: (x > x0) y (y > y0)" << endl;
				break;	
			}	
		}
		//RECTA VERTICAL
		if ((y_porteria != y_porteria0) && (x_porteria == x_porteria0)) {
			cout << "La porteria diseñada es imposible.(Es una recta vertical) " << endl;
			cout << "¿Quieres continuar? [S]i / [N]o :";
			cin >> opcion;
			cout << endl;

			switch (opcion) {
			case 'S':
			case 's':
				if (y_porteria > y_porteria0) {
					y_max = y_porteria;
					y_min = y_porteria0;
				}
				if (y_porteria < y_porteria0) {
					y_min = y_porteria;
					y_max = y_porteria0;
				}
				//GRÁFICA REPRESENTATIVA (porteria al reves)
				cout << "        y = " << y_max << endl;
				cout << " 	   ▲	   		" << endl;
				cout << "           |   		" << endl;
				cout << "    	   |			Altura:	" << altura << "m." << endl;
				cout << "    	   |	   | 		" << endl;
				cout << "    	   |	   |		Ancho: " << ancho << "m." << endl;
				cout << "    	   |	   |		" << endl;
				cout << "    	   |	   |		Grosor del palo: 0.2m" << endl;
				cout << "    	   |	   |		" << endl;
				cout << "    	   |	   |		Red a la vista: #" << endl;
				cout << "           |			" << endl;
				cout << " 	   ▼			" << endl;
				cout << "	y = " << y_min << endl;	
				cout << "    	        ◄----►		" << endl;
				cout << "    	     x = " << x_porteria << "	 x = " << x_porteria0 << endl;
				cout << endl;

				//DISPARO A PUERTA
				cout << "Introduzca la coordenada donde se desea disparar el balón:" << endl;
				cout << "Introduce el valor de x deseado: ";
				cin >> x;
				cout << "Introduce el valor de y deseado: "; 
				cin >> y;
				
				if ( ((x == x_porteria) && (x == x_porteria0)) && ((y >= y_porteria) && (y <= y_porteria0)) ) {
					cout << "¡GOLPEA EL PALO!" << endl;
				}
				else {
					cout << "¡FALLA EL TIRO!" << endl;
				}
				break;
			case 'N':
			case 'n':
				cout << " Pruebe a dar mas distancia entre el larguero y el suelo." << endl << "*Pista: (x > x0)" << endl;
				break;	
			}
		}
		//RECTA HORIZONTAL
		if ((y_porteria == y_porteria0) && (x_porteria != x_porteria0)) {
			cout << "La porteria diseñada es imposible.(Es una recta horizontal) " << endl;
			cout << "¿Quieres continuar? [S]i / [N]o :";
			cin >> opcion;
			cout << endl;

			switch (opcion) {
			case 'S':
			case 's':
				if (x_porteria > x_porteria0) {
					x_max = x_porteria;
					x_min = x_porteria0;
				}
				if (x_porteria < x_porteria0) {
					x_min = x_porteria;
					x_max = x_porteria0;
				}
				//GRÁFICA REPRESENTATIVA (porteria al reves)
				cout << "    	   				Altura:	" << altura << "m." << endl;
				cout << "    	   	    				" << endl;
				cout << "    	   	   			Ancho: " << ancho << "m." << endl;
				cout << "    	 y = " << y_porteria0 << endl;
				cout << "    	   ▲	   			Grosor del palo: 0.2m" << endl;
				cout << "    	   |	  _____________  		" << endl;
				cout << "    	   |	   			Red a la vista: #" << endl;
				cout << "           ▼	 				" << endl;
				cout << " 	y = " << y_porteria << endl;	
				cout << "    	        ◄---------------►		" << endl;
				cout << "    	     x = " << x_min << "       	 x = " << x_max << endl;
				cout << endl;

				//DISPARO A PUERTA
				cout << "Introduzca la coordenada donde se desea disparar el balón:" << endl;
				cout << "Introduce el valor de x deseado: ";
				cin >> x;
				cout << "Introduce el valor de y deseado: "; 
				cin >> y;

				if ( ((x >= x_porteria) && (x <= x_porteria0)) && ((y == y_porteria) && (y == y_porteria0)) ) {
					cout << "¡GOLPEA EL PALO!" << endl;
				}
				else {
					cout << "¡FALLA EL TIRO!" << endl;
				}
				break;
			case 'N':
			case 'n':
			cout << " Pruebe a dar mas distancia entre los palos." << endl << "*Pista: (y > y0)" << endl;
				break;	
			}	
		}
		//PORTERIA AL REVES
		if ( ((x_porteria < x_porteria0) || (y_porteria < y_porteria0)) && ((y_porteria != y_porteria0) && (x_porteria == x_porteria0)) ) {
				
			cout << endl << endl << "AVISO: HAS CREADO LA PORTERIA DE FORMA EN LA QUE ESTAS DETRAS DE ELLA" << endl;	
			cout << "¿Quieres continuar? [S]i / [N]o :";
			cin >> opcion;
			cout << endl;

			switch (opcion) {
			case 'S':
			case 's':
				if (y_porteria > y_porteria0) {
					y_max = y_porteria;
					y_min = y_porteria0;
				}
				if (y_porteria < y_porteria0) {
					y_min = y_porteria;
					y_max = y_porteria0;
				}
				if (x_porteria > x_porteria0) {
					x_max = x_porteria;
					x_min = x_porteria0;
				}
				if (x_porteria < x_porteria0) {
					x_min = x_porteria;
					x_max = x_porteria0;
				}
				//GRÁFICA REPRESENTATIVA (porteria al reves)
				cout << "        y = " << y_max << endl;
				cout << " 	   ▲	    ______________________			" << endl;
				cout << "           |      /# # # # # # # # # # # /|			" << endl;
				cout << "    	   |	 /______________________/#|	Altura:	" << altura << "m." << endl;
				cout << "    	   |	| # # # # # # # # # # # | |			" << endl;
				cout << "    	   |	|# # # # # # # # # # # #|#|	Ancho: " << ancho << "m." << endl;
				cout << "    	   |	| # # # # # # # # # # #	| |			" << endl;
				cout << "    	   |	|# # # # # # # # # # # #|#|	Grosor del palo: 0.2m" << endl;
				cout << "    	   |	| # # # # # # # # # # #	| |			" << endl;
				cout << "    	   |	|# # # # # # # # # # # #|#/	Red a la vista: #" << endl;
				cout << "           |	|_______________________|/			" << endl;
				cout << " 	   ▼							" << endl;
				cout << "	y = " << y_min << "				" << endl;	
				cout << "    	        ◄-------------------------►			" << endl;
				cout << "    	     x = " << x_min << "		       x = " << x_max << endl;
				cout << endl;

				//DISPARO A PUERTA
				cout << "Introduzca la coordenada donde se desea disparar el balón:" << endl;
				cout << "Introduce el valor de x deseado: ";
				cin >> x;
				cout << "Introduce el valor de y deseado: "; 
				cin >> y;

				if ( (y > y_max) || (y < y_min) || ((x > x_max) && ((y >= y_min) && (y <= y_max))) || ((x < x_min) && ((y >= y_min) && (y <= y_max))) ) {
					if (y > y_max) {
						cout << "¡SE VA ALTA!" << endl;	
					}
					if (y < y_min) {
						cout << "¡GOLPEA EL SUELO CON LA BOTA!" << endl;
					}
					if ((x > x_max) && ((y >= y_min) && (y <= y_max))) {
						cout << "¡SE VA POR LA DERECHA!" << endl; 
					}
					if ((x < x_min) && ((y >= y_min) && (y <= y_max))) {
						cout << "¡SE VA POR LA IZQUIERDA!" << endl;
					}
				}
				else {
					cout << "¡DA EN LA RED!" << endl;
				}
				break;
			case 'N':
			case 'n':
				cout << "Reinicialo para volver a introducir valores" << endl << "*Pista: invierte la posición de los valores que has introducido" << endl;
				break;
			}
		}
	}
	else {
	
		//GRÁFICA REPRESENTATIVA
		cout << endl;
		cout << "        y = " << y_porteria << endl;
		cout << " 	   ▲	    ______________________			" << endl;
		cout << "           |      /# # # # # # # # # # # /|			" << endl;
		cout << "    	   |	 /_ ____________________/#|	Altura:	" << altura << "m." << endl;
		cout << "    	   |	|  |			| |			" << endl;
		cout << "    	   |	|  |			|#|	Ancho: " << ancho << "m." << endl;
		cout << "    	   |	|  |			| |			" << endl;
		cout << "    	   |	|  |			|#|	Grosor del palo: 0.2m" << endl;
		cout << "    	   |	|  |____________________| |			" << endl;
		cout << "    	   |	| /			|#/	Red a la vista: #" << endl;
		cout << "           |	|/			|/			" << endl;
		cout << " 	   ▼							" << endl;
		cout << "	y = " << y_porteria0 << "				" << endl;	
		cout << "    	        ◄-------------------------►			" << endl;
		cout << "    	     x = " << x_porteria0 << "		       x = " << x_porteria << endl;
		cout << endl;
	
		//DISPARO A PUERTA
		cout << "Introduzca la coordenada donde se desea disparar el balón:" << endl;
		cout << "Introduce el valor de x deseado: ";
		cin >> x;
		cout << "Introduce el valor de y deseado: "; 
		cin >> y;
	
		//POSIBILIDADES
		//larguero
		if ( ((y >= (y_porteria - 0.2)) && (y <= y_porteria)) && ((x > (x_porteria0 + 0.2)) && (x < (x_porteria - 0.2))) ){
			cout << "¡LARRRRR-GUERO!" << endl;
		}
		//palos (con distinción)
		if ((y >= y_porteria0) && (y < (y_porteria - 0.2))) {
			if((x >= x_porteria0) && (x <= (x_porteria0 + 0.2))) {
				cout << "¡GOLPEA EN EL PALO IZQUIERDO!" << endl;
			}
			else if((x >= (x_porteria - 0.2)) && (x <= x_porteria)) {
				cout << "¡GOLPEA EN EL PALO DERECHO!" << endl;
			}
		}
		//esquina (con distinción)
		if ((y >= (y_porteria - 0.2)) && (y <= y_porteria)) {
			if ((x >= x_porteria0) && (x <= (x_porteria0 + 0.2))) {
				cout << "¡GOLPEA EN LA ESCUADRA IZQUIERDA!" << endl;
			}
			else if ((x >= (x_porteria - 0.2)) && (x <= x_porteria)) {
				cout << "¡GOLPEA EN LA ESCUADRA DERECHA!" << endl;
			}
		}
		//Gol alto (con distinción)
		if  ((y < (y_porteria - 0.2)) && (y >= (y_porteria - 0.7))) {
			if ((x > (x_porteria0 + 0.2)) && (x < (x_porteria0 + 1.2))) {
				cout << "GOOOOOL ¡ROZANDO LA ESCUADRA IZQUIERDA!" << endl;
			}
			else if ((x > (x_porteria - 1.2)) && (x < (x_porteria - 0.2))) {
				cout << "GOOOOOL ¡ROZANDO LA ESCUADRA DERECHA!" << endl;
			}
			else if ((x <= (x_porteria - 1.2)) && (x >= (x_porteria0 + 1.2))) {
				cout << "GOOOOOL ¡ROZANDO EL LARGUERO!" << endl;
			}
		}
		//gol bajo (total)
 		if ( ((y >= y_porteria0) && (y < (y_porteria - 0.7))) && ((x > (x_porteria0 + 0.2)) && (x < (x_porteria - 0.2))) ) {
			cout << "GOOOOOL" << endl;
		}
		//fuera (con distinción)
		if (y > y_porteria) {
			cout << "¡SE VA ALTA!" << endl;	
		}
		if (y < y_porteria0) {
			cout << "¡GOLPEA EL SUELO CON LA BOTA!" << endl;
		}
		if ((x > x_porteria) && ((y >= y_porteria0) && (y <= y_porteria))) {
			cout << "¡SE VA POR LA DERECHA!" << endl; 
		}
		if ((x < x_porteria0) && ((y >= y_porteria0) && (y <= y_porteria))) {
			cout << "¡SE VA POR LA IZQUIERDA!" << endl;
		}
	}
}
