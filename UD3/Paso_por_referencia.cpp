/* Ejercicio para probar el paso por referencia */

#include <iostream>

using namespace std;

int Pila = 0; // Prueba con variables globales (Que reconoce y data el estado de la "Pila")

/*
 @brief intercambia de valor \a a y \a b
 @param a Valor = 1
 @param b Valor = 2
 @pre Salidas y entradas predeterminadas activas
 @post ninguna
 @autor Pablo
 @version 1.0 FP DAM
 */
void intercambio (int &a, int &b){
	Pila++;
	cout << "(Funciones activas): " << Pila << endl;

	int c = 0; //variable auxiliar

	cout << "Valores iniciales (DENTRO): " << "\n a = " << a << "\n b = " << b << endl << endl; 
	c = a;
	a = b;
	b = c;
	cout << "Valores finales (DENTRO): " << "\n a = " << a << "\n b = " << b << endl << endl; 

	Pila--;
}

int main() {
	Pila++;
	cout << "(Funciones activas): " << Pila << endl;

	int x = 1;
	int y = 2;

	cout << "Valores iniciales: " << "\n x = " << x << "\n y = " << y << endl << endl; 
	intercambio(x,y);
	cout << "(Funciones activas): " << Pila << endl;
	cout << "Valores finales: " << "\n x = " << x << "\n y = " << y << endl << endl; 

	Pila--;
}
