/* Calcula los multiplos entre un rango de un numero n */

#include <iostream>

using namespace std;

int main() {

	//DECLARACIÓN DE VARIABLES
	int x = 0;
	int y = 1;
	int numero = 0;
	double operacion = 0.0;
	

	//INTRODUCCIÓN y filtro
	do{
		cout << "Introduce un rango de valores [x,y] : ";
		cin >> x >> y;
		if ((x >= y)){
			cout << "Los valores introducidos son imposibles." << endl;	
		}
	} while(x >= y);
	cout << "Introduce un numero entero: ";
	cin >> numero;
	cout << "Multiplos del numero dado con respecto al rango de valores:" << endl;
	//BUCLE
	for (x = x; x <= y; x = x + 1){
		operacion = x % numero;
		if (operacion == 0){
			cout << "--> " << x << endl;	
		}
	}
 
}
