/* Ejemplo de la media de 3 numeros */

#include <iostream>

using namespace std;

/*
 @brief Calcula la media de \a a, \a b y \a c
 @param a Primer valor para hacer la media
 @param b Segundo valor para hacer la media
 @param c Tercer valor para hacer la media
 @return El resultado de la media
 @pre Salidas y entradas predeterminadas activas
 @post ninguna
 @autor Pablo
 @version 1.0 FP DAM
 */
double media (int a, int b, int c){
	return (a + b + c)/3.0;
}

int main () {

	int valor_a = 0, valor_b = 0, valor_c = 0;

	cout << "Introduzca 3 numeros (en una linea separados por espacios) para hacer la media entre estos: ";
	cin >> valor_a >> valor_b >> valor_c;
	cout << "La media es de : " << media(valor_a, valor_b, valor_c) << endl;

}
