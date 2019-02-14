/* Ejercicio SanFermines, pero con todas las velocidades en una sola linea */

#include <iostream>

using namespace std;

int main () {
	
	int numero = 0; //Number of bulls
	int velocidad [numero]; //The speed of each bull
	int velocidad_max = 0; //The max. speed

	cout << "¿Cuantos toros hay en esta carrera?  ";
	
	while (!(cin >> numero) || (numero <= 0)){
	cout << "El valor introducido no es un digito positivo." << endl;
	cout << "¿Cuantos toros hay en esta carrera?  ";
	}	

	cout << "Indique su velocidad o velocidades en una linea separadas por un espacio: ";
	
	for (int i = 1; i <= numero; i++){
			cin >> velocidad[i];
			if (velocidad[i] <= 0){
				cout << "\nLa velocidad " << velocidad[i] << " no es valida.\nEsta tienen que ser positivas, vuelve a introducir la velocidad: ";
			cin >> velocidad [i];
			}
		if (i == 1){
			velocidad_max = velocidad[1];
		}
		if(velocidad_max < velocidad[i]){
			velocidad_max = velocidad[i];
		}
	}
	cout << "El corredor tendra que ir a una velocidad de: " << velocidad_max << endl;

}
