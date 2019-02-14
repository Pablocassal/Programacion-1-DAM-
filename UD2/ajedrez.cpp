/* Calculo del movimiento de piezas de ajedrez */

#include <iostream>
#include <math.h>

using namespace std;

int main() {
	
	//DECLARACIÓN DE VARIABLES
	int pos_x = 0, pos_y = 0;
	char pieza = 'a';
	int posm_x = 0, posm_y = 0;
	double distancia1 = 0.0, distancia2 = 0.0;

	//DIBUJO ASCII
	cout << "Teniendo en cuenta el siguiente esquema:" << endl;

	cout << endl;
	cout << "	   _______________________________	" << endl;
	cout << "	  |   |###|   |###|   |###|   |###|	" << endl;
	cout << "	8 |___|###|___|###|___|###|___|###|	" << endl;
	cout << "	  |###|   |###|   |###|   |###|   |	" << endl;
	cout << "	7 |###|___|###|___|###|___|###|___|	" << endl;
	cout << "	  |   |###|   |###|   |###|   |###|	" << endl;
	cout << "	6 |___|###|___|###|___|###|___|###|	" << endl;
	cout << "	  |###|   |###|   |###|   |###|   |	" << endl;
	cout << "	5 |###|___|###|___|###|___|###|___|	" << endl;
	cout << "	  |   |###|   |###|   |###|   |###|	" << endl;
	cout << "	4 |___|###|___|###|___|###|___|###|	" << endl;
	cout << "	  |###|   |###|   |###|   |###|   |	" << endl;
	cout << "	3 |###|___|###|___|###|___|###|___|	" << endl;
	cout << "	  |   |###|   |###|   |###|   |###|	" << endl;
	cout << "	2 |___|###|___|###|___|###|___|###|	" << endl;	    
	cout << "	  |###|   |###|   |###|   |###|   |	" << endl;
	cout << "	1 |###|___|###|___|###|___|###|___|	" << endl;
	cout << "	    1   2   3   4   5   6   7   8	" << endl;

	
	cout << endl << "Escoja la posición en la que se encontrara la pieza." << endl;

	//INTRODUCCIÓN + filtro de posición
	do {
		cout << "Introduce la posición x: ";
		cin >> pos_x;
		cout << "Introduce la posición y: ";
		cin >> pos_y;
		if ((pos_x < 1)|| (pos_x > 8)) {
			cout << "La x introducida no es un valor posible." << endl;
		}
		if ((pos_y < 1)|| (pos_y > 8)) {
			cout << "La y introducida no es un valor posible." << endl;
		}
	}while ( ((pos_x < 1) || (pos_x > 8)) || ((pos_y < 1) || (pos_y > 8)) );

	//INTRODUCCIÓN 2 + filtro de pieza
	do {
		cout << "Escoja la pieza a mover: [T]orre, [R]eina o [C]aballo" << endl;
		cin >> pieza;
		cout << "Escoja la posicion de movimiento." << endl;
		do {
			cout << "Introduce la posición x: ";
			cin >> posm_x;
			cout << "Introduce la posición y: ";
			cin >> posm_y;
			if ((posm_x < 1)|| (posm_x > 8)) {
				cout << "La x introducida no es un valor posible." << endl;
			}
			if ((posm_y < 1)|| (posm_y > 8)) {
				cout << "La y introducida no es un valor posible." << endl;
			}
		}while ( ((posm_x < 1) || (posm_x > 8)) || ((posm_y < 1) || (posm_y > 8)) );
		//SI o NO (en cada caso)
		switch (pieza){
			case 'T':
			case 't':
				cout << "Ha seleccionado la torre." << endl << endl;
				cout << "	|'-'-'|" << endl;
				cout << "	|_____|" << endl;
				cout << "	 |===| " << endl;
				cout << "	 |   |" << endl;
				cout << "	 |   |" << endl;
				cout << "	 )___(" << endl;
				cout << "	(=====)" << endl;
				cout << "	}====={" << endl;
				cout << "       (_______)" << endl;
				cout << endl << "Y su movimiento es: ";
				
				if((pos_x == posm_x) && (pos_y == posm_y)){
					cout << "Posible. (no realiza ningun movimiento)" << endl;
				}else if((pos_x == posm_x) && (pos_y != posm_y)){
					cout << "Posible. (realiza un movimiento en columna vertical)" << endl;
				}else if((pos_x != posm_x) && (pos_y == posm_y)){
					cout << "Posible. (realiza un movimiento en columna horizontal)" << endl;
				}else {
					cout << "Imposible." << endl;
				}
			break;
			case 'R':
			case 'r':
				cout << "Ha seleccionado la reina." << endl << endl;
				cout << "	   ()  " << endl;
				cout << "	.-:--:-." << endl;
				cout << "	 \\ __ / " << endl;
				cout << "	 {====}" << endl;
				cout << "	  )__(" << endl;
				cout << "	 /____\\ " << endl;
				cout << "	  |  |" << endl;
				cout << "	  |  |" << endl;
				cout << "          |  |" << endl;
				cout << "          |  |" << endl;
				cout << "         /____\\" << endl;
				cout << "        (======)" << endl;
				cout << "        }======{" << endl;
				cout << "       (________)" << endl;
				cout << endl << "Y su movimiento es: ";
				
				//Calculos dimensionales
				distancia1 = sqrt(pow((posm_x - pos_x),2));
				distancia2 = sqrt(pow((posm_y - pos_y),2));

				if((pos_x == posm_x) && (pos_y == posm_y)){
					cout << "Posible. (no realiza ningun movimiento)" << endl;
				}else if((pos_x == posm_x) && (pos_y != posm_y)){
					cout << "Posible. (realiza un movimiento en columna vertical)" << endl;
				}else if((pos_x != posm_x) && (pos_y == posm_y)){
					cout << "Posible. (realiza un movimiento en columna horizontal)" << endl;
				}else if (distancia1 == distancia2){
					cout << "Posible. (realiza un movimiento en diagonal)" << endl;
				}else {
					cout << "Imposible." << endl;
				}
			break;
			case 'C':
			case 'c':
				cout << "Ha seleccionado el caballo." << endl << endl;
				cout << "	  (\\=,  " << endl;
				cout << "	 //  .\\" << endl;
				cout << "	(( \\_  \\" << endl;
				cout << "	 ))  `\\_) " << endl;
				cout << "	(/     \\" << endl;
				cout << "	 | _.-'|" << endl;
				cout << "	  )___(" << endl;
				cout << "	 (=====)" << endl;
				cout << "	 }====={" << endl;
				cout << "        (_______)" << endl;
				cout << endl << "Y su movimiento es: ";
				
				//Calculos dimensionales
				distancia1 = sqrt(pow((posm_x - pos_x),2));
				distancia2 = sqrt(pow((posm_y - pos_y),2));

				if((pos_x == posm_x) && (pos_y == posm_y)){
					cout << "Posible. (no realiza ningun movimiento)" << endl;
				}else if ( ((distancia1 == 1) && (distancia2 == 2)) || ((distancia1 == 2) && (distancia2 == 1)) ) {
					cout << "Posible. (realiza un movimiento en L)" << endl;
				}else {
					cout << "Imposible." << endl;
				}
			break;
		}
		if ( ((pieza != 't') && (pieza != 'T')) && ((pieza != 'r') && (pieza != 'R')) && ((pieza != 'c') && (pieza != 'C')) ) {
			cout << "La letra introducida no corresponde con ninguna figura." << endl;
		}
	}while ( ((pieza != 't') && (pieza != 'T')) && ((pieza != 'r') && (pieza != 'R')) && ((pieza != 'c') && (pieza != 'C')) );
}
